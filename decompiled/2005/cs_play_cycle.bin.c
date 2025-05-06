main()
{
	var_0_float = 0; var_1_float = 0; // 0x0 PushV
	GetAnimationLength(var_1_float); // 0x1 Func
	
Label_3:
	var_2_int = 0; // 0x3 PushI
	PlayAnimation(var_2_int, var_1_float); // 0x4 Func
	WaitForAnimEnd(); // 0x6 Func
	goto Label_3; // 0x8 Jump
}


