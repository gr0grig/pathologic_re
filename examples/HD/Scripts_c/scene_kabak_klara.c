// @IMPORTS: CreateIntVector/1,CreateObjectVector/1,Hold/0,GetLocator/3,AddActorByType/6,self/1,Trace/1,AddActor/6,AddScriptedActor/6,RemoveActor/1
// @STRINGS: W:pt_andrei|W:NPC_Andrei|W:NPC_Klara_Andrei.xml|A:add|W:pt_dance|W:pers_nudegirl_dance|W:nudegirl_dance.xml|W:pt_salesman|W:pers_dohodyaga|W:salesman_kabak.xml|W:ps_kabak_alkash1|W:cs_play_cycle.bin|W:ps_kabak_alkash2|W:ps_kabak_unosha1|W:ps_kabak_woman1|W:ps_kabak_worker1|W:noandrei|A:clear|W:pt_fireplace|W:scripted|W:fireplace.xml|A:GetItemCount|A:GetItem|A:GetItemAmount|A:IsItemSelected|A:RemoveAllItems|A:size|A:get|A:AddItem|A:SelectItem|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,bool,object,object,object,object,object,object,object,object params=0
// @EVENT_26: op=0x7e vars=string
// @EVENT_6: op=0x89 vars=
// @EVENT_5: op=0xe2 vars=
// @PE: 0x9,0x7e,0xe2,0xe9

task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_string)
{
	var_13_bool = var_11_string == "noandrei";
	if(var_13_bool != 0) {
		var_2_bool = false;
	} else {
		var_15_bool = var_11_string == "andrei";
		if(var_15_bool == 0) goto Label_136;
		var_2_bool = true;
	}
Label_136:
	return 0;
	
}


task_0_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	var_11_object = var_3_object;
	if(var_11_object != 0) {
		@@@var_5_object:clear();
		var_12_object = Obj(); var_13_object = Obj(); var_14_int = 0; var_15_object = Obj();
		var_13_object = var_3_object;
		var_15_object = var_5_object;
		func_240(var_12_object, var_13_object, (int)0, var_15_object);
		var_4_object = var_12_object;
		var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0;
		var_32_object = var_3_object;
		func_265(var_31_object, var_32_object, (int)0);
		var_6_object = var_31_object;
	}
	var_45_object = var_7_object;
	if(var_45_object != 0) {
		@@@var_9_object:clear();
		var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0; var_49_object = Obj();
		var_47_object = var_7_object;
		var_49_object = var_9_object;
		func_240(var_46_object, var_47_object, (int)0, var_49_object);
		var_8_object = var_46_object;
		var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0;
		var_51_object = var_7_object;
		func_265(var_50_object, var_51_object, (int)0);
		var_10_object = var_50_object;
	}
	func_233();
	return 0;
}


