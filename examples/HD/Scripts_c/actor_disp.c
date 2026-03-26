// @IMPORTS: sync/0,SetVisibility/1,Hold/0,IsLoaded/1,RemoveActor/1,self/1
// @STRINGS: W:cleanup|W:restore
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_6: op=0x11 vars=
// @EVENT_26: op=0x1f vars=string

task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; //@nz
	if(var_2_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	}
	func_59();
	return 0;
}


task_0_event_26(var_0_bool, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0;
	var_6_bool = var_2_string == "cleanup";
	if(var_6_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_4_bool);
		var_7_bool = 0;
		var_7_bool = 0;
		var_8_bool = var_4_bool == 0; //@nz
		if(var_8_bool != 0) {
			var_9_bool = 0;
			func_75(var_9_bool);
			if(var_9_bool != 0) {
				var_7_bool = 1;
			}
		}
		if(var_7_bool != 0) {
			var_10_object = Obj();
			func_82(var_10_object);
			RemoveActor(var_10_object);
		}
	} else {
		var_14_bool = var_2_string == "restore";
		if(var_14_bool == 0) goto Label_58;
		var_0_bool = false;
	}
Label_58:
	return 2;
	
}


main(var_0_bool, var_1_bool)
{
	sync();
	var_2_bool = 0;
	func_77(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	} else {
		var_1_bool = false;
	}
	func_27();
	return 0;
	
}


func_27()
{
	
Label_27:
	Hold();
	goto Label_27;
}
EMIT "Return(); Pop(0)";


func_75(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_77(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_82(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_59()
{
	var_4_bool = 0;
	var_4_bool = 0;
	var_5_bool = var_0_bool;
	if(var_5_bool != 0) {
		var_6_bool = 0;
		func_75(var_6_bool);
		if(var_6_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_7_object = Obj();
		func_82(var_7_object);
		RemoveActor(var_7_object);
	}
	return 0;
}


