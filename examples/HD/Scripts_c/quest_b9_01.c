// @IMPORTS: GetSceneByName/2,Trigger/2,Hold/0,Trace/1,GetMainOutdoorScene/1,PlaySound/1,SetVariable/2,GetVariable/2,RemoveActor/1,self/1,AddActor/6,FindActor/2
// @STRINGS: W:boiny@door1|W:cot_eva|W:icot_eva_door|W:nodanko|W:place_mdoberman|W:pt_b9q01_mdoberman|W:pers_doberman|W:b9q01_mdoberman.xml|W:remove_mdoberman|A:Remove|W:init_factory|W:factory@door1|W:ifactory_grid_door|W:pt_b9q01_Danko|W:NPC_Bakalavr|W:b9q01_danko.xml|W:pt_b9q01_doberman1|W:b9q01_doberman1.xml|W:pt_b9q01_doberman2|W:b9q01_doberman2.xml|W:factory_fight|W:attack|W:ifactory@door1|W:door_close|W:doberman_dead|A:IsDead|W:door_open|W:b9q01DankoFree|W:danko_free|W:reset_factory|W:cleanup|W:b9q01|W:remove_danko|W:fail|W:completed|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:Close
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,object params=0
// @EVENT_26: op=0x16 vars=string

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_bool = 0; var_8_int = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_object = Obj(); var_12_bool = 0; var_13_int = 0; var_14_object = Obj();
	Trace(var_4_string);
	var_16_bool = var_4_string == "place_mdoberman";
	if(var_16_bool != 0) {
		GetMainOutdoorScene(var_10_object);
		var_17_object = Obj(); var_18_object = Obj(); var_19_string = ""; var_20_string = ""; var_21_string = "";
		var_10_object = var_18_object;
		func_305(var_17_object, var_18_object, "pt_b9q01_mdoberman", "pers_doberman", "b9q01_mdoberman.xml");
		var_0_object = var_17_object;
		var_10_object = 0;
	} else {
		var_36_bool = var_4_string == "remove_mdoberman";
		if(var_36_bool != 0) {
			@@@var_0_object:Remove();
			goto Label_210;
		}
		var_38_bool = var_4_string == "init_factory";
		if(var_38_bool != 0) {
			GetSceneByName(var_11_object, "factory");
			var_40_string = ""; var_41_bool = 0;
			func_323("factory@door1", (bool)0);
			var_50_string = ""; var_51_bool = 0;
			func_340("ifactory_grid_door", (bool)1);
			var_61_object = Obj(); var_62_object = Obj(); var_63_string = ""; var_64_string = ""; var_65_string = "";
			var_11_object = var_62_object;
			func_287(var_61_object, var_62_object, "pt_b9q01_Danko", "NPC_Bakalavr", "b9q01_danko.xml");
			var_1_object = var_61_object;
			var_79_object = Obj(); var_80_object = Obj(); var_81_string = ""; var_82_string = ""; var_83_string = "";
			var_11_object = var_80_object;
			func_287(var_79_object, var_80_object, "pt_b9q01_doberman1", "pers_doberman", "b9q01_doberman1.xml");
			var_2_object = var_79_object;
			var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = ""; var_88_string = "";
			var_11_object = var_85_object;
			func_287(var_84_object, var_85_object, "pt_b9q01_doberman2", "pers_doberman", "b9q01_doberman2.xml");
			var_3_object = var_84_object;
			var_11_object = 0;
			goto Label_210;
		}
		var_90_bool = var_4_string == "factory_fight";
		if(var_90_bool != 0) {
			Trigger(var_2_object, "attack");
			Trigger(var_3_object, "attack");
			var_93_string = ""; var_94_bool = 0;
			func_323("ifactory@door1", (bool)1);
			PlaySound("door_close");
			goto Label_210;
		}
		var_97_bool = var_4_string == "doberman_dead";
		if(var_97_bool != 0) {
			@@@var_2_object:IsDead(var_12_bool);
			var_98_bool = var_12_bool;
			if(var_98_bool != 0) {
				@@@var_3_object:IsDead(var_12_bool);
				var_99_bool = var_12_bool;
				if(var_99_bool != 0) {
					var_100_string = ""; var_101_bool = 0;
					func_323("ifactory@door1", (bool)0);
					var_102_string = ""; var_103_bool = 0;
					func_340("ifactory_grid_door", (bool)0);
					PlaySound("door_open");
					SetVariable("b9q01DankoFree", (int)1);
				}
			}
			goto Label_210;
		}
		var_108_bool = var_4_string == "danko_free";
		if(var_108_bool != 0) {
			var_109_string = ""; var_110_bool = 0;
			func_340("ifactory_grid_door", (bool)0);
			PlaySound("door_open");
			var_112_string = ""; var_113_bool = 0;
			func_323("factory@door1", (bool)1);
			goto Label_210;
		}
		var_115_bool = var_4_string == "reset_factory";
		if(var_115_bool != 0) {
			func_227(var_12_bool, var_13_int, var_14_object);
			var_119_string = ""; var_120_bool = 0;
			func_323("factory@door1", (bool)1);
			goto Label_210;
		}
		var_122_bool = var_4_string == "cleanup";
		if(var_122_bool != 0) {
			GetVariable("b9q01", var_13_int);
			var_125_bool = var_13_int != (int)1000;
			if(var_125_bool != 0) {
				func_211();
			} else {
				func_240(var_14_object);
		}
			var_145_bool = var_4_string == "remove_danko";
			if(var_145_bool != 0) {
				GetSceneByName(var_14_object, "cot_eva");
				var_147_string = ""; var_148_bool = 0;
				func_340("icot_eva_door", (bool)0);
				Trigger(var_14_object, "nodanko");
				var_14_object = 0;
				goto Label_210;
			}
			var_151_bool = var_4_string == "fail";
			if(var_151_bool != 0) {
				func_211();
				goto Label_210;
			}
			var_153_bool = var_4_string == "completed";
			if(var_153_bool == 0) goto Label_210;
			func_219();
		}
		goto Label_210;
	}
