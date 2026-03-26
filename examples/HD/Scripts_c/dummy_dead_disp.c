// @IMPORTS: RemoveRTEnvelope/0,RemoveEnvelope/0,SetDeathState/0,GetProperty/2,LockAnimationEnd/2,Hold/0,IsLoaded/1,RemoveActor/1,self/1
// @STRINGS: W:animation|W:all|W:cleanup|W:restore
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_5: op=0x11 vars=
// @EVENT_26: op=0x1d vars=string
// @EVENT_6: op=0x39 vars=

task_0_event_5(var_0_bool)
{
	var_1_string = ""; var_2_string = "";
	GetProperty("animation", var_2_string);
	LockAnimationEnd("all", var_2_string);
	return 2;
}


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
			func_73(var_8_bool);
			if(var_8_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_9_object = Obj();
			func_75(var_9_object);
			RemoveActor(var_9_object);
		}
	} else {
		var_13_bool = var_1_string == "restore";
		if(var_13_bool == 0) goto Label_56;
		var_0_bool = false;
	}
Label_56:
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_73(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_75(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	var_1_string = ""; var_2_string = "";
	RemoveRTEnvelope();
	RemoveEnvelope();
	SetDeathState();
	GetProperty("animation", var_2_string);
	LockAnimationEnd("all", var_2_string);
	func_25();
	return 2;
}


func_73(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_75(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	self(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_25()
{
	
Label_25:
	Hold();
	goto Label_25;
}
EMIT "Return(); Pop(0)";


