// @IMPORTS: CreateObjectVector/1,Hold/0,GetLocator/3,AddActorByType/6,self/1,RemoveActor/1
// @STRINGS: W:pt_fireplace|W:scripted|W:fireplace.xml|A:add|A:clear|A:size|A:get
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_5: op=0x39 vars=
// @EVENT_6: op=0x40 vars=
// @PE: 0x0,0x4,0x39,0x40

task_0_event_5(var_0_object, var_1_object)
{
	func_14(var_1_object);
	func_38(var_1_object);
	return 0;
}


task_0_event_6(var_0_object, var_1_object)
{
	func_43(var_1_object);
	func_50(var_1_object);
	return 0;
}


main(var_0_object, var_1_object)
{
	func_6(var_0_object, var_1_object);
	return 0;
}


func_4()
{
	return 0;
}


func_38(var_1_object)
{
	var_21_object = Obj();
	var_21_object = var_1_object;
	func_4();
	return 0;
}


func_71(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	self(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6(var_0_object, var_1_object)
{
	CreateObjectVector(var_0_object);
	CreateObjectVector(var_1_object);
	
Label_10:
	Hold();
	goto Label_10;
}
EMIT "Return(); Pop(0)";


func_43(var_0_object)
{
	var_2_object = Obj();
	var_2_object = var_0_object;
	func_77(var_2_object);
	@@@var_0_object:clear();
	return 0;
}


func_77(var_2_object)
{
	var_3_int = 0; var_4_int = 0; var_5_object = Obj(); var_6_int = 0; var_7_int = 0; var_8_object = Obj();
	var_9_object = var_2_object;
	if(var_9_object != 0) {
		@@var_2_object:size(var_6_int);
		var_7_int = 0;

	Label_83:
		var_10_bool = var_7_int < var_6_int;
		if(var_10_bool != 0) {
			@@var_2_object:get(var_8_object, var_7_int);
			var_11_object = var_8_object;
			if(var_11_object != 0) {
				RemoveActor(var_8_object);
			}
			var_8_object = 0;
			var_7_int = var_7_int + (int)1;
			goto Label_83;
		}
		@@var_2_object:clear();
	}
	return 6;
}


func_14(var_0_object)
{
	var_2_int = 0; var_3_string = ""; var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_object = Obj(); var_7_int = 0; var_8_string = ""; var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_object = Obj();
	var_7_int = 1;
	
Label_16:
	var_8_string = "pt_fireplace" + var_7_int;
	GetLocator(var_8_string, var_9_bool, var_10_cvector);
	var_13_bool = var_9_bool == 0; //@nz
	if(var_13_bool != 0) {
	} else {
		var_15_object = Obj();
		func_71(var_15_object);
		AddActorByType(var_11_object, "scripted", var_15_object, var_10_cvector, CVector(0.0, 0.0, 1.0), "fireplace.xml");
		@@@var_0_object:add(var_11_object);
		var_11_object = 0;
		var_7_int = var_7_int + (int)1;
		goto Label_16;
	}
	return 10;
	
}


func_50(var_1_object)
{
	var_13_object = Obj();
	var_13_object = var_1_object;
	func_77(var_13_object);
	@@@var_1_object:clear();
	return 0;
}


