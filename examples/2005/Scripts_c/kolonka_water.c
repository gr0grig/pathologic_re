maintask task_0
{
	// @pe
	void init(bool var_0_bool)
	{
		func_27();
		@SetVisibility(true);
		@SetTimeEvent(0, 24);
	
	Label_11:
		@Hold();
		if(!false) goto Label_11; //@nz
		@SetUsable(false);
	}

	// @pe
	void OnGameTime(bool var_0_bool, int var_1_int, float var_2_float)
	{
		if(var_1_int == 0) {
			@StopGroup0();
			var_0_bool = true;
		}
	}

	void OnUse(bool var_0_bool, object var_1_object)
	{
		int var_11_int; object var_16_object; int var_17_int; int var_18_int; object var_19_object;
		@GetInvItemByName(var_11_int, "bottle_empty");
		int var_12_int;
		@GetInvItemProperty(var_12_int, var_11_int, "Category");
		int var_13_int;
		var_1_object->GetItemCount(var_13_int, var_12_int);
		int var_14_int = 0;
		int var_15_int = 0;
	
		for(;;) {
			if(var_15_int < var_13_int) {
				var_1_object->GetItem(var_16_object, var_15_int, var_12_int);
				var_16_object->GetItemID(var_17_int);
				if(var_17_int == var_11_int) {
					var_1_object->GetItemAmount(var_18_int, var_15_int, var_12_int);
					var_14_int += var_18_int;
					var_1_object->RemoveItem(var_15_int, var_18_int, var_12_int);
					var_13_int += -1;
				} else {
				var_15_int += 1;
			}
			if(var_14_int != 0) {
				disable OnUse;
				@CreateInvItem(var_19_object);
				var_19_object->SetItemName("bottle_water");
				object var_28_object; object var_29_object; int var_30_int;
				var_1_object = var_28_object;
				var_19_object = var_29_object;
				var_14_int = var_30_int;
				func_112(var_28_object, var_29_object, var_30_int);
				@PlaySound("fill");
				@SendWorldWndMessage(5);
				@Sleep(1);
				enable OnUse;
				var_19_object = null;
			} else {
				func_90(400);
			}
			}
			var_16_object = null;
		}
	
	}

}


void func_112(object var_28_object, object var_29_object, int var_30_int)
{
	int var_34_int;
	var_29_object->GetItemID(var_34_int);
	int var_35_int;
	@GetInvItemProperty(var_35_int, var_34_int, "Category");
	bool var_36_bool;
	var_28_object->AddItem(var_36_bool, var_29_object, var_35_int, var_30_int);
	if(!var_36_bool) { //@nz
		var_28_object->DropItems(var_29_object, var_30_int);
	} else {
		int var_39_int; int var_40_int;
		var_34_int = var_39_int;
		var_30_int = var_40_int;
		func_100(var_39_int, var_40_int);
	}
	
}


void func_90(int var_47_int)
{
	object var_49_object;
	@CreateIntVector(var_49_object);
	var_49_object->add(var_47_int);
	@SendWorldWndMessage(200, var_49_object);
}
EMIT "Stack[-1] = 0";


void func_27(void)
{
}


void func_100(int var_39_int, int var_40_int)
{
	object var_42_object;
	@CreateIntVector(var_42_object);
	var_42_object->add(var_39_int);
	var_42_object->add(var_40_int);
	@SendWorldWndMessage(3, var_42_object);
}
EMIT "Stack[-1] = 0";


