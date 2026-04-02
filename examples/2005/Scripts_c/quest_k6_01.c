maintask task_0
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		var_0_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, string var_12_string)
	{
		object var_22_object; object var_23_object; object var_24_object; int var_25_int; int var_26_int; object var_27_object; float var_28_float; object var_29_object; int var_30_int;
		@Trace(var_12_string);
		if(var_12_string == "lock_danko") {
			func_598("icot_eva_door", true);
		} else if(var_12_string == "teleport") {
				func_5();
				@GetScene(var_22_object);
				@GetSceneByName(var_23_object, "cot_eva");
				func_598("icot_eva_door", false);
				func_581("icot_eva@door1", true);
				@PlaySound("door_close");
				if(var_1_object != 0)
					@Trigger(var_1_object, "cleanup");
				if(var_22_object != var_23_object) {
					object var_67_object;
					object var_70_object;
					func_519(var_70_object);
					var_70_object = var_67_object;
					func_650(var_67_object, "cot_eva", "pt_k6q01_klara");
					@sync();
				}
				@FindActor(var_24_object, "player");
				bool var_92_bool = false;
				if(var_24_object != 0) {
					if(var_0_bool != 0)
						var_92_bool = true;
				}
				if(var_92_bool != 0) {
					object var_95_object;
					var_24_object = var_95_object;
					func_674(var_95_object, var_2_object, var_3_object);
					object var_124_object;
					var_24_object = var_124_object;
					func_674(var_124_object, var_4_object, var_5_object);
					object var_127_object;
					var_24_object = var_127_object;
					func_674(var_127_object, var_8_object, var_9_object);
					object var_130_object;
					var_24_object = var_130_object;
					func_674(var_130_object, var_10_object, var_11_object);
				}
				var_24_object = null;
				var_23_object = null;
				var_22_object = null;
		}
	Label_337:
		for(;;) {

		}
	
		if(var_12_string == "cot_eva_load") {
			@GetVariable("k6q01", var_25_int);
			@GetVariable("k6q01DoorWasLocked", var_26_int);
			bool var_137_bool = false;
			if(var_25_int == 2) {
				if(!var_26_int) //@nz
					var_137_bool = true;
			}
			if(var_137_bool != 0) {
				func_581("icot_eva@door1", true);
				@SetVariable("k6q01DoorWasLocked", 1);
				@PlaySound("door_close");
			}
		} else if(var_12_string == "unlock_eva") {
			func_581("icot_eva@door1", false);
			@PlaySound("door_open");
			@CreateIntVector(var_3_object);
			@CreateIntVector(var_5_object);
			@CreateIntVector(var_7_object);
			@CreateIntVector(var_9_object);
			@CreateIntVector(var_11_object);
			@FindActor(var_27_object, "player");
			if(var_27_object != 0) {
				object var_153_object; object var_154_object;
				var_27_object = var_154_object;
				func_526(var_153_object, var_154_object, 0, var_3_object);
				var_2_object = var_153_object;
				object var_172_object; object var_173_object;
				var_27_object = var_173_object;
				func_526(var_172_object, var_173_object, 1, var_5_object);
				var_4_object = var_172_object;
				object var_176_object; object var_177_object;
				var_27_object = var_177_object;
				func_526(var_176_object, var_177_object, 3, var_9_object);
				var_8_object = var_176_object;
				object var_180_object; object var_181_object;
				var_27_object = var_181_object;
				func_526(var_180_object, var_181_object, 4, var_11_object);
				var_10_object = var_180_object;
				var_27_object->ClearSubContainer(0);
				var_27_object->ClearSubContainer(1);
				var_27_object->ClearSubContainer(3);
				var_27_object->ClearSubContainer(4);
				var_0_bool = true;
			}
			var_27_object = null;
		}
		if(var_12_string == "place_danko") {
			@GetGameTime(var_28_float);
			if(var_28_float < 134) {
				@GetSceneByName(var_29_object, "cot_anna");
				object var_193_object; object var_194_object;
				func_563(var_193_object, var_194_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				var_1_object = var_193_object;
				@SetTimeEvent(1, 134);
				@SetTimeEvent(2, 136);
				@SetTimeEvent(3, 138);
				@SetVariable("k6q01DankoPos", 1);
			} else if(var_28_float < 136) {
					@GetSceneByName(var_194_object, "cot_lara");
					object var_222_object; object var_223_object;
					var_29_object = var_223_object;
					func_563(var_222_object, var_223_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
					var_1_object = var_222_object;
					@SetTimeEvent(2, 136);
					@SetTimeEvent(3, 138);
					@SetVariable("k6q01DankoPos", 2);
			}
		Label_305:
			for(;;) {
				goto Label_337;

			}

			if(var_28_float < 138) {
				@GetSceneByName(Obj(), "dt_house_1_04");
				object var_236_object; object var_237_object;
				var_29_object = var_237_object;
				func_563(var_236_object, var_237_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
				var_1_object = var_236_object;
				@SetTimeEvent(3, 138);
				@SetVariable("k6q01DankoPos", 3);
				goto Label_305;
			}
			func_598("icot_eva_door", false);
			func_5();
			@SetVariable("k6q01DankoPos", 4);
		}
		if(var_12_string == "fail") {
			func_471();
		} else if(var_12_string == "completed") {
			func_479();
		} else if(var_12_string == "cleanup") {
			@GetVariable("k6q01", var_30_int);
			if(var_30_int != 1000) {
			func_471();
			goto Label_337;
		}
		}
		func_484(var_30_int);
	}

	void OnGameTime(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, int var_12_int, float var_13_float)
	{
		int var_22_int; object var_23_object; object var_24_object; object var_25_object; object var_26_object; object var_27_object; object var_28_object; object var_29_object;
		@GetVariable("k6q01DankoPos", var_22_int);
		if(var_12_int == 1) {
			if(var_22_int != 1)
				return 16;
			@GetScene(var_23_object);
			@GetSceneByName(var_24_object, "cot_lara");
			if(var_1_object != 0)
				@Trigger(var_1_object, "cleanup");
			if(var_23_object != var_24_object) {
				var_24_object = var_23_object;
				@Trace("0: placing danko to lara");
				@SetVariable("k6q01DankoPos", 2);
			} else {
					@GetSceneByName(var_23_object, "dt_house_1_04");
					@Trace("0: placing danko to ospina");
					@SetVariable("k6q01DankoPos", 3);
		}
				if(var_12_int == 2) {
					if(var_22_int != 2)
						return 16;
					@GetScene(var_25_object);
					@GetSceneByName(var_26_object, "dt_house_1_04");
					if(var_1_object != 0)
						@Trigger(var_1_object, "cleanup");
					if(var_25_object != var_26_object) {
						object var_72_object; object var_73_object;
						var_26_object = var_73_object;
						func_563(var_72_object, var_73_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
						var_1_object = var_72_object;
						@Trace("1: placing danko to ospina");
						@SetVariable("k6q01DankoPos", 3);
					} else {
					func_598("icot_eva_door", false);
					func_5();
					@SetVariable("k6q01DankoPos", 4);
					@Trace("1: placing danko to eva");
					var_27_object = null;
				}
				if(!(var_12_int == 3)) goto Label_470;
				if(var_22_int != 3)
					return 16;
				@GetScene(var_28_object);
				@GetSceneByName(var_29_object, "cot_eva");
				if(var_28_object != var_29_object) {
					func_598("icot_eva_door", false);
					@SetVariable("k6q01DankoPos", 4);
				}
				var_29_object = null;
				var_28_object = null;
				}
				var_26_object = null;
				var_25_object = null;
		}
		object var_42_object; object var_43_object;
		var_23_object = var_43_object;
		func_563(var_42_object, var_43_object, "pt_k6q01_danko", "NPC_Bakalavr", "k6q01_danko.xml");
		var_1_object = var_42_object;
		var_24_object = null;
		var_23_object = null;
		goto Label_470;
	
	Label_470:
		for(;;) {
			return 16;

		}
	
	}

}


void func_674(object var_95_object, object var_96_object, object var_97_object)
{
	int var_102_int; object var_104_object; int var_105_int;
	var_96_object->size(var_102_int);
	int var_103_int = 0;
	
	while(var_103_int < var_102_int) {
		var_96_object->get(var_104_object, var_103_int);
		var_97_object->get(var_105_int, var_103_int);
		object var_107_object; object var_108_object; int var_109_int;
		var_95_object = var_107_object;
		var_104_object = var_108_object;
		var_105_int = var_109_int;
		func_631(var_107_object, var_108_object, var_109_int);
		var_104_object = null;
		var_103_int += 1;
	}
	
}


void func_484(object var_1_object)
{
	func_598("icot_eva_door", false);
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	int var_254_int;
	@GetVariable("k6q01", var_254_int);
	func_581("icot_eva@door1", false);
	if(var_254_int == 1000)
		@PlaySound("door_open");
	func_5();
	object var_265_object;
	func_551(var_265_object);
	@RemoveActor(var_265_object);
}


void func_581(string var_53_string, bool var_54_bool)
{
	object var_56_object;
	@FindActor(var_56_object, var_53_string);
	if(!var_56_object) //@nz
		@Trace(("Door " + var_53_string) + " not found");
	else
		var_56_object->SetProperty("locked", var_54_bool);
	
}
EMIT "Stack[-1] = 0";


void func_5(void)
{
	object var_92_object;
	@GetSceneByName(var_92_object, "cot_eva");
	@Trigger(var_92_object, "noeva");
}
EMIT "Stack[-1] = 0";


void func_519(object var_70_object)
{
	object var_72_object;
	@FindActor(var_72_object, "player");
	var_72_object = var_70_object;
}
EMIT "Stack[-1] = 0";


void func_551(object var_265_object)
{
	object var_267_object;
	@self(var_267_object);
	var_267_object = var_265_object;
}
EMIT "Stack[-1] = 0";


void func_631(object var_107_object, object var_108_object, int var_109_int)
{
	int var_113_int;
	var_108_object->GetItemID(var_113_int);
	int var_114_int;
	@GetInvItemProperty(var_114_int, var_113_int, "Category");
	bool var_115_bool;
	var_107_object->AddItem(var_115_bool, var_108_object, var_114_int, var_109_int);
	if(!var_115_bool) { //@nz
		var_107_object->DropItems(var_108_object, var_109_int);
	} else {
		int var_118_int; int var_119_int;
		var_113_int = var_118_int;
		var_109_int = var_119_int;
		func_619(var_118_int, var_119_int);
	}
	
}


void func_650(object var_67_object, string var_68_string, string var_69_string)
{
	if(!var_67_object) { //@nz
	}
	object var_78_object;
	@GetSceneByName(var_78_object, var_68_string);
	bool var_79_bool;
	cvector var_80_cvector;
	cvector var_81_cvector;
	var_78_object->GetLocator(var_69_string, var_79_bool, var_80_cvector, var_81_cvector);
	if(!var_79_bool) //@nz
		@Trace(((("Teleport location '" + var_69_string) + "' not found in scene '") + var_68_string) + "'");
	else
		@Teleport(var_67_object, var_78_object, var_80_cvector, var_81_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_619(int var_118_int, int var_119_int)
{
	object var_121_object;
	@CreateIntVector(var_121_object);
	var_121_object->add(var_118_int);
	var_121_object->add(var_119_int);
	@SendWorldWndMessage(3, var_121_object);
}
EMIT "Stack[-1] = 0";


void func_557(object var_167_object)
{
	object var_169_object;
	@CreateObjectVector(var_169_object);
	var_169_object = var_167_object;
}
EMIT "Stack[-1] = 0";


void func_526(object var_153_object, object var_154_object, int var_155_int, object var_156_object)
{
	object var_165_object; int var_166_int;
	object var_167_object;
	func_557(var_167_object);
	object var_162_object;
	var_167_object = var_162_object;
	int var_163_int;
	var_154_object->GetItemCount(var_163_int, var_155_int);
	int var_164_int = 0;
	
	while(var_164_int < var_163_int) {
		var_154_object->GetItem(var_165_object, var_164_int, var_155_int);
		var_162_object->add(var_165_object);
		var_154_object->GetItemAmount(var_166_int, var_164_int, var_155_int);
		var_156_object->add(var_166_int);
		var_165_object = null;
		var_164_int += 1;
	}
	
	var_162_object = var_153_object;
}
EMIT "Stack[-5] = 0";


void func_563(object var_42_object, object var_43_object, string var_44_string, string var_45_string, string var_46_string)
{
	bool var_51_bool; cvector var_52_cvector; cvector var_53_cvector;
	var_43_object->GetLocator(var_44_string, var_51_bool, var_52_cvector, var_53_cvector);
	if(!var_51_bool) //@nz
		@Trace(("Locator " + var_44_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_45_string, var_43_object, var_52_cvector, var_53_cvector, var_46_string);
	object var_54_object = var_42_object;
	
}
EMIT "Stack[-1] = 0";


void func_598(string var_80_string, bool var_81_bool)
{
	object var_83_object;
	@FindActor(var_83_object, var_80_string);
	if(!var_83_object) { //@nz
		@Trace(("Door " + var_80_string) + " not found");
	} else {
		if(var_81_bool != 0)
			var_83_object->Close();
		var_83_object->SetProperty("locked", var_81_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_471(void)
{
	@SetVariable("k6q01", -1);
	func_484(var_30_int);
}


void func_479(void)
{
	@SetVariable("k6q01", 1000);
}


