// @IMPORTS: CreateIntVector/1,CreateObjectVector/1,Hold/0,GetLocator/3,AddActorByType/6,self/1,Trace/1,AddActor/6,AddScriptedActor/6,RemoveActor/1
// @STRINGS: W:pt_andrei|W:NPC_Andrei|W:NPC_Danko_Andrei.xml|A:add|W:pt_dance|W:pers_nudegirl_dance|W:nudegirl_dance.xml|W:pt_salesman|W:pers_dohodyaga|W:salesman_kabak.xml|W:ps_kabak_alkash1|W:cs_play_cycle.bin|W:ps_kabak_alkash2|W:ps_kabak_unosha1|W:ps_kabak_woman1|W:ps_kabak_worker1|W:noandrei|A:clear|W:pt_fireplace|W:scripted|W:fireplace.xml|A:GetItemCount|A:GetItem|A:GetItemAmount|A:IsItemSelected|A:RemoveAllItems|A:size|A:get|A:AddItem|A:SelectItem|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,bool,object,object,object,object params=0
// @EVENT_26: op=0x71 vars=string
// @EVENT_6: op=0x7c vars=
// @EVENT_5: op=0xc4 vars=
// @PE: 0x7,0x71,0xc4,0xcb

task_0_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_string)
{
	var_9_bool = var_7_string == "noandrei";
	if(var_9_bool != 0) {
		var_2_bool = false;
	} else {
		var_11_bool = var_7_string == "andrei";
		if(var_11_bool == 0) goto Label_123;
		var_2_bool = true;
	}
Label_123:
	return 0;
	
}


task_0_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object)
{
	var_7_object = var_3_object;
	if(var_7_object != 0) {
		@@@var_5_object:clear();
		var_8_object = Obj(); var_9_object = Obj(); var_10_int = 0; var_11_object = Obj();
		var_9_object = var_3_object;
		var_11_object = var_5_object;
		func_210(var_8_object, var_9_object, (int)0, var_11_object);
		var_4_object = var_8_object;
		var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0;
		var_28_object = var_3_object;
		func_235(var_27_object, var_28_object, (int)0);
		var_6_object = var_27_object;
	}
	func_203();
	return 0;
}


