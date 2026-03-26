// @IMPORTS: SetVisibility/1,SetTimeEvent/2,Hold/0,SetUsable/1,StopGroup0/0,GetInvItemByName/2,GetInvItemProperty/3,CreateInvItem/1,PlaySound/1,SetVariable/2,Sleep/1
// @STRINGS: W:bottle_empty|W:Category|A:GetItemCount|A:GetItem|A:GetItemID|W:disease|A:HasProperty|A:GetProperty|A:RemoveItem|W:bottle_water|A:SetItemName|A:SetProperty|W:fill|W:player_exchange|A:AddItem|A:DropItems
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_9: op=0x13 vars=int,float
// @EVENT_0: op=0x1c vars=object
// @PE: 0x13

task_0_event_9(var_0_bool, var_1_int, var_2_float)
{
	var_4_bool = var_1_int == (int)0;
	if(var_4_bool != 0) {
		StopGroup0();
		var_0_bool = true;
	}
	return 0;
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_float = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_float = 0; var_12_object = Obj(); var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_float = 0; var_18_int = 0; var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_float = 0; var_23_object = Obj();
	GetInvItemByName(var_13_int, "bottle_empty");
	GetInvItemProperty(var_14_int, var_13_int, "Category");
	@@var_1_object:GetItemCount(var_15_int, var_14_int);
	var_16_int = -1;
	var_18_int = 0;
	
Label_39:
	var_26_bool = var_18_int < var_15_int;
	if(var_26_bool != 0) {
		@@var_1_object:GetItem(var_19_object, var_18_int, var_14_int);
		@@var_19_object:GetItemID(var_20_int);
		var_27_bool = var_20_int == var_13_int;
		if(var_27_bool != 0) {
			@@var_19_object:HasProperty(var_21_bool, "disease");
			var_29_bool = var_21_bool == 0; //@nz
			if(var_29_bool != 0) {
				var_30_bool = 0;
				var_30_bool = 1;
				var_32_bool = var_16_int == (int)-1;
				if(var_32_bool != 1) {
					var_34_bool = var_17_float > (int)0;
					if(var_34_bool != 1) {
						var_30_bool = 0;
					}
				}
				if(var_30_bool != 0) {
					var_18_int = var_16_int;
					var_17_float = 0;
				}
			} else {
				@@var_19_object:GetProperty(var_22_float, "disease");
				var_37_bool = 0;
				var_37_bool = 1;
				var_39_bool = var_16_int == (int)-1;
				if(var_39_bool != 1) {
					var_40_bool = var_22_float < var_17_float;
					if(var_40_bool != 1) {
						var_37_bool = 0;
					}
				}
				if(var_37_bool == 0) goto Label_79;
				var_18_int = var_16_int;
				var_22_float = var_17_float;
	}
			var_42_bool = var_16_int != (int)-1;
			if(var_42_bool != 0) {
				EventDisable(0);
				@@var_1_object:RemoveItem(var_16_int, (int)1, var_14_int);
				CreateInvItem(var_23_object);
				@@var_23_object:SetItemName("bottle_water");
				@@var_23_object:SetProperty("disease", var_17_float);
				var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0;
				var_1_object = var_46_object;
				var_23_object = var_47_object;
				func_117(var_46_object, var_47_object, (int)1);
				PlaySound("fill");
				SetVariable("player_exchange", (int)1);
				Sleep((int)1);
				EventEnable(0);
				var_23_object = 0;
			}
			return 22;
		}
	}
Label_79:
	var_19_object = 0;
	var_18_int = var_18_int + (int)1;
	goto Label_39;
	
}


main(var_0_bool)
{
	func_27();
	SetVisibility((bool)1);
	SetTimeEvent((int)0, (int)24);
	var_0_bool = false;
	
Label_11:
	Hold();
	var_4_bool = var_0_bool == 0; //@nz
	if(var_4_bool == 1) goto Label_11;
	SetUsable((bool)0);
	return 0;
}


func_27()
{
	return 0;
}


func_117(var_46_object, var_47_object, var_48_int)
{
	var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0;
	@@var_47_object:GetItemID(var_52_int);
	GetInvItemProperty(var_53_int, var_52_int, "Category");
	@@var_46_object:AddItem(var_54_bool, var_47_object, var_53_int, var_48_int);
	var_56_bool = var_54_bool == 0; //@nz
	if(var_56_bool != 0) {
		@@var_46_object:DropItems(var_47_object, var_48_int);
	}
	return 6;
}


