from django.urls import path
from . import views

urlpatterns = [
    path('comments/', views.get_comments, name='get_comments'),
    path('comments/add/', views.create_comment, name='create_comment'),
    path('comments/delete/<int:pk>/', views.delete_comment_view, name='delete_comment'),
]