task_0_event_5(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object)
{
	func_153(var_6_object);
	func_177(var_6_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object)
{
	CreateIntVector(var_5_object);
	var_2_bool = true;
	func_145(var_5_object, var_6_object);
	return 0;
}


func_287(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_325(var_41_object)
{
	var_42_int = 0; var_43_int = 0; var_44_object = Obj(); var_45_int = 0; var_46_int = 0; var_47_object = Obj();
	var_48_object = var_41_object;
	if(var_48_object != 0) {
		@@var_41_object:size(var_45_int);
		var_46_int = 0;

	Label_331:
		var_49_bool = var_46_int < var_45_int;
		if(var_49_bool != 0) {
			@@var_41_object:get(var_47_object, var_46_int);
			var_50_object = var_47_object;
			if(var_50_object != 0) {
				RemoveActor(var_47_object);
			}
			var_47_object = 0;
			var_46_int = var_46_int + (int)1;
			goto Label_331;
		}
		@@var_41_object:clear();
	}
	return 6;
}


func_293(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateObjectVector(var_24_object);
	var_24_object = var_22_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_7(var_3_object, var_4_object, var_5_object, var_6_object, var_26_object)
{
	var_27_bool = var_2_bool;
	if(var_27_bool != 0) {
		var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
		func_287(Obj());
		var_33_object = var_29_object;
		func_299(var_28_object, var_29_object, "pt_andrei", "NPC_Andrei", "NPC_Danko_Andrei.xml");
		@@var_26_object:add(var_28_object);
	}
	var_47_object = Obj(); var_48_object = Obj(); var_49_string = ""; var_50_string = ""; var_51_string = "";
	func_287(Obj());
	var_52_object = var_48_object;
	func_299(var_47_object, var_48_object, "pt_dance", "pers_nudegirl_dance", "nudegirl_dance.xml");
	@@var_26_object:add(var_47_object);
	var_53_object = Obj(); var_54_object = Obj(); var_55_string = ""; var_56_string = ""; var_57_string = "";
	func_287(Obj());
	var_58_object = var_54_object;
	func_299(var_53_object, var_54_object, "pt_salesman", "pers_dohodyaga", "salesman_kabak.xml");
	var_3_object = var_53_object;
	var_59_object = var_4_object;
	if(var_59_object != 0) {
		var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_object = Obj();
		var_60_object = var_3_object;
		var_62_object = var_4_object;
		var_63_object = var_5_object;
		var_64_object = var_6_object;
		func_255(var_60_object, (int)0, var_62_object, var_63_object, var_64_object);
	}
	@@var_26_object:add(var_3_object);
	var_84_object = Obj(); var_85_object = Obj(); var_86_string = ""; var_87_string = "";
	func_287(Obj());
	var_88_object = var_85_object;
	func_317(var_84_object, var_85_object, "ps_kabak_alkash1", "cs_play_cycle.bin");
	@@var_26_object:add(var_84_object);
	var_93_object = Obj(); var_94_object = Obj(); var_95_string = ""; var_96_string = "";
	func_287(Obj());
	var_97_object = var_94_object;
	func_317(var_93_object, var_94_object, "ps_kabak_alkash2", "cs_play_cycle.bin");
	@@var_26_object:add(var_93_object);
	var_98_object = Obj(); var_99_object = Obj(); var_100_string = ""; var_101_string = "";
	func_287(Obj());
	var_102_object = var_99_object;
	func_317(var_98_object, var_99_object, "ps_kabak_unosha1", "cs_play_cycle.bin");
	@@var_26_object:add(var_98_object);
	var_103_object = Obj(); var_104_object = Obj(); var_105_string = ""; var_106_string = "";
	func_287(Obj());
	var_107_object = var_104_object;
	func_317(var_103_object, var_104_object, "ps_kabak_woman1", "cs_play_cycle.bin");
	@@var_26_object:add(var_103_object);
	var_108_object = Obj(); var_109_object = Obj(); var_110_string = ""; var_111_string = "";
	func_287(Obj());
	var_112_object = var_109_object;
	func_317(var_108_object, var_109_object, "ps_kabak_worker1", "cs_play_cycle.bin");
	@@var_26_object:add(var_108_object);
	return 0;
}


func_299(var_28_object, var_29_object, var_30_string, var_31_string, var_32_string)
{
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_object = Obj(); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_object = Obj();
	@@var_29_object:GetLocator(var_30_string, var_38_bool, var_39_cvector, var_40_cvector);
	var_42_bool = var_38_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_44_int = "Locator " + var_30_string;
		var_46_int = var_44_int + " doesn't exist";
		Trace(var_46_int);
	} else {
		AddActor(Obj(), var_31_string, var_29_object, var_39_cvector, var_40_cvector, var_32_string);
	}
	var_41_object = var_28_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_235(var_27_object, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_bool = 0;
	CreateIntVector(var_34_object);
	@@var_28_object:GetItemCount(var_35_int, var_29_int);
	var_36_int = 0;
	
Label_241:
	var_38_bool = var_36_int < var_35_int;
	if(var_38_bool != 0) {
		@@var_28_object:IsItemSelected(var_37_bool, var_36_int, var_29_int);
		var_39_bool = var_37_bool;
		if(var_39_bool != 0) {
			@@var_34_object:add(var_36_int);
		}
		var_36_int = var_36_int + (int)1;
		goto Label_241;
	}
	var_34_object = var_27_object;
	return 8;
}
EMIT "Stack[-4] = 0";


func_203()
{
	func_182(var_6_object);
	func_189(var_6_object);
	return 0;
}


func_145(var_0_object, var_1_object)
{
	CreateObjectVector(var_0_object);
	CreateObjectVector(var_1_object);
	
Label_149:
	Hold();
	goto Label_149;
}
EMIT "Return(); Pop(0)";


func_210(var_8_object, var_9_object, var_10_int, var_11_object)
{
	var_12_object = Obj(); var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_int = 0; var_19_int = 0; var_20_object = Obj(); var_21_int = 0;
	func_293(Obj());
	var_22_object = var_17_object;
	@@var_9_object:GetItemCount(var_18_int, var_10_int);
	var_19_int = 0;
	
Label_218:
	var_25_bool = var_19_int < var_18_int;
	if(var_25_bool != 0) {
		@@var_9_object:GetItem(var_20_object, var_19_int, var_10_int);
		@@var_17_object:add(var_20_object);
		@@var_9_object:GetItemAmount(var_21_int, var_19_int, var_10_int);
		@@var_11_object:add(var_21_int);
		var_20_object = 0;
		var_19_int = var_19_int + (int)1;
		goto Label_218;
	}
	var_17_object = var_8_object;
	return 10;
}
EMIT "Stack[-5] = 0";


func_177(var_1_object)
{
	var_26_object = Obj();
	var_26_object = var_1_object;
	func_7(var_3_object, var_4_object, var_5_object, var_6_object, var_26_object);
	return 0;
}


func_182(var_0_object)
{
	var_41_object = Obj();
	var_41_object = var_0_object;
	func_325(var_41_object);
	@@@var_0_object:clear();
	return 0;
}


func_189(var_1_object)
{
	var_52_object = Obj();
	var_52_object = var_1_object;
	func_325(var_52_object);
	@@@var_1_object:clear();
	return 0;
}


func_153(var_0_object)
{
	var_7_int = 0; var_8_string = ""; var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_object = Obj(); var_12_int = 0; var_13_string = ""; var_14_bool = 0; var_15_cvector = CVector(0,0,0); var_16_object = Obj();
	var_12_int = 1;
	
Label_155:
	var_13_string = "pt_fireplace" + var_12_int;
	GetLocator(var_13_string, var_14_bool, var_15_cvector);
	var_18_bool = var_14_bool == 0; //@nz
	if(var_18_bool != 0) {
	} else {
		var_20_object = Obj();
		func_287(var_20_object);
		AddActorByType(var_16_object, "scripted", var_20_object, var_15_cvector, CVector(0.0, 0.0, 1.0), "fireplace.xml");
		@@@var_0_object:add(var_16_object);
		var_16_object = 0;
		var_12_int = var_12_int + (int)1;
		goto Label_155;
	}
	return 10;
	
}


func_317(var_84_object, var_85_object, var_86_string, var_87_string)
{
	var_89_object = Obj(); var_90_object = Obj();
	AddScriptedActor(var_90_object, var_86_string, var_87_string, var_85_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0));
	var_90_object = var_84_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_255(var_60_object, var_61_int, var_62_object, var_63_object, var_64_object)
{
	var_65_int = 0; var_66_int = 0; var_67_object = Obj(); var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_int = 0; var_73_int = 0; var_74_object = Obj(); var_75_int = 0; var_76_bool = 0; var_77_int = 0; var_78_int = 0;
	@@var_60_object:RemoveAllItems(var_61_int);
	@@var_62_object:size(var_72_int);
	var_73_int = 0;
	
Label_261:
	var_79_bool = var_73_int < var_72_int;
	if(var_79_bool != 0) {
		@@var_62_object:get(var_74_object, var_73_int);
		@@var_63_object:get(var_75_int, var_73_int);
		@@var_60_object:AddItem(var_76_bool, var_74_object, var_61_int, var_75_int);
		var_74_object = 0;
		var_73_int = var_73_int + (int)1;
		goto Label_261;
	}
	@@var_64_object:size(var_72_int);
	var_77_int = 0;
	
Label_276:
	var_81_bool = var_77_int < var_72_int;
	if(var_81_bool != 0) {
		@@var_64_object:get(var_78_int, var_77_int);
		@@var_60_object:SelectItem(var_78_int, (bool)1, var_61_int);
		var_77_int = var_77_int + (int)1;
		goto Label_276;
	}
	return 14;
}


