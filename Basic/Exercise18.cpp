// Triangle Area Using Heron's Formula

using namespace std;

int main() {
    cout << "Find the area of any triangle using Heron's Formula : " << endl;
    cout << "----------------------------------------------" << endl;
    float first, second, third, area, s;

    cout << "Input the length of 1st side of the traingle : ";
    cin >> first;
    cout << "Input the length of 2nd side of the traingle : ";
    cin >> second;
    cout << "Input the length of 3rd side of the traingle : ";
    cin >> third;

    s = (first + second + third)/2;
    area = sqrt(s * (s - first) * (s - second) * (s - third));

    cout << "The area of the triangle is : " << area << endl;

    return 0;
}
