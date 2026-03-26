// @IMPORTS: CreateObjectVector/1,GetMainOutdoorScene/1,Hold/0,Trace/1,FindActor/2,GetSceneByName/2,Teleport/4,AddActor/6,GetVariable/2,SetVariable/2,RemoveActor/1,self/1
// @STRINGS: W:pt_d9q01_doberman1|W:pers_doberman|W:d9q01_doberman.xml|A:add|W:pt_d9q01_doberman2|W:pt_d9q01_doberman3|W:teleport_to_han|W:player|W:mnogogrannik_han|W:pt_d9q01_teleport|A:GetLocator|W:teleport_to_mnogogrannik|W:place_rifles|W:d9q01_rifle|W:d9q01_rifle.xml|W:unlock_polyh|W:polyh@door1|W:cleanup|W:d9q01|W:fail|W:completed|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:size|A:get|A:Remove|A:clear
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x25 vars=string

task_0_event_26(var_0_object, var_1_string)
{
	var_2_object = Obj(); var_3_object = Obj(); var_4_cvector = CVector(0,0,0); var_5_cvector = CVector(0,0,0); var_6_bool = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_bool = 0; var_12_object = Obj(); var_13_int = 0; var_14_object = Obj(); var_15_int = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; var_28_object = Obj(); var_29_int = 0;
	Trace(var_1_string);
	var_31_bool = var_1_string == "teleport_to_han";
	if(var_31_bool != 0) {
		FindActor(var_16_object, "player");
		var_33_object = var_16_object;
		if(var_33_object != 0) {
			GetSceneByName(var_17_object, "mnogogrannik_han");
			@@var_17_object:GetLocator("pt_d9q01_teleport", var_20_bool, var_18_cvector, var_19_cvector);
			Teleport(var_16_object, var_17_object, var_18_cvector, var_19_cvector);
			var_17_object = 0;
		}
		var_16_object = 0;
	} else {
		var_37_bool = var_1_string == "teleport_to_mnogogrannik";
		if(var_37_bool != 0) {
			FindActor(var_21_object, "player");
			var_39_object = var_21_object;
			if(var_39_object != 0) {
				GetSceneByName(var_22_object, "mnogogrannik");
				@@var_22_object:GetLocator("pt_d9q01_teleport", var_25_bool, var_23_cvector, var_24_cvector);
				Teleport(var_21_object, var_22_object, var_23_cvector, var_24_cvector);
				var_22_object = 0;
			}
			var_21_object = 0;
			goto Label_139;
		}
		var_43_bool = var_1_string == "place_rifles";
		if(var_43_bool != 0) {
			GetMainOutdoorScene(var_26_object);
			var_27_int = 1;

		Label_84:
			var_45_bool = var_27_int <= (int)5;
			if(var_45_bool != 0) {
				var_47_int = "d9q01_rifle" + var_27_int;
				AddActor(var_28_object, var_47_int, var_26_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "d9q01_rifle.xml");
				var_28_object = 0;
				var_27_int = var_27_int + (int)1;
				goto Label_84;
			}
			var_26_object = 0;
			goto Label_139;
		}
		var_53_bool = var_1_string == "unlock_polyh";
		if(var_53_bool != 0) {
			var_54_string = ""; var_55_bool = 0;
			func_196("polyh@door1", (bool)0);
			goto Label_139;
		}
		var_65_bool = var_1_string == "cleanup";
		if(var_65_bool != 0) {
			GetVariable("d9q01", var_29_int);
			var_68_bool = var_29_int != (int)1000;
			if(var_68_bool != 0) {
				func_140();
			} else {
				func_156(var_29_int);
		}
			var_88_bool = var_1_string == "fail";
			if(var_88_bool != 0) {
				func_140();
				goto Label_139;
			}
			var_90_bool = var_1_string == "completed";
			if(var_90_bool == 0) goto Label_139;
			func_148();
		}
		goto Label_139;
	}
Label_139:
	return 28;
	
}


