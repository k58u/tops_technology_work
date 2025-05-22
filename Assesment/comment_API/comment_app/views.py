from django.shortcuts import render

# Create your views here.
from rest_framework.decorators import api_view
from rest_framework.response import Response
from rest_framework import status
from .Modules import get_all_comments, add_comment, delete_comment
from .serializers import CommentSerializer

@api_view(['GET'])
def get_comments(request):
    comments = get_all_comments()
    serializer = CommentSerializer(comments, many=True)
    return Response(serializer.data)

@api_view(['POST'])
def create_comment(request):
    serializer = CommentSerializer(data=request.data)
    if serializer.is_valid():
        add_comment(serializer.validated_data)
        return Response(serializer.data, status=status.HTTP_201_CREATED)
    return Response(serializer.errors, status=status.HTTP_400_BAD_REQUEST)

@api_view(['DELETE'])
def delete_comment_view(request, pk):
    success = delete_comment(pk)
    if success:
        return Response({'message': 'Comment deleted'}, status=status.HTTP_204_NO_CONTENT)
    return Response({'error': 'Comment not found'}, status=status.HTTP_404_NOT_FOUND)
