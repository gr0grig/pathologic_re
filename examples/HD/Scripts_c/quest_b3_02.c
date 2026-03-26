// @IMPORTS: SetVariable/2,Trace/1,GetMainOutdoorScene/1,Trigger/2,GetVariable/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,CreateObjectVector/1,FindActor/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:b3q02|W:place_grabitel1|W:warehouse_notkin@door1|W:pt_b3q02_grabitel1_1|W:pers_grabitel|W:b3q02_grabitel1.xml|A:add|W:pt_b3q02_grabitel1_2|W:remove_grabitel|W:grabitel_attack|A:size|A:get|A:GetActor|W:grabitel_dead|W:place_grabitel2|W:pt_b3q02_grabitel2_|W:b3q02_grabitel2.xml|W:fail|W:completed|A:clear|W:b3q02Dead|A:GetLocator|W:Locator |W: doesn't exist|A:AddStationaryActor|W:Door |W: not found|W:locked|A:SetProperty|A:Remove|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,int params=0
// @EVENT_26: op=0xd vars=string
// @EVENT_9: op=0xd5 vars=int,float
// @PE: 0xd5

task_0_event_26(var_0_object, var_1_int, var_2_string)
{
	var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_int = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_int = 0;
	Trace(var_2_string);
	var_20_bool = var_2_string == "place_grabitel1";
	if(var_20_bool != 0) {
		var_21_string = ""; var_22_bool = 0;
		func_248("warehouse_notkin@door1", (bool)1);
		GetMainOutdoorScene(var_11_object);
		var_31_object = Obj(); var_32_object = Obj(); var_33_string = ""; var_34_string = ""; var_35_string = "";
		var_11_object = var_32_object;
		func_230(var_31_object, var_32_object, "pt_b3q02_grabitel1_1", "pers_grabitel", "b3q02_grabitel1.xml");
		@@@var_0_object:add(var_31_object);
		var_49_object = Obj(); var_50_object = Obj(); var_51_string = ""; var_52_string = ""; var_53_string = "";
		var_11_object = var_50_object;
		func_230(var_49_object, var_50_object, "pt_b3q02_grabitel1_2", "pers_grabitel", "b3q02_grabitel1.xml");
		@@@var_0_object:add(var_49_object);
		var_11_object = 0;
	} else {
		var_55_bool = var_2_string == "remove_grabitel";
		if(var_55_bool != 0) {
			var_56_object = Obj();
			var_56_object = var_0_object;
			func_265(var_56_object);
			goto Label_129;
		}
		var_68_bool = var_2_string == "grabitel_attack";
		if(var_68_bool != 0) {
			@@@var_0_object:size(var_12_int);
			var_13_int = 0;

		Label_60:
			var_69_bool = var_13_int < var_12_int;
			if(var_69_bool != 0) {
				@@@var_0_object:get(var_14_object, var_13_int);
				var_70_object = var_14_object;
				if(var_70_object != 0) {
					@@var_14_object:GetActor(var_15_object);
					var_71_object = var_15_object;
					if(var_71_object != 0) {
						Trigger(var_15_object, "attack");
					}
					var_15_object = 0;
				}
				var_14_object = 0;
				var_13_int = var_13_int + (int)1;
				goto Label_60;
			}
			goto Label_129;
		}
		var_75_bool = var_2_string == "grabitel_dead";
		if(var_75_bool != 0) {
			@@@var_0_object:size(var_16_int);
			var_1_int = var_1_int + (int)1;
			var_77_bool = var_1_int == var_16_int;
			if(var_77_bool != 0) {
				func_173(var_18_int);
			}
			goto Label_129;
		}
		var_109_bool = var_2_string == "place_grabitel2";
		if(var_109_bool != 0) {
			GetMainOutdoorScene(var_17_object);
			var_18_int = 1;

		Label_98:
			var_111_bool = var_18_int <= (int)4;
			if(var_111_bool != 0) {
				var_112_object = Obj(); var_113_object = Obj(); var_114_string = ""; var_115_string = ""; var_116_string = "";
				var_17_object = var_113_object;
				var_114_string = "pt_b3q02_grabitel2_" + var_18_int;
				func_230(var_112_object, var_113_object, var_114_string, "pers_grabitel", "b3q02_grabitel2.xml");
				@@@var_0_object:add(var_112_object);
				var_18_int = var_18_int + (int)1;
				goto Label_98;
			}
			var_17_object = 0;
			goto Label_129;
		}
		var_120_bool = var_2_string == "fail";
		if(var_120_bool != 0) {
			func_141();
			goto Label_129;
		}
		var_130_bool = var_2_string == "completed";
		if(var_130_bool == 0) goto Label_129;
		func_149();
	}
Label_129:
	return 16;
	
}


task_0_event_9(var_0_object, var_1_int, var_2_int, var_3_float)
{
	func_130();
	return 0;
}


main(var_0_object, var_1_int)
{
	SetVariable("b3q02", (int)1);
	var_4_object = Obj();
	func_224(var_4_object);
	var_0_object = var_4_object;
	var_7_int = 0;
	func_194((int)3);
	return 0;
}


