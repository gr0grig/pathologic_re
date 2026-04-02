maintask task_0
{
	void init(bool var_0_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnIntersection(bool var_0_bool, object var_1_object)
	{
		bool var_3_bool;
		@IsPlayerActor(var_1_object, var_3_bool);
		if(!var_3_bool) { //@nz
		}
		disable OnIntersection;
		TaskCall(1);
		func_67();
		TaskReturn();
	}

	// @pe
	void OnKeyDown(bool var_0_bool, int var_1_int)
	{
		@CameraSwitchToNormal();
	}

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			bool var_6_bool = false;
			if(!var_3_bool) { //@nz
				bool var_8_bool;
				func_65(var_8_bool);
				if(var_8_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				object var_9_object;
				func_222(var_9_object);
				@RemoveActor(var_9_object);
			}
		} else if(var_1_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnUnload(bool var_0_bool)
	{
		bool var_1_bool = false;
		if(var_0_bool != 0) {
			bool var_3_bool;
			func_65(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_222(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


task task_1
{
}


void func_65(bool var_3_bool)
{
	var_3_bool = true;
}


void func_67(void)
{
	@SetVariable("b10q02Cutscene", 1);
	object var_9_object;
	@GetMainOutdoorScene(var_9_object);
	object var_15_object;
	func_228(var_15_object);
	object var_10_object;
	var_15_object = var_10_object;
	object var_18_object; object var_19_object;
	var_9_object = var_19_object;
	func_234(var_18_object, var_19_object, "cs_b10q02_girl", "cs_play_all.bin");
	object var_11_object;
	var_18_object = var_11_object;
	var_11_object->ForceGeometryLoad();
	var_10_object->add(var_11_object);
	object var_26_object; object var_27_object;
	var_9_object = var_27_object;
	func_234(var_26_object, var_27_object, "cs_b10q02_boy", "cs_play_all.bin");
	var_26_object = var_11_object;
	var_11_object->ForceGeometryLoad();
	var_10_object->add(var_11_object);
	object var_30_object; object var_31_object;
	var_9_object = var_31_object;
	func_234(var_30_object, var_31_object, "cs_b10q02_doberman", "cs_play_all.bin");
	var_30_object = var_11_object;
	var_11_object->ForceGeometryLoad();
	var_10_object->add(var_11_object);
	object var_34_object; object var_35_object;
	var_9_object = var_35_object;
	func_234(var_34_object, var_35_object, "cs_b10q02_littleboy", "cs_play_all.bin");
	var_34_object = var_11_object;
	var_11_object->ForceGeometryLoad();
	var_10_object->add(var_11_object);
	object var_38_object;
	func_172(var_38_object);
	object var_12_object;
	var_38_object = var_12_object;
	func_275();
	object var_44_object;
	var_12_object = var_44_object;
	func_179(var_44_object);
	@RegisterKeyCallback("space");
	@CameraPlay("cs_b10q02.mot");
	@CameraWaitForPlayFinish();
	@UnregisterKeyCallback("space");
	object var_61_object;
	var_12_object = var_61_object;
	func_202(var_61_object);
	func_280();
	@CameraSwitchToNormal();
	object var_74_object;
	var_10_object = var_74_object;
	func_254(var_74_object);
	bool var_85_bool;
	func_242(var_85_bool, "quest_b10_02", "place_bomb");
	object var_91_object;
	func_222(var_91_object);
	@RemoveActor(var_91_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_228(object var_15_object)
{
	object var_17_object;
	@CreateObjectVector(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_234(object var_18_object, object var_19_object, string var_20_string, string var_21_string)
{
	object var_23_object;
	@AddScriptedActor(var_23_object, var_20_string, var_21_string, var_19_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_23_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_202(object var_61_object)
{
	if(!var_61_object) { //@nz
	}
	int var_63_int;
	var_61_object->GetProperty("noaccess", var_63_int);
	if(var_63_int > 1)
		var_61_object->SetProperty("noaccess", (var_63_int - 1));
	else
		var_61_object->RemoveProperty("noaccess");
	
}


void func_172(object var_38_object)
{
	object var_40_object;
	@FindActor(var_40_object, "player");
	var_40_object = var_38_object;
}
EMIT "Stack[-1] = 0";


void func_242(bool var_85_bool, string var_86_string, string var_87_string)
{
	object var_89_object;
	@FindActor(var_89_object, var_86_string);
	if(var_89_object == null)
		var_85_bool = false;
	@Trigger(var_89_object, var_87_string);
	var_85_bool = true;
}
EMIT "Stack[-1] = 0";


void func_275(void)
{
	@SetSepia(0.5, 0.886);
}


void func_179(object var_44_object)
{
	int var_48_int;
	if(!var_44_object) { //@nz
	}
	bool var_47_bool;
	var_44_object->HasProperty("noaccess", var_47_bool);
	if(var_47_bool != 0) {
		var_44_object->GetProperty("noaccess", var_48_int);
		var_44_object->SetProperty("noaccess", (var_48_int + 1));
	} else {
		var_44_object->SetProperty("noaccess", 1);
	}
	
}


void func_254(object var_74_object)
{
	int var_78_int; int var_79_int; object var_80_object;
	if(var_74_object != 0) {
		var_74_object->size(var_78_int);
		var_79_int = 0;

		while(var_79_int < var_78_int) {
			var_74_object->get(var_80_object, var_79_int);
			if(var_80_object != 0)
				@RemoveActor(var_80_object);
			var_80_object = null;
			var_79_int += 1;
		}

		var_74_object->clear();
	}
}


void func_280(void)
{
	@SetSepia(0, 0);
}


void func_222(object var_4_object)
{
	object var_6_object;
	@self(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


