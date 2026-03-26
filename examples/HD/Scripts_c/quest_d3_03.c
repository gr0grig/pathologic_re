// @IMPORTS: SetVariable/2,Trace/1,GetMainOutdoorScene/1,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1
// @STRINGS: W:d3q03|W:boy|W:pt_d3q03_boy|W:pers_littleboy|W:d3q03_boy.xml|W:boy_attacked|W:boy_free|A:Remove|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x9 vars=string
// @EVENT_9: op=0x86 vars=int,float
// @PE: 0x86,0xa3

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	Trace(var_1_string);
	var_7_bool = var_1_string == "boy";
	if(var_7_bool != 0) {
		GetMainOutdoorScene(var_4_object);
		var_8_object = Obj(); var_9_object = Obj(); var_10_string = ""; var_11_string = ""; var_12_string = "";
		var_4_object = var_9_object;
		func_145(var_8_object, var_9_object, "pt_d3q03_boy", "pers_littleboy", "d3q03_boy.xml");
		var_0_object = var_8_object;
		var_4_object = 0;
	} else {
		var_27_bool = var_1_string == "boy_attacked";
		if(var_27_bool != 0) {
			GetVariable("d3q03", var_5_int);
			var_29_bool = 0; var_30_int = 0;
			var_5_int = var_30_int;
			func_163(var_29_bool, var_30_int);
			if(var_29_bool != 0) {
				func_75();
			}
			goto Label_63;
		}
		var_42_bool = var_1_string == "boy_free";
		if(var_42_bool != 0) {
			var_43_object = var_0_object;
			if(var_43_object != 0) {
				@@@var_0_object:Remove();
			}
			goto Label_63;
		}
		var_45_bool = var_1_string == "fail";
		if(var_45_bool != 0) {
			func_75();
			goto Label_63;
		}
		var_47_bool = var_1_string == "completed";
		if(var_47_bool == 0) goto Label_63;
		func_83();
	}
Label_63:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_float)
{
	func_64();
	return 0;
}


main(var_0_object)
{
	SetVariable("d3q03", (int)1);
	var_3_int = 0;
	func_115((int)3);
	return 0;
}


func_64()
{
	var_3_int = 0; var_4_int = 0;
	GetVariable("d3q03", var_4_int);
	var_7_bool = var_4_int != (int)1000;
	if(var_7_bool != 0) {
		func_75();
	}
	return 2;
}


func_163(var_29_bool, var_30_int)
{
	var_29_bool = 0;
	var_32_bool = var_30_int >= (int)1;
	if(var_32_bool != 0) {
		var_34_bool = var_30_int < (int)1000;
		if(var_34_bool != 0) {
			var_29_bool = 1;
		}
	}
	return 0;
}


func_105(var_0_object)
{
	var_9_object = var_0_object;
	if(var_9_object != 0) {
		@@@var_0_object:Remove();
	}
	var_10_object = Obj();
	func_139(var_10_object);
	RemoveActor(var_10_object);
	return 0;
}


func_75()
{
	SetVariable("d3q03", (int)-1);
	func_105(var_4_int);
	return 0;
}


func_139(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_145(var_8_object, var_9_object, var_10_string, var_11_string, var_12_string)
{
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_object = Obj();
	@@var_9_object:GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	var_21_bool = var_17_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_23_int = "Locator " + var_10_string;
		var_25_int = var_23_int + " doesn't exist";
		Trace(var_25_int);
	} else {
		@@var_9_object:AddStationaryActor(Obj(), var_18_cvector, var_19_cvector, var_11_string, var_12_string);
	}
	var_20_object = var_8_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_83()
{
	var_48_int = 0; var_49_int = 0;
	GetVariable("d3q03", var_49_int);
	var_51_bool = 0;
	var_51_bool = 0;
	var_53_bool = var_49_int != (int)1000;
	if(var_53_bool != 0) {
		var_55_bool = var_49_int != (int)-1;
		if(var_55_bool != 0) {
			var_51_bool = 1;
		}
	}
	if(var_51_bool != 0) {
		SetVariable("d3q03", (int)1000);
		func_105(var_49_int);
	}
	return 2;
}


func_115(var_3_int)
{
	var_4_float = 0; var_5_float = 0;
	GetGameTime(var_5_float);
	var_7_float = var_3_int * (int)24;
	var_8_bool = var_5_float >= var_7_float;
	if(var_8_bool != 0) {
		func_105(var_5_float);
	} else {
		var_15_float = var_3_int * (int)24;
		SetTimeEvent((int)0, var_15_float);
		Hold();
	}
	return 2;
	
}


