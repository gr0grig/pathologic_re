// @IMPORTS: CreateObjectVector/1,Trace/1,GetSceneByName/2,GetVariable/2,SetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6,FindActor/2,Trigger/2
// @STRINGS: W:theater@door1|W:termitnik_load|A:clear|W:termitnik|W:pt_d8q04_morlok|W:pers_morlok|W:d8q04_morlok.xml|A:add|W:death|W:attack|W:fail|W:completed|W:d8q04|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,int params=0
// @EVENT_26: op=0xd vars=string
// @EVENT_9: op=0x8a vars=int,float
// @PE: 0x8a

task_0_event_26(var_0_object, var_1_int, var_2_string)
{
	var_3_object = Obj(); var_4_int = 0; var_5_object = Obj(); var_6_int = 0;
	Trace(var_2_string);
	var_8_bool = var_2_string == "termitnik_load";
	if(var_8_bool != 0) {
		var_9_object = Obj();
		var_9_object = var_0_object;
		func_184(var_9_object);
		@@@var_0_object:clear();
		GetSceneByName(var_5_object, "termitnik");
		var_6_int = 0;

	Label_29:
		var_21_bool = var_6_int < var_1_int;
		if(var_21_bool != 0) {
			var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = "";
			var_5_object = var_23_object;
			var_29_int = var_6_int + (int)1;
			var_24_string = "pt_d8q04_morlok" + var_29_int;
			func_149(var_22_object, var_23_object, var_24_string, "pers_morlok", "d8q04_morlok.xml");
			@@@var_0_object:add(var_22_object);
			var_6_int = var_6_int + (int)1;
			goto Label_29;
		}
		var_5_object = 0;
	} else {
		var_45_bool = var_2_string == "death";
		if(var_45_bool != 0) {
			var_1_int = var_1_int + (int)-1;
			goto Label_76;
		}
		var_48_bool = var_2_string == "attack";
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_string = "";
			var_49_object = var_0_object;
			func_205(var_49_object, "attack");
			goto Label_76;
		}
		var_62_bool = var_2_string == "fail";
		if(var_62_bool != 0) {
			func_91();
			goto Label_76;
		}
		var_66_bool = var_2_string == "completed";
		if(var_66_bool == 0) goto Label_76;
		func_99();
	}
Label_76:
	return 4;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_int, var_3_float)
{
	func_77();
	return 0;
}


main(var_0_object, var_1_int)
{
	var_1_int = 3;
	CreateObjectVector(var_0_object);
	var_2_string = ""; var_3_bool = 0;
	func_167("theater@door1", (bool)0);
	var_12_int = 0;
	func_119((int)8);
	return 0;
}


func_99()
{
	SetVariable("d8q04", (int)1000);
	func_107();
	return 0;
}


func_167(var_2_string, var_3_bool)
{
	var_4_object = Obj(); var_5_object = Obj();
	FindActor(var_5_object, var_2_string);
	var_6_bool = var_5_object == 0; //@nz
	if(var_6_bool != 0) {
		var_8_int = "Door " + var_2_string;
		var_10_int = var_8_int + " not found";
		Trace(var_10_int);
	} else {
		@@var_5_object:SetProperty("locked", var_3_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_107()
{
	return 0;
}


func_108(var_0_object)
{
	EventDisable(26);
	var_18_object = Obj();
	var_18_object = var_0_object;
	func_184(var_18_object);
	var_29_object = Obj();
	func_143(var_29_object);
	RemoveActor(var_29_object);
	return 0;
}


func_205(var_49_object, var_50_string)
{
	var_51_int = 0; var_52_int = 0; var_53_object = Obj(); var_54_int = 0; var_55_int = 0; var_56_object = Obj();
	var_57_object = var_49_object;
	if(var_57_object != 0) {
		@@var_49_object:size(var_54_int);
		var_55_int = 0;

	Label_211:
		var_58_bool = var_55_int < var_54_int;
		if(var_58_bool != 0) {
			@@var_49_object:get(var_56_object, var_55_int);
			var_59_object = var_56_object;
			if(var_59_object != 0) {
				Trigger(var_56_object, var_50_string);
			}
			var_56_object = 0;
			var_55_int = var_55_int + (int)1;
			goto Label_211;
		}
	}
	return 6;
}


func_77()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("d8q04", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_91();
	}
	func_108(var_5_int);
	return 2;
}


func_143(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj();
	self(var_31_object);
	var_31_object = var_29_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_149(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string)
{
	var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj();
	@@var_23_object:GetLocator(var_24_string, var_34_bool, var_35_cvector, var_36_cvector);
	var_38_bool = var_34_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_40_int = "Locator " + var_24_string;
		var_42_int = var_40_int + " doesn't exist";
		Trace(var_42_int);
	} else {
		AddActor(Obj(), var_25_string, var_23_object, var_35_cvector, var_36_cvector, var_26_string);
	}
	var_37_object = var_22_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_119(var_12_int)
{
	var_13_float = 0; var_14_float = 0;
	GetGameTime(var_14_float);
	var_16_float = var_12_int * (int)24;
	var_17_bool = var_14_float >= var_16_float;
	if(var_17_bool != 0) {
		func_108(var_14_float);
	} else {
		var_34_float = var_12_int * (int)24;
		SetTimeEvent((int)0, var_34_float);
		Hold();
	}
	return 2;
	
}


func_184(var_18_object)
{
	var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_int = 0; var_24_object = Obj();
	var_25_object = var_18_object;
	if(var_25_object != 0) {
		@@var_18_object:size(var_22_int);
		var_23_int = 0;

	Label_190:
		var_26_bool = var_23_int < var_22_int;
		if(var_26_bool != 0) {
			@@var_18_object:get(var_24_object, var_23_int);
			var_27_object = var_24_object;
			if(var_27_object != 0) {
				RemoveActor(var_24_object);
			}
			var_24_object = 0;
			var_23_int = var_23_int + (int)1;
			goto Label_190;
		}
		@@var_18_object:clear();
	}
	return 6;
}


func_91()
{
	SetVariable("d8q04", (int)-1);
	func_107();
	return 0;
}


