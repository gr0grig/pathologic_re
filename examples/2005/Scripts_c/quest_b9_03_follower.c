// @GLOBALS: 0:object:,1:bool:,2:int:,3:object:,4:object:,5:int:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, int var_21_int, int var_22_int, bool var_23_bool, bool var_24_bool, object var_25_object, bool var_26_bool, bool var_27_bool, bool var_28_bool, bool var_29_bool, object var_30_object, bool var_31_bool)
	{
		if(1 != 0) {
			func_3255();
			if(var_31_bool == 31712) {
				object var_36_object = var_1_object;
				func_3373(var_0_object);
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_object;
				func_3394();
				object var_95_object = var_1_object;
				func_3450(var_0_object);
			}
			if(var_31_bool == 31714) {
				object var_123_object = var_1_object;
				func_3440(var_0_object);
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_3445();
			}
			if(var_31_bool == 31661) {
				object var_138_object = var_1_object;
				func_3378(var_0_object);
			}
			if(var_31_bool == 31663) {
				object var_143_object = var_1_object;
				func_3373(var_0_object);
			}
			if(var_31_bool == 31664) {
				object var_147_object = var_1_object;
				func_3383(var_0_object);
			}
			if(var_30_object == 31709) {
				bool var_152_bool;
				func_3466(var_1_object);
				if(var_152_bool != 0) {
					object var_160_object; object var_161_object;
					var_160_object = var_1_object;
					var_161_object = var_0_object;
					func_3388();
					func_192(var_31_bool, "Neutral");
					var_0_object->SetMessage(530322); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530323, 31711, 31710); //@t
					var_0_object->AddReply(531020, 32350, 32349); //@t
					return 0;
				}
				bool var_183_bool;
				func_3478(var_1_object);
				if(var_183_bool != 0) {
					func_192(var_31_bool, "Neutral");
					var_0_object->SetMessage(530326); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530327, -1, 31714); //@t
					return 0;
				}
				func_192(var_31_bool, "Neutral");
				var_0_object->SetMessage(530270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530271, -1, 31661); //@t
				var_0_object->AddReply(530273, -1, 31663); //@t
				var_0_object->AddReply(530274, -1, 31664); //@t
				var_0_object->AddReply(530272, -1, 31662); //@t
				return 0;
			}
			if(var_30_object == 32350) {
				func_192(var_31_bool, "Neutral");
				var_0_object->SetMessage(531021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531023, 31711, 32352); //@t
				return 0;
			}
			if(var_30_object == 31711) {
				func_192(var_31_bool, "Neutral");
				var_0_object->SetMessage(530324); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530325, -1, 31712); //@t
				return 0;
			}
			var_3_string = true;
			bool var_222_bool;
			func_3705(var_222_bool);
			if(var_222_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd7";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		var_30_int = GlobalVars[2];
		GlobalVars[2] = 0;
		var_31_int = GlobalVars[5];
		GlobalVars[5] = 1;
	
		for(;;) {
			if(true != 0) {
				var_34_int = GlobalVars[2];
				if(0 == var_34_int) {
					TaskCall(15);
					func_2859();
					TaskReturn();
					bool var_44_bool; int var_45_int;
					var_46_int = GlobalVars[5];
					var_46_int = var_45_int;
					func_3768(var_44_bool, var_45_int);
					if(!var_44_bool) { //@nz
						bool var_72_bool;
						func_3768(var_72_bool, 2);
					}
				} else {
				var_75_int = GlobalVars[2];
				if(1 == var_75_int) {
					TaskCall(3);
					func_641();
					TaskReturn();
					var_96_int = GlobalVars[2];
					if(1 == var_96_int) {
						TaskCall(9);
						func_1720();
						TaskReturn();
					}
					goto Label_637;
				}
				var_164_int = GlobalVars[2];
				if(2 == var_164_int) {
					TaskCall(13);
					func_2443(var_168_bool);
					TaskReturn();
					goto Label_637;
				}
				var_264_int = GlobalVars[2];
				if(3 == var_264_int) {
					TaskCall(3);
					func_641();
					TaskReturn();
					var_267_int = GlobalVars[2];
					if(3 == var_267_int) {
						TaskCall(10);
						func_1957(var_269_bool);
						TaskReturn();
					}
					goto Label_637;
				}
				var_297_int = GlobalVars[2];
				if(8 == var_297_int) {
					TaskCall(6);
					func_985();
					TaskReturn();
					goto Label_637;
				}
				var_383_int = GlobalVars[2];
				if(4 == var_383_int) {
					TaskCall(7);
					func_1213();
					TaskReturn();
					goto Label_637;
				}
				var_463_int = GlobalVars[2];
				if(5 == var_463_int) {
					bool var_465_bool;
					TaskCall(11);
					func_2090(var_465_bool);
					TaskReturn();
					if(!var_466_bool) { //@nz
						var_590_int = GlobalVars[2];
						if(5 == var_590_int) {
							TaskCall(12);
							func_2354();
							TaskReturn();
							var_604_int = GlobalVars[2];
							if(5 == var_604_int) {
								bool var_606_bool;
								func_3768(var_606_bool, 1);
							}
						}
					}
					var_609_int = GlobalVars[2];
					if(5 == var_609_int) {
						TaskCall(12);
						func_2354();
						TaskReturn();
						var_613_int = GlobalVars[2];
						if(5 == var_613_int) {
							bool var_615_bool;
							func_3768(var_615_bool, 2);
						}
					}
					goto Label_637;
				}
				var_618_int = GlobalVars[2];
				if(6 == var_618_int) {
					object var_620_object;
					var_621_object = GlobalVars[3];
					var_621_object = var_620_object;
					TaskCall(5);
					func_773(var_620_object);
					TaskReturn();
					goto Label_637;
				}
				var_693_int = GlobalVars[2];
				if(7 == var_693_int) {
					object var_695_object;
					var_696_object = GlobalVars[4];
					var_696_object = var_695_object;
					TaskCall(8);
					func_1473(var_695_object);
					TaskReturn();
					var_766_int = GlobalVars[2];
					if(7 == var_766_int) {
						bool var_768_bool = true;
						bool var_769_bool; object var_770_object;
						var_771_object = GlobalVars[4];
						var_771_object = var_770_object;
						func_2972(var_769_bool, var_770_object);
						var_772_bool = !var_769_bool; //@nz
						if(var_772_bool != 1) {
							float var_773_float; object var_774_object;
							var_775_object = GlobalVars[4];
							var_775_object = var_774_object;
							func_2906(var_773_float, var_774_object);
							var_783_bool = var_773_float > 1000000.0;
							if(var_783_bool != 1)
								var_768_bool = false;
						}
						if(var_768_bool != 0) {
							bool var_784_bool; object var_785_object;
							var_786_object = GlobalVars[4];
							var_786_object = var_785_object;
							func_2972(var_784_bool, var_785_object);
							if(var_784_bool != 0) {
								object var_787_object;
								var_788_object = GlobalVars[4];
								var_788_object = var_787_object;
								TaskCall(4);
								func_709(var_787_object);
								TaskReturn();
								var_793_int = GlobalVars[2];
								if(7 == var_793_int) {
									TaskCall(12);
									func_2354();
									TaskReturn();
									var_797_int = GlobalVars[2];
									if(7 == var_797_int) {
										bool var_799_bool;
										func_3768(var_799_bool, 1);
									}
								}
							}
						}
					}
					goto Label_637;
				}
				@Trace("Unknown FSM state");
			}
			return 0;
			}
		Label_637:
			@sync();
		}
	
	}

}


task task_3
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		bool var_31_bool; object var_32_object;
		func_3883(var_32_object, var_31_bool, var_32_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			bool var_35_bool;
			func_3768(var_35_bool, 4);
		} else {
			object var_61_object;
			var_30_bool = var_61_object;
			func_3830(var_61_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, int var_22_int, int var_23_int, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool)
	{
		bool var_33_bool = true;
		bool var_34_bool; object var_35_object;
		var_31_object = var_35_object;
		func_2972(var_34_bool, var_35_object);
		var_68_bool = !var_34_bool; //@nz
		if(var_68_bool != 1) {
			float var_69_float; object var_70_object;
			var_31_object = var_70_object;
			func_2906(var_69_float, var_70_object);
			var_78_bool = var_69_float > 1000000.0;
			if(var_78_bool != 1)
				var_33_bool = false;
		}
		if(var_33_bool != 0)
			return 0;
		object var_79_object;
		var_31_object = var_79_object;
		func_3841(var_79_object);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		@Stop();
		@StopGroup0();
		bool var_30_bool;
		func_3768(var_30_bool, 0);
	}

}


task task_4
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		bool var_31_bool; object var_32_object;
		func_3883(var_32_object, var_31_bool, var_32_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			bool var_35_bool;
			func_3768(var_35_bool, 4);
		} else {
			object var_61_object;
			var_30_bool = var_61_object;
			func_3830(var_61_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, int var_22_int, int var_23_int, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool)
	{
		bool var_33_bool = true;
		bool var_34_bool; object var_35_object;
		var_31_object = var_35_object;
		func_2972(var_34_bool, var_35_object);
		var_68_bool = !var_34_bool; //@nz
		if(var_68_bool != 1) {
			float var_69_float; object var_70_object;
			var_31_object = var_70_object;
			func_2906(var_69_float, var_70_object);
			var_78_bool = var_69_float > 1000000.0;
			if(var_78_bool != 1)
				var_33_bool = false;
		}
		if(var_33_bool != 0)
			return 0;
		object var_79_object;
		var_31_object = var_79_object;
		func_3841(var_79_object);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		@Stop();
		@StopGroup0();
		bool var_30_bool;
		func_3768(var_30_bool, 0);
	}

}


task task_5
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		func_953(var_29_bool);
		bool var_31_bool;
		func_3768(var_31_bool, 0);
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		cvector var_35_cvector; float var_36_float; cvector var_37_cvector; float var_38_float;
		if(var_30_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_35_cvector);
			@FindDirLength(var_36_float, var_35_cvector, 7000.0);
			cvector var_44_cvector;
			func_798(var_38_float, var_44_cvector, 1.7453294);
			var_44_cvector = var_37_cvector;
			var_38_float = var_37_cvector | var_37_cvector;
			bool var_74_bool = false;
			if(var_38_float >= 2500.0) {
				bool var_77_bool;
				var_81_bool = var_38_float >= ((var_36_float * var_36_float) * 2.25);
				if(var_81_bool != 1) {
					bool var_82_bool;
					func_969(true, var_82_bool);
					if(var_82_bool != 1)
						var_77_bool = false;
				}
				if(var_77_bool != 0)
					var_74_bool = true;
			}
			if(var_74_bool == 0) goto Label_952;
			@Stop();
			cvector var_102_cvector;
			func_2894(var_102_cvector);
			var_1_object = var_102_cvector + var_37_cvector;
		}
	Label_952:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		func_953(var_30_bool);
		object var_32_object;
		var_30_bool = var_32_object;
		func_3927();
	}

}