Label_210:
	return 10;
	
}


main(var_0_object, var_1_object, var_2_object, var_3_object)
{
	var_4_object = Obj(); var_5_object = Obj();
	var_6_string = ""; var_7_bool = 0;
	func_323("boiny@door1", (bool)0);
	GetSceneByName(var_5_object, "cot_eva");
	var_17_string = ""; var_18_bool = 0;
	func_340("icot_eva_door", (bool)0);
	Trigger(var_5_object, "nodanko");
	
Label_17:
	Hold();
	goto Label_17;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_323(var_6_string, var_7_bool)
{
	var_8_object = Obj(); var_9_object = Obj();
	FindActor(var_9_object, var_6_string);
	var_10_bool = var_9_object == 0; //@nz
	if(var_10_bool != 0) {
		var_12_int = "Door " + var_6_string;
		var_14_int = var_12_int + " not found";
		Trace(var_14_int);
	} else {
		@@var_9_object:SetProperty("locked", var_7_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_227(var_1_object, var_2_object, var_3_object)
{
	var_116_object = var_1_object;
	if(var_116_object != 0) {
		RemoveActor(var_1_object);
	}
	var_117_object = var_2_object;
	if(var_117_object != 0) {
		RemoveActor(var_2_object);
	}
	var_118_object = var_3_object;
	if(var_118_object != 0) {
		RemoveActor(var_3_object);
	}
	return 0;
}


func_240(var_0_object)
{
	var_128_object = Obj(); var_129_object = Obj();
	var_130_object = var_0_object;
	if(var_130_object != 0) {
		@@@var_0_object:Remove();
	}
	func_227(var_14_object, var_128_object, var_129_object);
	var_131_string = ""; var_132_bool = 0;
	func_323("ifactory@door1", (bool)0);
	var_133_string = ""; var_134_bool = 0;
	func_340("ifactory_grid_door", (bool)0);
	var_135_string = ""; var_136_bool = 0;
	func_323("boiny@door1", (bool)1);
	GetSceneByName(var_129_object, "cot_eva");
	var_138_string = ""; var_139_bool = 0;
	func_340("icot_eva_door", (bool)0);
	Trigger(var_129_object, "danko");
	var_141_object = Obj();
	func_281(var_141_object);
	RemoveActor(var_141_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_305(var_17_object, var_18_object, var_19_string, var_20_string, var_21_string)
{
	var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj();
	@@var_18_object:GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector);
	var_30_bool = var_26_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_32_int = "Locator " + var_19_string;
		var_34_int = var_32_int + " doesn't exist";
		Trace(var_34_int);
	} else {
		@@var_18_object:AddStationaryActor(Obj(), var_27_cvector, var_28_cvector, var_20_string, var_21_string);
	}
	var_29_object = var_17_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_211()
{
	SetVariable("b9q01", (int)-1);
	func_240(var_14_object);
	return 0;
}


func_340(var_17_string, var_18_bool)
{
	var_19_object = Obj(); var_20_object = Obj();
	FindActor(var_20_object, var_17_string);
	var_21_bool = var_20_object == 0; //@nz
	if(var_21_bool != 0) {
		var_23_int = "Door " + var_17_string;
		var_25_int = var_23_int + " not found";
		Trace(var_25_int);
	} else {
		var_26_bool = var_18_bool;
		if(var_26_bool != 0) {
			@@var_20_object:Close();
		}
		@@var_20_object:SetProperty("locked", var_18_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_281(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj();
	self(var_143_object);
	var_143_object = var_141_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_219()
{
	SetVariable("b9q01", (int)1000);
	func_240(var_14_object);
	return 0;
}


func_287(var_61_object, var_62_object, var_63_string, var_64_string, var_65_string)
{
	var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_object = Obj(); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj();
	@@var_62_object:GetLocator(var_63_string, var_70_bool, var_71_cvector, var_72_cvector);
	var_74_bool = var_70_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_76_int = "Locator " + var_63_string;
		var_78_int = var_76_int + " doesn't exist";
		Trace(var_78_int);
	} else {
		AddActor(Obj(), var_64_string, var_62_object, var_71_cvector, var_72_cvector, var_65_string);
	}
	var_73_object = var_61_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


