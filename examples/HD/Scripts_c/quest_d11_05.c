// @IMPORTS: CreateObjectVector/1,GetMainOutdoorScene/1,GetVariable/2,GetSceneByName/2,Trace/1,FindActor/2,Teleport/4,SetVariable/2,Trigger/2,RemoveActor/1,GetGameTime/1,SetTimeEvent/2,Hold/0,self/1,AddActor/6
// @STRINGS: W:pt_d9q01_doberman1|W:pers_doberman|W:d11q05_doberman.xml|A:add|W:pt_d9q01_doberman2|W:pt_d9q01_doberman3|W:d8q01MladVladIsVictim|W:termitnik_mat|W:pt_d11q05_mladvlad|W:NPC_MladVlad|W:d11q05_mladvlad.xml|W:teleport|W:player|W:mnogogrannik_han|W:pt_d9q01_teleport|A:GetLocator|W:place_enemy_before|W:pt_d11q05_grabitel_before1|W:pers_grabitel|W:d11q05_grabitel.xml|W:pt_d11q05_grabitel_before2|W:pt_d11q05_worker_before1|W:pers_worker|W:d11q05_worker.xml|W:pt_d11q05_worker_before2|W:place_enemy_after|W:pt_d11q05_grabitel_after1|W:d11q05_grabitel_serum.xml|W:pt_d11q05_grabitel_after2|W:pt_d11q05_unosha_after1|W:pers_unosha|W:pt_d11q05_unosha_after2|W:fail|W:completed|W:d11q05|W:cleanup|W:Locator |W: doesn't exist|A:AddStationaryActor|A:size|A:get|A:Remove|A:clear
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object,object,bool params=0
// @EVENT_26: op=0x3c vars=string
// @EVENT_9: op=0xff vars=int,float
// @PE: 0xff

