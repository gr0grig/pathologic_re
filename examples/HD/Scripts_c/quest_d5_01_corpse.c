// @IMPORTS: IsOverrideActive/1,Barter/1,sync/0,SetVisibility/1,Hold/0,IsLoaded/1,RemoveActor/1,self/1
// @STRINGS: W:cleanup|W:restore
// @RUN_OP: 0xa
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_0: op=0x0 vars=object
// @EVENT_6: op=0x1b vars=
// @EVENT_26: op=0x29 vars=string

task_0_event_0(var_0_bool, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0;
	IsOverrideActive(var_4_bool);
	var_5_bool = var_4_bool == 0; //@nz
	if(var_5_bool != 0) {
		Barter(var_2_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; //@nz
	if(var_2_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	}
	func_69();
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
			func_8(var_9_bool);
			if(var_9_bool != 0) {
				var_7_bool = 1;
			}
		}
		if(var_7_bool != 0) {
			var_10_object = Obj();
			func_90(var_10_object);
			RemoveActor(var_10_object);
		}
	} else {
		var_14_bool = var_2_string == "restore";
		if(var_14_bool == 0) goto Label_68;
		var_0_bool = false;
	}
Label_68:
	return 2;
	
}


main(var_0_bool, var_1_bool)
{
	sync();
	var_2_bool = 0;
	func_85(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	} else {
		var_1_bool = false;
	}
	func_37();
	return 0;
	
}


func_37()
{
	
Label_37:
	Hold();
	goto Label_37;
}
EMIT "Return(); Pop(0)";


func_69()
{
	var_4_bool = 0;
	var_4_bool = 0;
	var_5_bool = var_0_bool;
	if(var_5_bool != 0) {
		var_6_bool = 0;
		func_8(var_6_bool);
		if(var_6_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_7_object = Obj();
		func_90(var_7_object);
		RemoveActor(var_7_object);
	}
	return 0;
}


func_8(var_9_bool)
{
	var_9_bool = 1;
	return 0;
}


func_85(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_90(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


