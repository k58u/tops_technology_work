from .models import Comment

def get_all_comments():
    return Comment.objects.all()

def add_comment(data):
    return Comment.objects.create(**data)

def delete_comment(comment_id):
    try:
        comment = Comment.objects.get(id=comment_id)
        comment.delete()
        return True
    except Comment.DoesNotExist:
        return False
