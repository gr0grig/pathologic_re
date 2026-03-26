// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,AddActor/6,Trigger/2,SetVariable/2,GetVariable/2,RemoveActor/1,self/1,GetMainOutdoorScene/1,AddBlankActor/4,FindActor/2
// @STRINGS: W:place_box|W:dt_house_1_04|W:b2q01_box|W:b2q01_box.xml|W:place_mladvlad|W:burah_home|W:pt_b2q01_mladvlad|W:NPC_MladVlad|W:b2q01_MladVlad.xml|W:house_vlad@door1|W:remove_mladvlad|W:cleanup|W:cutscene|W:cs_burah_danko_microscope|W:cutscene_end|W:b2q01MicroscopeCS|W:b2q01|W:fail|W:completed|W:.bin|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|W:locked|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_26: op=0x4 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_string)
{
	var_3_object = Obj(); var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0;
	Trace(var_2_string);
	var_10_bool = var_2_string == "place_box";
	if(var_10_bool != 0) {
		GetSceneByName(var_6_object, "dt_house_1_04");
		AddActor(var_0_object, "b2q01_box", var_6_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "b2q01_box.xml");
		var_6_object = 0;
	}
	var_17_bool = var_2_string == "place_mladvlad";
	if(var_17_bool != 0) {
		GetSceneByName(var_7_object, "burah_home");
		var_19_object = Obj(); var_20_object = Obj(); var_21_string = ""; var_22_string = ""; var_23_string = "";
		var_7_object = var_20_object;
		func_148(var_19_object, var_20_object, "pt_b2q01_mladvlad", "NPC_MladVlad", "b2q01_MladVlad.xml");
		var_1_object = var_19_object;
		var_37_string = ""; var_38_bool = 0;
		func_166("house_vlad@door1", (bool)1);
		var_7_object = 0;
	}
	var_48_bool = var_2_string == "remove_mladvlad";
	if(var_48_bool != 0) {
		var_49_object = var_1_object;
		if(var_49_object != 0) {
			Trigger(var_1_object, "cleanup");
		}
		var_51_string = ""; var_52_bool = 0;
		func_166("house_vlad@door1", (bool)0);
	} else {
		var_54_bool = var_2_string == "cutscene";
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_string = "";
			func_137(var_55_object, "cs_burah_danko_microscope");
			goto Label_100;
		}
		var_64_bool = var_2_string == "cutscene_end";
		if(var_64_bool != 0) {
			SetVariable("b2q01MicroscopeCS", (int)1);
			goto Label_100;
		}
		var_68_bool = var_2_string == "cleanup";
		if(var_68_bool != 0) {
			GetVariable("b2q01", var_8_int);
			var_71_bool = var_8_int != (int)1000;
			if(var_71_bool != 0) {
				func_101();
			} else {
				func_114(var_8_int);
		}
			var_82_bool = var_2_string == "fail";
			if(var_82_bool != 0) {
				func_101();
				goto Label_100;
			}
			var_84_bool = var_2_string == "completed";
			if(var_84_bool == 0) goto Label_100;
			func_109();
		}
		goto Label_100;
	}
Label_100:
	return 6;
	
}


main(var_0_object, var_1_object)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_131(var_78_object)
{
	var_79_object = Obj(); var_80_object = Obj();
	self(var_80_object);
	var_80_object = var_78_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_101()
{
	SetVariable("b2q01", (int)-1);
	func_114(var_8_int);
	return 0;
}


func_166(var_37_string, var_38_bool)
{
	var_39_object = Obj(); var_40_object = Obj();
	FindActor(var_40_object, var_37_string);
	var_41_bool = var_40_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Door " + var_37_string;
		var_45_int = var_43_int + " not found";
		Trace(var_45_int);
	} else {
		@@var_40_object:SetProperty("locked", var_38_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_137(var_55_object, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj();
	GetMainOutdoorScene(var_59_object);
	var_62_int = var_56_string + ".bin";
	AddBlankActor(var_60_object, var_59_object, var_56_string, var_62_int);
	var_60_object = var_55_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_109()
{
	SetVariable("b2q01", (int)1000);
	return 0;
}


func_114(var_1_object)
{
	EventDisable(26);
	var_74_object = var_1_object;
	if(var_74_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_76_string = ""; var_77_bool = 0;
	func_166("house_vlad@door1", (bool)0);
	var_78_object = Obj();
	func_131(var_78_object);
	RemoveActor(var_78_object);
	return 0;
}


func_148(var_19_object, var_20_object, var_21_string, var_22_string, var_23_string)
{
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_object = Obj();
	@@var_20_object:GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	var_32_bool = var_28_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_34_int = "Locator " + var_21_string;
		var_36_int = var_34_int + " doesn't exist";
		Trace(var_36_int);
	} else {
		AddActor(Obj(), var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string);
	}
	var_31_object = var_19_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


