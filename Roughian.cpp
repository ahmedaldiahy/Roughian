#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<char> > g;
    int ad = 0;
    int t;
    cin>>t;
    for(int index = 0; index < t; index++){

        int n;
        cin>>n;
        vector<vector<char> > v(n);
        int mx = 0;
        for(int i = 0; i < n; i++){
            int m;
            cin>>m;
            if(m > mx){
                mx = m;
            }
            for(int j = 0; j < m; j++){

                char x;
                cin>>x;

                v[i].push_back(x);

            }
        }
           for(int j = 1; j < mx; j++){

            for(int i = 0; i < v.size(); i++){

                if(v[i].size() == j){

                    for(int k = 0; k < v.size(); k++){
                            int ctn = 0;
                            for(int in = 0; in < v[i].size(); in++){
                                for(int jn = 0; jn < v[k].size(); jn++){

                                    if(v[k][jn] == v[i][in]){
                                        ctn++;
                                        break;
                                    }
                                }
                            }
                            if(ctn == v[i].size() && v[i].size() != v[k].size()){

                                v[k].push_back('*');
                            }
                    }

                }
            }
        }
    cout<<"-------------"<<"\n";
    cout<<"the result of row "<<index+1<<" are :"<<"\n";
    cout<<"\n";
    g.resize(v.size() + g.size());
    for(int i = 0; i < v.size(); i++){
            if(v[i][v[i].size()-1] != '*'){
                for(char c : v[i]){
                    g[i + ad].push_back(c);
                    cout<<c<<" ";
                }
                cout<<"\n";
            }

        }
        cout<<"-------------"<<"\n";
        ad += v.size();
    }

vector<vector<char> > res(100);
int j = 0;
for(int i = 0; i < g.size(); i++){
    if(g[i].size() > 0){
        for(char c : g[i]){
            res[j].push_back(c);
        }
        j++;
    }
}

for(int i = 0; i < res.size(); i++){
        if(res[i].size() == 0){
            continue;
        }
        for(int j = 0; j < res.size(); j++){
            if(i == j || res[j].size() == 0){
                continue;
            }
            int ctn = 0;
            for(char c1 : res[i]){
                for(char c2 : res[j]){
                    if(c2 == c1){
                        ctn++;
                        break;
                    }
                }
            }
            if(ctn == res[i].size()){
                res[j].push_back('*');
            }
        }

}
for(int i = 0; i < res.size(); i++){
    if(res[i].size() != 0 && res[i][res[i].size()-1] != '*'){
        for(char c : res[i]){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

    return 0;
}


/*
9

9
4 a d e f
3 c f g
3 e f g
4 a d e g
3 b e g
2 b g
3 d e f
1 g
2 e g

8
5 a c d e g
3 a d g
2 f g
5 a b d f g
6 a b d e f g
1 a
5 a d e f g
4 a d f g

7
5 a c d e f
4 b c e f
3 b c f
2 c e
4 c d e g
2 c f
3 c e f

6
3 a d f
2 b f
3 b e f
2 d g
2 e f
1 f

5
3 a b d
4 a b d e
3 a f g
3 a d e
2 a d

4
1 e
4 b d f g
2 b e
1 b

3
5 b d e f g
1 b
2 b e

2
4 d e f g
3 d f g

1
1 e
*/

