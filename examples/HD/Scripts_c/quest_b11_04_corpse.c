// @IMPORTS: SetProperty/2,FindGeometry/2,Hold/0,IsLoaded/1,RemoveActor/1,self/1
// @STRINGS: W:disease|W:corpse|A:Enable|W:cleanup|W:restore
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_16: op=0x12 vars=object,string
// @EVENT_26: op=0x14 vars=string
// @EVENT_6: op=0x28 vars=
// @PE: 0x12

task_0_event_16(var_0_bool, var_1_object, var_2_string)
{
	return 0;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = var_3_bool == 0; //@nz
		if(var_6_bool != 0) {
			var_7_object = Obj();
			func_48(var_7_object);
			RemoveActor(var_7_object);
		}
	} else {
		var_11_bool = var_1_string == "restore";
		if(var_11_bool == 0) goto Label_39;
		var_0_bool = false;
	}
Label_39:
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_48(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


main(var_0_bool)
{
	var_1_object = Obj(); var_2_object = Obj();
	SetProperty("disease", (int)1);
	FindGeometry("corpse", var_2_object);
	@@var_2_object:Enable((bool)1);
	
Label_11:
	if((bool)1 != 0) {
		Hold();
		goto Label_11;
	}
	return 2;
}
EMIT "Stack[-1] = 0";


func_48(var_2_object)
{
	var_3_object = Obj(); var_4_object = Obj();
	self(var_4_object);
	var_4_object = var_2_object;
	return 2;
}
EMIT "Stack[-1] = 0";