task_0_event_5(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	func_183(var_10_object);
	func_207(var_10_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object)
{
	CreateIntVector(var_5_object);
	CreateIntVector(var_9_object);
	var_2_bool = true;
	func_175(var_9_object, var_10_object);
	return 0;
}


func_355(var_53_object)
{
	var_54_int = 0; var_55_int = 0; var_56_object = Obj(); var_57_int = 0; var_58_int = 0; var_59_object = Obj();
	var_60_object = var_53_object;
	if(var_60_object != 0) {
		@@var_53_object:size(var_57_int);
		var_58_int = 0;

	Label_361:
		var_61_bool = var_58_int < var_57_int;
		if(var_61_bool != 0) {
			@@var_53_object:get(var_59_object, var_58_int);
			var_62_object = var_59_object;
			if(var_62_object != 0) {
				RemoveActor(var_59_object);
			}
			var_59_object = 0;
			var_58_int = var_58_int + (int)1;
			goto Label_361;
		}
		@@var_53_object:clear();
	}
	return 6;
}


func_323(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj();
	CreateObjectVector(var_28_object);
	var_28_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_317(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj();
	self(var_26_object);
	var_26_object = var_24_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_329(var_32_object, var_33_object, var_34_string, var_35_string, var_36_string)
{
	var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj(); var_42_bool = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_object = Obj();
	@@var_33_object:GetLocator(var_34_string, var_42_bool, var_43_cvector, var_44_cvector);
	var_46_bool = var_42_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_48_int = "Locator " + var_34_string;
		var_50_int = var_48_int + " doesn't exist";
		Trace(var_50_int);
	} else {
		AddActor(Obj(), var_35_string, var_33_object, var_43_cvector, var_44_cvector, var_36_string);
	}
	var_45_object = var_32_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_233()
{
	func_212(var_10_object);
	func_219(var_10_object);
	return 0;
}


func_265(var_31_object, var_32_object, var_33_int)
{
	var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; var_40_int = 0; var_41_bool = 0;
	CreateIntVector(var_38_object);
	@@var_32_object:GetItemCount(var_39_int, var_33_int);
	var_40_int = 0;
	
Label_271:
	var_42_bool = var_40_int < var_39_int;
	if(var_42_bool != 0) {
		@@var_32_object:IsItemSelected(var_41_bool, var_40_int, var_33_int);
		var_43_bool = var_41_bool;
		if(var_43_bool != 0) {
			@@var_38_object:add(var_40_int);
		}
		var_40_int = var_40_int + (int)1;
		goto Label_271;
	}
	var_38_object = var_31_object;
	return 8;
}
EMIT "Stack[-4] = 0";


func_9(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_30_object)
{
	var_31_bool = var_2_bool;
	if(var_31_bool != 0) {
		var_32_object = Obj(); var_33_object = Obj(); var_34_string = ""; var_35_string = ""; var_36_string = "";
		func_317(Obj());
		var_37_object = var_33_object;
		func_329(var_32_object, var_33_object, "pt_andrei", "NPC_Andrei", "NPC_Klara_Andrei.xml");
		var_7_object = var_32_object;
		var_51_object = var_8_object;
		if(var_51_object != 0) {
			var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj();
			var_52_object = var_7_object;
			var_54_object = var_8_object;
			var_55_object = var_9_object;
			var_56_object = var_10_object;
			func_285(var_52_object, (int)0, var_54_object, var_55_object, var_56_object);
		}
		@@var_30_object:add(var_7_object);
	}
	var_76_object = Obj(); var_77_object = Obj(); var_78_string = ""; var_79_string = ""; var_80_string = "";
	func_317(Obj());
	var_81_object = var_77_object;
	func_329(var_76_object, var_77_object, "pt_dance", "pers_nudegirl_dance", "nudegirl_dance.xml");
	@@var_30_object:add(var_76_object);
	var_82_object = Obj(); var_83_object = Obj(); var_84_string = ""; var_85_string = ""; var_86_string = "";
	func_317(Obj());
	var_87_object = var_83_object;
	func_329(var_82_object, var_83_object, "pt_salesman", "pers_dohodyaga", "salesman_kabak.xml");
	var_3_object = var_82_object;
	var_88_object = var_4_object;
	if(var_88_object != 0) {
		var_89_object = Obj(); var_90_int = 0; var_91_object = Obj(); var_92_object = Obj(); var_93_object = Obj();
		var_89_object = var_3_object;
		var_91_object = var_4_object;
		var_92_object = var_5_object;
		var_93_object = var_6_object;
		func_285(var_89_object, (int)0, var_91_object, var_92_object, var_93_object);
	}
	@@var_30_object:add(var_3_object);
	var_94_object = Obj(); var_95_object = Obj(); var_96_string = ""; var_97_string = "";
	func_317(Obj());
	var_98_object = var_95_object;
	func_347(var_94_object, var_95_object, "ps_kabak_alkash1", "cs_play_cycle.bin");
	@@var_30_object:add(var_94_object);
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = "";
	func_317(Obj());
	var_107_object = var_104_object;
	func_347(var_103_object, var_104_object, "ps_kabak_alkash2", "cs_play_cycle.bin");
	@@var_30_object:add(var_103_object);
	var_108_object = Obj(); var_109_object = Obj(); var_110_string = ""; var_111_string = "";
	func_317(Obj());
	var_112_object = var_109_object;
	func_347(var_108_object, var_109_object, "ps_kabak_unosha1", "cs_play_cycle.bin");
	@@var_30_object:add(var_108_object);
	var_113_object = Obj(); var_114_object = Obj(); var_115_string = ""; var_116_string = "";
	func_317(Obj());
	var_117_object = var_114_object;
	func_347(var_113_object, var_114_object, "ps_kabak_woman1", "cs_play_cycle.bin");
	@@var_30_object:add(var_113_object);
	var_118_object = Obj(); var_119_object = Obj(); var_120_string = ""; var_121_string = "";
	func_317(Obj());
	var_122_object = var_119_object;
	func_347(var_118_object, var_119_object, "ps_kabak_worker1", "cs_play_cycle.bin");
	@@var_30_object:add(var_118_object);
	return 0;
}


func_219(var_1_object)
{
	var_64_object = Obj();
	var_64_object = var_1_object;
	func_355(var_64_object);
	@@@var_1_object:clear();
	return 0;
}


func_175(var_0_object, var_1_object)
{
	CreateObjectVector(var_0_object);
	CreateObjectVector(var_1_object);
	
Label_179:
	Hold();
	goto Label_179;
}
EMIT "Return(); Pop(0)";


func_240(var_12_object, var_13_object, var_14_int, var_15_object)
{
	var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj(); var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_int = 0;
	func_323(Obj());
	var_26_object = var_21_object;
	@@var_13_object:GetItemCount(var_22_int, var_14_int);
	var_23_int = 0;
	
Label_248:
	var_29_bool = var_23_int < var_22_int;
	if(var_29_bool != 0) {
		@@var_13_object:GetItem(var_24_object, var_23_int, var_14_int);
		@@var_21_object:add(var_24_object);
		@@var_13_object:GetItemAmount(var_25_int, var_23_int, var_14_int);
		@@var_15_object:add(var_25_int);
		var_24_object = 0;
		var_23_int = var_23_int + (int)1;
		goto Label_248;
	}
	var_21_object = var_12_object;
	return 10;
}
EMIT "Stack[-5] = 0";


func_207(var_1_object)
{
	var_30_object = Obj();
	var_30_object = var_1_object;
	func_9(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_30_object);
	return 0;
}


func_212(var_0_object)
{
	var_53_object = Obj();
	var_53_object = var_0_object;
	func_355(var_53_object);
	@@@var_0_object:clear();
	return 0;
}


func_183(var_0_object)
{
	var_11_int = 0; var_12_string = ""; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_string = ""; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj();
	var_16_int = 1;
	
Label_185:
	var_17_string = "pt_fireplace" + var_16_int;
	GetLocator(var_17_string, var_18_bool, var_19_cvector);
	var_22_bool = var_18_bool == 0; //@nz
	if(var_22_bool != 0) {
	} else {
		var_24_object = Obj();
		func_317(var_24_object);
		AddActorByType(var_20_object, "scripted", var_24_object, var_19_cvector, CVector(0.0, 0.0, 1.0), "fireplace.xml");
		@@@var_0_object:add(var_20_object);
		var_20_object = 0;
		var_16_int = var_16_int + (int)1;
		goto Label_185;
	}
	return 10;
	
}


func_347(var_94_object, var_95_object, var_96_string, var_97_string)
{
	var_99_object = Obj(); var_100_object = Obj();
	AddScriptedActor(var_100_object, var_96_string, var_97_string, var_95_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_100_object = var_94_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_285(var_52_object, var_53_int, var_54_object, var_55_object, var_56_object)
{
	var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_object = Obj(); var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0;
	@@var_52_object:RemoveAllItems(var_53_int);
	@@var_54_object:size(var_64_int);
	var_65_int = 0;
	
Label_291:
	var_71_bool = var_65_int < var_64_int;
	if(var_71_bool != 0) {
		@@var_54_object:get(var_66_object, var_65_int);
		@@var_55_object:get(var_67_int, var_65_int);
		@@var_52_object:AddItem(var_68_bool, var_66_object, var_53_int, var_67_int);
		var_66_object = 0;
		var_65_int = var_65_int + (int)1;
		goto Label_291;
	}
	@@var_56_object:size(var_64_int);
	var_69_int = 0;
	
Label_306:
	var_73_bool = var_69_int < var_64_int;
	if(var_73_bool != 0) {
		@@var_56_object:get(var_70_int, var_69_int);
		@@var_52_object:SelectItem(var_70_int, (bool)1, var_53_int);
		var_69_int = var_69_int + (int)1;
		goto Label_306;
	}
	return 14;
}


