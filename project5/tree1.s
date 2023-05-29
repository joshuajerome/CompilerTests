insert:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$0, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret	
	.globl	insert
search:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$0, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret	
	.globl	search
preorder:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$0, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret	
	.globl	preorder
inorder:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$0, %esp
	movl	%ebp, %esp
	popl	%ebp
	ret	
	.globl	inorder
main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$48, %esp
	movl	$0, -48(%ebp)
	movl	, -4(%ebp)
	movl	, -4(%ebp)
	movl	, -4(%ebp)
	movl	, -4(%ebp)
	movl	, -4(%ebp)
	movl	, -4(%ebp)
	movl	, -4(%ebp)
	movl	, -4(%ebp)
	movl	, -4(%ebp)
	pushl	
	call	printf
	pushl	-4(%ebp)
	call	preorder
	pushl	
	call	printf
	pushl	-4(%ebp)
	call	inorder
	movl	%ebp, %esp
	popl	%ebp
	ret	
	.globl	main
	.comm	null, 4