task task_6
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		@StopGroup0();
		var_3_string = true;
		func_1181(var_29_bool);
		bool var_31_bool;
		func_3768(var_31_bool, 0);
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		cvector var_35_cvector; float var_36_float; cvector var_37_cvector; float var_38_float;
		if(var_30_bool != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_35_cvector);
			@FindDirLength(var_36_float, var_35_cvector, 7000.0);
			cvector var_44_cvector;
			func_1026(var_38_float, var_44_cvector, 1.7453294);
			var_44_cvector = var_37_cvector;
			var_38_float = var_37_cvector | var_37_cvector;
			bool var_74_bool = false;
			if(var_38_float >= 2500.0) {
				bool var_77_bool;
				var_81_bool = var_38_float >= ((var_36_float * var_36_float) * 2.25);
				if(var_81_bool != 1) {
					bool var_82_bool;
					func_1197(true, var_82_bool);
					if(var_82_bool != 1)
						var_77_bool = false;
				}
				if(var_77_bool != 0)
					var_74_bool = true;
			}
			if(var_74_bool == 0) goto Label_1180;
			@Stop();
			cvector var_102_cvector;
			func_2894(var_102_cvector);
			var_1_object = var_102_cvector + var_37_cvector;
		}
	Label_1180:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		func_1181(var_30_bool);
		object var_32_object;
		var_30_bool = var_32_object;
		func_3927();
	}

}


task task_7
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, int var_16_int, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		if(var_30_bool == 0) {
			if(!var_3_string) { //@nz
				func_1441(var_30_bool);
				bool var_35_bool;
				func_3768(var_35_bool, 1);
			} else {
				var_3_string = false;
		}
			int var_61_int;
			func_1389(var_28_bool, var_29_object, var_61_int, var_61_int);
			return 0;
		}
	
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		bool var_31_bool; object var_32_object;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			var_3_string = true;
		} else {
			func_1441(var_32_object);
			object var_36_object;
			var_30_bool = var_36_object;
			func_3830(var_36_object);
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		func_1441(var_29_bool);
		bool var_31_bool;
		func_3768(var_31_bool, 0);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		func_1441(var_30_bool);
		object var_32_object;
		var_30_bool = var_32_object;
		func_3927();
	}

}


task task_8
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		if(var_30_bool == 1) {
			func_1688(var_30_bool);
			bool var_34_bool;
			func_3768(var_34_bool, 1);
		}
		int var_60_int;
		func_1636(var_28_bool, var_29_object, var_60_int, var_60_int);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			func_1688(var_30_bool);
			bool var_36_bool;
			func_3768(var_36_bool, 4);
		} else {
			func_1688(var_30_bool);
			object var_62_object;
			var_30_bool = var_62_object;
			func_3830(var_62_object);
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		func_1688(var_29_bool);
		bool var_31_bool;
		func_3768(var_31_bool, 0);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		func_1688(var_30_bool);
		object var_32_object;
		var_30_bool = var_32_object;
		func_3927();
	}

}


