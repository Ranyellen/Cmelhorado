void push(int *stack, int SP, int value)
{
	stack[SP++] = value;
}
int pop(int *stack, int SP)
{
	return stack[--SP];
}