func_224(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_194(var_7_int)
{
	var_8_float = 0; var_9_float = 0;
	GetGameTime(var_9_float);
	var_11_float = var_7_int * (int)24;
	var_12_bool = var_9_float >= var_11_float;
	if(var_12_bool != 0) {
		func_157(var_9_float);
	} else {
		var_39_float = var_7_int * (int)24;
		SetTimeEvent((int)0, var_39_float);
		Hold();
	}
	return 2;
	
}


func_130()
{
	var_4_int = 0; var_5_int = 0;
	GetVariable("b3q02", var_5_int);
	var_8_bool = var_5_int != (int)1000;
	if(var_8_bool != 0) {
		func_141();
	}
	return 2;
}


func_312(var_86_bool, var_87_object, var_88_int)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_int = 0; var_92_object = Obj(); var_93_object = Obj(); var_94_int = 0;
	func_299(Obj());
	var_95_object = var_92_object;
	@@var_92_object:Find(var_88_int, var_93_object);
	var_100_bool = var_93_object == 0; //@nz
	if(var_100_bool != 0) {
		var_102_int = "Can't find diary parent with id: " + var_88_int;
		Trace(var_102_int);
		var_86_bool = 0;
		return 6;
	}
	@@var_93_object:AddChild(var_87_object);
	SendWorldWndMessage((int)7);
	@@var_87_object:GetCategory(var_94_int);
	SetDiarySection(var_94_int);
	var_86_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_230(var_31_object, var_32_object, var_33_string, var_34_string, var_35_string)
{
	var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_object = Obj(); var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_object = Obj();
	@@var_32_object:GetLocator(var_33_string, var_40_bool, var_41_cvector, var_42_cvector);
	var_44_bool = var_40_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_46_int = "Locator " + var_33_string;
		var_48_int = var_46_int + " doesn't exist";
		Trace(var_48_int);
	} else {
		@@var_32_object:AddStationaryActor(Obj(), var_41_cvector, var_42_cvector, var_34_string, var_35_string);
	}
	var_43_object = var_31_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_265(var_13_object)
{
	var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_int = 0; var_19_object = Obj();
	var_20_object = var_13_object;
	if(var_20_object != 0) {
		@@var_13_object:size(var_17_int);
		var_18_int = 0;

	Label_271:
		var_21_bool = var_18_int < var_17_int;
		if(var_21_bool != 0) {
			@@var_13_object:get(var_19_object, var_18_int);
			var_22_object = var_19_object;
			if(var_22_object != 0) {
				@@var_19_object:Remove();
			}
			var_19_object = 0;
			var_18_int = var_18_int + (int)1;
			goto Label_271;
		}
		@@var_13_object:clear();
	}
	return 6;
}


func_299(var_95_object)
{
	var_96_object = Obj(); var_97_object = Obj();
	GetDiaryRoot(var_97_object);
	var_98_bool = var_97_object == 0; //@nz
	if(var_98_bool != 0) {
		Trace("Can't retrieve diary root");
		var_95_object = 0;
		return 2;
	}
	var_97_object = var_95_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_173(var_0_object)
{
	var_78_int = 0; var_79_int = 0;
	@@@var_0_object:size(var_79_int);
	var_80_bool = var_79_int == 0; //@nz
	if(var_80_bool != 0) {
		return 2;
	}
	@@@var_0_object:clear();
	func_286();
	var_104_string = ""; var_105_bool = 0;
	func_248("warehouse_notkin@door1", (bool)0);
	SetVariable("b3q02Dead", (bool)1);
	return 2;
}


func_141()
{
	SetVariable("b3q02", (int)-1);
	func_157(var_5_int);
	return 0;
}


func_149()
{
	SetVariable("b3q02", (int)1000);
	func_157(var_18_int);
	return 0;
}


func_248(var_24_string, var_25_bool)
{
	var_26_object = Obj(); var_27_object = Obj();
	FindActor(var_27_object, var_24_string);
	var_28_bool = var_27_object == 0; //@nz
	if(var_28_bool != 0) {
		var_30_int = "Door " + var_24_string;
		var_32_int = var_30_int + " not found";
		Trace(var_32_int);
	} else {
		@@var_27_object:SetProperty("locked", var_25_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_218(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj();
	self(var_36_object);
	var_36_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_157(var_0_object)
{
	EventDisable(26);
	var_13_object = Obj();
	var_13_object = var_0_object;
	func_265(var_13_object);
	var_24_string = ""; var_25_bool = 0;
	func_248("warehouse_notkin@door1", (bool)0);
	var_34_object = Obj();
	func_218(var_34_object);
	RemoveActor(var_34_object);
	return 0;
}


func_286()
{
	var_81_object = Obj(); var_82_object = Obj();
	CreateDiaryEntry(var_82_object, (int)231, (int)2, (int)519659);
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0;
	var_82_object = var_87_object;
	func_312(var_86_bool, var_87_object, (int)227);
	return 2;
}
EMIT "Stack[-1] = 0";


