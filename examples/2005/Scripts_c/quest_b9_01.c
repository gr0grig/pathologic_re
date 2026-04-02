maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		func_323("boiny@door1", false);
		object var_5_object;
		@GetSceneByName(var_5_object, "cot_eva");
		func_340("icot_eva_door", false);
		@Trigger(var_5_object, "nodanko");
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_10_object; object var_11_object; bool var_12_bool; int var_13_int; object var_14_object;
		@Trace(var_4_string);
		if(var_4_string == "place_mdoberman") {
			@GetMainOutdoorScene(var_10_object);
			object var_17_object; object var_18_object;
			var_10_object = var_18_object;
			func_305(var_17_object, var_18_object, "pt_b9q01_mdoberman", "pers_doberman", "b9q01_mdoberman.xml");
			var_10_object = null;
		} else if(var_4_string == "remove_mdoberman") {
				var_17_object->Remove(); //@t
		}
	Label_210:
		for(;;) {

		}
	
		if(var_4_string == "init_factory") {
			@GetSceneByName(var_11_object, "factory");
			func_323("factory@door1", false);
			func_340("ifactory_grid_door", true);
			object var_61_object; object var_62_object;
			var_11_object = var_62_object;
			func_287(var_61_object, var_62_object, "pt_b9q01_Danko", "NPC_Bakalavr", "b9q01_danko.xml");
			var_1_object = var_61_object;
			object var_79_object; object var_80_object;
			var_11_object = var_80_object;
			func_287(var_79_object, var_80_object, "pt_b9q01_doberman1", "pers_doberman", "b9q01_doberman1.xml");
			var_2_object = var_79_object;
			object var_84_object; object var_85_object;
			var_11_object = var_85_object;
			func_287(var_84_object, var_85_object, "pt_b9q01_doberman2", "pers_doberman", "b9q01_doberman2.xml");
			var_3_object = var_84_object;
			var_11_object = null;
		} else if(var_4_string == "factory_fight") {
			@Trigger(var_2_object, "attack");
			@Trigger(var_3_object, "attack");
			func_323("ifactory@door1", true);
			@PlaySound("door_close");
		} else if(var_4_string == "doberman_dead") {
			var_2_object->IsDead(var_12_bool); //@t
			if(var_12_bool != 0) {
				var_3_object->IsDead(var_12_bool); //@t
				if(var_12_bool != 0) {
					func_323("ifactory@door1", false);
					func_340("ifactory_grid_door", false);
					@PlaySound("door_open");
					@SetVariable("b9q01DankoFree", 1);
				}
			}
		} else if(var_4_string == "danko_free") {
			func_340("ifactory_grid_door", false);
			@PlaySound("door_open");
			func_323("factory@door1", true);
		} else if(var_4_string == "reset_factory") {
			func_227(var_12_bool, var_13_int, var_14_object);
			func_323("factory@door1", true);
		}
		if(var_4_string == "cleanup") {
			@GetVariable("b9q01", var_13_int);
			if(var_13_int != 1000)
				func_211();
			else
				func_240(var_14_object);
			if(var_4_string == "remove_danko") {
				@GetSceneByName(var_14_object, "cot_eva");
				func_340("icot_eva_door", false);
				@Trigger(var_14_object, "nodanko");
				var_14_object = null;
			} else if(var_4_string == "fail") {
				func_211();
			} else if(var_4_string == "completed") {
				func_219();
			}
		}
		goto Label_210;
	
	}

}


void func_323(string var_6_string, bool var_7_bool)
{
	object var_9_object;
	@FindActor(var_9_object, var_6_string);
	if(!var_9_object) //@nz
		@Trace(("Door " + var_6_string) + " not found");
	else
		var_9_object->SetProperty("locked", var_7_bool);
	
}
EMIT "Stack[-1] = 0";


void func_227(object var_1_object, object var_2_object, object var_3_object)
{
	if(var_1_object != 0)
		@RemoveActor(var_1_object);
	if(var_2_object != 0)
		@RemoveActor(var_2_object);
	if(var_3_object != 0)
		@RemoveActor(var_3_object);
}


void func_240(object var_0_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	object var_128_object;
	object var_129_object;
	func_227(var_14_object, var_128_object, var_129_object);
	func_323("ifactory@door1", false);
	func_340("ifactory_grid_door", false);
	func_323("boiny@door1", true);
	@GetSceneByName(var_129_object, "cot_eva");
	func_340("icot_eva_door", false);
	@Trigger(var_129_object, "danko");
	object var_141_object;
	func_281(var_141_object);
	@RemoveActor(var_141_object);
}
EMIT "Stack[-1] = 0";


void func_305(object var_17_object, object var_18_object, string var_19_string, string var_20_string, string var_21_string)
{
	bool var_26_bool; cvector var_27_cvector; cvector var_28_cvector;
	var_18_object->GetLocator(var_19_string, var_26_bool, var_27_cvector, var_28_cvector);
	if(!var_26_bool) //@nz
		@Trace(("Locator " + var_19_string) + " doesn't exist");
	else
		var_18_object->AddStationaryActor(Obj(), var_27_cvector, var_28_cvector, var_20_string, var_21_string);
	object var_29_object = var_17_object;
	
}
EMIT "Stack[-1] = 0";


void func_211(void)
{
	@SetVariable("b9q01", -1);
	func_240(var_14_object);
}


void func_340(string var_17_string, bool var_18_bool)
{
	object var_20_object;
	@FindActor(var_20_object, var_17_string);
	if(!var_20_object) { //@nz
		@Trace(("Door " + var_17_string) + " not found");
	} else {
		if(var_18_bool != 0)
			var_20_object->Close();
		var_20_object->SetProperty("locked", var_18_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_281(object var_141_object)
{
	object var_143_object;
	@self(var_143_object);
	var_143_object = var_141_object;
}
EMIT "Stack[-1] = 0";


void func_219(void)
{
	@SetVariable("b9q01", 1000);
	func_240(var_14_object);
}


void func_287(object var_61_object, object var_62_object, string var_63_string, string var_64_string, string var_65_string)
{
	bool var_70_bool; cvector var_71_cvector; cvector var_72_cvector;
	var_62_object->GetLocator(var_63_string, var_70_bool, var_71_cvector, var_72_cvector);
	if(!var_70_bool) //@nz
		@Trace(("Locator " + var_63_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_64_string, var_62_object, var_71_cvector, var_72_cvector, var_65_string);
	object var_73_object = var_61_object;
	
}
EMIT "Stack[-1] = 0";


