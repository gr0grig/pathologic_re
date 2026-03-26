// @IMPORTS: HasAnimation/3,PlayAnimation/2,WaitForAnimEnd/1,LockAnimationEnd/2
// @STRINGS: W:sobor_idle|W:all
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0

main()
{
	
Label_0:
	if((bool)1 != 0) {
		var_1_string = "";
		func_8("sobor_idle");
		goto Label_0;
	}
	return 0;
}


func_8(var_1_string)
{
	var_2_bool = 0; var_3_bool = 0; var_4_bool = 0; var_5_bool = 0;
	HasAnimation(var_4_bool, "all", var_1_string);
	var_7_bool = var_4_bool == 0; //@nz
	if(var_7_bool != 0) {
		return 4;
	}
	PlayAnimation("all", var_1_string);
	WaitForAnimEnd(var_5_bool);
	LockAnimationEnd("all", var_1_string);
	return 4;
}


