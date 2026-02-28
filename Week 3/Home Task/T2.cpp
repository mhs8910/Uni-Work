#include<iostream>
using namespace std;
main()
{
	int total_frames, length, fps;
	
	cout<<"Enter the number length of video in minutes : ";
	cin>>length;

	cout<<"Enter the fps of the video : ";
	cin>>fps;

	total_frames=length*60*fps;

	cout<<"The total number frames in the video are : "<<total_frames; 
}