task task_9
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		func_1857(var_29_object, var_30_bool);
		bool var_34_bool; object var_35_object;
		func_3883(var_35_object, var_34_bool, var_35_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			func_1857(var_29_object, var_30_bool);
			bool var_38_bool;
			func_3768(var_38_bool, 4);
		} else {
			func_1857(var_29_object, var_30_bool);
			object var_64_object;
			var_30_bool = var_64_object;
			func_3830(var_64_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, bool var_26_bool, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool)
	{
		bool var_33_bool = true;
		bool var_34_bool; object var_35_object;
		var_31_object = var_35_object;
		func_2972(var_34_bool, var_35_object);
		var_68_bool = !var_34_bool; //@nz
		if(var_68_bool != 1) {
			float var_69_float; object var_70_object;
			var_31_object = var_70_object;
			func_2906(var_69_float, var_70_object);
			var_78_bool = var_69_float > 1000000.0;
			if(var_78_bool != 1)
				var_33_bool = false;
		}
		if(var_33_bool != 0)
			return 0;
		func_1857(var_31_object, var_32_bool);
		object var_82_object;
		var_31_object = var_82_object;
		func_3841(var_82_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		func_1857(var_28_object, var_29_bool);
		bool var_33_bool;
		func_3768(var_33_bool, 0);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, int var_24_int, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		if(var_30_bool == 10) {
			bool var_33_bool;
			func_1819(var_28_bool, var_29_object, var_30_bool, var_33_bool);
			if(var_33_bool != 0) {
				if(!var_2_object) { //@nz
					func_3244(var_4_bool);
					var_2_object = true;
				}
			} else if(var_2_object != 0) {
				@UnlookAsync("head");
				var_2_object = false;
			}
		}
	
	}

}


task task_10
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, int var_25_int, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		if(var_30_bool != 2) {
		}
		bool var_33_bool; object var_34_object;
		object var_35_object;
		func_3303(var_35_object);
		var_35_object = var_34_object;
		func_3943(var_33_bool, var_34_object);
		if(!var_33_bool) //@nz
			func_1998();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, object var_25_object, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		func_1998();
		bool var_31_bool; object var_32_object;
		func_3883(var_32_object, var_31_bool, var_32_object);
		actor = var_31_bool;
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, object var_25_object, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			func_1998();
			bool var_35_bool;
			func_3768(var_35_bool, 4);
			actor = true;
		} else {
			func_1998();
			actor = true;
			object var_61_object;
			var_30_bool = var_61_object;
			func_3830(var_61_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, object var_25_object, object var_26_object, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool)
	{
		bool var_33_bool = true;
		bool var_34_bool; object var_35_object;
		var_31_object = var_35_object;
		func_2972(var_34_bool, var_35_object);
		var_68_bool = !var_34_bool; //@nz
		if(var_68_bool != 1) {
			float var_69_float; object var_70_object;
			var_31_object = var_70_object;
			func_2906(var_69_float, var_70_object);
			var_78_bool = var_69_float > 1000000.0;
			if(var_78_bool != 1)
				var_33_bool = false;
		}
		if(var_33_bool != 0)
			return 0;
		func_1998();
		actor = true;
		object var_79_object;
		var_31_object = var_79_object;
		func_3841(var_79_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		func_1998();
		var_0_object = true;
		bool var_30_bool;
		func_3768(var_30_bool, 0);
	}

}


task task_11
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		func_2334(var_30_bool);
		bool var_32_bool; object var_33_object;
		func_3883(var_33_object, var_32_bool, var_33_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			func_2334(var_30_bool);
			bool var_36_bool;
			func_3768(var_36_bool, 4);
		} else {
			func_2334(var_30_bool);
			object var_62_object;
			var_30_bool = var_62_object;
			func_3830(var_62_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, object var_27_object, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool)
	{
		bool var_33_bool = true;
		bool var_34_bool; object var_35_object;
		var_31_object = var_35_object;
		func_2972(var_34_bool, var_35_object);
		var_68_bool = !var_34_bool; //@nz
		if(var_68_bool != 1) {
			float var_69_float; object var_70_object;
			var_31_object = var_70_object;
			func_2906(var_69_float, var_70_object);
			var_78_bool = var_69_float > 1000000.0;
			if(var_78_bool != 1)
				var_33_bool = false;
		}
		if(var_33_bool != 0)
			return 0;
		func_2334(var_32_bool);
		object var_80_object;
		var_31_object = var_80_object;
		func_3841(var_80_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		func_2334(var_29_bool);
		bool var_31_bool;
		func_3768(var_31_bool, 0);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, int var_26_int, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		if(var_30_bool != 0)
			return 0;
		bool var_33_bool;
		func_2208(var_33_bool);
		if(!var_33_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		@RequestClearPath(var_30_bool);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		func_2334(var_30_bool);
		object var_32_object;
		var_30_bool = var_32_object;
		func_3927();
	}

}


task task_12
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, object var_27_object, bool var_28_bool, object var_29_object, bool var_30_bool)
	{
		object var_32_object;
		var_30_bool = var_32_object;
		bool var_31_bool;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			func_2438();
			bool var_35_bool;
			func_3768(var_35_bool, 4);
		} else {
			func_2438();
			object var_61_object;
			var_30_bool = var_61_object;
			func_3830(var_61_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, object var_27_object, object var_28_object, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool)
	{
		bool var_33_bool = true;
		bool var_34_bool; object var_35_object;
		var_31_object = var_35_object;
		func_2972(var_34_bool, var_35_object);
		var_68_bool = !var_34_bool; //@nz
		if(var_68_bool != 1) {
			float var_69_float; object var_70_object;
			var_31_object = var_70_object;
			func_2906(var_69_float, var_70_object);
			var_78_bool = var_69_float > 1000000.0;
			if(var_78_bool != 1)
				var_33_bool = false;
		}
		if(var_33_bool != 0)
			return 0;
		func_2438();
		object var_79_object;
		var_31_object = var_79_object;
		func_3841(var_79_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		func_2438();
		var_0_object = true;
		bool var_30_bool;
		func_3768(var_30_bool, 0);
	}

}


task task_13
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object)
	{
		func_2667(var_30_object);
		bool var_32_bool; object var_33_object;
		func_3883(var_33_object, var_32_bool, var_33_object);
		var_2_object = var_32_bool;
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object)
	{
		object var_32_object;
		var_30_object = var_32_object;
		bool var_31_bool;
		func_2914(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			func_2667(var_30_object);
			bool var_36_bool;
			func_3768(var_36_bool, 4);
		} else {
			func_2667(var_30_object);
			object var_62_object;
			var_30_object = var_62_object;
			func_3830(var_62_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, object var_31_object, bool var_32_bool)
	{
		bool var_33_bool = true;
		bool var_34_bool; object var_35_object;
		var_31_object = var_35_object;
		func_2972(var_34_bool, var_35_object);
		var_68_bool = !var_34_bool; //@nz
		if(var_68_bool != 1) {
			float var_69_float; object var_70_object;
			var_31_object = var_70_object;
			func_2906(var_69_float, var_70_object);
			var_78_bool = var_69_float > 1000000.0;
			if(var_78_bool != 1)
				var_33_bool = false;
		}
		if(var_33_bool != 0)
			return 0;
		func_2667(var_32_bool);
		object var_80_object;
		var_31_object = var_80_object;
		func_3841(var_80_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		func_2667(var_29_bool);
		var_2_object = true;
		bool var_31_bool;
		func_3768(var_31_bool, 0);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, int var_30_int)
	{
		if(var_30_int != 0)
			return 0;
		bool var_33_bool;
		func_2683(var_33_bool, var_1_object);
		if(!var_33_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object)
	{
		@RequestClearPath(var_30_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object)
	{
		func_2667(var_30_object);
		object var_32_object;
		var_30_object = var_32_object;
		func_3927();
	}

}


task task_14
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		object var_30_object;
		func_3303(var_30_object);
		@RemoveActor(var_30_object);
		@Hold();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object)
	{
		bool var_32_bool;
		@IsOverrideActive(var_32_bool);
		if(!var_32_bool) { //@nz
			object var_34_object;
			var_30_object = var_34_object;
			func_3643(var_34_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, float var_32_float, float var_33_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, string var_31_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object)
	{
	}

}


task task_15
{
	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, string var_30_string)
	{
		if(var_30_string == "cleanup") {
			object var_33_object;
			func_3303(var_33_object);
			@RemoveActor(var_33_object);
			@Hold();
		}
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool)
	{
		@StopGroup0();
		@sync();
	}

}


// @pe
void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, string var_30_string)
{
	if(var_30_string == "cleanup") {
		var_33_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, float var_32_float, float var_33_float)
{
	object var_34_object;
	var_30_object = var_34_object;
	int var_35_int;
	var_31_int = var_35_int;
	float var_36_float;
	var_32_float = var_36_float;
	func_3059(var_34_object, var_35_int, var_36_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, float var_32_float, float var_33_float, cvector var_34_cvector, cvector var_35_cvector)
{
	object var_36_object;
	var_30_object = var_36_object;
	int var_37_int;
	var_31_int = var_37_int;
	float var_38_float;
	var_32_float = var_38_float;
	cvector var_39_cvector;
	var_34_cvector = var_39_cvector;
	cvector var_40_cvector;
	var_35_cvector = var_40_cvector;
	func_3127(var_38_float, var_39_cvector, var_40_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, string var_31_string)
{
	float var_33_float;
	if(var_31_string == "health") {
		@GetProperty("health", var_33_float);
		if(var_33_float <= 0)
			@SignalDeath(var_30_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object)
{
	func_3490();
	bool var_54_bool;
	func_3332(var_54_bool, "quest_b9_03", "fail");
	object var_60_object;
	var_30_object = var_60_object;
	TaskCall(14);
	func_2694(var_60_object);
	TaskReturn();
}


void func_0(object var_0_object, int var_36_int, object var_37_object)
{
	var_0_object = var_37_object;
	bool var_47_bool; object var_48_object;
	var_37_object = var_48_object;
	func_3146(var_47_bool, var_48_object, 70.0);
	if(!var_47_bool) { //@nz
		var_36_int = -2;
		return 8;
	}
	object var_43_object;
	@CreateDialog(var_43_object);
	int var_94_int;
	func_3699(var_94_int);
	var_43_object->SetNPCName(var_94_int);
	int var_95_int;
	func_3697(var_95_int);
	var_43_object->SetNPCDescription(var_95_int);
	string var_96_string;
	func_3701(var_96_string);
	var_43_object->SetPhoto(var_96_string);
	string var_97_string;
	func_3703(var_97_string);
	var_43_object->SetPhoto2(var_97_string);
	int var_98_int;
	func_3620(var_98_int);
	var_43_object->SetPlayerName(var_98_int);
	bool var_44_bool;
	@IsOverrideActive(var_44_bool);
	if(var_44_bool != 0) {
		var_36_int = -2;
		return 8;
	}
	@DoDialog(var_43_object);
	object var_107_object; object var_108_object;
	var_37_object = var_107_object;
	var_43_object = var_108_object;
	TaskCall(1);
	func_74(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object);
	TaskReturn();
	bool var_46_bool;
	var_43_object->IsDialogEnd(var_46_bool);
	
	for(;;) {
		var_183_bool = !var_46_bool; //@nz
		if(var_183_bool == 0) goto Label_63;
		@sync();
		var_43_object->IsDialogEnd(var_46_bool);
	}
	
Label_63:
	object var_184_object;
	var_37_object = var_184_object;
	func_3214();
	@StopDialog(var_43_object);
	var_43_object->GetReturnValue(-1);
	int var_45_int = var_36_int;
}
EMIT "Stack[-4] = 0";


void func_1026(object var_0_object, cvector var_323_cvector, float var_324_float)
{
	cvector var_331_cvector;
	@GetPosition(var_331_cvector);
	cvector var_332_cvector;
	var_0_object->GetPosition(var_332_cvector); //@t
	cvector var_333_cvector;
	@GetDirection(var_333_cvector);
	cvector var_337_cvector;
	cvector var_339_cvector;
	func_3309(var_339_cvector, (var_331_cvector - var_332_cvector));
	func_3309(var_337_cvector, (var_339_cvector + (var_333_cvector * 0.75)));
	cvector var_334_cvector;
	var_337_cvector = var_334_cvector;
	cvector var_335_cvector;
	float var_336_float;
	@FindLongestDir(var_335_cvector, var_336_float, var_334_cvector, var_324_float, 32, 7000.0);
	if((var_336_float - 100) < 0)
		var_336_float = 0;
	var_323_cvector = var_335_cvector * var_336_float;
}


void func_3587(object var_97_object, string var_98_string, float var_99_float)
{
	object var_107_object;
	@GetMainOutdoorScene(var_107_object);
	if(var_107_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_105_cvector;
	cvector var_106_cvector;
	bool var_108_bool;
	var_107_object->GetLocator(var_98_string, var_108_bool, var_105_cvector, var_106_cvector);
	if(!var_108_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_98_string) + " doesnt exist");
	var_107_object->GetMap(var_97_object);
	if(var_97_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_118_float = GetByIndex(var_105_cvector, 0);
	var_119_float = GetByIndex(var_105_cvector, 2);
	var_97_object->SetMapParams(var_118_float, var_119_float, var_99_float);
}
EMIT "Stack[-2] = 0";


void func_1563(object var_0_object, object var_1_object, object var_2_object, object var_702_object)
{
	float var_709_float; cvector var_711_cvector; float var_712_float;
	cvector var_713_cvector;
	func_1533(var_712_float, var_713_cvector, 1.7453294);
	cvector var_708_cvector;
	var_713_cvector = var_708_cvector;
	if((var_708_cvector | var_708_cvector) < 2500.0) {
		cvector var_740_cvector;
		func_1533(var_712_float, var_740_cvector, 2.6179938);
		var_740_cvector = var_708_cvector;
		var_709_float = var_708_cvector | var_708_cvector;
		if(var_709_float < 2500.0) {
			var_745_float = sqrt(var_709_float);
			@Trace("Can't retreat, distance: " + var_745_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_748_float = GetByIndex(var_708_cvector, 0);
	var_749_float = GetByIndex(var_708_cvector, 2);
	@Rotate(var_748_float, var_749_float);
	cvector var_750_cvector;
	func_2894(var_750_cvector);
	@SetTimer(120, 0.5);
	
Label_1605:
	bool var_710_bool;
	@MovePoint((var_750_cvector + var_708_cvector), 1, var_710_bool);
	if(var_710_bool != 0) {
		if(var_702_object == null) {
			goto Label_1635;
		EMIT "GOTO 0x661";

		Label_1635:
			for(;;) {
				return 10;
		}
			cvector var_756_cvector;
			func_1533(var_712_float, var_756_cvector, 2.6179938);
			var_756_cvector = var_711_cvector;
			if((var_711_cvector | var_711_cvector) >= 2500.0) {
				cvector var_760_cvector;
				func_2894(var_760_cvector);
				var_1_object = var_760_cvector + var_711_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1605; //@nz

	}
}


void func_1056(object var_0_object, object var_1_object, object var_2_object, object var_312_object)
{
	float var_319_float; cvector var_321_cvector; float var_322_float;
	cvector var_323_cvector;
	func_1026(var_322_float, var_323_cvector, 1.7453294);
	cvector var_318_cvector;
	var_323_cvector = var_318_cvector;
	if((var_318_cvector | var_318_cvector) < 2500.0) {
		cvector var_355_cvector;
		func_1026(var_322_float, var_355_cvector, 2.6179938);
		var_355_cvector = var_318_cvector;
		var_319_float = var_318_cvector | var_318_cvector;
		if(var_319_float < 2500.0) {
			var_360_float = sqrt(var_319_float);
			@Trace("Can't retreat, distance: " + var_360_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_363_float = GetByIndex(var_318_cvector, 0);
	var_364_float = GetByIndex(var_318_cvector, 2);
	@Rotate(var_363_float, var_364_float);
	cvector var_365_cvector;
	func_2894(var_365_cvector);
	@SetTimer(120, 0.5);
	
Label_1098:
	bool var_320_bool;
	@MovePoint((var_365_cvector + var_318_cvector), 1, var_320_bool);
	if(var_320_bool != 0) {
		if(var_312_object == null) {
			goto Label_1128;
		EMIT "GOTO 0x466";

		Label_1128:
			for(;;) {
				return 10;
		}
			cvector var_373_cvector;
			func_1026(var_322_float, var_373_cvector, 2.6179938);
			var_373_cvector = var_321_cvector;
			if((var_321_cvector | var_321_cvector) >= 2500.0) {
				cvector var_377_cvector;
				func_2894(var_377_cvector);
				var_1_object = var_377_cvector + var_321_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1098; //@nz

	}
}


void func_3620(int var_98_int)
{
	int var_100_int;
	@GetVariable("branch", var_100_int);
	if(var_100_int == 0) {
		var_98_int = 1;
		return 2;
	EMIT "GOTO 0xe33";
	}
	if(var_100_int == 1) {
		var_98_int = 2;
		return 2;
	}
	var_98_int = 3;
}


void func_2090(bool var_465_bool)
{
	int var_479_int;
	func_3707(var_479_int);
	int var_473_int;
	var_479_int = var_473_int;
	bool var_506_bool = true;
	var_508_bool = var_473_int == -1;
	if(var_508_bool != 1) {
		bool var_509_bool; int var_510_int;
		var_473_int = var_510_int;
		func_3736(var_509_bool, var_510_int);
		if(var_509_bool != 1)
			var_506_bool = false;
	}
	if(var_506_bool != 0) {
		bool var_516_bool;
		func_3768(var_516_bool, 1);
		var_465_bool = false;
	}
	object var_477_object;
	@GetScene(var_477_object);
	cvector var_474_cvector;
	cvector var_475_cvector;
	bool var_476_bool;
	var_477_object->GetLocator(("pt_b9q03_bonfire" + var_473_int), var_476_bool, var_474_cvector, var_475_cvector);
	var_520_float = GetByIndex(var_474_cvector, 1);
	SetByIndex(var_474_cvector, 1) = (var_520_float + 50);
	bool var_522_bool; cvector var_523_cvector; cvector var_524_cvector;
	var_474_cvector = var_523_cvector;
	var_475_cvector = var_524_cvector;
	bool var_478_bool;
	func_2210(var_478_bool, var_522_bool, var_523_cvector, var_524_cvector, (float)100, (float)3000, false, true);
	var_522_bool = var_478_bool;
	if(var_478_bool != 0) {
		int var_575_int;
		var_473_int = var_575_int;
		func_3744(var_575_int);
	}
	var_478_bool = var_465_bool;
}
EMIT "Stack[-2] = 0";


void func_3637(int var_61_int)
{
	int var_63_int;
	@GetVariable("branch", var_63_int);
	var_63_int = var_61_int;
}


void func_3127(object var_36_object, cvector var_39_cvector, cvector var_40_cvector)
{
	object var_43_object;
	@GetScene(var_43_object);
	object var_44_object;
	@AddActorByType(var_44_object, "scripted", var_43_object, var_39_cvector, var_40_cvector, "blood_dir.xml");
	object var_47_object;
	var_36_object = var_47_object;
	func_3015(var_47_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3643(object var_34_object)
{
	int var_35_int;
	func_3637(var_35_int);
	if(var_35_int == 1)
		@WorkWithCorpse(var_34_object);
	else
		@Barter(var_34_object);
	
}


void func_3141(bool var_40_bool)
{
	bool var_42_bool;
	@IsLoaded(var_42_bool);
	var_42_bool = var_40_bool;
}


void func_3656(string var_67_string)
{
	object var_71_object;
	@CreateInvItem(var_71_object);
	var_71_object->SetItemName(var_67_string);
	var_71_object->SetProperty("Organ", 1);
	int var_72_int;
	var_71_object->GetItemID(var_72_int);
	bool var_73_bool;
	@AddItem(var_73_bool, var_71_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_3146(bool var_47_bool, object var_48_object, float var_49_float)
{
	cvector var_60_cvector; bool var_67_bool;
	var_48_object->GetPosition(var_60_cvector);
	float var_59_float;
	var_48_object->GetEyesHeight(var_59_float);
	var_68_float = GetByIndex(var_60_cvector, 1);
	SetByIndex(var_60_cvector, 1) = (var_68_float + var_59_float);
	cvector var_61_cvector;
	@GetPosition(var_61_cvector);
	@GetEyesHeight(var_59_float);
	var_69_float = GetByIndex(var_61_cvector, 1);
	SetByIndex(var_61_cvector, 1) = (var_69_float + var_59_float);
	cvector var_62_cvector = var_60_cvector - var_61_cvector;
	var_70_float = GetByIndex(var_62_cvector, 1);
	SetByIndex(var_62_cvector, 1) = (float)0;
	var_72_float = sqrt(var_62_cvector | var_62_cvector);
	var_62_cvector /= var_72_float;
	cvector var_63_cvector = -var_62_cvector;
	cvector var_74_cvector;
	func_3309(var_74_cvector, (var_63_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_64_cvector = ((var_62_cvector * var_49_float) + (var_74_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_66_bool;
	@IsOverrideActive(var_66_bool);
	if(var_66_bool != 0)
		var_47_bool = false;
	@StopWorld();
	@CameraTransit((var_61_cvector + var_64_cvector), var_63_cvector);
	var_87_float = GetByIndex(var_64_cvector, 0);
	var_88_float = GetByIndex(var_64_cvector, 2);
	@Rotate(var_87_float, var_88_float);
	bool var_89_bool;
	func_3705(var_89_bool);
	if(var_89_bool != 0) {
	} else {
		@HasAnimationTrack(var_67_bool, "head");
		if(var_67_bool == 0) goto Label_3208;
		@LookAsyncCamera("head");
	}
Label_3208:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_47_bool = true;
	
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_107_object, object var_108_object)
{
	var_0_object = var_108_object;
	var_1_object = var_107_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_114_bool;
		func_3466(var_1_object);
		if(var_114_bool != 0) {
			object var_122_object; object var_123_object;
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_3388();
			func_192(var_108_object, "Neutral");
			var_0_object->SetMessage(530322); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530323, 31711, 31710); //@t
			var_0_object->AddReply(531020, 32350, 32349); //@t
		} else {
					bool var_158_bool;
					func_3478(var_1_object);
					if(var_158_bool == 0) goto Label_130;
					func_192(var_108_object, "Neutral");
					var_0_object->SetMessage(530326); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530327, -1, 31714); //@t
		}
	}
Label_162:
	for(;;) {
		bool var_145_bool;
		func_3705(var_145_bool);
		if(var_145_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_3231(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_191;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_191:
			return 0;

		}

	}
	
Label_130:
	func_192(var_108_object, "Neutral");
	var_0_object->SetMessage(530270); //@t
	var_0_object->ClearReplies(); //@t
	var_0_object->AddReply(530271, -1, 31661); //@t
	var_0_object->AddReply(530273, -1, 31663); //@t
	var_0_object->AddReply(530274, -1, 31664); //@t
	var_0_object->AddReply(530272, -1, 31662); //@t
	goto Label_162;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x4e";


void func_3673(void)
{
	int var_61_int;
	func_3637(var_61_int);
	if(var_61_int != 1) {
	}
	func_3656("liver");
	func_3656("kidney");
	func_3656("heart");
	func_3656("blood");
}


void func_1636(object var_0_object, object var_1_object, object var_2_object, int var_60_int)
{
	cvector var_65_cvector; float var_66_float; cvector var_67_cvector; float var_68_float;
	if(var_60_int != 120) {
	}
	if(var_0_object == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_65_cvector);
		@FindDirLength(var_66_float, var_65_cvector, 7000.0);
		cvector var_74_cvector;
		func_1533(var_68_float, var_74_cvector, 1.7453294);
		var_74_cvector = var_67_cvector;
		var_68_float = var_67_cvector | var_67_cvector;
		bool var_104_bool = false;
		if(var_68_float >= 2500.0) {
			bool var_107_bool;
			var_111_bool = var_68_float >= ((var_66_float * var_66_float) * 2.25);
			if(var_111_bool != 1) {
				bool var_112_bool;
				func_1704(true, var_112_bool);
				if(var_112_bool != 1)
					var_107_bool = false;
			}
			if(var_107_bool != 0)
				var_104_bool = true;
		}
		if(var_104_bool == 0) goto Label_1687;
		@Stop();
		cvector var_132_cvector;
		func_2894(var_132_cvector);
		var_1_object = var_132_cvector + var_67_cvector;
	}
Label_1687:
	
}


void func_2667(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_3697(int var_95_int)
{
	var_95_int = 515558;
}


void func_3699(int var_94_int)
{
	var_94_int = 503343;
}


void func_3701(string var_96_string)
{
	var_96_string = "ui/NPC_Citizen3.png";
}


void func_3703(string var_97_string)
{
	var_97_string = "ui/NPC_Citizen3_b.png";
}


void func_3705(bool var_89_bool)
{
	var_89_bool = false;
}


void func_3707(int var_479_int)
{
	object var_490_object; cvector var_492_cvector; cvector var_493_cvector; bool var_494_bool; int var_496_int; int var_497_int; float var_499_float;
	@GetScene(var_490_object);
	cvector var_491_cvector;
	@GetPosition(var_491_cvector);
	float var_495_float = 9000000;
	
	for(;;) {
		if(true != 0) {
			var_490_object->GetLocator(("pt_b9q03_bonfire" + 1), var_494_bool, var_492_cvector, var_493_cvector);
			if(!var_494_bool) { //@nz
			} else {
				if(((var_491_cvector - var_492_cvector) | (var_491_cvector - var_492_cvector)) < var_495_float) {
					var_499_float = var_495_float;
					var_496_int = -1;
				}
				var_496_int += 1;
			}
		}
		var_497_int = var_479_int;

	}
}
EMIT "Stack[-10] = 0";


// @pe
void func_2683(bool var_231_bool, object var_232_object)
{
	object var_234_object;
	var_232_object = var_234_object;
	bool var_233_bool;
	func_2972(var_233_bool, var_234_object);
	var_233_bool = var_231_bool;
}


void func_641(void)
{
	object var_78_object;
	@FindActor(var_78_object, "player");
	if(!var_78_object) { //@nz
	}
	bool var_81_bool; object var_82_object;
	var_78_object = var_82_object;
	func_3006(var_81_bool, var_82_object);
}
EMIT "Stack[-1] = 0";


void func_2690(string var_249_string)
{
	var_249_string = "walk";
}


void func_2692(string var_250_string)
{
	var_250_string = "run";
}


// @pe
void func_2694(object var_60_object)
{
	func_3673();
	object var_81_object;
	var_60_object = var_81_object;
	func_2711(var_81_object);
}


void func_3214(void)
{
	bool var_186_bool;
	@CameraSwitchToNormal();
	bool var_187_bool;
	func_3705(var_187_bool);
	if(var_187_bool != 0) {
	} else {
		@HasAnimationTrack(var_186_bool, "head");
		if(var_186_bool == 0) goto Label_3230;
		@UnlookAsync("head");
	}
Label_3230:
	
}


// @pe
void func_2711(object var_81_object)
{
	object var_82_object;
	var_81_object = var_82_object;
	func_2736(var_82_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1688(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_3736(bool var_509_bool, int var_510_int)
{
	int var_512_int;
	@GetVariable(("b9q03Bonfire" + var_510_int), var_512_int);
	var_509_bool = var_512_int != 0;
}


void func_1181(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_3231(string var_147_string)
{
	float var_150_float; float var_151_float;
	@lshGetAnimTimes(var_147_string, var_150_float, var_151_float);
	@lshPlayAnimation(var_150_float, var_151_float, false);
}


void func_3744(int var_575_int)
{
	string var_577_string;
	@TriggerWorld("enable_bonfire", var_577_string);
	bool var_579_bool;
	func_3332(var_579_bool, "quest_b9_03", "bonfire_burn");
	@SetVariable(("b9q03Bonfire" + var_577_string), 1);
}


void func_2208(bool var_545_bool)
{
	var_545_bool = true;
}


void func_2210(object var_0_object, bool var_522_bool, cvector var_523_cvector, cvector var_524_cvector, float var_525_float, float var_526_float, bool var_527_bool, bool var_528_bool)
{
	bool var_537_bool; object var_539_object; cvector var_540_cvector; cvector var_541_cvector; float var_543_float; object var_544_object;
	var_0_object = false;
	bool var_538_bool;
	var_528_bool = var_538_bool;
	
	for(;;) {
		bool var_545_bool;
		func_2208(var_545_bool);
		if(!var_545_bool) { //@nz
			var_522_bool = false;
			return 16;
		}
		var_523_cvector = var_540_cvector;
		@GetPosition(var_541_cvector);
		var_543_float = (var_540_cvector - var_541_cvector) | (var_540_cvector - var_541_cvector);
		bool var_547_bool = false;
		if(var_526_float > 0) {
			if(var_543_float > (var_526_float * var_526_float))
				var_547_bool = true;
		}
		if(var_547_bool != 0) {
			@Stop();
			var_522_bool = false;
			return 16;
		}
		if(var_543_float > (var_525_float * var_525_float)) {
			@FindPathTo(var_544_object, var_540_cvector);
			if(var_544_object != null) {
				var_544_object = var_539_object;
				var_544_object = null;
			}
			if(var_539_object != null) {
				if(var_538_bool == 0) goto Label_2258;
				var_538_bool = false;
				@RotatePath(var_539_object, var_537_bool);
				if(!var_537_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_563_string;
						func_2350(var_563_string);
						string var_564_string;
						func_2352(var_564_string);
						@FollowPath(var_539_object, var_527_bool, var_537_bool, var_563_string, var_564_string);
						if(!var_537_bool) { //@nz
							if(var_0_object == 0) goto Label_2277;
							var_539_object = null;
						}
					EMIT "GOTO 0x8e6";

					Label_2277:
						} else {
					var_539_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_537_bool);
					if(!var_537_bool) { //@nz
						if(var_0_object != 0) {
							var_539_object = null;
							goto Label_2305;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2305;
		}
			var_544_object = null;
			goto Label_2303;

		Label_2303:
			var_539_object = null;

		}
	Label_2305:
		for(;;) {
			if(!var_0_object) { //@nz
				var_559_float = GetByIndex(var_524_cvector, 0);
				var_560_float = GetByIndex(var_524_cvector, 2);
				@RotateAsync(var_559_float, var_560_float);
			}
			var_522_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_3238(string var_130_string, bool var_131_bool)
{
	float var_136_float; float var_137_float;
	@lshGetAnimTimes(var_130_string, var_136_float, var_137_float);
	@lshPlayAnimation(var_136_float, var_137_float, var_131_bool);
}


void func_1704(object var_0_object, bool var_112_bool)
{
	cvector var_115_cvector;
	@GetDirection(var_115_cvector);
	cvector var_117_cvector;
	func_2899(var_117_cvector, var_0_object);
	cvector var_116_cvector;
	var_117_cvector = var_116_cvector;
	float var_123_float; cvector var_124_cvector; cvector var_125_cvector;
	var_115_cvector = var_124_cvector;
	var_116_cvector = var_125_cvector;
	func_3319(var_123_float, var_124_cvector, var_125_cvector);
	var_112_bool = var_123_float >= -0.34202012;
}


void func_3244(object var_280_object)
{
	float var_283_float;
	var_280_object->GetEyesHeight(var_283_float);
	cvector var_284_cvector = [0.0, 0.0, 0.0];
	var_285_float = GetByIndex(var_284_cvector, 1);
	var_283_float = var_285_float;
	SetByIndex(var_284_cvector, 1) = var_285_float;
	@LookAsync(var_280_object, "head", var_284_cvector);
}


void func_1197(object var_0_object, bool var_82_bool)
{
	cvector var_85_cvector;
	@GetDirection(var_85_cvector);
	cvector var_87_cvector;
	func_2899(var_87_cvector, var_0_object);
	cvector var_86_cvector;
	var_87_cvector = var_86_cvector;
	float var_93_float; cvector var_94_cvector; cvector var_95_cvector;
	var_85_cvector = var_94_cvector;
	var_86_cvector = var_95_cvector;
	func_3319(var_93_float, var_94_cvector, var_95_cvector);
	var_82_bool = var_93_float >= -0.34202012;
}


void func_2736(object var_82_object)
{
	cvector var_93_cvector; cvector var_94_cvector; cvector var_95_cvector; cvector var_96_cvector; string var_97_string; object var_98_object; bool var_99_bool; bool var_100_bool; float var_101_float; cvector var_102_cvector;
	if(var_82_object == null) {
		func_2827("fdie");
	} else {
		var_82_object->GetPosition(var_93_cvector);
		@GetPosition(var_94_cvector);
		@GetDirection(var_95_cvector);
		var_96_cvector = var_94_cvector - var_93_cvector;
		var_136_float = GetByIndex(var_96_cvector, 0);
		var_137_float = GetByIndex(var_95_cvector, 0);
		var_139_float = GetByIndex(var_96_cvector, 2);
		var_140_float = GetByIndex(var_95_cvector, 2);
		if(((var_136_float * var_137_float) + (var_139_float * var_140_float)) >= 0)
			var_97_string = "fdie";
		else
			var_97_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_82_object = var_98_object;
		var_147_bool = IsFuncExist(var_82_object, "GetScriptProperty", 2);
		if(var_147_bool != 0) {
			var_82_object->HasScriptProperty(var_99_bool, "Owner");
			if(var_99_bool != 0) {
				var_82_object->GetScriptProperty(var_98_object, "Owner");
				if(var_98_object == null)
					var_82_object = var_98_object;
			}
		}
		var_154_bool = IsFuncExist(var_98_object, "@GetEyesHeight", 1);
		if(var_154_bool != 0) {
			var_98_object->GetEyesHeight(var_101_float);
			var_102_cvector = [0.0, 0.0, 0.0];
			var_155_float = GetByIndex(var_102_cvector, 1);
			var_101_float = var_155_float;
			SetByIndex(var_102_cvector, 1) = var_155_float;
			@LookAsync(var_82_object, "head", var_102_cvector);
			var_100_bool = true;
		} else {
			var_100_bool = false;

		}
		string var_157_string;
		var_97_string = var_157_string;
		func_3262(var_157_string);
		@PlayAnimation("all", var_97_string);
		@WaitForAnimEnd();
		if(var_100_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_97_string);
		@RemoveEnvelope();
		var_98_object = null;
	}
	
}


void func_3255(void)
{
	bool var_33_bool;
	func_3705(var_33_bool);
	if(var_33_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_3768(bool var_44_bool, int var_45_int)
{
	if(var_45_int == 1) {
		@Trace("changing state to c_iStateWaitForCommand");
	} else if(var_45_int == 2) {
			@Trace("changing state to c_iStateFollow");
	}

	for(;;) {
		var_50_int = GlobalVars[2];
		var_45_int = var_50_int;
		GlobalVars[2] = var_50_int;
		var_44_bool = true;
		return 0;

	}
	
	if(var_45_int == 3) {
		@Trace("changing state to c_iStateIdleAndFollow");
	} else if(var_45_int == 4) {
		@Trace("changing state to c_iStateRetreatPlayer");
	} else if(var_45_int == 5) {
		@Trace("changing state to c_iStateBurn");
	} else if(var_45_int == 0) {
		var_65_int = GlobalVars[5];
		var_66_int = GlobalVars[2];
		var_66_int = var_65_int;
		GlobalVars[5] = var_65_int;
		@Trace("changing state to c_iStateWaitForLoad");
	} else if(var_45_int == 8) {
		@Trace("changing state to c_iStateGoAway");
	}
	var_44_bool = false;
}


void func_1720(void)
{
	func_1792(var_98_int, var_99_int, var_100_bool, var_101_bool, var_102_object, (float)300, (float)100);
}


void func_1213(void)
{
	object var_390_object;
	@FindActor(var_390_object, "player");
	bool var_392_bool; object var_393_object;
	var_390_object = var_393_object;
	func_2972(var_392_bool, var_393_object);
	if(!var_392_bool) { //@nz
		bool var_395_bool;
		func_3768(var_395_bool, 1);
	}
	@SetTimer(0, 5);
	object var_399_object;
	object var_389_object;
	func_1316(var_388_bool, var_389_object, var_399_object, var_399_object);
	@KillTimer(0);
}
EMIT "Stack[-1] = 0";


void func_3262(string var_105_string)
{
	bool var_114_bool; int var_115_int; bool var_116_bool; int var_117_int; bool var_118_bool; float var_119_float; cvector var_120_cvector; cvector var_121_cvector;
	@IsExisting3DSound(var_114_bool, var_105_string);
	if(!var_114_bool) { //@nz
		var_115_int = 0;

		for(;;) {
			@IsExisting3DSound(var_116_bool, (var_105_string + (var_115_int + 1)));
			if(!var_116_bool) { //@nz
				break;
			Label_3282:
				@irand(var_117_int, var_115_int);
				var_105_string += (var_117_int + 1);
	}
			@Is3DSoundLoaded(var_118_bool, var_105_string);
			if(var_118_bool != 0) {
				@GetEyesHeight(var_119_float);
				@GetDirection(var_120_cvector);
				var_121_cvector = var_120_cvector * 50;
				var_132_float = GetByIndex(var_121_cvector, 1);
				SetByIndex(var_121_cvector, 1) = (var_132_float + var_119_float);
				@PlayGlobalSound(var_105_string, var_121_cvector);
			}
		}
		var_115_int += 1;
	}
	var_127_bool = !var_115_int; //@nz
	if(var_127_bool == 0) goto Label_3282;
}


// @pe
void func_192(object var_2_object, string var_126_string)
{
	bool var_127_bool;
	func_3705(var_127_bool);
	if(!var_127_bool) //@nz
		return 0;
	if(var_126_string == var_2_object)
		return 0;
	string var_130_string; bool var_131_bool;
	var_126_string = var_130_string;
	if(var_126_string == "")
		var_131_bool = false;
	else
		var_131_bool = true;
	func_3238(var_130_string, var_131_bool);
	var_2_object = var_126_string;
	
}


// @pe
void func_709(object var_787_object)
{
	if(!var_787_object) { //@nz
	}
	bool var_790_bool; object var_791_object;
	var_787_object = var_791_object;
	func_3006(var_790_bool, var_791_object);
}


void func_3303(object var_37_object)
{
	object var_39_object;
	@self(var_39_object);
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_3309(cvector var_339_cvector, cvector var_340_cvector)
{
	float var_342_float = sqrt(var_340_cvector | var_340_cvector);
	if(var_342_float < 0.000001)
		var_339_cvector = [0.0, 0.0, 0.0];
	var_339_cvector = var_340_cvector / var_342_float;
}


// @pe
void func_3830(object var_62_object)
{
	@Trace("changing state to c_iStateRetreat");
	var_64_int = GlobalVars[2];
	GlobalVars[2] = 6;
	var_65_object = GlobalVars[3];
	var_62_object = var_65_object;
	GlobalVars[3] = var_65_object;
}


// @pe
void func_3319(float var_123_float, cvector var_124_cvector, cvector var_125_cvector)
{
	var_130_float = sqrt((var_124_cvector | var_124_cvector) * (var_125_cvector | var_125_cvector));
	var_123_float = (var_124_cvector | var_125_cvector) / var_130_float;
}


void func_3327(int var_116_int, string var_117_string)
{
	int var_119_int;
	@GetVariable(var_117_string, var_119_int);
	var_119_int = var_116_int;
}


// @pe
void func_1792(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_103_float, float var_104_float)
{
	bool var_105_bool;
	func_3141(var_105_bool);
	if(!var_105_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_103_float;
	var_1_object = var_104_float;
	@SetTimer(10, 1.0);
	func_1871();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_3841(object var_80_object)
{
	@Trace("changing state to c_iStateRetreatPDamage");
	var_82_int = GlobalVars[2];
	GlobalVars[2] = 7;
	var_83_object = GlobalVars[4];
	var_80_object = var_83_object;
	GlobalVars[4] = var_83_object;
}


void func_3332(bool var_579_bool, string var_580_string, string var_581_string)
{
	object var_583_object;
	@FindActor(var_583_object, var_580_string);
	if(var_583_object == null)
		var_579_bool = false;
	@Trigger(var_583_object, var_581_string);
	var_579_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_773(object var_620_object)
{
	object var_626_object;
	var_620_object = var_626_object;
	bool var_625_bool;
	func_2972(var_625_bool, var_626_object);
	if(!var_625_bool) { //@nz
		bool var_628_bool;
		func_3768(var_628_bool, 1);
	}
	object var_630_object;
	func_828(var_623_cvector, var_624_bool, var_630_object, var_630_object);
}


void func_1286(object var_0_object, cvector var_410_cvector, float var_411_float)
{
	cvector var_418_cvector;
	@GetPosition(var_418_cvector);
	cvector var_419_cvector;
	var_0_object->GetPosition(var_419_cvector); //@t
	cvector var_420_cvector;
	@GetDirection(var_420_cvector);
	cvector var_424_cvector;
	cvector var_426_cvector;
	func_3309(var_426_cvector, (var_418_cvector - var_419_cvector));
	func_3309(var_424_cvector, (var_426_cvector + (var_420_cvector * 0.75)));
	cvector var_421_cvector;
	var_424_cvector = var_421_cvector;
	cvector var_422_cvector;
	float var_423_float;
	@FindLongestDir(var_422_cvector, var_423_float, var_421_cvector, var_411_float, 32, 7000.0);
	if((var_423_float - 100) < 0)
		var_423_float = 0;
	var_410_cvector = var_422_cvector * var_423_float;
}


// @pe
void func_2827(string var_104_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_105_string;
	var_104_string = var_105_string;
	func_3262(var_105_string);
	@PlayAnimation("all", var_104_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_104_string);
	@RemoveEnvelope();
}


void func_3344(float var_54_float)
{
	float var_56_float;
	@GetGameTime(var_56_float);
	var_56_float = var_54_float;
}


void func_3349(string var_132_string, int var_133_int)
{
	string var_135_string = "idle";
	if(var_133_int != 0)
		var_135_string += var_133_int;
	var_135_string = var_132_string;
}


void func_1819(object var_0_object, object var_1_object, bool var_4_bool, bool var_33_bool)
{
	if(var_4_bool == null)
		var_33_bool = false;
	float var_37_float;
	func_2906(var_37_float, var_4_bool);
	float var_35_float = sqrt(var_37_float);
	if(var_2_object != 0)
		var_35_float -= var_1_object;
	var_33_bool = var_35_float < var_0_object;
}


void func_3356(int var_126_int)
{
	int var_129_int; bool var_130_bool;
	var_129_int = 0;
	
	for(;;) {
		string var_132_string; int var_133_int;
		var_129_int = var_133_int;
		func_3349(var_132_string, var_133_int);
		@HasAnimation(var_130_bool, "all", var_132_string);
		if(!var_130_bool) //@nz
			break;
		var_129_int += 1;
	}
	var_129_int = var_126_int;
}


void func_798(object var_0_object, cvector var_641_cvector, float var_642_float)
{
	cvector var_649_cvector;
	@GetPosition(var_649_cvector);
	cvector var_650_cvector;
	var_0_object->GetPosition(var_650_cvector); //@t
	cvector var_651_cvector;
	@GetDirection(var_651_cvector);
	cvector var_655_cvector;
	cvector var_657_cvector;
	func_3309(var_657_cvector, (var_649_cvector - var_650_cvector));
	func_3309(var_655_cvector, (var_657_cvector + (var_651_cvector * 0.75)));
	cvector var_652_cvector;
	var_655_cvector = var_652_cvector;
	cvector var_653_cvector;
	float var_654_float;
	@FindLongestDir(var_653_cvector, var_654_float, var_652_cvector, var_642_float, 32, 7000.0);
	if((var_654_float - 100) < 0)
		var_654_float = 0;
	var_641_cvector = var_653_cvector * var_654_float;
}


void func_2334(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1316(object var_0_object, object var_1_object, object var_2_object, object var_399_object)
{
	float var_406_float; cvector var_408_cvector; float var_409_float;
	cvector var_410_cvector;
	func_1286(var_409_float, var_410_cvector, 1.7453294);
	cvector var_405_cvector;
	var_410_cvector = var_405_cvector;
	if((var_405_cvector | var_405_cvector) < 2500.0) {
		cvector var_437_cvector;
		func_1286(var_409_float, var_437_cvector, 2.6179938);
		var_437_cvector = var_405_cvector;
		var_406_float = var_405_cvector | var_405_cvector;
		if(var_406_float < 2500.0) {
			var_442_float = sqrt(var_406_float);
			@Trace("Can't retreat, distance: " + var_442_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_445_float = GetByIndex(var_405_cvector, 0);
	var_446_float = GetByIndex(var_405_cvector, 2);
	@Rotate(var_445_float, var_446_float);
	cvector var_447_cvector;
	func_2894(var_447_cvector);
	@SetTimer(120, 0.5);
	
Label_1358:
	bool var_407_bool;
	@MovePoint((var_447_cvector + var_405_cvector), 1, var_407_bool);
	if(var_407_bool != 0) {
		if(var_399_object == null) {
			goto Label_1388;
		EMIT "GOTO 0x56a";

		Label_1388:
			for(;;) {
				return 10;
		}
			cvector var_453_cvector;
			func_1286(var_409_float, var_453_cvector, 2.6179938);
			var_453_cvector = var_408_cvector;
			if((var_408_cvector | var_408_cvector) >= 2500.0) {
				cvector var_457_cvector;
				func_2894(var_457_cvector);
				var_1_object = var_457_cvector + var_408_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1358; //@nz

	}
}


void func_2859(void)
{
	var_36_bool = GlobalVars[1];
	if(var_36_bool != 0) {
		object var_37_object;
		func_3303(var_37_object);
		@RemoveActor(var_37_object);
		@Hold();
	}
	for(;;) {
		bool var_40_bool;
		func_3141(var_40_bool);
		var_43_bool = !var_40_bool; //@nz
		if(var_43_bool == 0) goto Label_2876;
		@Hold();
	}
	
Label_2876:
}


void func_3883(bool var_32_bool, object var_33_object, object var_38_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	TaskCall(0);
	int var_36_int;
	func_0(var_38_object, var_36_int, var_37_object);
	TaskReturn();
	int var_35_int;
	var_38_object = var_35_int;
	if(var_35_int == 2) {
		bool var_193_bool;
		func_3768(var_193_bool, 2);
	} else if(var_35_int == 1) {
			bool var_221_bool;
			func_3768(var_221_bool, 1);
	}

	for(;;) {
		var_32_bool = true;
		return 2;

	}
	
	if(var_35_int == 3) {
		bool var_225_bool;
		func_3768(var_225_bool, 5);
	} else if(var_35_int == 4) {
		bool var_229_bool;
		func_3768(var_229_bool, 8);
	}
	var_32_bool = false;
}


// @pe
void func_3373(object var_37_object)
{
	var_37_object->SetReturnValue(2);
}


void func_2350(string var_563_string)
{
	var_563_string = "walk";
}


void func_2352(string var_564_string)
{
	var_564_string = "run";
}


// @pe
void func_3378(object var_139_object)
{
	var_139_object->SetReturnValue(1);
}


void func_2354(void)
{
	func_2417("hunt");
}


// @pe
void func_3383(object var_148_object)
{
	var_148_object->SetReturnValue(3);
}


// @pe
void func_3388(void)
{
	@SetVariable("oob9BoyFollower1", 1);
}


void func_828(object var_0_object, object var_1_object, object var_2_object, object var_630_object)
{
	float var_637_float; cvector var_639_cvector; float var_640_float;
	cvector var_641_cvector;
	func_798(var_640_float, var_641_cvector, 1.7453294);
	cvector var_636_cvector;
	var_641_cvector = var_636_cvector;
	if((var_636_cvector | var_636_cvector) < 2500.0) {
		cvector var_668_cvector;
		func_798(var_640_float, var_668_cvector, 2.6179938);
		var_668_cvector = var_636_cvector;
		var_637_float = var_636_cvector | var_636_cvector;
		if(var_637_float < 2500.0) {
			var_673_float = sqrt(var_637_float);
			@Trace("Can't retreat, distance: " + var_673_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_676_float = GetByIndex(var_636_cvector, 0);
	var_677_float = GetByIndex(var_636_cvector, 2);
	@Rotate(var_676_float, var_677_float);
	cvector var_678_cvector;
	func_2894(var_678_cvector);
	@SetTimer(120, 0.5);
	
Label_870:
	bool var_638_bool;
	@MovePoint((var_678_cvector + var_636_cvector), 1, var_638_bool);
	if(var_638_bool != 0) {
		if(var_630_object == null) {
			goto Label_900;
		EMIT "GOTO 0x382";

		Label_900:
			for(;;) {
				return 10;
		}
			cvector var_684_cvector;
			func_798(var_640_float, var_684_cvector, 2.6179938);
			var_684_cvector = var_639_cvector;
			if((var_639_cvector | var_639_cvector) >= 2500.0) {
				cvector var_688_cvector;
				func_2894(var_688_cvector);
				var_1_object = var_688_cvector + var_639_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_870; //@nz

	}
}


// @pe
void func_1857(object var_2_object, string var_3_string)
{
	func_1952();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_3394(void)
{
	object var_43_object;
	func_3570(var_43_object);
	object var_42_object;
	var_43_object = var_42_object;
	float var_54_float;
	func_3344(var_54_float);
	var_42_object->AddMark("b9q03Bonfire1", "pt_bonfire1", 0, 531507, var_54_float);
	float var_61_float;
	func_3344(var_61_float);
	var_42_object->AddMark("b9q03Bonfire2", "pt_bonfire2", 0, 531508, var_61_float);
	float var_66_float;
	func_3344(var_66_float);
	var_42_object->AddMark("b9q03Bonfire3", "pt_bonfire3", 0, 531509, var_66_float);
	float var_71_float;
	func_3344(var_71_float);
	var_42_object->AddMark("b9q03Bonfire4", "pt_bonfire4", 0, 531510, var_71_float);
	func_3503();
}
EMIT "Stack[-1] = 0";


void func_2894(cvector var_365_cvector)
{
	cvector var_367_cvector;
	@GetPosition(var_367_cvector);
	var_367_cvector = var_365_cvector;
}


void func_1871(void)
{
	int var_119_int; int var_120_int; bool var_121_bool; float var_122_float; bool var_123_bool;
	@WaitForAnimEnd();
	bool var_124_bool;
	func_3141(var_124_bool);
	if(!var_124_bool) //@nz
		return 14;
	int var_126_int;
	func_3356(var_126_int);
	int var_117_int;
	var_126_int = var_117_int;
	int var_118_int = 0;
	
	for(;;) {
		bool var_139_bool = false;
		if(var_118_int < 5) {
			bool var_142_bool;
			func_3141(var_142_bool);
			if(var_142_bool != 0)
				var_139_bool = true;
		}
		if(var_139_bool != 0) {
			@irand(var_119_int, 3);
			if(var_119_int == 0) {
				if(var_117_int == 0) goto Label_1918;
				@irand(var_120_int, var_117_int);
				string var_148_string; int var_149_int;
				var_120_int = var_149_int;
				func_3349(var_148_string, var_149_int);
				@PlayAnimation("all", var_148_string);
				@WaitForAnimEnd(var_121_bool);
				if(!var_121_bool) { //@nz
				} else {
			} else {
			if(var_119_int == 1) {
				@rand(var_122_float, 4);
				@Sleep((var_122_float + 1), var_123_bool);
				if(!var_123_bool) { //@nz
					goto Label_1947;
				}
			} else if(var_118_int != 0) {
				goto Label_1947;
			}
			}
					bool var_151_bool;
					func_1950(var_151_bool);
					var_152_bool = !var_151_bool; //@nz
					if(var_152_bool == 0) goto Label_1942;
			}
		}
	Label_1947:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1942:
		@ResetAAS();
		var_118_int += 1;
	}
	
}


void func_2899(cvector var_64_cvector, object var_65_object)
{
	cvector var_68_cvector;
	@GetPosition(var_68_cvector);
	cvector var_69_cvector;
	var_65_object->GetPosition(var_69_cvector);
	var_64_cvector = var_69_cvector - var_68_cvector;
}


void func_2906(float var_773_float, object var_774_object)
{
	cvector var_779_cvector;
	@GetPosition(var_779_cvector);
	cvector var_780_cvector;
	var_774_object->GetPosition(var_780_cvector);
	var_773_float = (var_780_cvector - var_779_cvector) | (var_780_cvector - var_779_cvector);
}


void func_2914(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	@IsPlayerActor(var_32_object, var_34_bool);
	var_34_bool = var_31_bool;
}


void func_3943(bool var_33_bool, object var_34_object)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	bool var_49_bool; object var_50_object;
	func_2972(var_49_bool, var_50_object);
	if(!var_49_bool) //@nz
		var_33_bool = false;
	cvector var_44_cvector;
	var_34_object->GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_50_object->GetPosition(var_45_cvector);
	var_33_bool = ((var_44_cvector - var_45_cvector) | (var_44_cvector - var_45_cvector)) < 75625.0;
}
EMIT "Stack[-5] = 0";


void func_2919(bool var_194_bool, object var_195_object, string var_196_string)
{
	var_201_bool = IsFuncExist(var_195_object, "HasProperty", 2);
	if(!var_201_bool) { //@nz
		var_194_bool = false;
		return 2;
	}
	bool var_198_bool;
	var_195_object->HasProperty(var_196_string, var_198_bool);
	var_198_bool = var_194_bool;
}


void func_1389(object var_0_object, object var_1_object, object var_2_object, int var_61_int)
{
	cvector var_66_cvector; float var_67_float; cvector var_68_cvector; float var_69_float;
	if(var_61_int != 120) {
	}
	if(var_0_object == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_66_cvector);
		@FindDirLength(var_67_float, var_66_cvector, 7000.0);
		cvector var_75_cvector;
		func_1286(var_69_float, var_75_cvector, 1.7453294);
		var_75_cvector = var_68_cvector;
		var_69_float = var_68_cvector | var_68_cvector;
		bool var_105_bool = false;
		if(var_69_float >= 2500.0) {
			bool var_108_bool;
			var_112_bool = var_69_float >= ((var_67_float * var_67_float) * 2.25);
			if(var_112_bool != 1) {
				bool var_113_bool;
				func_1457(true, var_113_bool);
				if(var_113_bool != 1)
					var_108_bool = false;
			}
			if(var_108_bool != 0)
				var_105_bool = true;
		}
		if(var_105_bool == 0) goto Label_1440;
		@Stop();
		cvector var_133_cvector;
		func_2894(var_133_cvector);
		var_1_object = var_133_cvector + var_68_cvector;
	}
Label_1440:
	
}


// @pe
void func_3440(object var_124_object)
{
	var_124_object->SetReturnValue(4);
}


void func_2417(string var_593_string)
{
	@WaitForAnimEnd();
	bool var_598_bool;
	func_3141(var_598_bool);
	if(!var_598_bool) //@nz
		return 4;
	bool var_596_bool;
	@HasAnimation(var_596_bool, "all", var_593_string);
	if(!var_596_bool) //@nz
		return 4;
	@PlayAnimation("all", var_593_string);
	bool var_597_bool;
	@WaitForAnimEnd(var_597_bool);
}


void func_2931(bool var_187_bool, object var_188_object)
{
	bool var_190_bool;
	var_188_object->IsDead(var_190_bool);
	var_190_bool = var_187_bool;
}


// @pe
void func_3445(void)
{
	func_3516();
}


void func_2936(bool var_176_bool, object var_177_object)
{
	if(var_177_object == null) {
		var_176_bool = false;
		return 4;
	}
	bool var_183_bool = false;
	var_186_bool = IsFuncExist(var_177_object, "IsDead", 1);
	if(var_186_bool != 0) {
		bool var_187_bool; object var_188_object;
		var_177_object = var_188_object;
		func_2931(var_187_bool, var_188_object);
		if(var_187_bool != 0)
			var_183_bool = true;
	}
	if(var_183_bool != 0) {
		var_176_bool = false;
		return 4;
	}
	object var_180_object;
	@GetScene(var_180_object);
	if(var_180_object == null) {
		var_176_bool = false;
		return 4;
	}
	object var_181_object;
	var_177_object->GetScene(var_181_object);
	if(var_180_object != var_181_object) {
		var_176_bool = false;
		return 4;
	}
	var_176_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3450(object var_96_object)
{
	object var_100_object;
	func_3570(var_100_object);
	object var_97_object;
	var_100_object = var_97_object;
	func_3587(var_97_object, "pt_bonfire1", (float)2);
	object var_120_object;
	func_3570(var_120_object);
	var_96_object->ShowMap(var_120_object);
}


void func_2438(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_3466(bool var_114_bool)
{
	int var_116_int;
	func_3327(var_116_int, "oob9BoyFollower1");
	if(var_116_int == 0) {
		var_114_bool = true;
		return 0;
	}
	var_114_bool = false;
}


void func_2443(object var_2_object)
{
	object var_170_object;
	@FindActor(var_170_object, "player");
	bool var_172_bool; object var_173_object;
	var_170_object = var_173_object;
	func_2972(var_172_bool, var_173_object);
	if(!var_172_bool) { //@nz
		bool var_207_bool;
		func_3768(var_207_bool, 1);
	}
	bool var_209_bool; object var_210_object;
	object var_169_object;
	func_2543(var_169_object, var_210_object, var_209_bool, var_210_object, 250.0, (float)6000, true, true);
	if(var_209_bool != 0) {
		if(!var_2_object) { //@nz
			bool var_261_bool;
			func_3768(var_261_bool, 3);
		}
	}
}
EMIT "Stack[-1] = 0";


// @pe
void func_3478(bool var_158_bool)
{
	int var_160_int;
	func_3327(var_160_int, "b9q03BonefiresCount");
	if(var_160_int == 4)
		var_158_bool = true;
	var_158_bool = false;
}


void func_2972(bool var_172_bool, object var_173_object)
{
	object var_177_object;
	var_173_object = var_177_object;
	bool var_176_bool;
	func_2936(var_176_bool, var_177_object);
	if(!var_176_bool) { //@nz
		var_172_bool = false;
		return 2;
	}
	bool var_194_bool; object var_195_object;
	func_2919(var_194_bool, var_195_object, "noaccess");
	if(!var_194_bool) { //@nz
		var_172_bool = true;
		return 2;
	}
	int var_175_int;
	var_195_object->GetProperty("noaccess", var_175_int);
	var_172_bool = var_175_int == 0;
}


void func_1950(bool var_151_bool)
{
	var_151_bool = true;
}


void func_1952(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1441(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_3490(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 543, 2, 530355);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_3542(var_36_bool, var_37_object, 532);
}
EMIT "Stack[-1] = 0";


void func_1957(object var_0_object)
{
	@SetTimer(2, 1);
	object var_272_object;
	@FindActor(var_272_object, "player");
	float var_273_float;
	@rand(var_273_float, 4);
	if(var_273_float > 1) {
		object var_280_object;
		var_272_object = var_280_object;
		func_3244(var_280_object);
		@Sleep(var_273_float + 2);
		@UnlookAsync("head");
	} else {
		@Sleep(var_273_float + 2);
	}
	if(!var_0_object) { //@nz
		bool var_291_bool;
		func_3768(var_291_bool, 2);
	}
	@KillTimer(2);
	
}
EMIT "Stack[-2] = 0";


void func_3503(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 534, 2, 530346);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_3542(var_77_bool, var_78_object, 532);
}
EMIT "Stack[-1] = 0";


void func_1457(object var_0_object, bool var_113_bool)
{
	cvector var_116_cvector;
	@GetDirection(var_116_cvector);
	cvector var_118_cvector;
	func_2899(var_118_cvector, var_0_object);
	cvector var_117_cvector;
	var_118_cvector = var_117_cvector;
	float var_124_float; cvector var_125_cvector; cvector var_126_cvector;
	var_116_cvector = var_125_cvector;
	var_117_cvector = var_126_cvector;
	func_3319(var_124_float, var_125_cvector, var_126_cvector);
	var_113_bool = var_124_float >= -0.34202012;
}


void func_2996(bool var_85_bool, cvector var_86_cvector)
{
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	cvector var_91_cvector = var_86_cvector - var_90_cvector;
	var_93_float = GetByIndex(var_91_cvector, 0);
	var_94_float = GetByIndex(var_91_cvector, 2);
	bool var_92_bool;
	@Rotate(var_93_float, var_94_float, var_92_bool);
	var_92_bool = var_85_bool;
}


void func_953(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_3516(void)
{
	object var_129_object;
	@CreateDiaryEntry(var_129_object, 535, 2, 530347);
	bool var_133_bool; object var_134_object;
	var_129_object = var_134_object;
	func_3542(var_133_bool, var_134_object, 532);
}
EMIT "Stack[-1] = 0";


void func_3006(bool var_81_bool, object var_82_object)
{
	cvector var_84_cvector;
	var_82_object->GetPosition(var_84_cvector);
	bool var_85_bool; cvector var_86_cvector;
	var_84_cvector = var_86_cvector;
	func_2996(var_85_bool, var_86_cvector);
	var_85_bool = var_81_bool;
}


// @pe
void func_1473(object var_695_object)
{
	@SetTimer(1, 3);
	object var_702_object;
	func_1563(var_698_cvector, var_699_bool, var_702_object, var_702_object);
	@KillTimer(1);
}


void func_3015(object var_47_object)
{
	string var_61_string;
	if(var_47_object == null)
		return 14;
	bool var_55_bool;
	@IsDead(var_55_bool);
	if(var_55_bool != 0)
		return 14;
	int var_56_int;
	@GetSecondaryAnimationType(var_56_int);
	if(var_56_int < 0)
		return 14;
	cvector var_57_cvector;
	var_47_object->GetPosition(var_57_cvector);
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	cvector var_59_cvector;
	@GetDirection(var_59_cvector);
	cvector var_60_cvector = var_58_cvector - var_57_cvector;
	var_66_float = GetByIndex(var_60_cvector, 0);
	var_67_float = GetByIndex(var_59_cvector, 0);
	var_69_float = GetByIndex(var_60_cvector, 2);
	var_70_float = GetByIndex(var_59_cvector, 2);
	if(((var_66_float * var_67_float) + (var_69_float * var_70_float)) >= 0)
		var_61_string = "fhit";
	else
		var_61_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_61_string + "1"), (var_61_string + "2"), -10);
	
}


void func_969(object var_0_object, bool var_82_bool)
{
	cvector var_85_cvector;
	@GetDirection(var_85_cvector);
	cvector var_87_cvector;
	func_2899(var_87_cvector, var_0_object);
	cvector var_86_cvector;
	var_87_cvector = var_86_cvector;
	float var_93_float; cvector var_94_cvector; cvector var_95_cvector;
	var_85_cvector = var_94_cvector;
	var_86_cvector = var_95_cvector;
	func_3319(var_93_float, var_94_cvector, var_95_cvector);
	var_82_bool = var_93_float >= -0.34202012;
}


void func_3529(object var_45_object)
{
	object var_47_object;
	@GetDiaryRoot(var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_45_object = false;
	}
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_1998(void)
{
	@StopGroup0();
}


void func_3542(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_3529(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	object var_43_object;
	var_42_object->Find(var_38_int, var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_38_int);
		var_36_bool = false;
	}
	var_43_object->AddChild(var_37_object);
	@SendWorldWndMessage(7);
	int var_44_int;
	var_37_object->GetCategory(var_44_int);
	@SetDiarySection(var_44_int);
	var_36_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_985(void)
{
	object var_304_object;
	
Label_986:
	for(;;) {
		if(true != 0) {
			@FindActor(var_304_object, "player");
			bool var_307_bool; object var_308_object;
			var_304_object = var_308_object;
			func_2972(var_307_bool, var_308_object);
			var_309_bool = !var_307_bool; //@nz
			if(var_309_bool == 0) goto Label_1005;
			@Sleep(3);
			if(var_3_string != 0) {
				goto Label_1014;
			EMIT "GOTO 0x3ed";
		}
		Label_1014:
		}
	}
	
Label_1005:
	object var_312_object;
	object var_303_object;
	func_1056(var_302_bool, var_303_object, var_312_object, var_312_object);
	if(var_3_string != 0) {
		goto Label_1014;
	}
	var_304_object = null;
	goto Label_986;
}


void func_2543(object var_0_object, object var_1_object, bool var_209_bool, object var_210_object, float var_211_float, float var_212_float, bool var_213_bool, bool var_214_bool)
{
	bool var_223_bool; object var_225_object; cvector var_226_cvector; cvector var_227_cvector; float var_229_float; object var_230_object;
	var_0_object = false;
	var_1_object = var_210_object;
	bool var_224_bool;
	var_214_bool = var_224_bool;
	
	for(;;) {
		bool var_231_bool; object var_232_object;
		var_210_object = var_232_object;
		func_2683(var_231_bool, var_232_object);
		if(!var_231_bool) { //@nz
			var_209_bool = false;
			return 16;
		}
		var_210_object->GetPosition(var_226_cvector);
		@GetPosition(var_227_cvector);
		var_229_float = (var_226_cvector - var_227_cvector) | (var_226_cvector - var_227_cvector);
		bool var_236_bool = false;
		if(var_212_float > 0) {
			if(var_229_float > (var_212_float * var_212_float))
				var_236_bool = true;
		}
		if(var_236_bool != 0) {
			@Stop();
			var_209_bool = false;
			return 16;
		}
		if(var_229_float > (var_211_float * var_211_float)) {
			var_210_object->GetPFPosition(var_226_cvector);
			@FindPathTo(var_230_object, var_226_cvector);
			if(var_230_object != null) {
				var_230_object = var_225_object;
				var_230_object = null;
			}
			if(var_225_object != null) {
				if(var_224_bool == 0) goto Label_2596;
				var_224_bool = false;
				@RotatePath(var_225_object, var_223_bool);
				if(!var_223_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_249_string;
						func_2690(var_249_string);
						string var_250_string;
						func_2692(var_250_string);
						@FollowPath(var_225_object, var_213_bool, var_223_bool, var_249_string, var_250_string);
						if(!var_223_bool) { //@nz
							if(var_0_object == 0) goto Label_2615;
							var_225_object = null;
						}
					EMIT "GOTO 0xa38";

					Label_2615:
						} else {
					var_225_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_223_bool);
					if(!var_223_bool) { //@nz
						if(var_0_object != 0) {
							var_225_object = null;
							goto Label_2643;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2643;
		}
			var_230_object = null;
			goto Label_2641;

		Label_2641:
			var_225_object = null;

		}
	Label_2643:
		for(;;) {
			var_209_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_3570(object var_43_object)
{
	object var_46_object; object var_47_object;
	@GetMainOutdoorScene(var_46_object);
	if(var_46_object == null) {
		@Trace("Can't find main outdoor scene");
		var_47_object = null;
		var_47_object = var_43_object;
	}
	var_46_object->GetMap(var_47_object);
	var_47_object = var_43_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3059(object var_34_object, int var_35_int, float var_36_float)
{
	cvector var_46_cvector; object var_47_object; int var_48_int; bool var_49_bool; cvector var_50_cvector; cvector var_51_cvector;
	bool var_55_bool = false;
	bool var_56_bool = false;
	if(var_34_object != 0) {
		if(var_35_int != 4)
			var_56_bool = true;
	}
	if(var_56_bool != 0) {
		if(var_35_int != 5)
			var_55_bool = true;
	}
	if(var_55_bool != 0) {
		cvector var_62_cvector; cvector var_63_cvector;
		cvector var_64_cvector; object var_65_object;
		var_34_object = var_65_object;
		func_2899(var_64_cvector, var_65_object);
		var_64_cvector = var_63_cvector;
		func_3309(var_62_cvector, var_63_cvector);
		var_62_cvector = var_46_cvector;
		@CreateVectorVector(var_47_object);
		var_48_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_48_int), var_49_bool, var_50_cvector, var_51_cvector);
			if(!var_49_bool) { //@nz
				break;
			Label_3121:
				var_47_object = null;
	}
			object var_124_object;
			var_34_object = var_124_object;
			func_3015(var_124_object);
		}
		if((var_51_cvector | var_46_cvector) >= 0.70710677)
			var_47_object->add(var_50_cvector);
		var_48_int += 1;
	}
	int var_52_int;
	var_47_object->size(var_52_int);
	if(var_52_int == 0) goto Label_3121;
	int var_53_int;
	@irand(var_53_int, var_52_int);
	cvector var_54_cvector;
	var_47_object->get(var_54_cvector, var_53_int);
	object var_79_object; int var_80_int; float var_81_float; cvector var_82_cvector; cvector var_83_cvector;
	var_34_object = var_79_object;
	var_35_int = var_80_int;
	var_36_float = var_81_float;
	var_54_cvector = var_82_cvector;
	var_83_cvector = -var_46_cvector;
	func_3127(var_81_float, var_82_cvector, var_83_cvector);
}


void func_1533(object var_0_object, cvector var_713_cvector, float var_714_float)
{
	cvector var_721_cvector;
	@GetPosition(var_721_cvector);
	cvector var_722_cvector;
	var_0_object->GetPosition(var_722_cvector); //@t
	cvector var_723_cvector;
	@GetDirection(var_723_cvector);
	cvector var_727_cvector;
	cvector var_729_cvector;
	func_3309(var_729_cvector, (var_721_cvector - var_722_cvector));
	func_3309(var_727_cvector, (var_729_cvector + (var_723_cvector * 0.75)));
	cvector var_724_cvector;
	var_727_cvector = var_724_cvector;
	cvector var_725_cvector;
	float var_726_float;
	@FindLongestDir(var_725_cvector, var_726_float, var_724_cvector, var_714_float, 32, 7000.0);
	if((var_726_float - 100) < 0)
		var_726_float = 0;
	var_713_cvector = var_725_cvector * var_726_float;
}