main(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	CreateObjectVector(var_0_object);
	GetMainOutdoorScene(var_2_object);
	var_3_object = Obj(); var_4_object = Obj(); var_5_string = ""; var_6_string = ""; var_7_string = "";
	var_2_object = var_4_object;
	func_178(var_3_object, var_4_object, "pt_d9q01_doberman1", "pers_doberman", "d9q01_doberman.xml");
	@@@var_0_object:add(var_3_object);
	var_21_object = Obj(); var_22_object = Obj(); var_23_string = ""; var_24_string = ""; var_25_string = "";
	var_2_object = var_22_object;
	func_178(var_21_object, var_22_object, "pt_d9q01_doberman2", "pers_doberman", "d9q01_doberman.xml");
	@@@var_0_object:add(var_21_object);
	var_26_object = Obj(); var_27_object = Obj(); var_28_string = ""; var_29_string = ""; var_30_string = "";
	var_2_object = var_27_object;
	func_178(var_26_object, var_27_object, "pt_d9q01_doberman3", "pers_doberman", "d9q01_doberman.xml");
	@@@var_0_object:add(var_26_object);
	
Label_32:
	Hold();
	goto Label_32;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_196(var_54_string, var_55_bool)
{
	var_56_object = Obj(); var_57_object = Obj();
	FindActor(var_57_object, var_54_string);
	var_58_bool = var_57_object == 0; //@nz
	if(var_58_bool != 0) {
		var_60_int = "Door " + var_54_string;
		var_62_int = var_60_int + " not found";
		Trace(var_62_int);
	} else {
		@@var_57_object:SetProperty("locked", var_55_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_140()
{
	SetVariable("d9q01", (int)-1);
	func_156(var_29_int);
	return 0;
}


func_172(var_84_object)
{
	var_85_object = Obj(); var_86_object = Obj();
	self(var_86_object);
	var_86_object = var_84_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_178(var_3_object, var_4_object, var_5_string, var_6_string, var_7_string)
{
	var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_object = Obj();
	@@var_4_object:GetLocator(var_5_string, var_12_bool, var_13_cvector, var_14_cvector);
	var_16_bool = var_12_bool == 0; //@nz
	if(var_16_bool != 0) {
		var_18_int = "Locator " + var_5_string;
		var_20_int = var_18_int + " doesn't exist";
		Trace(var_20_int);
	} else {
		@@var_4_object:AddStationaryActor(Obj(), var_13_cvector, var_14_cvector, var_6_string, var_7_string);
	}
	var_15_object = var_3_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_148()
{
	SetVariable("d9q01", (int)1000);
	func_156(var_29_int);
	return 0;
}


func_213(var_73_object)
{
	var_74_int = 0; var_75_int = 0; var_76_object = Obj(); var_77_int = 0; var_78_int = 0; var_79_object = Obj();
	var_80_object = var_73_object;
	if(var_80_object != 0) {
		@@var_73_object:size(var_77_int);
		var_78_int = 0;

	Label_219:
		var_81_bool = var_78_int < var_77_int;
		if(var_81_bool != 0) {
			@@var_73_object:get(var_79_object, var_78_int);
			var_82_object = var_79_object;
			if(var_82_object != 0) {
				@@var_79_object:Remove();
			}
			var_79_object = 0;
			var_78_int = var_78_int + (int)1;
			goto Label_219;
		}
		@@var_73_object:clear();
	}
	return 6;
}


func_156(var_0_object)
{
	EventDisable(26);
	var_71_string = ""; var_72_bool = 0;
	func_196("polyh@door1", (bool)1);
	var_73_object = Obj();
	var_73_object = var_0_object;
	func_213(var_73_object);
	var_84_object = Obj();
	func_172(var_84_object);
	RemoveActor(var_84_object);
	return 0;
}


