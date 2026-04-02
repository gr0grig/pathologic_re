maintask task_0
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
	{
		object var_5_object;
		func_263(var_5_object);
		var_1_object = var_5_object;
		func_334("warehouse_gangster@door1", true);
		func_334("cot_alexandr@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string)
	{
		object var_21_object; int var_22_int; bool var_23_bool; cvector var_24_cvector; cvector var_25_cvector; object var_26_object; object var_27_object; object var_28_object; object var_29_object; int var_30_int; bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector; object var_34_object; int var_35_int;
		@Trace(var_5_string);
		if(var_5_string == "init_volnica") {
			@GetMainOutdoorScene(var_21_object);
			var_22_int = 1;

			for(;;) {
				var_21_object->GetLocator(("pt_k4q01_grabitel" + var_22_int), var_23_bool, var_24_cvector, var_25_cvector);
				if(!var_23_bool) { //@nz
				} else {
					var_21_object->AddStationaryActor(var_26_object, var_24_cvector, var_25_cvector, "pers_grabitel", "k4q01_grabitel.xml");
					var_1_object->add(var_26_object); //@t
					var_26_object = null;
					var_22_int += 1;
				}
				object var_41_object; object var_42_object;
				var_21_object = var_42_object;
				func_316(var_41_object, var_42_object, "pt_k4q01_grabitel", "pers_grabitel", "k4q01_grabitel_e.xml");
				var_2_object = var_41_object;
				var_21_object = null;
		} else {
			if(var_5_string == "grabitel_entrance_dead") {
				func_334("warehouse_gangster@door1", false);
				if(var_2_object != 0)
					var_2_object->Remove(); //@t
				@GetSceneByName(var_27_object, "warehouse_gangster");
				object var_76_object; object var_77_object;
				var_27_object = var_77_object;
				func_280(var_76_object, var_77_object, "pt_britva", "pers_grabitel", "k4q01_britva.xml");
				var_4_object = var_76_object;
				@PlaySound("door_open");
				var_27_object = null;
			} else if(var_5_string == "cutscene") {
				if(var_4_object != 0)
					@RemoveActor(var_4_object);
				@GetSceneByName(var_28_object, "warehouse_gangster");
				@PlaySound("door_close");
				func_334("iwarehouse_gangster@door1", true);
				object var_102_object; object var_103_object;
				var_28_object = var_103_object;
				func_298(var_102_object, var_103_object, "pt_k4q01_meshok", "scripted_container", "k4q01_meshok.xml");
				var_3_object = var_102_object;
				object var_120_object;
				func_269(var_120_object, "quest_k4_01_cutscene");
				var_28_object = null;
			}
			if(var_5_string == "cutscene_end") {
				@GetSceneByName(var_29_object, "warehouse_gangster");
				object var_131_object; object var_132_object;
				var_29_object = var_132_object;
				func_280(var_131_object, var_132_object, "pt_britva_attack", "pers_grabitel", "k4q01_britva_attack.xml");
				var_30_int = 1;

				for(;;) {
					var_29_object->GetLocator(("pt_k4q01_rat" + var_30_int), var_31_bool, var_32_cvector, var_33_cvector);
					if(!var_31_bool) { //@nz
					} else {
						@AddActor(var_34_object, "pers_rat", var_29_object, var_32_cvector, var_33_cvector, "rat_indoor.xml");
						var_34_object = null;
						var_30_int += 1;
					}
					var_0_bool = true;
					var_29_object = null;
					goto Label_207;

				}
			}
			if(var_5_string == "meshok_taken") {
				func_334("iwarehouse_gangster@door1", false);
				func_372();
				@PlaySound("door_open");
			} else if(var_5_string == "warehouse_gangster_unload") {
				if(var_0_bool != 0) {
					func_334("warehouse_gangster@door1", true);
					if(var_4_object != 0)
						@Trigger(var_4_object, "cleanup");
				}
			} else if(var_5_string == "fail") {
				func_208();
			} else if(var_5_string == "completed") {
				func_216();
			} else if(var_5_string == "cleanup") {
				@GetVariable("k4q01", var_35_int);
				if(var_35_int != 1000) {
				func_208();
				goto Label_207;
			}
			}
			func_224(var_32_cvector, var_33_cvector, var_34_object, var_35_int);
		}
		Label_207:

		}
	
	}

}


void func_224(object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	if(var_1_object != 0) {
		func_351(var_1_object);
		var_1_object = null;
	}
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	func_334("iwarehouse_gangster@door1", false);
	object var_200_object;
	func_257(var_200_object);
	@RemoveActor(var_200_object);
}


void func_257(object var_200_object)
{
	object var_202_object;
	@self(var_202_object);
	var_202_object = var_200_object;
}
EMIT "Stack[-1] = 0";


void func_385(object var_160_object)
{
	object var_162_object;
	@GetDiaryRoot(var_162_object);
	if(!var_162_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_160_object = false;
	}
	var_162_object = var_160_object;
}
EMIT "Stack[-1] = 0";


void func_263(object var_5_object)
{
	object var_7_object;
	@CreateObjectVector(var_7_object);
	var_7_object = var_5_object;
}
EMIT "Stack[-1] = 0";


void func_298(object var_102_object, object var_103_object, string var_104_string, string var_105_string, string var_106_string)
{
	bool var_111_bool; cvector var_112_cvector; cvector var_113_cvector;
	var_103_object->GetLocator(var_104_string, var_111_bool, var_112_cvector, var_113_cvector);
	if(!var_111_bool) //@nz
		@Trace(("Locator " + var_104_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_105_string, var_103_object, var_112_cvector, var_113_cvector, var_106_string);
	object var_114_object = var_102_object;
	
}
EMIT "Stack[-1] = 0";


void func_269(object var_120_object, string var_121_string)
{
	object var_124_object;
	@GetMainOutdoorScene(var_124_object);
	object var_125_object;
	@AddBlankActor(var_125_object, var_124_object, var_121_string, (var_121_string + ".bin"));
	var_125_object = var_120_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_334(string var_8_string, bool var_9_bool)
{
	object var_11_object;
	@FindActor(var_11_object, var_8_string);
	if(!var_11_object) //@nz
		@Trace(("Door " + var_8_string) + " not found");
	else
		var_11_object->SetProperty("locked", var_9_bool);
	
}
EMIT "Stack[-1] = 0";


void func_398(bool var_151_bool, object var_152_object, int var_153_int)
{
	object var_160_object;
	func_385(var_160_object);
	object var_157_object;
	var_160_object = var_157_object;
	object var_158_object;
	var_157_object->Find(var_153_int, var_158_object);
	if(!var_158_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_153_int);
		var_151_bool = false;
	}
	var_158_object->AddChild(var_152_object);
	@SendWorldWndMessage(7);
	int var_159_int;
	var_152_object->GetCategory(var_159_int);
	@SetDiarySection(var_159_int);
	var_151_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_208(void)
{
	@SetVariable("k4q01", -1);
	func_224(var_32_cvector, var_33_cvector, var_34_object, var_35_int);
}


void func_216(void)
{
	@SetVariable("k4q01", 1000);
	func_224(var_32_cvector, var_33_cvector, var_34_object, var_35_int);
}


void func_372(void)
{
	object var_147_object;
	@CreateDiaryEntry(var_147_object, 373, 1, 525730);
	bool var_151_bool; object var_152_object;
	var_147_object = var_152_object;
	func_398(var_151_bool, var_152_object, 368);
}
EMIT "Stack[-1] = 0";


void func_280(object var_76_object, object var_77_object, string var_78_string, string var_79_string, string var_80_string)
{
	bool var_85_bool; cvector var_86_cvector; cvector var_87_cvector;
	var_77_object->GetLocator(var_78_string, var_85_bool, var_86_cvector, var_87_cvector);
	if(!var_85_bool) //@nz
		@Trace(("Locator " + var_78_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_79_string, var_77_object, var_86_cvector, var_87_cvector, var_80_string);
	object var_88_object = var_76_object;
	
}
EMIT "Stack[-1] = 0";


void func_316(object var_41_object, object var_42_object, string var_43_string, string var_44_string, string var_45_string)
{
	bool var_50_bool; cvector var_51_cvector; cvector var_52_cvector;
	var_42_object->GetLocator(var_43_string, var_50_bool, var_51_cvector, var_52_cvector);
	if(!var_50_bool) //@nz
		@Trace(("Locator " + var_43_string) + " doesn't exist");
	else
		var_42_object->AddStationaryActor(Obj(), var_51_cvector, var_52_cvector, var_44_string, var_45_string);
	object var_53_object = var_41_object;
	
}
EMIT "Stack[-1] = 0";


void func_351(object var_182_object)
{
	int var_186_int; int var_187_int; object var_188_object;
	if(var_182_object != 0) {
		var_182_object->size(var_186_int);
		var_187_int = 0;

		while(var_187_int < var_186_int) {
			var_182_object->get(var_188_object, var_187_int);
			if(var_188_object != 0)
				var_188_object->Remove();
			var_188_object = null;
			var_187_int += 1;
		}

		var_182_object->clear();
	}
}


