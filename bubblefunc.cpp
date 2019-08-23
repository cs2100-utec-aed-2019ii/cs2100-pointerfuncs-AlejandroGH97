/*------DECLARATIONS------*/
#include <iostream>
using namespace std;

/*_bubblesort_ con punteros a funcion*/
void * _bubblesort_(void * _array_, void (*_puntero_) (void *, int _i),int _tam_){
	int _k = 0;
	for (int i = 0; i < _tam_-1 ; i ++)
		for(int k = 0; k < _tam_-1-i; k++)
			_puntero_(_array_,k);
		return _array_;
}

/*------FUNCTIONS------*/

void  _b_int_ (void * _vector_, int _i){
	int *arr = static_cast<int*>(_vector_);
	int temp;
	if(arr[_i]>arr[_i+1]){
		temp = arr[_i+1];
		arr[_i+1]=arr[_i];
		arr[_i]=temp;
	}
}

void  _b_float_ (void * _vector_, int _i){
	float *arr = static_cast<float*>(_vector_);
	float temp;
	if(arr[_i]>arr[_i+1]){
		temp = arr[_i+1];
		arr[_i+1]=arr[_i];
		arr[_i]=temp;
	}
}


void  _b_double_ (void * _vector_, int _i){
	double *arr = static_cast<double*>(_vector_);
	double temp;
	if(arr[_i]>arr[_i+1]){
		temp = arr[_i+1];
		arr[_i+1]=arr[_i];
		arr[_i]=temp;
	}
}

void  _b_char_ (void * _vector_, int _i){
	char *arr = static_cast<char*>(_vector_);
	char temp;
	if(arr[_i]>arr[_i+1]){
		temp = arr[_i+1];
		arr[_i+1]=arr[_i];
		arr[_i]=temp;
	}
}

/*------PRINT ARRAY------*/


/*------MAIN------*/
int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9};
	float _array_2 [5] = {4,5,9,7,2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};
	
	_bubblesort_(_array_1,_b_int_,5);
	cout<<_array_1[0]<<" "<<_array_1[1]<<" "<<_array_1[2]<<" "<<_array_1[3]<<" "<<_array_1[4]<<endl;

	_bubblesort_(_array_2,_b_float_,5);
	cout<<_array_2[0]<<" "<<_array_2[1]<<" "<<_array_2[2]<<" "<<_array_2[3]<<" "<<_array_2[4]<<endl;

	_bubblesort_(_array_3,_b_double_,5);
	cout<<_array_3[0]<<" "<<_array_3[1]<<" "<<_array_3[2]<<" "<<_array_3[3]<<" "<<_array_3[4]<<endl;

	_bubblesort_(_array_4,_b_char_,6);
	cout<<_array_4[0]<<" "<<_array_4[1]<<" "<<_array_4[2]<<" "<<_array_4[3]<<" "<<_array_4[4]<<" "<<_array_4[5]<<endl;

	return 0;
}
