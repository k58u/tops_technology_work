from django.shortcuts import render, redirect,get_object_or_404
from .models import auth_admin, Product_name, product_details,ProductMst,ProductSubCat,product_manager
from django.http import Http404


def is_logged_in(func):
    def wrapper(request, *args,**kwargs):
        if "admin_id" in request.session:
            return func(request, *args,**kwargs)
        else:
            return redirect('admin_login')
    return wrapper

def admin_login(request):
    if request.method == "POST":
        admin_id_ = request.POST["username"]
        password_ = request.POST["password"]

        try:
            check_admin = auth_admin.objects.get(admin_id=admin_id_)
        except:
            print("user wrong")
            return redirect('admin_login')
        else:
            if check_admin:
                if check_admin.password == password_:
                    request.session["admin_id"] = admin_id_
                    return redirect('add_product_name')
                else:
                    print("password wrong")
                    return redirect('admin_login')
    return render(request, "login.html")        

def manager_login(request):
    if request.method == "POST":
        manager_id_ = request.POST["username"]
        password_ = request.POST["password"]

        try:
            check_manager = product_manager.objects.get(manager_id=manager_id_)
        except:
            print("user wrong")
            return redirect('manager_login')
        else:
            if check_manager:
                if check_manager.password == password_:
                    request.session["admin_id"] = manager_id_
                    return redirect('product_search')
                else:
                    print("password wrong")
                    return redirect('manager_login')
    return render(request, "manager_login.html")


@is_logged_in
def product_search(request):
    # Default: retrieve all products, ordered by 'id'
    products = product_details.objects.all().order_by('id')

    if request.method == "POST":
        query = request.POST.get('q', '')
        if query:
            # Filter products by name and order by 'id'
            products = product_details.objects.filter(product_name__p_name__icontains=query).order_by('id')
        else:
            products = None  # If no search query, set products to None (or handle it differently)

    # Pass products to context to be rendered in the template
    context = {'products': products}
    return render(request, 'product_search.html', context)


def log_out(request):
    try:
        del request.session['admin_id']
    except KeyError:
        print("You were not logged in.")
    else:
        print("You have been successfully logged out.")
    return redirect("admin_login")
   

@is_logged_in
def add_product_name(request):
    products = Product_name.objects.all()

    if request.method == "POST":
        p_id= request.POST["product_id"]
        p_name= request.POST["product_name"]

        new_product = Product_name.objects.create(p_id=p_id, p_name=p_name)    
        return redirect("add_product_name")
    context = {"products":products}
    return render(request, "add_products.html",context)
@is_logged_in
def product_detail(request, p_id):
    product = Product_name.objects.get(p_id=p_id) 
    details = product_details.objects.all()
    if request.method == "POST":
        price = request.POST["price"]
        image = request.FILES['image']
        model = request.POST["model"]
        ram = request.POST["ram"]

        new_product = product_details( 
            product_name_id=product.p_id,  
            price=price, 
            image=image, 
            model=model, 
            ram=ram)
        new_product.save()

        return redirect("product_detail", p_id = product.p_id)

    context = {"products": product, "details":details}
    return render(request, "product_detail.html", context)


# @is_logged_in
def show_details_view(request):
    details = product_details.objects.all()

    context = {"details":details}
    return render(request, "show_detail.html", context)


@is_logged_in
def update_detail(request, id):
    # Fetch the product details using the provided ID or return a 404 if not found
    detail = get_object_or_404(product_details, id=id)

    if request.method == "POST":
        # Fetch updated fields from the form submission
        detail.price = request.POST.get("price")
        detail.model = request.POST.get("model")
        detail.ram = request.POST.get("ram")
        image = request.FILES.get("image")  # Check if an image is uploaded

        if image:
            detail.image = image  # Update the image if provided

        # Save the updated detail to the database
        detail.save()

        # Redirect to the view showing all product details
        return redirect("show_details_view")

    # Provide the existing detail to the template for rendering the update form
    context = {"detail": detail}
    return render(request, "update_detail.html", context)

@is_logged_in
def delete_detail(request,id):
    detail = product_details.objects.get(id=id)
    detail.delete()
    return redirect('show_details_view')


@is_logged_in
def delete_name(request, p_id):
    product = Product_name.objects.get(p_id=p_id) 
    product.delete()
    return redirect('add_product_name')


@is_logged_in
def update_name(request, p_id):
    product = Product_name.objects.get(p_id=p_id) 

    if request.method == "POST":
        # new_p_id= request.POST["product_id"]
        new_p_name= request.POST["product_name"]

        # product.p_id = new_p_id
        product.p_name = new_p_name    
        product.save()

        return redirect("add_product_name")

    context = {"product":product}
    return render(request,'update_name.html', context)

