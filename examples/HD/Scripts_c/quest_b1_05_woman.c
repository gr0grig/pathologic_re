// @IMPORTS: WaitForAnimEnd/0,HasAnimation/3,PlayAnimation/2,WaitForAnimEnd/1,IsLoaded/1
// @STRINGS: W:cry|W:all
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	
Label_0:
	if((bool)1 != 0) {
		var_1_string = "";
		func_8("cry");
		goto Label_0;
	}
	return 0;
}


func_8(var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0;
	WaitForAnimEnd();
	var_6_bool = 0;
	func_29(var_6_bool);
	var_9_bool = var_6_bool == 0; //@nz
	if(var_9_bool != 0) {
		return 4;
	}
	HasAnimation(var_4_bool, "all", var_1_string);
	var_11_bool = var_4_bool == 0; //@nz
	if(var_11_bool != 0) {
		return 4;
	}
	PlayAnimation("all", var_1_string);
	WaitForAnimEnd(var_5_bool);
	return 4;
}


func_29(var_6_bool)
{
	var_7_bool = 0; var_8_bool = 0;
	IsLoaded(var_8_bool);
	var_8_bool = var_6_bool;
	return 2;
}