task_0_event_26(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_string)
{
	var_5_object = Obj(); var_6_object = Obj(); var_7_cvector = CVector(0,0,0); var_8_cvector = CVector(0,0,0); var_9_bool = 0; var_10_object = Obj(); var_11_object = Obj(); var_12_object = Obj(); var_13_object = Obj(); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	Trace(var_4_string);
	var_20_bool = var_4_string == "teleport";
	if(var_20_bool != 0) {
		FindActor(var_12_object, "player");
		var_22_object = var_12_object;
		if(var_22_object != 0) {
			GetSceneByName(var_13_object, "mnogogrannik_han");
			@@var_13_object:GetLocator("pt_d9q01_teleport", var_16_bool, var_14_cvector, var_15_cvector);
			Teleport(var_12_object, var_13_object, var_14_cvector, var_15_cvector);
			var_13_object = 0;
		}
		var_12_object = 0;
	} else {
		var_26_bool = var_4_string == "place_enemy_before";
		if(var_26_bool != 0) {
			GetMainOutdoorScene(var_17_object);
			var_27_object = Obj(); var_28_object = Obj(); var_29_string = ""; var_30_string = ""; var_31_string = "";
			var_17_object = var_28_object;
			func_290(var_27_object, var_28_object, "pt_d11q05_grabitel_before1", "pers_grabitel", "d11q05_grabitel.xml");
			@@@var_0_object:add(var_27_object);
			var_45_object = Obj(); var_46_object = Obj(); var_47_string = ""; var_48_string = ""; var_49_string = "";
			var_17_object = var_46_object;
			func_290(var_45_object, var_46_object, "pt_d11q05_grabitel_before2", "pers_grabitel", "d11q05_grabitel.xml");
			@@@var_0_object:add(var_45_object);
			var_50_object = Obj(); var_51_object = Obj(); var_52_string = ""; var_53_string = ""; var_54_string = "";
			var_17_object = var_51_object;
			func_290(var_50_object, var_51_object, "pt_d11q05_worker_before1", "pers_worker", "d11q05_worker.xml");
			@@@var_0_object:add(var_50_object);
			var_55_object = Obj(); var_56_object = Obj(); var_57_string = ""; var_58_string = ""; var_59_string = "";
			var_17_object = var_56_object;
			func_290(var_55_object, var_56_object, "pt_d11q05_worker_before2", "pers_worker", "d11q05_worker.xml");
			@@@var_0_object:add(var_55_object);
			var_17_object = 0;
			goto Label_181;
		}
		var_61_bool = var_4_string == "place_enemy_after";
		if(var_61_bool != 0) {
			GetMainOutdoorScene(var_18_object);
			var_62_object = Obj(); var_63_object = Obj(); var_64_string = ""; var_65_string = ""; var_66_string = "";
			var_18_object = var_63_object;
			func_290(var_62_object, var_63_object, "pt_d11q05_grabitel_after1", "pers_grabitel", "d11q05_grabitel_serum.xml");
			@@@var_0_object:add(var_62_object);
			var_67_object = Obj(); var_68_object = Obj(); var_69_string = ""; var_70_string = ""; var_71_string = "";
			var_18_object = var_68_object;
			func_290(var_67_object, var_68_object, "pt_d11q05_grabitel_after2", "pers_grabitel", "d11q05_grabitel.xml");
			@@@var_0_object:add(var_67_object);
			var_72_object = Obj(); var_73_object = Obj(); var_74_string = ""; var_75_string = ""; var_76_string = "";
			var_18_object = var_73_object;
			func_290(var_72_object, var_73_object, "pt_d11q05_unosha_after1", "pers_unosha", "d11q05_worker.xml");
			@@@var_0_object:add(var_72_object);
			var_77_object = Obj(); var_78_object = Obj(); var_79_string = ""; var_80_string = ""; var_81_string = "";
			var_18_object = var_78_object;
			func_290(var_77_object, var_78_object, "pt_d11q05_unosha_after2", "pers_unosha", "d11q05_worker.xml");
			@@@var_0_object:add(var_77_object);
			var_18_object = 0;
			goto Label_181;
		}
		var_83_bool = var_4_string == "fail";
		if(var_83_bool != 0) {
			func_196();
			goto Label_181;
		}
		var_89_bool = var_4_string == "completed";
		if(var_89_bool == 0) goto Label_181;
		func_204();
	}
Label_181:
	return 14;
	
}


task_0_event_9(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_int, var_5_float)
{
	func_182();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_bool)
{
	var_4_object = Obj(); var_5_int = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_int = 0; var_9_object = Obj();
	CreateObjectVector(var_1_object);
	GetMainOutdoorScene(var_7_object);
	var_10_object = Obj(); var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_string = "";
	var_7_object = var_11_object;
	func_290(var_10_object, var_11_object, "pt_d9q01_doberman1", "pers_doberman", "d11q05_doberman.xml");
	@@@var_1_object:add(var_10_object);
	var_28_object = Obj(); var_29_object = Obj(); var_30_string = ""; var_31_string = ""; var_32_string = "";
	var_7_object = var_29_object;
	func_290(var_28_object, var_29_object, "pt_d9q01_doberman2", "pers_doberman", "d11q05_doberman.xml");
	@@@var_1_object:add(var_28_object);
	var_33_object = Obj(); var_34_object = Obj(); var_35_string = ""; var_36_string = ""; var_37_string = "";
	var_7_object = var_34_object;
	func_290(var_33_object, var_34_object, "pt_d9q01_doberman3", "pers_doberman", "d11q05_doberman.xml");
	@@@var_1_object:add(var_33_object);
	var_38_object = Obj();
	func_266(var_38_object);
	var_0_object = var_38_object;
	GetVariable("d8q01MladVladIsVictim", var_8_int);
	var_42_int = var_8_int;
	if(var_42_int != 0) {
		var_3_bool = true;
		GetSceneByName(var_9_object, "termitnik_mat");
		var_44_object = Obj(); var_45_object = Obj(); var_46_string = ""; var_47_string = ""; var_48_string = "";
		var_9_object = var_45_object;
		func_272(var_44_object, var_45_object, "pt_d11q05_mladvlad", "NPC_MladVlad", "d11q05_mladvlad.xml");
		var_2_object = var_44_object;
		var_9_object = 0;
	}
	var_62_int = 0;
	func_236((int)11);
	return 6;
}
EMIT "Stack[-3] = 0";


