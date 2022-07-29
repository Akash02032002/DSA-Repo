class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q1 ; 
    queue<int>q2 ;
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front()); //copy one by one element in q2
            q1.pop();  
        }
        swap(q1,q2) ;
    }
    
    int pop() {
        int x=q1.front() ;
        q1.pop();
        return x ;
    }
    
    int top() {
       return q1.front(); 
    }
    
    bool empty() {
   return q1.size() == 0; 
    }
};

//BY USING ONE QUEUE
    queue<int>q1 ; 
    void push(int x) {
q1.push(x); 
for(int i=0; i<q1.size()-1;i++){ //rotate element till size less than 1 ;
q1.push(q1.front());
q1.pop();
}}