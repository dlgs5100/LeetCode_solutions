​
​
​
typedef struct {
    int *array;
    int amount;
} MinStack;
​
/** initialize your data structure here. */
​
MinStack* minStackCreate() {
    MinStack *obj = malloc(sizeof(MinStack));
    obj->array = malloc(sizeof(int)*0);
    obj->amount = 0;
    return obj;
}
​
void minStackPush(MinStack* obj, int x) {
    obj->array = realloc(obj->array, sizeof(int)*(++obj->amount));
    obj->array[obj->amount-1] = x;
}
​
void minStackPop(MinStack* obj) {
    obj->array = realloc(obj->array, sizeof(int)*(--obj->amount));
}
​
int minStackTop(MinStack* obj) {
    return obj->array[obj->amount-1];
}
​
int minStackGetMin(MinStack* obj) {
    int i, min = INT_MAX;
    for(i=0; i<obj->amount; i++)
        min = obj->array[i] < min ? obj->array[i] : min;
    return min;
