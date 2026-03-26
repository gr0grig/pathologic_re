// @IMPORTS: Trace/1,GetVariable/2,Hold/0,GetSceneByName/2,Trigger/2,SetVariable/2,RemoveActor/1,self/1,AddActor/6,FindActor/2,Trigger/3
// @STRINGS: W:kill the one|W:b8q03MladVladIsVictim|W:volonteers_burah|W:kill|W:mladvlad|W:bigvlad|W:boiny@door1|W:vagon_mishka@door1|W:place_klara|W:vagon_mishka|W:pt_b8q01_klara|W:NPC_Klara|W:b8q01_klara.xml|W:remove_klara|W:cleanup|W:unlock_boiny|W:b8q01|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x18
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x26 vars=string
// @PE: 0x81

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	Trace(var_1_string);
	var_7_bool = var_1_string == "place_klara";
	if(var_7_bool != 0) {
		GetSceneByName(var_4_object, "vagon_mishka");
		var_9_object = Obj(); var_10_object = Obj(); var_11_string = ""; var_12_string = ""; var_13_string = "";
		var_4_object = var_10_object;
		func_149(var_9_object, var_10_object, "pt_b8q01_klara", "NPC_Klara", "b8q01_klara.xml");
		var_0_object = var_9_object;
		var_4_object = 0;
	} else {
		var_28_bool = var_1_string == "remove_klara";
		if(var_28_bool != 0) {
			Trigger(var_0_object, "cleanup");
			goto Label_106;
		}
		var_31_bool = var_1_string == "unlock_boiny";
		if(var_31_bool != 0) {
			var_32_string = ""; var_33_bool = 0;
			func_167("boiny@door1", (bool)0);
			goto Label_106;
		}
		var_43_bool = var_1_string == "cleanup";
		if(var_43_bool != 0) {
			GetVariable("b8q01", var_5_int);
			var_46_bool = var_5_int != (int)1000;
			if(var_46_bool != 0) {
				func_107();
			} else {
				func_123(var_5_int);
		}
			var_74_bool = var_1_string == "fail";
			if(var_74_bool != 0) {
				func_107();
				goto Label_106;
			}
			var_76_bool = var_1_string == "completed";
			if(var_76_bool == 0) goto Label_106;
			func_115();
		}
		func_129();
		goto Label_106;
	}
Label_106:
	return 4;
	
}


main(var_0_object)
{
	var_1_string = ""; var_2_bool = 0;
	func_167("boiny@door1", (bool)1);
	var_11_string = ""; var_12_bool = 0;
	func_167("vagon_mishka@door1", (bool)0);
	
Label_34:
	Hold();
	goto Label_34;
}
EMIT "Return(); Pop(0)";


func_0()
{
	var_51_int = 0; var_52_int = 0;
	Trace("kill the one");
	GetVariable("b8q03MladVladIsVictim", var_52_int);
	var_56_bool = var_52_int != (int)0;
	if(var_56_bool != 0) {
		var_57_bool = 0; var_58_string = ""; var_59_string = ""; var_60_string = "";
		func_184(var_57_bool, "volonteers_burah", "kill", "mladvlad");
	} else {
		var_64_bool = 0; var_65_string = ""; var_66_string = ""; var_67_string = "";
		func_184(var_64_bool, "volonteers_burah", "kill", "bigvlad");
	}
	return 2;
	
}


func_129()
{
	func_0();
	var_68_object = Obj();
	func_143(var_68_object);
	RemoveActor(var_68_object);
	var_71_string = ""; var_72_bool = 0;
	func_167("boiny@door1", (bool)1);
	return 0;
}


func_167(var_1_string, var_2_bool)
{
	var_3_object = Obj(); var_4_object = Obj();
	FindActor(var_4_object, var_1_string);
	var_5_bool = var_4_object == 0; //@nz
	if(var_5_bool != 0) {
		var_7_int = "Door " + var_1_string;
		var_9_int = var_7_int + " not found";
		Trace(var_9_int);
	} else {
		@@var_4_object:SetProperty("locked", var_2_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_107()
{
	SetVariable("b8q01", (int)-1);
	func_123(var_5_int);
	return 0;
}


func_143(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj();
	self(var_70_object);
	var_70_object = var_68_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_115()
{
	SetVariable("b8q01", (int)1000);
	func_123(var_5_int);
	return 0;
}


func_149(var_9_object, var_10_object, var_11_string, var_12_string, var_13_string)
{
	var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj();
	@@var_10_object:GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector);
	var_22_bool = var_18_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_24_int = "Locator " + var_11_string;
		var_26_int = var_24_int + " doesn't exist";
		Trace(var_26_int);
	} else {
		AddActor(Obj(), var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string);
	}
	var_21_object = var_9_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_184(var_57_bool, var_58_string, var_59_string, var_60_string)
{
	var_61_object = Obj(); var_62_object = Obj();
	FindActor(var_62_object, var_58_string);
	var_63_bool = var_62_object == 0; //@ne
	if(var_63_bool != 0) {
		var_57_bool = 0;
		return 2;
	}
	Trigger(var_62_object, var_59_string, var_60_string);
	var_57_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_123(var_0_object)
{
	var_49_object = var_0_object;
	if(var_49_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	return 0;
}


