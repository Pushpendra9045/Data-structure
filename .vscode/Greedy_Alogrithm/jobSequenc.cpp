#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

struct Job
{
    char id;
    int dead;
    int profit;
};

bool comparsion(Job a, Job b)
{
    return a.profit > b.profit;
}

vector<Job> ans;

int main()
{
    int n;
    //take no. of jobs from the user
    cout<<"Enter total no of jobs: "<<endl;
    cin>>n;

    // Ask for job id to the user
    char *job_id = new char[n];
    cout<<"Enter job id:"<<endl;
    for(int i =0; i< n; i++)
    {
        cin>>job_id[i];
    }

    // Ask for respective deadline to the user
    int *deadline = new int[n];
    cout<<"Enter Job deadline:"<<endl;
    for(int i =0; i<n; i++)
    {
        cin>>deadline[i];
    }

    //Ask for respective profit associated with each job id
    int *Job_profit = new int[n];
    cout<<"Enter job profit:"<<endl;
    for(int i =0; i<n;i++)
    {
        cin>>Job_profit[i];
    }

//Creating an array of Jobs
    Job arr[n];
    for(int i =0; i<n; i++)
    {
        arr[i] = {job_id[i],deadline[i],Job_profit[i]};
    }

//Sorting the Job array
    sort(arr, arr + n, comparsion);


// Calculating the sequence with maxProfit
    int counter = 0;
    for(int i =0; i < n; i++)
    {
        if(counter < arr[i].dead)
        {
            ans.push_back(arr[i]);
            counter++;
        }
    }
 
 //Calculating the maxProfit 
    int maxProfit = 0;
    for(int i =0; i<ans.size();i++)
    {
        maxProfit += ans[i].profit;
    }
    
    std::cout << "Maximum profit is : "<<maxProfit << " and respective sequence is :";
    
//Printing the sequence with maxProfit
    for(int i =0; i<ans.size();i++)
    {
        cout<<ans[i].id<<" ";
    }

   
return 0;
}

