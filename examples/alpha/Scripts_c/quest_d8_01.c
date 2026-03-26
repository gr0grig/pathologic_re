// @IMPORTS: Hold/0,Trace/1,GetSceneByName/2,AddActor/4,SetVariable/2,GetGameTime/1,SetTimeEvent/2,ReleaseTimeEvent/1,Trigger/2,AddActor/6,AddActorByType/6,FindActor/2
// @STRINGS: W:block_well|W:house_vlad|W:d8q01_well_block|W:place_toy|W:r4_house_2_02|W:pt_d8q01_toy|W:scripted_container|W:d8q01_toy.xml|W:boiny_load|W:termitnik_load|W:termitnik|W:pt_d8q01_burah|W:NPC_Burah|W:d8q01_Burah.xml|W:d8TermitnikLoad|W:unlock_boiny|W:fail|W:completed|W:Boiny unlocked|W:boiny@door1|W:d8q01|W:cleanup|A:GetLocator|W:Locator |W: doesn't exist|W:Door |W: not found|A:SetProperty
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,bool params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_9: op=0x5f vars=int,float
// @PE: 0x5f

task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_string)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_object = Obj(); var_8_float = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_float = 0;
	Trace(var_3_string);
	var_15_bool = var_3_string == "block_well";
	if(var_15_bool != 0) {
		GetSceneByName(var_9_object, "house_vlad");
		AddActor(var_10_object, "d8q01_well_block", var_9_object, CVector(0.0, 0.0, 0.0));
		var_10_object = 0;
		var_9_object = 0;
	} else {
		var_20_bool = var_3_string == "place_toy";
		if(var_20_bool != 0) {
			GetSceneByName(var_11_object, "r4_house_2_02");
			var_22_object = Obj(); var_23_object = Obj(); var_24_string = ""; var_25_string = ""; var_26_string = "";
			var_11_object = var_23_object;
			func_167(var_22_object, var_23_object, "pt_d8q01_toy", "scripted_container", "d8q01_toy.xml");
			var_0_object = var_22_object;
			var_11_object = 0;
			goto Label_94;
		}
		var_41_bool = var_3_string == "boiny_load";
		if(var_41_bool != 0) {
			goto Label_94;
		}
		var_43_bool = var_3_string == "termitnik_load";
		if(var_43_bool != 0) {
			var_44_bool = var_2_bool;
			if(var_44_bool != 0) {
				var_2_bool = false;
				GetSceneByName(var_12_object, "termitnik");
				var_46_object = Obj(); var_47_object = Obj(); var_48_string = ""; var_49_string = ""; var_50_string = "";
				var_12_object = var_47_object;
				func_149(var_46_object, var_47_object, "pt_d8q01_burah", "NPC_Burah", "d8q01_Burah.xml");
				var_1_object = var_46_object;
				SetVariable("d8TermitnikLoad", (int)1);
				var_12_object = 0;
			}
			goto Label_94;
		}
		var_67_bool = var_3_string == "unlock_boiny";
		if(var_67_bool != 0) {
			GetGameTime(var_13_float);
			var_69_bool = var_13_float >= (float)193.0;
			if(var_69_bool != 0) {
				func_103();
			} else {
				SetTimeEvent((int)0, (float)193.0);
		}
			var_84_bool = var_3_string == "fail";
			if(var_84_bool != 0) {
				func_112();
				goto Label_94;
			}
			var_95_bool = var_3_string == "completed";
			if(var_95_bool == 0) goto Label_94;
			func_120();
		}
		goto Label_94;
	}
Label_94:
	return 10;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_bool, var_3_int, var_4_float)
{
	ReleaseTimeEvent((int)0);
	func_103();
	return 0;
}


main(var_0_object, var_1_object, var_2_bool)
{
	var_2_bool = true;
	
Label_1:
	Hold();
	goto Label_1;
}
EMIT "Return(); Pop(0)";


func_128(var_0_object, var_1_object)
{
	EventDisable(26);
	EventDisable(9);
	ReleaseTimeEvent((int)0);
	var_88_object = var_0_object;
	if(var_88_object != 0) {
		Trigger(var_0_object, "cleanup");
	}
	var_90_object = var_1_object;
	if(var_90_object != 0) {
		Trigger(var_1_object, "cleanup");
	}
	var_92_string = ""; var_93_bool = 0;
	func_185("boiny@door1", (bool)1);
	return 0;
}


func_103()
{
	Trace("Boiny unlocked");
	var_7_string = ""; var_8_bool = 0;
	func_185("boiny@door1", (bool)0);
	return 0;
}


func_167(var_22_object, var_23_object, var_24_string, var_25_string, var_26_string)
{
	var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_object = Obj(); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj();
	@@var_23_object:GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector);
	var_35_bool = var_31_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_37_int = "Locator " + var_24_string;
		var_39_int = var_37_int + " doesn't exist";
		Trace(var_39_int);
	} else {
		AddActorByType(Obj(), var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string);
	}
	var_34_object = var_22_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_112()
{
	SetVariable("d8q01", (int)-1);
	func_128(var_12_object, var_13_float);
	return 0;
}


func_149(var_46_object, var_47_object, var_48_string, var_49_string, var_50_string)
{
	var_51_bool = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_object = Obj(); var_55_bool = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_object = Obj();
	@@var_47_object:GetLocator(var_48_string, var_55_bool, var_56_cvector, var_57_cvector);
	var_59_bool = var_55_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_61_int = "Locator " + var_48_string;
		var_63_int = var_61_int + " doesn't exist";
		Trace(var_63_int);
	} else {
		AddActor(Obj(), var_49_string, var_47_object, var_56_cvector, var_57_cvector, var_50_string);
	}
	var_58_object = var_46_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_120()
{
	SetVariable("d8q01", (int)1000);
	func_128(var_12_object, var_13_float);
	return 0;
}


func_185(var_7_string, var_8_bool)
{
	var_9_object = Obj(); var_10_object = Obj();
	FindActor(var_10_object, var_7_string);
	var_11_bool = var_10_object == 0; //@nz
	if(var_11_bool != 0) {
		var_13_int = "Door " + var_7_string;
		var_15_int = var_13_int + " not found";
		Trace(var_15_int);
	}
	@@var_10_object:SetProperty("locked", var_8_bool);
	return 2;
}
EMIT "Stack[-1] = 0";


