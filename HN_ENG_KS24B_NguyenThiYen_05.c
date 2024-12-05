#include<stdio.h>
int main(void){
    int flag=0;
    int choose=0, length=0;
    int arr[100];
    int num[100];
    
        printf("MENU \n");
        printf(" 1. Nhap so phan tu va gia tri cho mang \n");
        printf(" 2. In ra gia tri cac phan tu trong mang theo dang (arr[0]=1 arr[1]=5,...) \n");
        printf(" 3. Dem so luong cac so hoan hao co trong mang \n");
        printf(" 4. Tim gia tri nho thu 2 trong mang \n");
        printf(" 5. Them 1 phan tu vao vi tri dau tien trong mang \n");
        printf(" 6. Xoa 1 phan tu tai 1 vi tri cu the \n");
        printf(" 7. Xap xep mang theo thu tu giam dan \n");
        printf(" 8. Cho nguoi dung nhap vao 1 phan tu , tim kiem xem phan tu do co ton tai trong mang hay khong \n");
        printf(" 9. Sap xep lai mang va hien thi ra toan bo phan tu trong mang sao cho toan bo so le dung truoc, so chan dung sau \n");
        printf(" 10. Dao nguoc tat ca phan tu co trong mang va hien thi ra toan bo phan ti co dang ( arr[0]=1 -le, arr[1]=2 -chan \n");
        printf(" 11. Thoat \n");
    while(flag!=11){
        printf(" Lua chon cua ban: ");
        scanf("%d", &choose);
        switch(choose){
            case 1:
                flag=1;
                printf(" Moi ban nhap so phan tu cho mang: ");
                scanf("%d", &length);
                for(int i=0; i<length; i++){
                    printf(" Moi ban nhap phan tu thu %d vao mang: ", i+1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                if(flag==1){
                    for(int i=0; i<length; i++){
                        printf(" arr[%d] = %d ,", i, arr[i]);
                    }
                    printf("\n");
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
                break;
            case 3:
                if(flag==1){
                    for(int i=0; i<length; i++){
                        int b=0;
                        int sum3=0;
                        for(int j=1; j< arr[i]; j++){
                            if( arr[i] % j ==0){
                                num[b]=j;
                                b++;
                            }
                            printf(" %d", num[b]);
                            for(int k=0; k< b; k++){
                                sum3+= num[k];
                            }
                            if(sum3== arr[i]){
                                printf(" %d  ", arr[i] );
                            }
                        }
                    }
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
            
                break;
            case 4:
                if(flag==1){
                
                   int min=32767, secondMin=32767;
                               for (int i = 0; i < length; i++) {
                                   if (arr[i] < min) {
                                       secondMin = min;
                                       min = arr[i];
                                   } else if (arr[i] < secondMin && arr[i] != min) {
                                       secondMin = arr[i];
                                   }
                               }
                               if (secondMin == 32767) {
                                   printf("khong co gia tri nho thu 2\n");
                               } else {
                                   printf("gia tri nho thu 2 trong mang: %d\n", secondMin);
                               }
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
                break;
            case 5:
                if(flag==1){
                    int number5=0;
                    printf(" Moi ban nhap phan tu vao mang: ");
                    scanf(" %d", &number5);
                    for(int i=length; i>0; i--){
                        int temp=arr[i];
                        arr[i]=arr[i-1];
                        arr[i-1]= temp;
                    }
                    arr[0]= number5;
                    length++;
                    for(int i=0; i< length; i++){
                        printf("%d  ", arr[i]);
                    }
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
                break;
            case 6:
                if(flag==1){
                    int index6=0;
                    printf(" Moi ban nhap vi tri muon xoa: ");
                    scanf(" %d", &index6);
                    for(int i=index6; i<length; i++){
                        arr[i]=arr[i+1];
                    }
                    length--;
                    for(int i=0; i<length; i++){
                        printf("%d  ", arr[i]);
                    }
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
                break;
            case 7:
                if(flag==1){
                    for(int i=0; i<length -1; i++){
                        for(int j=0; j<length -i-1; j++){
                            if(arr[j]< arr[j+1]){
                                int temp= arr[j];
                                arr[j]= arr[j+1];
                                arr[j+1]= temp;
                            }
                        }
                    }
                    for(int i=0; i<length; i++){
                        printf(" %d", arr[i]);
                    }
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
                break;
            case 8:
                if(flag==1){
                    int end= length, start=0;
                            int mid, item;
                            
                            printf("nhap gia tri can tim : ");
                            scanf("%d",&item);
                            end= length-1;
                        while(start<=end){
                    int mid =(start+end)/2;
                    if(arr[mid]==item){
                        printf("phan tu %d co vi tri  thu %d ",item, mid+1);
                          int check = 2;
                        break;
                    }else if(arr[mid] <item ){
                        start = mid +1;
                    }else if(arr[mid] >item){
                        end = mid -1;
                    }
                }
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
                break;
            case 9:
                if(flag==1){
                    int arrX[50], arrY[50];
                    int x=0, y=0;
                    for(int i=0; i<length; i++){
                        if(arr[i]%2!= 0){
                            arrX[x]=arr[i];
                            x++;
                        }else{
                            arrY[y]=arr[i];
                            y++;
                        }
                    }
                    for(int i=0; i< x; i++){
                        printf("%d  ", arrX[i]);
                    }
                    for(int i=0; i<y; i++){
                        printf("%d  ", arrY[i]);
                    }
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
                break;
            case 10:
                if(flag==1){
                    for(int i =0;i<length;i++){
                        for(int j =0;j<length-1-i;j++){
                            if(arr[j]<arr[j+1]){
                                int temp = arr[j+1];
                                arr[j+1]=arr[j];
                                arr[j]=temp;
                            }
                        }
                    }
                    for(int i=0; i<length; i++){
                        printf("%d ", arr[i]);
                    }
                                   
                }else{
                    printf(" Ban chua nhap phan tu cho mang \n");
                }
                break;
            case 11:
                flag=11;
                break;
            default:
                printf(" Lua chon cua ban khong co trong MENU |n ");
        }
    }
    return 0;
}
