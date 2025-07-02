#include <iostream>
using namespace std;

//definisi struktur node 
struct TreeNode {
	int data;
	TreeNode* left;
	TreeNode* right;
	
	//Constructor untuk membuat node baru
	TreeNode(int value) : data(value), left(NULL), right(NULL) {} //mengganti NULL
};

int main ()
{
	int arr[] = {1,2,3,4,5};
	//membuat simpul - simpul pohon 
	TreeNode* root = new TreeNode(arr[0]);
	root->left = new TreeNode(arr[1]);
	root->right = new TreeNode(arr[2]);
	root->left->left = new TreeNode(arr[3]);
	root->left->right = new TreeNode(arr[4]);
	
	//menampilkan nilai simpul - simpul pohon
	cout << "Nilai simpul - simpul pohon : " <<endl;
	cout << "Akar : " << root->data <<endl;
	cout << "Anak kiri dari akar : " << root->left->data << endl;
	cout << "Anak kanan dari akar : " << root->right->data << endl;
	cout << "Anak kiri dari anak kiri dari akar : " << root->left->left->data << endl;
	cout << "Anak kanan dari anak kiri dari akar : " << root->left->right->data << endl;
	
	//Membersihkan memory
	delete root->left->left;
	delete root->left->right;
	delete root->left;
	delete root->right;
	delete root;
	
}
