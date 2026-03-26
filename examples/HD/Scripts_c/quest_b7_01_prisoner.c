// @IMPORTS: Hold/0,PlayAnimation/2,WaitForAnimEnd/0,IsLoaded/1,RemoveActor/1,StopGroup0/0,sync/0,self/1
// @STRINGS: W:all|W:prisoner|W:cleanup
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x10 vars=string
// @EVENT_5: op=0x27 vars=
// @EVENT_6: op=0x2c vars=

task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = 0;
		var_6_bool = 0;
		var_7_bool = var_3_bool == 0; //@nz
		if(var_7_bool != 0) {
			var_8_bool = 0;
			func_60(var_8_bool);
			if(var_8_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_9_object = Obj();
			func_67(var_9_object);
			RemoveActor(var_9_object);
		}
	}
	return 2;
}


task_0_event_5(var_0_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_60(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_67(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	
Label_0:
	var_1_bool = 0;
	func_62(var_1_bool);
	var_4_bool = var_1_bool == 0; //@nz
	if(var_4_bool != 0) {
		Hold();
		goto Label_0;
	}
	PlayAnimation("all", "prisoner");
	WaitForAnimEnd();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_67(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	self(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_60(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_62(var_1_bool)
{
	var_2_bool = 0; var_3_bool = 0;
	IsLoaded(var_3_bool);
	var_3_bool = var_1_bool;
	return 2;
}