func_290(var_10_object, var_11_object, var_12_string, var_13_string, var_14_string)
{
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj();
	@@var_11_object:GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	var_23_bool = var_19_bool == 0; //@nz
	if(var_23_bool != 0) {
		var_25_int = "Locator " + var_12_string;
		var_27_int = var_25_int + " doesn't exist";
		Trace(var_27_int);
	} else {
		@@var_11_object:AddStationaryActor(Obj(), var_20_cvector, var_21_cvector, var_13_string, var_14_string);
	}
	var_22_object = var_10_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_196()
{
	SetVariable("d11q05", (int)-1);
	func_212(var_7_int);
	return 0;
}


func_260(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj();
	self(var_84_object);
	var_84_object = var_82_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_266(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj();
	CreateObjectVector(var_40_object);
	var_40_object = var_38_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_236(var_62_int)
{
	var_63_float = 0; var_64_float = 0;
	GetGameTime(var_64_float);
	var_66_float = var_62_int * (int)24;
	var_67_bool = var_64_float >= var_66_float;
	if(var_67_bool != 0) {
		func_218(var_63_float, var_64_float);
	} else {
		var_87_float = var_62_int * (int)24;
		SetTimeEvent((int)0, var_87_float);
		Hold();
	}
	return 2;
	
}


func_204()
{
	SetVariable("d11q05", (int)1000);
	func_212(var_18_object);
	return 0;
}


func_272(var_44_object, var_45_object, var_46_string, var_47_string, var_48_string)
{
	var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_object = Obj(); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj();
	@@var_45_object:GetLocator(var_46_string, var_53_bool, var_54_cvector, var_55_cvector);
	var_57_bool = var_53_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_59_int = "Locator " + var_46_string;
		var_61_int = var_59_int + " doesn't exist";
		Trace(var_61_int);
	} else {
		AddActor(Obj(), var_47_string, var_45_object, var_54_cvector, var_55_cvector, var_48_string);
	}
	var_56_object = var_44_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_212(var_2_object)
{
	var_68_object = var_2_object;
	if(var_68_object != 0) {
		Trigger(var_2_object, "cleanup");
	}
	return 0;
}


func_308(var_70_object)
{
	var_71_int = 0; var_72_int = 0; var_73_object = Obj(); var_74_int = 0; var_75_int = 0; var_76_object = Obj();
	var_77_object = var_70_object;
	if(var_77_object != 0) {
		@@var_70_object:size(var_74_int);
		var_75_int = 0;

	Label_314:
		var_78_bool = var_75_int < var_74_int;
		if(var_78_bool != 0) {
			@@var_70_object:get(var_76_object, var_75_int);
			var_79_object = var_76_object;
			if(var_79_object != 0) {
				@@var_76_object:Remove();
			}
			var_76_object = 0;
			var_75_int = var_75_int + (int)1;
			goto Label_314;
		}
		@@var_70_object:clear();
	}
	return 6;
}


func_182()
{
	var_6_int = 0; var_7_int = 0;
	GetVariable("d11q05", var_7_int);
	var_10_bool = var_7_int != (int)1000;
	if(var_10_bool != 0) {
		func_196();
	}
	func_218(var_6_int, var_7_int);
	return 2;
}


func_218(var_0_object, var_1_object)
{
	EventDisable(26);
	func_212(var_64_float);
	var_70_object = Obj();
	var_70_object = var_0_object;
	func_308(var_70_object);
	var_81_object = Obj();
	var_81_object = var_1_object;
	func_308(var_81_object);
	var_82_object = Obj();
	func_260(var_82_object);
	RemoveActor(var_82_object);
	return 0;
}


