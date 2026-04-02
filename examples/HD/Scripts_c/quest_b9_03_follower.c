// @GLOBALS: 0:object:,1:bool:,2:int:,3:object:,4:object:,5:object:,6:int:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, bool var_17_bool, object var_18_object, cvector var_19_cvector, bool var_20_bool, int var_21_int, int var_22_int, bool var_23_bool, bool var_24_bool, object var_25_object, bool var_26_bool, bool var_27_bool, bool var_28_bool, bool var_29_bool, object var_30_object, bool var_31_bool, object var_32_object, int var_33_int, int var_34_int, bool var_35_bool, bool var_36_bool, float var_37_float, int var_38_int, object var_39_object, bool var_40_bool, object var_41_object, bool var_42_bool, object var_43_object)
	{
		if(1 != 0) {
			func_4451();
			if(var_43_object == 31712) {
				object var_48_object = var_1_object;
				func_4613(var_0_object);
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_object;
				func_4634();
				object var_107_object = var_1_object;
				func_4690(var_0_object);
			}
			if(var_43_object == 31714) {
				object var_135_object = var_1_object;
				func_4680(var_0_object);
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_4685();
			}
			if(var_43_object == 31661) {
				object var_150_object = var_1_object;
				func_4618(var_0_object);
			}
			if(var_43_object == 31663) {
				object var_155_object = var_1_object;
				func_4613(var_0_object);
			}
			if(var_43_object == 31664) {
				object var_159_object = var_1_object;
				func_4623(var_0_object);
			}
			if(var_42_bool == 31709) {
				bool var_164_bool;
				func_4706(var_1_object);
				if(var_164_bool != 0) {
					object var_172_object; object var_173_object;
					var_172_object = var_1_object;
					var_173_object = var_0_object;
					func_4628();
					func_192(var_43_object, "Neutral");
					var_0_object->SetMessage(530322); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530323, 31711, 31710); //@t
					var_0_object->AddReply(531020, 32350, 32349); //@t
					return 0;
				}
				bool var_200_bool;
				func_4718(var_1_object);
				if(var_200_bool != 0) {
					func_192(var_43_object, "Neutral");
					var_0_object->SetMessage(530326); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530327, -1, 31714); //@t
					return 0;
				}
				func_192(var_43_object, "Neutral");
				var_0_object->SetMessage(530270); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530271, -1, 31661); //@t
				var_0_object->AddReply(530273, -1, 31663); //@t
				var_0_object->AddReply(530274, -1, 31664); //@t
				var_0_object->AddReply(530272, -1, 31662); //@t
				return 0;
			}
			if(var_42_bool == 32350) {
				func_192(var_43_object, "Neutral");
				var_0_object->SetMessage(531021); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531023, 31711, 32352); //@t
				return 0;
			}
			if(var_42_bool == 31711) {
				func_192(var_43_object, "Neutral");
				var_0_object->SetMessage(530324); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530325, -1, 31712); //@t
				return 0;
			}
			var_3_string = true;
			bool var_239_bool;
			func_4945(var_239_bool);
			if(var_239_bool != 0)
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
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		var_42_int = GlobalVars[2];
		GlobalVars[2] = 0;
		var_43_int = GlobalVars[6];
		GlobalVars[6] = 1;
		@SetProperty("noaccess", 0);
	
		for(;;) {
			if(true != 0) {
				var_48_int = GlobalVars[2];
				if(0 == var_48_int) {
					TaskCall(15);
					func_2888();
					TaskReturn();
					bool var_58_bool; int var_59_int;
					var_60_int = GlobalVars[6];
					var_60_int = var_59_int;
					func_5017(var_58_bool, var_59_int);
					if(!var_58_bool) { //@nz
						bool var_89_bool;
						func_5017(var_89_bool, 2);
					}
				} else {
				var_92_int = GlobalVars[2];
				if(1 == var_92_int) {
					TaskCall(3);
					func_670();
					TaskReturn();
					var_113_int = GlobalVars[2];
					if(1 == var_113_int) {
						TaskCall(9);
						func_1749();
						TaskReturn();
					}
					goto Label_666;
				}
				var_181_int = GlobalVars[2];
				if(2 == var_181_int) {
					TaskCall(13);
					func_2472(var_185_bool);
					TaskReturn();
					goto Label_666;
				}
				var_281_int = GlobalVars[2];
				if(3 == var_281_int) {
					TaskCall(3);
					func_670();
					TaskReturn();
					var_284_int = GlobalVars[2];
					if(3 == var_284_int) {
						TaskCall(10);
						func_1986(var_286_bool);
						TaskReturn();
					}
					goto Label_666;
				}
				var_314_int = GlobalVars[2];
				if(8 == var_314_int) {
					TaskCall(6);
					func_1014();
					TaskReturn();
					goto Label_666;
				}
				var_400_int = GlobalVars[2];
				if(4 == var_400_int) {
					TaskCall(7);
					func_1242();
					TaskReturn();
					goto Label_666;
				}
				var_480_int = GlobalVars[2];
				if(5 == var_480_int) {
					bool var_482_bool;
					TaskCall(11);
					func_2119(var_482_bool);
					TaskReturn();
					if(!var_483_bool) { //@nz
						var_611_int = GlobalVars[2];
						if(5 == var_611_int) {
							TaskCall(12);
							func_2383();
							TaskReturn();
							var_625_int = GlobalVars[2];
							if(5 == var_625_int) {
								bool var_627_bool;
								func_5017(var_627_bool, 1);
							}
						}
					}
					var_630_int = GlobalVars[2];
					if(5 == var_630_int) {
						TaskCall(12);
						func_2383();
						TaskReturn();
						var_634_int = GlobalVars[2];
						if(5 == var_634_int) {
							bool var_636_bool;
							func_5017(var_636_bool, 2);
						}
					}
					goto Label_666;
				}
				var_639_int = GlobalVars[2];
				if(6 == var_639_int) {
					object var_641_object;
					var_642_object = GlobalVars[3];
					var_642_object = var_641_object;
					TaskCall(5);
					func_802(var_641_object);
					TaskReturn();
					goto Label_666;
				}
				var_714_int = GlobalVars[2];
				if(9 == var_714_int) {
					object var_716_object;
					var_717_object = GlobalVars[5];
					var_717_object = var_716_object;
					TaskCall(16);
					func_2923(var_725_object, var_716_object);
					TaskReturn();
					bool var_1210_bool; object var_1211_object;
					var_1212_object = GlobalVars[5];
					var_1212_object = var_1211_object;
					func_4137(var_1210_bool, var_1211_object);
					if(!var_1210_bool) { //@nz
						bool var_1214_bool;
						func_5017(var_1214_bool, 1);
					}
					goto Label_666;
				}
				var_1217_int = GlobalVars[2];
				if(7 == var_1217_int) {
					object var_1219_object;
					var_1220_object = GlobalVars[4];
					var_1220_object = var_1219_object;
					TaskCall(8);
					func_1502(var_1219_object);
					TaskReturn();
					var_1290_int = GlobalVars[2];
					if(7 == var_1290_int) {
						bool var_1292_bool = true;
						bool var_1293_bool; object var_1294_object;
						var_1295_object = GlobalVars[4];
						var_1295_object = var_1294_object;
						func_4137(var_1293_bool, var_1294_object);
						var_1296_bool = !var_1293_bool; //@nz
						if(var_1296_bool != 1) {
							float var_1297_float; object var_1298_object;
							var_1299_object = GlobalVars[4];
							var_1299_object = var_1298_object;
							func_3998(var_1297_float, var_1298_object);
							var_1307_bool = var_1297_float > 1000000.0;
							if(var_1307_bool != 1)
								var_1292_bool = false;
						}
						if(var_1292_bool != 0) {
							bool var_1308_bool; object var_1309_object;
							var_1310_object = GlobalVars[4];
							var_1310_object = var_1309_object;
							func_4137(var_1308_bool, var_1309_object);
							if(var_1308_bool != 0) {
								object var_1311_object;
								var_1312_object = GlobalVars[4];
								var_1312_object = var_1311_object;
								TaskCall(4);
								func_738(var_1311_object);
								TaskReturn();
								var_1317_int = GlobalVars[2];
								if(7 == var_1317_int) {
									TaskCall(12);
									func_2383();
									TaskReturn();
									var_1321_int = GlobalVars[2];
									if(7 == var_1321_int) {
										bool var_1323_bool;
										func_5017(var_1323_bool, 1);
									}
								}
							}
						}
					}
					goto Label_666;
				}
				@Trace("Unknown FSM state");
			}
			return 0;
			}
		Label_666:
			@sync();
		}
	
	}

}


task task_3
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		bool var_43_bool; object var_44_object;
		func_5139(var_44_object, var_43_bool, var_44_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		var_42_object = var_44_object;
		bool var_43_bool;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			bool var_47_bool;
			func_5017(var_47_bool, 4);
		} else {
			object var_76_object;
			var_42_object = var_76_object;
			func_5086(var_76_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, int var_22_int, int var_23_int, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool, object var_33_object, int var_34_int, int var_35_int, bool var_36_bool, bool var_37_bool, float var_38_float, int var_39_int, object var_40_object, bool var_41_bool, object var_42_object, bool var_43_bool, object var_44_object)
	{
		bool var_45_bool = true;
		bool var_46_bool; object var_47_object;
		var_43_bool = var_47_object;
		func_4137(var_46_bool, var_47_object);
		var_80_bool = !var_46_bool; //@nz
		if(var_80_bool != 1) {
			float var_81_float; object var_82_object;
			var_43_bool = var_82_object;
			func_3998(var_81_float, var_82_object);
			var_90_bool = var_81_float > 1000000.0;
			if(var_90_bool != 1)
				var_45_bool = false;
		}
		if(var_45_bool != 0)
			return 0;
		object var_91_object;
		var_43_bool = var_91_object;
		func_5097(var_91_object);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		@Stop();
		@StopGroup0();
		bool var_42_bool;
		func_5017(var_42_bool, 0);
	}

}


task task_4
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		bool var_43_bool; object var_44_object;
		func_5139(var_44_object, var_43_bool, var_44_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		var_42_object = var_44_object;
		bool var_43_bool;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			bool var_47_bool;
			func_5017(var_47_bool, 4);
		} else {
			object var_76_object;
			var_42_object = var_76_object;
			func_5086(var_76_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, bool var_18_bool, object var_19_object, cvector var_20_cvector, bool var_21_bool, int var_22_int, int var_23_int, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool, object var_33_object, int var_34_int, int var_35_int, bool var_36_bool, bool var_37_bool, float var_38_float, int var_39_int, object var_40_object, bool var_41_bool, object var_42_object, bool var_43_bool, object var_44_object)
	{
		bool var_45_bool = true;
		bool var_46_bool; object var_47_object;
		var_43_bool = var_47_object;
		func_4137(var_46_bool, var_47_object);
		var_80_bool = !var_46_bool; //@nz
		if(var_80_bool != 1) {
			float var_81_float; object var_82_object;
			var_43_bool = var_82_object;
			func_3998(var_81_float, var_82_object);
			var_90_bool = var_81_float > 1000000.0;
			if(var_90_bool != 1)
				var_45_bool = false;
		}
		if(var_45_bool != 0)
			return 0;
		object var_91_object;
		var_43_bool = var_91_object;
		func_5097(var_91_object);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		@Stop();
		@StopGroup0();
		bool var_42_bool;
		func_5017(var_42_bool, 0);
	}

}


task task_5
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_982(var_41_object);
		bool var_43_bool;
		func_5017(var_43_bool, 0);
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		cvector var_47_cvector; float var_48_float; cvector var_49_cvector; float var_50_float;
		if(var_42_object != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_47_cvector);
			@FindDirLength(var_48_float, var_47_cvector, 7000.0);
			cvector var_56_cvector;
			func_827(var_50_float, var_56_cvector, 1.7453294);
			var_56_cvector = var_49_cvector;
			var_50_float = var_49_cvector | var_49_cvector;
			bool var_86_bool = false;
			if(var_50_float >= 2500.0) {
				bool var_89_bool;
				var_93_bool = var_50_float >= ((var_48_float * var_48_float) * 2.25);
				if(var_93_bool != 1) {
					bool var_94_bool;
					func_998(true, var_94_bool);
					if(var_94_bool != 1)
						var_89_bool = false;
				}
				if(var_89_bool != 0)
					var_86_bool = true;
			}
			if(var_86_bool == 0) goto Label_981;
			@Stop();
			cvector var_114_cvector;
			func_3986(var_114_cvector);
			var_1_object = var_114_cvector + var_49_cvector;
		}
	Label_981:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_982(var_42_object);
		object var_44_object;
		var_42_object = var_44_object;
		func_5183();
	}

}


task task_6
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		@StopGroup0();
		var_3_string = true;
		func_1210(var_41_object);
		bool var_43_bool;
		func_5017(var_43_bool, 0);
	}

	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		cvector var_47_cvector; float var_48_float; cvector var_49_cvector; float var_50_float;
		if(var_42_object != 120) {
		}
		if(var_0_object == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_47_cvector);
			@FindDirLength(var_48_float, var_47_cvector, 7000.0);
			cvector var_56_cvector;
			func_1055(var_50_float, var_56_cvector, 1.7453294);
			var_56_cvector = var_49_cvector;
			var_50_float = var_49_cvector | var_49_cvector;
			bool var_86_bool = false;
			if(var_50_float >= 2500.0) {
				bool var_89_bool;
				var_93_bool = var_50_float >= ((var_48_float * var_48_float) * 2.25);
				if(var_93_bool != 1) {
					bool var_94_bool;
					func_1226(true, var_94_bool);
					if(var_94_bool != 1)
						var_89_bool = false;
				}
				if(var_89_bool != 0)
					var_86_bool = true;
			}
			if(var_86_bool == 0) goto Label_1209;
			@Stop();
			cvector var_114_cvector;
			func_3986(var_114_cvector);
			var_1_object = var_114_cvector + var_49_cvector;
		}
	Label_1209:
	
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_1210(var_42_object);
		object var_44_object;
		var_42_object = var_44_object;
		func_5183();
	}

}


task task_7
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, int var_16_int, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		if(var_42_object == 0) {
			if(!var_3_string) { //@nz
				func_1470(var_42_object);
				bool var_47_bool;
				func_5017(var_47_bool, 1);
			} else {
				var_3_string = false;
		}
			int var_76_int;
			func_1418(var_40_object, var_41_bool, var_76_int, var_76_int);
			return 0;
		}
	
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		bool var_43_bool; object var_44_object;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			var_3_string = true;
		} else {
			func_1470(var_44_object);
			object var_48_object;
			var_42_object = var_48_object;
			func_5086(var_48_object);
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_1470(var_41_object);
		bool var_43_bool;
		func_5017(var_43_bool, 0);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, object var_17_object, cvector var_18_cvector, bool var_19_bool, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_1470(var_42_object);
		object var_44_object;
		var_42_object = var_44_object;
		func_5183();
	}

}


task task_8
{
	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		if(var_42_object == 1) {
			func_1717(var_42_object);
			bool var_46_bool;
			func_5017(var_46_bool, 1);
		}
		int var_75_int;
		func_1665(var_40_object, var_41_bool, var_75_int, var_75_int);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		var_42_object = var_44_object;
		bool var_43_bool;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			func_1717(var_42_object);
			bool var_48_bool;
			func_5017(var_48_bool, 4);
		} else {
			func_1717(var_42_object);
			object var_77_object;
			var_42_object = var_77_object;
			func_5086(var_77_object);
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_1717(var_41_object);
		bool var_43_bool;
		func_5017(var_43_bool, 0);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, int var_20_int, int var_21_int, bool var_22_bool, bool var_23_bool, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_1717(var_42_object);
		object var_44_object;
		var_42_object = var_44_object;
		func_5183();
	}

}


task task_9
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_1886(var_41_bool, var_42_object);
		bool var_46_bool; object var_47_object;
		func_5139(var_47_object, var_46_bool, var_47_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, object var_24_object, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		var_42_object = var_44_object;
		bool var_43_bool;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			func_1886(var_41_bool, var_42_object);
			bool var_50_bool;
			func_5017(var_50_bool, 4);
		} else {
			func_1886(var_41_bool, var_42_object);
			object var_79_object;
			var_42_object = var_79_object;
			func_5086(var_79_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, bool var_26_bool, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool, object var_33_object, int var_34_int, int var_35_int, bool var_36_bool, bool var_37_bool, float var_38_float, int var_39_int, object var_40_object, bool var_41_bool, object var_42_object, bool var_43_bool, object var_44_object)
	{
		bool var_45_bool = true;
		bool var_46_bool; object var_47_object;
		var_43_bool = var_47_object;
		func_4137(var_46_bool, var_47_object);
		var_80_bool = !var_46_bool; //@nz
		if(var_80_bool != 1) {
			float var_81_float; object var_82_object;
			var_43_bool = var_82_object;
			func_3998(var_81_float, var_82_object);
			var_90_bool = var_81_float > 1000000.0;
			if(var_90_bool != 1)
				var_45_bool = false;
		}
		if(var_45_bool != 0)
			return 0;
		func_1886(var_43_bool, var_44_object);
		object var_94_object;
		var_43_bool = var_94_object;
		func_5097(var_94_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_1886(var_40_bool, var_41_object);
		bool var_45_bool;
		func_5017(var_45_bool, 0);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, int var_24_int, bool var_25_bool, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		if(var_42_object == 10) {
			bool var_45_bool;
			func_1848(var_40_object, var_41_bool, var_42_object, var_45_bool);
			if(var_45_bool != 0) {
				if(!var_2_object) { //@nz
					func_4440(var_4_bool);
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
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, int var_25_int, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		if(var_42_object != 2) {
		}
		bool var_45_bool; object var_46_object;
		object var_47_object;
		func_4499(var_47_object);
		var_47_object = var_46_object;
		func_5199(var_45_bool, var_46_object);
		if(!var_45_bool) //@nz
			func_2027();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, object var_25_object, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_2027();
		bool var_43_bool; object var_44_object;
		func_5139(var_44_object, var_43_bool, var_44_object);
		actor = var_43_bool;
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, object var_25_object, bool var_26_bool, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		var_42_object = var_44_object;
		bool var_43_bool;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			func_2027();
			bool var_47_bool;
			func_5017(var_47_bool, 4);
			actor = true;
		} else {
			func_2027();
			actor = true;
			object var_76_object;
			var_42_object = var_76_object;
			func_5086(var_76_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, object var_25_object, object var_26_object, bool var_27_bool, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool, object var_33_object, int var_34_int, int var_35_int, bool var_36_bool, bool var_37_bool, float var_38_float, int var_39_int, object var_40_object, bool var_41_bool, object var_42_object, bool var_43_bool, object var_44_object)
	{
		bool var_45_bool = true;
		bool var_46_bool; object var_47_object;
		var_43_bool = var_47_object;
		func_4137(var_46_bool, var_47_object);
		var_80_bool = !var_46_bool; //@nz
		if(var_80_bool != 1) {
			float var_81_float; object var_82_object;
			var_43_bool = var_82_object;
			func_3998(var_81_float, var_82_object);
			var_90_bool = var_81_float > 1000000.0;
			if(var_90_bool != 1)
				var_45_bool = false;
		}
		if(var_45_bool != 0)
			return 0;
		func_2027();
		actor = true;
		object var_91_object;
		var_43_bool = var_91_object;
		func_5097(var_91_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_2027();
		var_0_object = true;
		bool var_42_bool;
		func_5017(var_42_bool, 0);
	}

}


task task_11
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_2363(var_42_object);
		bool var_44_bool; object var_45_object;
		func_5139(var_45_object, var_44_bool, var_45_object);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		var_42_object = var_44_object;
		bool var_43_bool;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			func_2363(var_42_object);
			bool var_48_bool;
			func_5017(var_48_bool, 4);
		} else {
			func_2363(var_42_object);
			object var_77_object;
			var_42_object = var_77_object;
			func_5086(var_77_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, object var_27_object, bool var_28_bool, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool, object var_33_object, int var_34_int, int var_35_int, bool var_36_bool, bool var_37_bool, float var_38_float, int var_39_int, object var_40_object, bool var_41_bool, object var_42_object, bool var_43_bool, object var_44_object)
	{
		bool var_45_bool = true;
		bool var_46_bool; object var_47_object;
		var_43_bool = var_47_object;
		func_4137(var_46_bool, var_47_object);
		var_80_bool = !var_46_bool; //@nz
		if(var_80_bool != 1) {
			float var_81_float; object var_82_object;
			var_43_bool = var_82_object;
			func_3998(var_81_float, var_82_object);
			var_90_bool = var_81_float > 1000000.0;
			if(var_90_bool != 1)
				var_45_bool = false;
		}
		if(var_45_bool != 0)
			return 0;
		func_2363(var_44_object);
		object var_92_object;
		var_43_bool = var_92_object;
		func_5097(var_92_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_2363(var_41_object);
		bool var_43_bool;
		func_5017(var_43_bool, 0);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, int var_26_int, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		if(var_42_object != 0)
			return 0;
		bool var_45_bool;
		func_2237(var_45_bool);
		if(!var_45_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		@RequestClearPath(var_42_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, object var_26_object, bool var_27_bool, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_2363(var_42_object);
		object var_44_object;
		var_42_object = var_44_object;
		func_5183();
	}

}


task task_12
{
	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, object var_27_object, bool var_28_bool, object var_29_object, bool var_30_bool, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		var_42_object = var_44_object;
		bool var_43_bool;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			func_2467();
			bool var_47_bool;
			func_5017(var_47_bool, 4);
		} else {
			func_2467();
			object var_76_object;
			var_42_object = var_76_object;
			func_5086(var_76_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, object var_27_object, object var_28_object, bool var_29_bool, bool var_30_bool, object var_31_object, bool var_32_bool, object var_33_object, int var_34_int, int var_35_int, bool var_36_bool, bool var_37_bool, float var_38_float, int var_39_int, object var_40_object, bool var_41_bool, object var_42_object, bool var_43_bool, object var_44_object)
	{
		bool var_45_bool = true;
		bool var_46_bool; object var_47_object;
		var_43_bool = var_47_object;
		func_4137(var_46_bool, var_47_object);
		var_80_bool = !var_46_bool; //@nz
		if(var_80_bool != 1) {
			float var_81_float; object var_82_object;
			var_43_bool = var_82_object;
			func_3998(var_81_float, var_82_object);
			var_90_bool = var_81_float > 1000000.0;
			if(var_90_bool != 1)
				var_45_bool = false;
		}
		if(var_45_bool != 0)
			return 0;
		func_2467();
		object var_91_object;
		var_43_bool = var_91_object;
		func_5097(var_91_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_2467();
		var_0_object = true;
		bool var_42_bool;
		func_5017(var_42_bool, 0);
	}

}


task task_13
{
	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_2696(var_42_object);
		bool var_44_bool; object var_45_object;
		func_5139(var_45_object, var_44_bool, var_45_object);
		var_2_object = var_44_bool;
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		var_42_object = var_44_object;
		bool var_43_bool;
		func_4006(var_43_bool, var_44_object);
		if(var_43_bool != 0) {
			func_2696(var_42_object);
			bool var_48_bool;
			func_5017(var_48_bool, 4);
		} else {
			func_2696(var_42_object);
			object var_77_object;
			var_42_object = var_77_object;
			func_5086(var_77_object);
		}
	
	}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, object var_31_object, bool var_32_bool, object var_33_object, int var_34_int, int var_35_int, bool var_36_bool, bool var_37_bool, float var_38_float, int var_39_int, object var_40_object, bool var_41_bool, object var_42_object, bool var_43_bool, object var_44_object)
	{
		bool var_45_bool = true;
		bool var_46_bool; object var_47_object;
		var_43_bool = var_47_object;
		func_4137(var_46_bool, var_47_object);
		var_80_bool = !var_46_bool; //@nz
		if(var_80_bool != 1) {
			float var_81_float; object var_82_object;
			var_43_bool = var_82_object;
			func_3998(var_81_float, var_82_object);
			var_90_bool = var_81_float > 1000000.0;
			if(var_90_bool != 1)
				var_45_bool = false;
		}
		if(var_45_bool != 0)
			return 0;
		func_2696(var_44_object);
		object var_92_object;
		var_43_bool = var_92_object;
		func_5097(var_92_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_2696(var_41_object);
		var_2_object = true;
		bool var_43_bool;
		func_5017(var_43_bool, 0);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, int var_30_int, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		if(var_42_object != 0)
			return 0;
		bool var_45_bool;
		func_2712(var_45_bool, var_1_object);
		if(!var_45_bool) //@nz
			var_0_object = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		@RequestClearPath(var_42_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		func_2696(var_42_object);
		object var_44_object;
		var_42_object = var_44_object;
		func_5183();
	}

}


task task_14
{
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		object var_42_object;
		func_4499(var_42_object);
		@RemoveActor(var_42_object);
		@Hold();
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		bool var_44_bool;
		@IsOverrideActive(var_44_bool);
		if(!var_44_bool) { //@nz
			object var_46_object;
			var_42_object = var_46_object;
			func_4883(var_46_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, float var_32_float, float var_33_float, object var_34_object, int var_35_int, int var_36_int, bool var_37_bool, bool var_38_bool, float var_39_float, int var_40_int, object var_41_object, bool var_42_bool, object var_43_object, bool var_44_bool, object var_45_object)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, string var_31_string, object var_32_object, int var_33_int, int var_34_int, bool var_35_bool, bool var_36_bool, float var_37_float, int var_38_int, object var_39_object, bool var_40_bool, object var_41_object, bool var_42_bool, object var_43_object)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
	}

}


task task_15
{
	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, string var_30_string, object var_31_object, int var_32_int, int var_33_int, bool var_34_bool, bool var_35_bool, float var_36_float, int var_37_int, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		if(var_42_object == "cleanup") {
			object var_45_object;
			func_4499(var_45_object);
			@RemoveActor(var_45_object);
			@Hold();
		}
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		@StopGroup0();
		@sync();
	}

}


task task_16
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, int var_38_int, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
		object var_44_object;
		if(var_42_object == 3) {
			@GetMainOutdoorScene(var_44_object);
			var_44_object = null;
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, object var_38_object, bool var_39_bool, object var_40_object, bool var_41_bool, object var_42_object)
	{
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_3215(var_41_object);
		bool var_42_bool;
		func_5017(var_42_bool, 0);
	}

}


task task_17
{
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, int var_42_int)
	{
		object var_44_object;
		if(var_42_int == 4) {
			@GetMainOutdoorScene(var_44_object);
		} else {
			int var_47_int;
			var_42_int = var_47_int;
			func_3765(Obj(), var_47_int);
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object)
	{
		func_3779(var_41_object);
		bool var_46_bool;
		func_5017(var_46_bool, 0);
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, object var_42_object)
	{
		bool var_43_bool = false;
		if(var_1_object == var_42_object) {
			if(!var_2_object) //@nz
				var_43_bool = true;
		}
		if(var_43_bool != 0) {
			var_2_object = true;
			object var_46_object;
			var_42_object = var_46_object;
			func_4440(var_46_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, object var_42_object)
	{
		bool var_43_bool = false;
		if(var_1_object == var_42_object) {
			if(var_2_object != 0)
				var_43_bool = true;
		}
		if(var_43_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, object var_42_object)
	{
		@RequestClearPath(var_42_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, object var_42_object)
	{
		func_3779(var_42_object);
		object var_47_object;
		var_42_object = var_47_object;
		func_5183();
	}

}


// @pe
void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, string var_42_string)
{
	if(var_42_string == "cleanup") {
		var_45_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, object var_42_object, int var_43_int, float var_44_float, float var_45_float)
{
	object var_46_object;
	var_42_object = var_46_object;
	int var_47_int;
	var_43_int = var_47_int;
	float var_48_float;
	var_44_float = var_48_float;
	func_4224(var_46_object, var_47_int, var_48_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, object var_42_object, int var_43_int, float var_44_float, float var_45_float, cvector var_46_cvector, cvector var_47_cvector)
{
	object var_48_object;
	var_42_object = var_48_object;
	int var_49_int;
	var_43_int = var_49_int;
	float var_50_float;
	var_44_float = var_50_float;
	cvector var_51_cvector;
	var_46_cvector = var_51_cvector;
	cvector var_52_cvector;
	var_47_cvector = var_52_cvector;
	func_4292(var_50_float, var_51_cvector, var_52_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, object var_42_object, string var_43_string)
{
	float var_45_float;
	if(var_43_string == "health") {
		@GetProperty("health", var_45_float);
		if(var_45_float <= 0)
			@SignalDeath(var_42_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, int var_19_int, int var_20_int, bool var_21_bool, bool var_22_bool, object var_23_object, bool var_24_bool, bool var_25_bool, bool var_26_bool, bool var_27_bool, object var_28_object, bool var_29_bool, object var_30_object, int var_31_int, int var_32_int, bool var_33_bool, bool var_34_bool, float var_35_float, int var_36_int, object var_37_object, bool var_38_bool, object var_39_object, bool var_40_bool, object var_41_object, object var_42_object)
{
	func_4730();
	bool var_66_bool;
	func_4563(var_66_bool, "quest_b9_03", "fail");
	object var_72_object;
	var_42_object = var_72_object;
	TaskCall(14);
	func_2723(var_72_object);
	TaskReturn();
}


void func_4096(bool var_204_bool, object var_205_object)
{
	bool var_207_bool;
	var_205_object->IsDead(var_207_bool);
	var_207_bool = var_204_bool;
}


void func_0(object var_0_object, int var_48_int, object var_49_object)
{
	var_0_object = var_49_object;
	bool var_59_bool; object var_60_object;
	var_49_object = var_60_object;
	func_4322(var_59_bool, var_60_object, 70.0);
	if(!var_59_bool) { //@nz
		var_48_int = -2;
		return 8;
	}
	object var_55_object;
	@CreateDialog(var_55_object);
	int var_107_int;
	func_4939(var_107_int);
	var_55_object->SetNPCName(var_107_int);
	int var_108_int;
	func_4937(var_108_int);
	var_55_object->SetNPCDescription(var_108_int);
	string var_109_string;
	func_4941(var_109_string);
	var_55_object->SetPhoto(var_109_string);
	string var_110_string;
	func_4943(var_110_string);
	var_55_object->SetPhoto2(var_110_string);
	int var_111_int;
	func_4860(var_111_int);
	var_55_object->SetPlayerName(var_111_int);
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0) {
		var_48_int = -2;
		return 8;
	}
	@DoDialog(var_55_object);
	object var_120_object; object var_121_object;
	var_49_object = var_120_object;
	var_55_object = var_121_object;
	TaskCall(1);
	func_74(var_122_object, var_123_object, var_124_string, var_125_bool, var_120_object, var_121_object);
	TaskReturn();
	bool var_58_bool;
	var_55_object->IsDialogEnd(var_58_bool);
	
	for(;;) {
		var_206_bool = !var_58_bool; //@nz
		if(var_206_bool == 0) goto Label_63;
		@sync();
		var_55_object->IsDialogEnd(var_58_bool);
	}
	
Label_63:
	object var_207_object;
	var_49_object = var_207_object;
	func_4391();
	@StopDialog(var_55_object);
	var_55_object->GetReturnValue(-1);
	int var_57_int = var_48_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4613(object var_49_object)
{
	var_49_object->SetReturnValue(2);
}


void func_4101(bool var_193_bool, object var_194_object)
{
	if(var_194_object == null) {
		var_193_bool = false;
		return 4;
	}
	bool var_200_bool = false;
	var_203_bool = IsFuncExist(var_194_object, "IsDead", 1);
	if(var_203_bool != 0) {
		bool var_204_bool; object var_205_object;
		var_194_object = var_205_object;
		func_4096(var_204_bool, var_205_object);
		if(var_204_bool != 0)
			var_200_bool = true;
	}
	if(var_200_bool != 0) {
		var_193_bool = false;
		return 4;
	}
	object var_197_object;
	@GetScene(var_197_object);
	if(var_197_object == null) {
		var_193_bool = false;
		return 4;
	}
	object var_198_object;
	var_194_object->GetScene(var_198_object);
	if(var_197_object != var_198_object) {
		var_193_bool = false;
		return 4;
	}
	var_193_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_4618(object var_151_object)
{
	var_151_object->SetReturnValue(1);
}


void func_2572(object var_0_object, object var_1_object, bool var_226_bool, object var_227_object, float var_228_float, float var_229_float, bool var_230_bool, bool var_231_bool)
{
	bool var_240_bool; object var_242_object; cvector var_243_cvector; cvector var_244_cvector; float var_246_float; object var_247_object;
	var_0_object = false;
	var_1_object = var_227_object;
	bool var_241_bool;
	var_231_bool = var_241_bool;
	
	for(;;) {
		bool var_248_bool; object var_249_object;
		var_227_object = var_249_object;
		func_2712(var_248_bool, var_249_object);
		if(!var_248_bool) { //@nz
			var_226_bool = false;
			return 16;
		}
		var_227_object->GetPosition(var_243_cvector);
		@GetPosition(var_244_cvector);
		var_246_float = (var_243_cvector - var_244_cvector) | (var_243_cvector - var_244_cvector);
		bool var_253_bool = false;
		if(var_229_float > 0) {
			if(var_246_float > (var_229_float * var_229_float))
				var_253_bool = true;
		}
		if(var_253_bool != 0) {
			@Stop();
			var_226_bool = false;
			return 16;
		}
		if(var_246_float > (var_228_float * var_228_float)) {
			var_227_object->GetPFPosition(var_243_cvector);
			@FindPathTo(var_247_object, var_243_cvector);
			if(var_247_object != null) {
				var_247_object = var_242_object;
				var_247_object = null;
			}
			if(var_242_object != null) {
				if(var_241_bool == 0) goto Label_2625;
				var_241_bool = false;
				@RotatePath(var_242_object, var_240_bool);
				if(!var_240_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_266_string;
						func_2719(var_266_string);
						string var_267_string;
						func_2721(var_267_string);
						@FollowPath(var_242_object, var_230_bool, var_240_bool, var_266_string, var_267_string);
						if(!var_240_bool) { //@nz
							if(var_0_object == 0) goto Label_2644;
							var_242_object = null;
						}
					EMIT "GOTO 0xa55";

					Label_2644:
						} else {
					var_242_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_240_bool);
					if(!var_240_bool) { //@nz
						if(var_0_object != 0) {
							var_242_object = null;
							goto Label_2672;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2672;
		}
			var_247_object = null;
			goto Label_2670;

		Label_2670:
			var_242_object = null;

		}
	Label_2672:
		for(;;) {
			var_226_bool = !var_0_object;
			return 16;

			}
	}
	
}


// @pe
void func_4623(object var_160_object)
{
	var_160_object->SetReturnValue(3);
}


void func_5139(bool var_44_bool, object var_45_object, object var_50_object)
{
	object var_49_object;
	var_45_object = var_49_object;
	TaskCall(0);
	int var_48_int;
	func_0(var_50_object, var_48_int, var_49_object);
	TaskReturn();
	int var_47_int;
	var_50_object = var_47_int;
	if(var_47_int == 2) {
		bool var_217_bool;
		func_5017(var_217_bool, 2);
	} else if(var_47_int == 1) {
			bool var_248_bool;
			func_5017(var_248_bool, 1);
	}

	for(;;) {
		var_44_bool = true;
		return 2;

	}
	
	if(var_47_int == 3) {
		bool var_252_bool;
		func_5017(var_252_bool, 5);
	} else if(var_47_int == 4) {
		bool var_256_bool;
		func_5017(var_256_bool, 8);
	}
	var_44_bool = false;
}


// @pe
void func_4628(void)
{
	@SetVariable("oob9BoyFollower1", 1);
}


void func_4634(void)
{
	object var_55_object;
	func_4810(var_55_object);
	object var_54_object;
	var_55_object = var_54_object;
	float var_66_float;
	func_4575(var_66_float);
	var_54_object->AddMark("b9q03Bonfire1", "pt_bonfire1", 0, 531507, var_66_float);
	float var_73_float;
	func_4575(var_73_float);
	var_54_object->AddMark("b9q03Bonfire2", "pt_bonfire2", 0, 531508, var_73_float);
	float var_78_float;
	func_4575(var_78_float);
	var_54_object->AddMark("b9q03Bonfire3", "pt_bonfire3", 0, 531509, var_78_float);
	float var_83_float;
	func_4575(var_83_float);
	var_54_object->AddMark("b9q03Bonfire4", "pt_bonfire4", 0, 531510, var_83_float);
	func_4743();
}
EMIT "Stack[-1] = 0";


void func_1562(object var_0_object, cvector var_1237_cvector, float var_1238_float)
{
	cvector var_1245_cvector;
	@GetPosition(var_1245_cvector);
	cvector var_1246_cvector;
	var_0_object->GetPosition(var_1246_cvector); //@t
	cvector var_1247_cvector;
	@GetDirection(var_1247_cvector);
	cvector var_1251_cvector;
	cvector var_1253_cvector;
	func_4505(var_1253_cvector, (var_1245_cvector - var_1246_cvector));
	func_4505(var_1251_cvector, (var_1253_cvector + (var_1247_cvector * 0.75)));
	cvector var_1248_cvector;
	var_1251_cvector = var_1248_cvector;
	cvector var_1249_cvector;
	float var_1250_float;
	@FindLongestDir(var_1249_cvector, var_1250_float, var_1248_cvector, var_1238_float, 32, 7000.0);
	if((var_1250_float - 100) < 0)
		var_1250_float = 0;
	var_1237_cvector = var_1249_cvector * var_1250_float;
}


void func_3614(object var_0_object, bool var_929_bool)
{
	bool var_931_bool;
	var_934_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_934_bool != 0) {
		var_0_object->IsAttacking(var_931_bool); //@t
		var_931_bool = var_929_bool;
	}
	var_929_bool = false;
}


void func_1055(object var_0_object, cvector var_340_cvector, float var_341_float)
{
	cvector var_348_cvector;
	@GetPosition(var_348_cvector);
	cvector var_349_cvector;
	var_0_object->GetPosition(var_349_cvector); //@t
	cvector var_350_cvector;
	@GetDirection(var_350_cvector);
	cvector var_354_cvector;
	cvector var_356_cvector;
	func_4505(var_356_cvector, (var_348_cvector - var_349_cvector));
	func_4505(var_354_cvector, (var_356_cvector + (var_350_cvector * 0.75)));
	cvector var_351_cvector;
	var_354_cvector = var_351_cvector;
	cvector var_352_cvector;
	float var_353_float;
	@FindLongestDir(var_352_cvector, var_353_float, var_351_cvector, var_341_float, 32, 7000.0);
	if((var_353_float - 100) < 0)
		var_353_float = 0;
	var_340_cvector = var_352_cvector * var_353_float;
}


void func_4137(bool var_189_bool, object var_190_object)
{
	object var_194_object;
	var_190_object = var_194_object;
	bool var_193_bool;
	func_4101(var_193_bool, var_194_object);
	if(!var_193_bool) { //@nz
		var_189_bool = false;
		return 2;
	}
	bool var_211_bool; object var_212_object;
	func_4011(var_211_bool, var_212_object, "noaccess");
	if(!var_211_bool) { //@nz
		var_189_bool = true;
		return 2;
	}
	int var_192_int;
	var_212_object->GetProperty("noaccess", var_192_int);
	var_189_bool = var_192_int == 0;
}


void func_3625(object var_2_object, cvector var_6_cvector)
{
	int var_1049_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_6_cvector != 0) {
		if((var_6_cvector + -1) > 0)
			return 4;
	}
	float var_1048_float;
	@rand(var_1048_float);
	float var_1055_float;
	func_3673(var_1055_float);
	if(var_1048_float < var_1055_float) {
		@irand(var_1049_int, var_2_object);
		@Speak("attack" + (var_1049_int + 1));
		int var_1060_int;
		func_3671(var_1060_int);
		var_6_cvector = var_1060_int;
	}
}


void func_1592(object var_0_object, object var_1_object, object var_2_object, object var_1226_object)
{
	float var_1233_float; cvector var_1235_cvector; float var_1236_float;
	cvector var_1237_cvector;
	func_1562(var_1236_float, var_1237_cvector, 1.7453294);
	cvector var_1232_cvector;
	var_1237_cvector = var_1232_cvector;
	if((var_1232_cvector | var_1232_cvector) < 2500.0) {
		cvector var_1264_cvector;
		func_1562(var_1236_float, var_1264_cvector, 2.6179938);
		var_1264_cvector = var_1232_cvector;
		var_1233_float = var_1232_cvector | var_1232_cvector;
		if(var_1233_float < 2500.0) {
			var_1269_float = sqrt(var_1233_float);
			@Trace("Can't retreat, distance: " + var_1269_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_1272_float = GetByIndex(var_1232_cvector, 0);
	var_1273_float = GetByIndex(var_1232_cvector, 2);
	@Rotate(var_1272_float, var_1273_float);
	cvector var_1274_cvector;
	func_3986(var_1274_cvector);
	@SetTimer(120, 0.5);
	
Label_1634:
	bool var_1234_bool;
	@MovePoint((var_1274_cvector + var_1232_cvector), 1, var_1234_bool);
	if(var_1234_bool != 0) {
		if(var_1226_object == null) {
			goto Label_1664;
		EMIT "GOTO 0x67e";

		Label_1664:
			for(;;) {
				return 10;
		}
			cvector var_1280_cvector;
			func_1562(var_1236_float, var_1280_cvector, 2.6179938);
			var_1280_cvector = var_1235_cvector;
			if((var_1235_cvector | var_1235_cvector) >= 2500.0) {
				cvector var_1284_cvector;
				func_3986(var_1284_cvector);
				var_1_object = var_1284_cvector + var_1235_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1634; //@nz

	}
}


void func_1085(object var_0_object, object var_1_object, object var_2_object, object var_329_object)
{
	float var_336_float; cvector var_338_cvector; float var_339_float;
	cvector var_340_cvector;
	func_1055(var_339_float, var_340_cvector, 1.7453294);
	cvector var_335_cvector;
	var_340_cvector = var_335_cvector;
	if((var_335_cvector | var_335_cvector) < 2500.0) {
		cvector var_372_cvector;
		func_1055(var_339_float, var_372_cvector, 2.6179938);
		var_372_cvector = var_335_cvector;
		var_336_float = var_335_cvector | var_335_cvector;
		if(var_336_float < 2500.0) {
			var_377_float = sqrt(var_336_float);
			@Trace("Can't retreat, distance: " + var_377_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_380_float = GetByIndex(var_335_cvector, 0);
	var_381_float = GetByIndex(var_335_cvector, 2);
	@Rotate(var_380_float, var_381_float);
	cvector var_382_cvector;
	func_3986(var_382_cvector);
	@SetTimer(120, 0.5);
	
Label_1127:
	bool var_337_bool;
	@MovePoint((var_382_cvector + var_335_cvector), 1, var_337_bool);
	if(var_337_bool != 0) {
		if(var_329_object == null) {
			goto Label_1157;
		EMIT "GOTO 0x483";

		Label_1157:
			for(;;) {
				return 10;
		}
			cvector var_390_cvector;
			func_1055(var_339_float, var_390_cvector, 2.6179938);
			var_390_cvector = var_338_cvector;
			if((var_338_cvector | var_338_cvector) >= 2500.0) {
				cvector var_394_cvector;
				func_3986(var_394_cvector);
				var_1_object = var_394_cvector + var_338_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1127; //@nz

	}
}


void func_4161(bool var_102_bool, cvector var_103_cvector)
{
	cvector var_107_cvector;
	@GetPosition(var_107_cvector);
	cvector var_108_cvector = var_103_cvector - var_107_cvector;
	var_110_float = GetByIndex(var_108_cvector, 0);
	var_111_float = GetByIndex(var_108_cvector, 2);
	bool var_109_bool;
	@Rotate(var_110_float, var_111_float, var_109_bool);
	var_109_bool = var_102_bool;
}


void func_2119(bool var_482_bool)
{
	int var_496_int;
	func_4947(var_496_int);
	int var_490_int;
	var_496_int = var_490_int;
	bool var_523_bool = true;
	var_525_bool = var_490_int == -1;
	if(var_525_bool != 1) {
		bool var_526_bool; int var_527_int;
		var_490_int = var_527_int;
		func_4976(var_526_bool, var_527_int);
		if(var_526_bool != 1)
			var_523_bool = false;
	}
	if(var_523_bool != 0) {
		bool var_533_bool;
		func_5017(var_533_bool, 1);
		var_482_bool = false;
	}
	object var_494_object;
	@GetScene(var_494_object);
	cvector var_491_cvector;
	cvector var_492_cvector;
	bool var_493_bool;
	var_494_object->GetLocator(("pt_b9q03_bonfire" + var_490_int), var_493_bool, var_491_cvector, var_492_cvector);
	var_537_float = GetByIndex(var_491_cvector, 1);
	SetByIndex(var_491_cvector, 1) = (var_537_float + 50);
	bool var_539_bool; cvector var_540_cvector; cvector var_541_cvector;
	var_491_cvector = var_540_cvector;
	var_492_cvector = var_541_cvector;
	bool var_495_bool;
	func_2239(var_495_bool, var_539_bool, var_540_cvector, var_541_cvector, (float)100, (float)3000, false, true);
	var_539_bool = var_495_bool;
	if(var_495_bool != 0) {
		int var_592_int;
		var_490_int = var_592_int;
		func_4984(var_592_int);
	}
	var_495_bool = var_482_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_4680(object var_136_object)
{
	var_136_object->SetReturnValue(4);
}


void func_3657(object var_0_object)
{
	func_4580(var_0_object);
}


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_120_object, object var_121_object)
{
	var_0_object = var_121_object;
	var_1_object = var_120_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_127_bool;
		func_4706(var_1_object);
		if(var_127_bool != 0) {
			object var_135_object; object var_136_object;
			var_135_object = var_1_object;
			var_136_object = var_0_object;
			func_4628();
			func_192(var_121_object, "Neutral");
			var_0_object->SetMessage(530322); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(530323, 31711, 31710); //@t
			var_0_object->AddReply(531020, 32350, 32349); //@t
		} else {
					bool var_181_bool;
					func_4718(var_1_object);
					if(var_181_bool == 0) goto Label_130;
					func_192(var_121_object, "Neutral");
					var_0_object->SetMessage(530326); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(530327, -1, 31714); //@t
		}
	}
Label_162:
	for(;;) {
		bool var_163_bool;
		func_4945(var_163_bool);
		if(var_163_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_4409(var_2_object);
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
	func_192(var_121_object, "Neutral");
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


void func_4171(bool var_98_bool, object var_99_object)
{
	cvector var_101_cvector;
	var_99_object->GetPosition(var_101_cvector);
	bool var_102_bool; cvector var_103_cvector;
	var_101_cvector = var_103_cvector;
	func_4161(var_102_bool, var_103_cvector);
	var_102_bool = var_98_bool;
}


// @pe
void func_4685(void)
{
	func_4756();
}


void func_3662(void)
{
	func_4458("attack_stay");
}


void func_5199(bool var_45_bool, object var_46_object)
{
	object var_55_object;
	@FindActor(var_55_object, "player");
	bool var_61_bool; object var_62_object;
	func_4137(var_61_bool, var_62_object);
	if(!var_61_bool) //@nz
		var_45_bool = false;
	cvector var_56_cvector;
	var_46_object->GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_62_object->GetPosition(var_57_cvector);
	var_45_bool = ((var_56_cvector - var_57_cvector) | (var_56_cvector - var_57_cvector)) < 75625.0;
}
EMIT "Stack[-5] = 0";


// @pe
void func_4690(object var_108_object)
{
	object var_112_object;
	func_4810(var_112_object);
	object var_109_object;
	var_112_object = var_109_object;
	func_4827(var_109_object, "pt_bonfire1", (float)2);
	object var_132_object;
	func_4810(var_132_object);
	var_108_object->ShowMap(var_132_object);
}


// @pe
void func_3667(void)
{
}


void func_4180(object var_59_object)
{
	string var_73_string;
	if(var_59_object == null)
		return 14;
	bool var_67_bool;
	@IsDead(var_67_bool);
	if(var_67_bool != 0)
		return 14;
	int var_68_int;
	@GetSecondaryAnimationType(var_68_int);
	if(var_68_int < 0)
		return 14;
	cvector var_69_cvector;
	var_59_object->GetPosition(var_69_cvector);
	cvector var_70_cvector;
	@GetPosition(var_70_cvector);
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_72_cvector = var_70_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_72_cvector, 0);
	var_79_float = GetByIndex(var_71_cvector, 0);
	var_81_float = GetByIndex(var_72_cvector, 2);
	var_82_float = GetByIndex(var_71_cvector, 2);
	if(((var_78_float * var_79_float) + (var_81_float * var_82_float)) >= 0)
		var_73_string = "fhit";
	else
		var_73_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_73_string + "1"), (var_73_string + "2"), -10);
	
}


void func_3669(bool var_1172_bool)
{
	var_1172_bool = true;
}


void func_3671(int var_1060_int)
{
	var_1060_int = 1;
}


void func_3673(float var_1055_float)
{
	var_1055_float = 0.5;
}


void func_3675(string var_3_string, bool var_798_bool, object var_799_object, float var_800_float, float var_801_float, bool var_802_bool, bool var_803_bool)
{
	var_3_string = var_799_object;
	@SetTimer(4, 2);
	bool var_812_bool; object var_813_object; float var_814_float; float var_815_float; bool var_816_bool; bool var_817_bool;
	var_799_object = var_813_object;
	var_800_float = var_814_float;
	var_801_float = var_815_float;
	var_802_bool = var_816_bool;
	var_803_bool = var_817_bool;
	bool var_809_bool;
	func_3716(var_809_bool, var_812_bool, var_813_object, var_814_float, var_815_float, var_816_bool, var_817_bool);
	var_812_bool = var_809_bool;
	@KillTimer(4);
	var_809_bool = var_798_bool;
}


// @pe
void func_4706(bool var_127_bool)
{
	int var_129_int;
	func_4541(var_129_int, "oob9BoyFollower1");
	if(var_129_int == 0) {
		var_127_bool = true;
		return 0;
	}
	var_127_bool = false;
}


// @pe
void func_4718(bool var_181_bool)
{
	int var_183_int;
	func_4541(var_183_int, "b9q03BonefiresCount");
	if(var_183_int == 4)
		var_181_bool = true;
	var_181_bool = false;
}


void func_4730(void)
{
	object var_44_object;
	@CreateDiaryEntry(var_44_object, 543, 2, 530355);
	bool var_48_bool; object var_49_object;
	var_44_object = var_49_object;
	func_4782(var_48_bool, var_49_object, 532);
}
EMIT "Stack[-1] = 0";


void func_4224(object var_46_object, int var_47_int, float var_48_float)
{
	cvector var_58_cvector; object var_59_object; int var_60_int; bool var_61_bool; cvector var_62_cvector; cvector var_63_cvector;
	bool var_67_bool = false;
	bool var_68_bool = false;
	if(var_46_object != 0) {
		if(var_47_int != 4)
			var_68_bool = true;
	}
	if(var_68_bool != 0) {
		if(var_47_int != 5)
			var_67_bool = true;
	}
	if(var_67_bool != 0) {
		cvector var_74_cvector; cvector var_75_cvector;
		cvector var_76_cvector; object var_77_object;
		var_46_object = var_77_object;
		func_3991(var_76_cvector, var_77_object);
		var_76_cvector = var_75_cvector;
		func_4505(var_74_cvector, var_75_cvector);
		var_74_cvector = var_58_cvector;
		@CreateVectorVector(var_59_object);
		var_60_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_60_int), var_61_bool, var_62_cvector, var_63_cvector);
			if(!var_61_bool) { //@nz
				break;
			Label_4286:
				var_59_object = null;
	}
			object var_136_object;
			var_46_object = var_136_object;
			func_4180(var_136_object);
		}
		if((var_63_cvector | var_58_cvector) >= 0.70710677)
			var_59_object->add(var_62_cvector);
		var_60_int += 1;
	}
	int var_64_int;
	var_59_object->size(var_64_int);
	if(var_64_int == 0) goto Label_4286;
	int var_65_int;
	@irand(var_65_int, var_64_int);
	cvector var_66_cvector;
	var_59_object->get(var_66_cvector, var_65_int);
	object var_91_object; int var_92_int; float var_93_float; cvector var_94_cvector; cvector var_95_cvector;
	var_46_object = var_91_object;
	var_47_int = var_92_int;
	var_48_float = var_93_float;
	var_66_cvector = var_94_cvector;
	var_95_cvector = -var_58_cvector;
	func_4292(var_93_float, var_94_cvector, var_95_cvector);
}


void func_1665(object var_0_object, object var_1_object, object var_2_object, int var_75_int)
{
	cvector var_80_cvector; float var_81_float; cvector var_82_cvector; float var_83_float;
	if(var_75_int != 120) {
	}
	if(var_0_object == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_80_cvector);
		@FindDirLength(var_81_float, var_80_cvector, 7000.0);
		cvector var_89_cvector;
		func_1562(var_83_float, var_89_cvector, 1.7453294);
		var_89_cvector = var_82_cvector;
		var_83_float = var_82_cvector | var_82_cvector;
		bool var_119_bool = false;
		if(var_83_float >= 2500.0) {
			bool var_122_bool;
			var_126_bool = var_83_float >= ((var_81_float * var_81_float) * 2.25);
			if(var_126_bool != 1) {
				bool var_127_bool;
				func_1733(true, var_127_bool);
				if(var_127_bool != 1)
					var_122_bool = false;
			}
			if(var_122_bool != 0)
				var_119_bool = true;
		}
		if(var_119_bool == 0) goto Label_1716;
		@Stop();
		cvector var_147_cvector;
		func_3986(var_147_cvector);
		var_1_object = var_147_cvector + var_82_cvector;
	}
Label_1716:
	
}


void func_3716(object var_2_object, bool var_812_bool, object var_813_object, float var_814_float, float var_815_float, bool var_816_bool, bool var_817_bool)
{
	object var_822_object;
	func_4580(var_822_object);
	@SetTimer(1, 5);
	bool var_820_bool;
	@CanSee(var_820_bool, var_822_object);
	if(var_820_bool != 0) {
		var_2_object = true;
		object var_826_object;
		var_813_object = var_826_object;
		func_4440(var_826_object);
	} else {
		var_2_object = false;
	}
	bool var_827_bool; object var_828_object;
	func_4006(var_827_bool, var_828_object);
	if(var_827_bool != 0) {
		object var_831_object;
		func_4499(var_831_object);
		@SendPlayerEnemy(var_828_object, var_831_object);
	}
	bool var_832_bool; object var_833_object; float var_834_float; float var_835_float; bool var_836_bool; bool var_837_bool;
	var_813_object = var_833_object;
	var_814_float = var_834_float;
	var_815_float = var_835_float;
	var_816_bool = var_836_bool;
	var_817_bool = var_837_bool;
	bool var_821_bool;
	func_3821(var_820_bool, var_821_bool, var_832_bool, var_833_object, var_834_float, var_835_float, var_836_bool, var_837_bool);
	var_832_bool = var_821_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_821_bool = var_812_bool;
	
}


void func_4743(void)
{
	object var_85_object;
	@CreateDiaryEntry(var_85_object, 534, 2, 530346);
	bool var_89_bool; object var_90_object;
	var_85_object = var_90_object;
	func_4782(var_89_bool, var_90_object, 532);
}
EMIT "Stack[-1] = 0";


void func_2696(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_3215(bool var_4_bool)
{
	@Stop();
	@StopAnimation();
	@StopGroup0();
	var_4_bool = true;
}


void func_4756(void)
{
	object var_141_object;
	@CreateDiaryEntry(var_141_object, 535, 2, 530347);
	bool var_145_bool; object var_146_object;
	var_141_object = var_146_object;
	func_4782(var_145_bool, var_146_object, 532);
}
EMIT "Stack[-1] = 0";


void func_3223(object var_1_object, object var_2_object, object var_5_object)
{
	bool var_756_bool; bool var_757_bool; cvector var_758_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_756_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_756_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_757_bool, ("attack" + (var_2_object + 1)));
			if(!var_757_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_758_cvector, "all", "bjump");
		var_772_float = GetByIndex(var_758_cvector, 2);
		var_5_object = -var_772_float;

	}
}


// @pe
void func_2712(bool var_248_bool, object var_249_object)
{
	object var_251_object;
	var_249_object = var_251_object;
	bool var_250_bool;
	func_4137(var_250_bool, var_251_object);
	var_250_bool = var_248_bool;
}


void func_670(void)
{
	object var_95_object;
	@FindActor(var_95_object, "player");
	if(!var_95_object) { //@nz
	}
	bool var_98_bool; object var_99_object;
	var_95_object = var_99_object;
	func_4171(var_98_bool, var_99_object);
}
EMIT "Stack[-1] = 0";


void func_2719(string var_266_string)
{
	var_266_string = "walk";
}


void func_2721(string var_267_string)
{
	var_267_string = "run";
}


void func_4769(object var_57_object)
{
	object var_59_object;
	@GetDiaryRoot(var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_57_object = false;
	}
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2723(object var_72_object)
{
	func_4913();
	object var_93_object;
	var_72_object = var_93_object;
	func_2740(var_93_object);
}


void func_4782(bool var_48_bool, object var_49_object, int var_50_int)
{
	object var_57_object;
	func_4769(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	object var_55_object;
	var_54_object->Find(var_50_int, var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_50_int);
		var_48_bool = false;
	}
	var_55_object->AddChild(var_49_object);
	@SendWorldWndMessage(7);
	int var_56_int;
	var_49_object->GetCategory(var_56_int);
	@SetDiarySection(var_56_int);
	var_48_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_2740(object var_93_object)
{
	object var_94_object;
	var_93_object = var_94_object;
	func_2765(var_94_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1717(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_3765(object var_1_object, int var_47_int)
{
	if(var_47_int == 1) {
		func_4580(var_1_object);
	} else {
		int var_55_int;
		func_3923(var_44_object, var_55_int, var_55_int);
	}
	
}


void func_1210(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_3258(object var_0_object, float var_1066_float, int var_1067_int)
{
	object var_1071_object; float var_1072_float; float var_1073_float;
	@GetVictim((var_1066_float * 0.9), var_1071_object);
	@ReportAttack(var_0_object);
	if(var_1071_object == var_0_object) {
		float var_1077_float; object var_1078_object; int var_1079_int;
		var_1071_object = var_1078_object;
		var_1067_int = var_1079_int;
		func_2939(var_1079_int);
		var_1077_float = var_1072_float;
		float var_1080_float; object var_1081_object; float var_1082_float; int var_1083_int;
		var_1071_object = var_1081_object;
		int var_1084_int; object var_1085_object; int var_1086_int;
		var_1071_object = var_1085_object;
		var_1067_int = var_1086_int;
		func_2942(var_1086_int);
		var_1084_int = var_1083_int;
		func_4023(var_1080_float, var_1081_object, var_1082_float, var_1083_int);
		var_1080_float = var_1073_float;
		int var_1145_int;
		func_2945(var_1145_int);
		@ReportHit(var_0_object, var_1145_int, var_1073_float, var_1082_float);
		object var_1146_object; float var_1147_float;
		var_1071_object = var_1146_object;
		var_1073_float = var_1147_float;
		func_3667();
	}
}
EMIT "Stack[-3] = 0";


void func_2237(bool var_562_bool)
{
	var_562_bool = true;
}


void func_2239(object var_0_object, bool var_539_bool, cvector var_540_cvector, cvector var_541_cvector, float var_542_float, float var_543_float, bool var_544_bool, bool var_545_bool)
{
	bool var_554_bool; object var_556_object; cvector var_557_cvector; cvector var_558_cvector; float var_560_float; object var_561_object;
	var_0_object = false;
	bool var_555_bool;
	var_545_bool = var_555_bool;
	
	for(;;) {
		bool var_562_bool;
		func_2237(var_562_bool);
		if(!var_562_bool) { //@nz
			var_539_bool = false;
			return 16;
		}
		var_540_cvector = var_557_cvector;
		@GetPosition(var_558_cvector);
		var_560_float = (var_557_cvector - var_558_cvector) | (var_557_cvector - var_558_cvector);
		bool var_564_bool = false;
		if(var_543_float > 0) {
			if(var_560_float > (var_543_float * var_543_float))
				var_564_bool = true;
		}
		if(var_564_bool != 0) {
			@Stop();
			var_539_bool = false;
			return 16;
		}
		if(var_560_float > (var_542_float * var_542_float)) {
			@FindPathTo(var_561_object, var_557_cvector);
			if(var_561_object != null) {
				var_561_object = var_556_object;
				var_561_object = null;
			}
			if(var_556_object != null) {
				if(var_555_bool == 0) goto Label_2287;
				var_555_bool = false;
				@RotatePath(var_556_object, var_554_bool);
				if(!var_554_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_580_string;
						func_2379(var_580_string);
						string var_581_string;
						func_2381(var_581_string);
						@FollowPath(var_556_object, var_544_bool, var_554_bool, var_580_string, var_581_string);
						if(!var_554_bool) { //@nz
							if(var_0_object == 0) goto Label_2306;
							var_556_object = null;
						}
					EMIT "GOTO 0x903";

					Label_2306:
						} else {
					var_556_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_554_bool);
					if(!var_554_bool) { //@nz
						if(var_0_object != 0) {
							var_556_object = null;
							goto Label_2334;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_2334;
		}
			var_561_object = null;
			goto Label_2332;

		Label_2332:
			var_556_object = null;

		}
	Label_2334:
		for(;;) {
			if(!var_0_object) { //@nz
				var_576_float = GetByIndex(var_541_cvector, 0);
				var_577_float = GetByIndex(var_541_cvector, 2);
				@RotateAsync(var_576_float, var_577_float);
			}
			var_539_bool = !var_0_object;
			return 16;

			}
	}
	
}


// @pe
void func_192(object var_2_object, string var_139_string)
{
	bool var_140_bool;
	func_4945(var_140_bool);
	if(!var_140_bool) //@nz
		return 0;
	if(var_139_string == var_2_object)
		return 0;
	string var_143_string; bool var_144_bool;
	var_139_string = var_143_string;
	if(var_139_string == "")
		var_144_bool = false;
	else
		var_144_bool = true;
	func_4425(var_143_string, var_144_bool);
	var_2_object = var_139_string;
	
}


void func_3779(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_3945(var_42_object);
}


void func_4292(object var_48_object, cvector var_51_cvector, cvector var_52_cvector)
{
	object var_55_object;
	@GetScene(var_55_object);
	object var_56_object;
	@AddActorByType(var_56_object, "scripted", var_55_object, var_51_cvector, var_52_cvector, "blood_dir.xml");
	object var_59_object;
	var_48_object = var_59_object;
	func_4180(var_59_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1733(object var_0_object, bool var_127_bool)
{
	cvector var_130_cvector;
	@GetDirection(var_130_cvector);
	cvector var_132_cvector;
	func_3991(var_132_cvector, var_0_object);
	cvector var_131_cvector;
	var_132_cvector = var_131_cvector;
	float var_138_float; cvector var_139_cvector; cvector var_140_cvector;
	var_130_cvector = var_139_cvector;
	var_131_cvector = var_140_cvector;
	func_4533(var_138_float, var_139_cvector, var_140_cvector);
	var_127_bool = var_138_float >= -0.34202012;
}


void func_1226(object var_0_object, bool var_94_bool)
{
	cvector var_97_cvector;
	@GetDirection(var_97_cvector);
	cvector var_99_cvector;
	func_3991(var_99_cvector, var_0_object);
	cvector var_98_cvector;
	var_99_cvector = var_98_cvector;
	float var_105_float; cvector var_106_cvector; cvector var_107_cvector;
	var_97_cvector = var_106_cvector;
	var_98_cvector = var_107_cvector;
	func_4533(var_105_float, var_106_cvector, var_107_cvector);
	var_94_bool = var_105_float >= -0.34202012;
}


void func_4810(object var_55_object)
{
	object var_58_object; object var_59_object;
	@GetMainOutdoorScene(var_58_object);
	if(var_58_object == null) {
		@Trace("Can't find main outdoor scene");
		var_59_object = null;
		var_59_object = var_55_object;
	}
	var_58_object->GetMap(var_59_object);
	var_59_object = var_55_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2765(object var_94_object)
{
	cvector var_105_cvector; cvector var_106_cvector; cvector var_107_cvector; cvector var_108_cvector; string var_109_string; object var_110_object; bool var_111_bool; bool var_112_bool; float var_113_float; cvector var_114_cvector;
	if(var_94_object == null) {
		func_2856("fdie");
	} else {
		var_94_object->GetPosition(var_105_cvector);
		@GetPosition(var_106_cvector);
		@GetDirection(var_107_cvector);
		var_108_cvector = var_106_cvector - var_105_cvector;
		var_148_float = GetByIndex(var_108_cvector, 0);
		var_149_float = GetByIndex(var_107_cvector, 0);
		var_151_float = GetByIndex(var_108_cvector, 2);
		var_152_float = GetByIndex(var_107_cvector, 2);
		if(((var_148_float * var_149_float) + (var_151_float * var_152_float)) >= 0)
			var_109_string = "fdie";
		else
			var_109_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_94_object = var_110_object;
		var_159_bool = IsFuncExist(var_94_object, "GetScriptProperty", 2);
		if(var_159_bool != 0) {
			var_94_object->HasScriptProperty(var_111_bool, "Owner");
			if(var_111_bool != 0) {
				var_94_object->GetScriptProperty(var_110_object, "Owner");
				if(var_110_object == null)
					var_94_object = var_110_object;
			}
		}
		var_166_bool = IsFuncExist(var_110_object, "@GetEyesHeight", 1);
		if(var_166_bool != 0) {
			var_110_object->GetEyesHeight(var_113_float);
			var_114_cvector = [0.0, 0.0, 0.0];
			var_167_float = GetByIndex(var_114_cvector, 1);
			var_113_float = var_167_float;
			SetByIndex(var_114_cvector, 1) = var_167_float;
			@LookAsync(var_94_object, "head", var_114_cvector);
			var_112_bool = true;
		} else {
			var_112_bool = false;

		}
		string var_169_string;
		var_109_string = var_169_string;
		func_4458(var_169_string);
		@PlayAnimation("all", var_109_string);
		@WaitForAnimEnd();
		if(var_112_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_109_string);
		@RemoveEnvelope();
		var_110_object = null;
	}
	
}


void func_4306(object var_910_object)
{
	cvector var_914_cvector;
	var_910_object->GetPosition(var_914_cvector);
	cvector var_915_cvector;
	@GetPosition(var_915_cvector);
	cvector var_916_cvector = var_914_cvector - var_915_cvector;
	var_917_float = GetByIndex(var_916_cvector, 0);
	var_918_float = GetByIndex(var_916_cvector, 2);
	@RotateAsync(var_917_float, var_918_float);
}


void func_1749(void)
{
	func_1821(var_115_int, var_116_int, var_117_bool, var_118_bool, var_119_object, (float)300, (float)100);
}


void func_1242(void)
{
	object var_407_object;
	@FindActor(var_407_object, "player");
	bool var_409_bool; object var_410_object;
	var_407_object = var_410_object;
	func_4137(var_409_bool, var_410_object);
	if(!var_409_bool) { //@nz
		bool var_412_bool;
		func_5017(var_412_bool, 1);
	}
	@SetTimer(0, 5);
	object var_416_object;
	object var_406_object;
	func_1345(var_405_bool, var_406_object, var_416_object, var_416_object);
	@KillTimer(0);
}
EMIT "Stack[-1] = 0";


void func_4827(object var_109_object, string var_110_string, float var_111_float)
{
	object var_119_object;
	@GetMainOutdoorScene(var_119_object);
	if(var_119_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_117_cvector;
	cvector var_118_cvector;
	bool var_120_bool;
	var_119_object->GetLocator(var_110_string, var_120_bool, var_117_cvector, var_118_cvector);
	if(!var_120_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_110_string) + " doesnt exist");
	var_119_object->GetMap(var_109_object);
	if(var_109_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_130_float = GetByIndex(var_117_cvector, 0);
	var_131_float = GetByIndex(var_117_cvector, 2);
	var_109_object->SetMapParams(var_130_float, var_131_float, var_111_float);
}
EMIT "Stack[-2] = 0";


void func_4317(bool var_54_bool)
{
	bool var_56_bool;
	@IsLoaded(var_56_bool);
	var_56_bool = var_54_bool;
}


void func_3297(object var_0_object, object var_1_object, bool var_1031_bool, float var_1032_float)
{
	string var_1040_string;
	func_3657(var_1040_string);
	int var_1037_int;
	@irand(var_1037_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + (var_1037_int + 1)));
	@WaitForAnimEnd();
	int var_1039_int;
	func_3625(var_1039_int, var_1040_string);
	bool var_1061_bool = true;
	bool var_1062_bool;
	func_4137(var_1062_bool, var_0_object);
	var_1064_bool = !var_1062_bool; //@nz
	if(var_1064_bool != 1) {
		if(var_4_bool != 1)
			var_1061_bool = false;
	}
	if(var_1061_bool != 0) {
		@StopAsync();
		var_1031_bool = false;
		return 8;
	}
	float var_1066_float; int var_1067_int;
	var_1032_float = var_1066_float;
	var_1037_int = var_1067_int;
	func_3258(var_1040_string, var_1066_float, var_1067_int);
	bool var_1038_bool;
	@HasAnimation(var_1038_bool, "all", ("attack_middle" + var_1037_int));
	if(var_1038_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_1037_int));
		@WaitForAnimEnd();
		func_3657(var_1040_string);
		bool var_1155_bool = true;
		bool var_1156_bool;
		func_4137(var_1156_bool, var_0_object);
		var_1158_bool = !var_1156_bool; //@nz
		if(var_1158_bool != 1) {
			if(var_4_bool != 1)
				var_1155_bool = false;
		}
		if(var_1155_bool != 0) {
			@StopAsync();
			var_1031_bool = false;
			return 8;
		}
		float var_1160_float; int var_1161_int;
		var_1032_float = var_1160_float;
		func_3258(var_1040_string, var_1160_float, var_1161_int);
		var_1039_int = 1;

		for(;;) {
			var_1040_string = (("attack_middle" + var_1161_int) + "_") + var_1039_int;
			@HasAnimation(var_1038_bool, "all", var_1040_string);
			if(!var_1038_bool) { //@nz
			} else {
				@PlayAnimation("all", var_1040_string);
				@WaitForAnimEnd();
				func_3657(var_1040_string);
				bool var_1183_bool = true;
				bool var_1184_bool;
				func_4137(var_1184_bool, var_0_object);
				var_1186_bool = !var_1184_bool; //@nz
				if(var_1186_bool != 1) {
					if(var_4_bool != 1)
						var_1183_bool = false;
				}
				if(var_1183_bool != 0) {
					@StopAsync();
					var_1031_bool = false;
					return 8;
				}
				float var_1188_float; int var_1189_int;
				var_1032_float = var_1188_float;
				var_1037_int = var_1189_int;
				func_3258(var_1040_string, var_1188_float, var_1189_int);
				var_1039_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_1037_int));
		bool var_1172_bool;
		func_3669(var_1172_bool);
		if(var_1172_bool != 0) {
			bool var_1173_bool;
			func_3443(var_1173_bool, 0.75);
			@StopAsync();
		}
		var_1031_bool = true;
		return 8;

	}
}


void func_4322(bool var_59_bool, object var_60_object, float var_61_float)
{
	cvector var_72_cvector; bool var_79_bool;
	var_60_object->GetPosition(var_72_cvector);
	float var_71_float;
	var_60_object->GetEyesHeight(var_71_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (var_80_float + var_71_float);
	cvector var_73_cvector;
	@GetPosition(var_73_cvector);
	@GetEyesHeight(var_71_float);
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (var_81_float + var_71_float);
	cvector var_74_cvector = var_72_cvector - var_73_cvector;
	var_82_float = GetByIndex(var_74_cvector, 1);
	SetByIndex(var_74_cvector, 1) = (float)0;
	var_84_float = sqrt(var_74_cvector | var_74_cvector);
	var_74_cvector /= var_84_float;
	cvector var_75_cvector = -var_74_cvector;
	cvector var_86_cvector;
	func_4505(var_86_cvector, (var_75_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_76_cvector = ((var_74_cvector * var_61_float) + (var_86_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_78_bool;
	@IsOverrideActive(var_78_bool);
	if(var_78_bool != 0)
		var_59_bool = false;
	@StopWorld();
	@CameraTransit((var_73_cvector + var_76_cvector), var_75_cvector, true);
	var_100_float = GetByIndex(var_76_cvector, 0);
	var_101_float = GetByIndex(var_76_cvector, 2);
	@Rotate(var_100_float, var_101_float);
	bool var_102_bool;
	func_4945(var_102_bool);
	if(var_102_bool != 0) {
	} else {
		@HasAnimationTrack(var_79_bool, "head");
		if(var_79_bool == 0) goto Label_4385;
		@LookAsyncCamera("head");
	}
Label_4385:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_59_bool = true;
	
}


// @pe
void func_738(object var_1311_object)
{
	if(!var_1311_object) { //@nz
	}
	bool var_1314_bool; object var_1315_object;
	var_1311_object = var_1315_object;
	func_4171(var_1314_bool, var_1315_object);
}


void func_3821(object var_0_object, object var_1_object, bool var_832_bool, object var_833_object, float var_834_float, float var_835_float, bool var_836_bool, bool var_837_bool)
{
	bool var_846_bool; object var_848_object; cvector var_849_cvector; cvector var_850_cvector; float var_852_float; object var_853_object;
	var_0_object = false;
	var_1_object = var_833_object;
	bool var_847_bool;
	var_837_bool = var_847_bool;
	
	for(;;) {
		bool var_854_bool; object var_855_object;
		var_833_object = var_855_object;
		func_3961(var_854_bool, var_855_object);
		if(!var_854_bool) { //@nz
			var_832_bool = false;
			return 16;
		}
		var_833_object->GetPosition(var_849_cvector);
		@GetPosition(var_850_cvector);
		var_852_float = (var_849_cvector - var_850_cvector) | (var_849_cvector - var_850_cvector);
		bool var_859_bool = false;
		if(var_835_float > 0) {
			if(var_852_float > (var_835_float * var_835_float))
				var_859_bool = true;
		}
		if(var_859_bool != 0) {
			@Stop();
			var_832_bool = false;
			return 16;
		}
		if(var_852_float > (var_834_float * var_834_float)) {
			var_833_object->GetPFPosition(var_849_cvector);
			@FindPathTo(var_853_object, var_849_cvector);
			if(var_853_object != null) {
				var_853_object = var_848_object;
				var_853_object = null;
			}
			if(var_848_object != null) {
				if(var_847_bool == 0) goto Label_3874;
				var_847_bool = false;
				@RotatePath(var_848_object, var_846_bool);
				if(!var_846_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_872_string;
						func_3968(var_872_string);
						string var_873_string;
						func_3970(var_873_string);
						@FollowPath(var_848_object, var_836_bool, var_846_bool, var_872_string, var_873_string);
						if(!var_846_bool) { //@nz
							if(var_0_object == 0) goto Label_3893;
							var_848_object = null;
						}
					EMIT "GOTO 0xf36";

					Label_3893:
						} else {
					var_848_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_846_bool);
					if(!var_846_bool) { //@nz
						if(var_0_object != 0) {
							var_848_object = null;
							goto Label_3921;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_3921;
		}
			var_853_object = null;
			goto Label_3919;

		Label_3919:
			var_848_object = null;

		}
	Label_3921:
		for(;;) {
			var_832_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_4860(int var_111_int)
{
	int var_113_int;
	@GetVariable("branch", var_113_int);
	if(var_113_int == 0) {
		var_111_int = 1;
		return 2;
	EMIT "GOTO 0x130b";
	}
	if(var_113_int == 1) {
		var_111_int = 2;
		return 2;
	}
	var_111_int = 3;
}


void func_4877(int var_73_int)
{
	int var_75_int;
	@GetVariable("branch", var_75_int);
	var_75_int = var_73_int;
}


// @pe
void func_4883(object var_46_object)
{
	int var_47_int;
	func_4877(var_47_int);
	if(var_47_int == 1)
		@WorkWithCorpse(var_46_object);
	else
		@Barter(var_46_object);
	
}


// @pe
void func_1821(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, float var_120_float, float var_121_float)
{
	bool var_122_bool;
	func_4317(var_122_bool);
	if(!var_122_bool) //@nz
		return 0;
	@FindActor(var_4_bool, "player");
	var_2_object = false;
	var_0_object = var_120_float;
	var_1_object = var_121_float;
	@SetTimer(10, 1.0);
	func_1900();
	if(!false) //@nz
		@KillTimer(10);
}


void func_4896(string var_79_string)
{
	object var_83_object;
	@CreateInvItem(var_83_object);
	var_83_object->SetItemName(var_79_string);
	var_83_object->SetProperty("Organ", 1);
	int var_84_int;
	var_83_object->GetItemID(var_84_int);
	bool var_85_bool;
	@AddItem(var_85_bool, var_83_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_802(object var_641_object)
{
	object var_647_object;
	var_641_object = var_647_object;
	bool var_646_bool;
	func_4137(var_646_bool, var_647_object);
	if(!var_646_bool) { //@nz
		bool var_649_bool;
		func_5017(var_649_bool, 1);
	}
	object var_651_object;
	func_857(var_644_cvector, var_645_bool, var_651_object, var_651_object);
}


void func_1315(object var_0_object, cvector var_427_cvector, float var_428_float)
{
	cvector var_435_cvector;
	@GetPosition(var_435_cvector);
	cvector var_436_cvector;
	var_0_object->GetPosition(var_436_cvector); //@t
	cvector var_437_cvector;
	@GetDirection(var_437_cvector);
	cvector var_441_cvector;
	cvector var_443_cvector;
	func_4505(var_443_cvector, (var_435_cvector - var_436_cvector));
	func_4505(var_441_cvector, (var_443_cvector + (var_437_cvector * 0.75)));
	cvector var_438_cvector;
	var_441_cvector = var_438_cvector;
	cvector var_439_cvector;
	float var_440_float;
	@FindLongestDir(var_439_cvector, var_440_float, var_438_cvector, var_428_float, 32, 7000.0);
	if((var_440_float - 100) < 0)
		var_440_float = 0;
	var_427_cvector = var_439_cvector * var_440_float;
}


void func_4391(void)
{
	bool var_209_bool;
	@CameraSwitchToNormal(true);
	bool var_211_bool;
	func_4945(var_211_bool);
	if(var_211_bool != 0) {
	} else {
		@HasAnimationTrack(var_209_bool, "head");
		if(var_209_bool == 0) goto Label_4408;
		@UnlookAsync("head");
	}
Label_4408:
	
}


// @pe
void func_2856(string var_116_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_117_string;
	var_116_string = var_117_string;
	func_4458(var_117_string);
	@PlayAnimation("all", var_116_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_116_string);
	@RemoveEnvelope();
}


void func_4913(void)
{
	int var_73_int;
	func_4877(var_73_int);
	if(var_73_int != 1) {
	}
	func_4896("liver");
	func_4896("kidney");
	func_4896("heart");
	func_4896("blood");
}


void func_1848(object var_0_object, object var_1_object, bool var_4_bool, bool var_45_bool)
{
	if(var_4_bool == null)
		var_45_bool = false;
	float var_49_float;
	func_3998(var_49_float, var_4_bool);
	float var_47_float = sqrt(var_49_float);
	if(var_2_object != 0)
		var_47_float -= var_1_object;
	var_45_bool = var_47_float < var_0_object;
}


void func_4409(string var_165_string)
{
	bool var_169_bool; float var_170_float; float var_171_float;
	@lshHasAnimation(var_169_bool, var_165_string);
	if(var_169_bool != 0) {
		@lshGetAnimTimes(var_165_string, var_170_float, var_171_float);
		@lshPlayAnimation(var_170_float, var_171_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_165_string);
	}
	
}


void func_827(object var_0_object, cvector var_662_cvector, float var_663_float)
{
	cvector var_670_cvector;
	@GetPosition(var_670_cvector);
	cvector var_671_cvector;
	var_0_object->GetPosition(var_671_cvector); //@t
	cvector var_672_cvector;
	@GetDirection(var_672_cvector);
	cvector var_676_cvector;
	cvector var_678_cvector;
	func_4505(var_678_cvector, (var_670_cvector - var_671_cvector));
	func_4505(var_676_cvector, (var_678_cvector + (var_672_cvector * 0.75)));
	cvector var_673_cvector;
	var_676_cvector = var_673_cvector;
	cvector var_674_cvector;
	float var_675_float;
	@FindLongestDir(var_674_cvector, var_675_float, var_673_cvector, var_663_float, 32, 7000.0);
	if((var_675_float - 100) < 0)
		var_675_float = 0;
	var_662_cvector = var_674_cvector * var_675_float;
}


void func_2363(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1345(object var_0_object, object var_1_object, object var_2_object, object var_416_object)
{
	float var_423_float; cvector var_425_cvector; float var_426_float;
	cvector var_427_cvector;
	func_1315(var_426_float, var_427_cvector, 1.7453294);
	cvector var_422_cvector;
	var_427_cvector = var_422_cvector;
	if((var_422_cvector | var_422_cvector) < 2500.0) {
		cvector var_454_cvector;
		func_1315(var_426_float, var_454_cvector, 2.6179938);
		var_454_cvector = var_422_cvector;
		var_423_float = var_422_cvector | var_422_cvector;
		if(var_423_float < 2500.0) {
			var_459_float = sqrt(var_423_float);
			@Trace("Can't retreat, distance: " + var_459_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_462_float = GetByIndex(var_422_cvector, 0);
	var_463_float = GetByIndex(var_422_cvector, 2);
	@Rotate(var_462_float, var_463_float);
	cvector var_464_cvector;
	func_3986(var_464_cvector);
	@SetTimer(120, 0.5);
	
Label_1387:
	bool var_424_bool;
	@MovePoint((var_464_cvector + var_422_cvector), 1, var_424_bool);
	if(var_424_bool != 0) {
		if(var_416_object == null) {
			goto Label_1417;
		EMIT "GOTO 0x587";

		Label_1417:
			for(;;) {
				return 10;
		}
			cvector var_470_cvector;
			func_1315(var_426_float, var_470_cvector, 2.6179938);
			var_470_cvector = var_425_cvector;
			if((var_425_cvector | var_425_cvector) >= 2500.0) {
				cvector var_474_cvector;
				func_3986(var_474_cvector);
				var_1_object = var_474_cvector + var_425_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1387; //@nz

	}
}


void func_2888(void)
{
	var_50_bool = GlobalVars[1];
	if(var_50_bool != 0) {
		object var_51_object;
		func_4499(var_51_object);
		@RemoveActor(var_51_object);
		@Hold();
	}
	for(;;) {
		bool var_54_bool;
		func_4317(var_54_bool);
		var_57_bool = !var_54_bool; //@nz
		if(var_57_bool == 0) goto Label_2905;
		@Hold();
	}
	
Label_2905:
}


void func_4937(int var_108_int)
{
	var_108_int = 515558;
}


void func_4425(string var_143_string, bool var_144_bool)
{
	bool var_150_bool; float var_151_float; float var_152_float;
	@lshHasAnimation(var_150_bool, var_143_string);
	if(var_150_bool != 0) {
		@lshGetAnimTimes(var_143_string, var_151_float, var_152_float);
		@lshPlayAnimation(var_151_float, var_152_float, var_144_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_143_string);
	}
	
}


void func_4939(int var_107_int)
{
	var_107_int = 503343;
}


void func_2379(string var_580_string)
{
	var_580_string = "walk";
}


void func_4941(string var_109_string)
{
	var_109_string = "ui/NPC_Citizen3.png";
}


void func_2381(string var_581_string)
{
	var_581_string = "run";
}


void func_4943(string var_110_string)
{
	var_110_string = "ui/NPC_Citizen3_b.png";
}


void func_2383(void)
{
	func_2446("hunt");
}


void func_4945(bool var_102_bool)
{
	var_102_bool = false;
}


void func_4947(int var_496_int)
{
	object var_507_object; cvector var_509_cvector; cvector var_510_cvector; bool var_511_bool; int var_513_int; int var_514_int; float var_516_float;
	@GetScene(var_507_object);
	cvector var_508_cvector;
	@GetPosition(var_508_cvector);
	float var_512_float = 9000000;
	
	for(;;) {
		if(true != 0) {
			var_507_object->GetLocator(("pt_b9q03_bonfire" + 1), var_511_bool, var_509_cvector, var_510_cvector);
			if(!var_511_bool) { //@nz
			} else {
				if(((var_508_cvector - var_509_cvector) | (var_508_cvector - var_509_cvector)) < var_512_float) {
					var_516_float = var_512_float;
					var_513_int = -1;
				}
				var_513_int += 1;
			}
		}
		var_514_int = var_496_int;

	}
}
EMIT "Stack[-10] = 0";


// @pe
void func_3923(object var_0_object, object var_1_object, int var_55_int)
{
	if(var_55_int != 0)
		return 0;
	bool var_58_bool;
	func_3961(var_58_bool, var_1_object);
	if(!var_58_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_4440(object var_297_object)
{
	float var_300_float;
	var_297_object->GetEyesHeight(var_300_float);
	cvector var_301_cvector = [0.0, 0.0, 0.0];
	var_302_float = GetByIndex(var_301_cvector, 1);
	var_300_float = var_302_float;
	SetByIndex(var_301_cvector, 1) = var_302_float;
	@LookAsync(var_297_object, "head", var_301_cvector);
}


void func_857(object var_0_object, object var_1_object, object var_2_object, object var_651_object)
{
	float var_658_float; cvector var_660_cvector; float var_661_float;
	cvector var_662_cvector;
	func_827(var_661_float, var_662_cvector, 1.7453294);
	cvector var_657_cvector;
	var_662_cvector = var_657_cvector;
	if((var_657_cvector | var_657_cvector) < 2500.0) {
		cvector var_689_cvector;
		func_827(var_661_float, var_689_cvector, 2.6179938);
		var_689_cvector = var_657_cvector;
		var_658_float = var_657_cvector | var_657_cvector;
		if(var_658_float < 2500.0) {
			var_694_float = sqrt(var_658_float);
			@Trace("Can't retreat, distance: " + var_694_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_697_float = GetByIndex(var_657_cvector, 0);
	var_698_float = GetByIndex(var_657_cvector, 2);
	@Rotate(var_697_float, var_698_float);
	cvector var_699_cvector;
	func_3986(var_699_cvector);
	@SetTimer(120, 0.5);
	
Label_899:
	bool var_659_bool;
	@MovePoint((var_699_cvector + var_657_cvector), 1, var_659_bool);
	if(var_659_bool != 0) {
		if(var_651_object == null) {
			goto Label_929;
		EMIT "GOTO 0x39f";

		Label_929:
			for(;;) {
				return 10;
		}
			cvector var_705_cvector;
			func_827(var_661_float, var_705_cvector, 2.6179938);
			var_705_cvector = var_660_cvector;
			if((var_660_cvector | var_660_cvector) >= 2500.0) {
				cvector var_709_cvector;
				func_3986(var_709_cvector);
				var_1_object = var_709_cvector + var_660_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_899; //@nz

	}
}


// @pe
void func_1886(object var_2_object, string var_3_string)
{
	func_1981();
	@KillTimer(10);
	if(var_2_object != 0) {
		@UnlookAsync("head");
		var_2_object = false;
	}
	var_3_string = true;
}


void func_4451(void)
{
	bool var_45_bool;
	func_4945(var_45_bool);
	if(var_45_bool != 0)
		@lshStopSpeech();
}


void func_3945(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_4458(string var_935_string)
{
	bool var_944_bool; int var_945_int; bool var_946_bool; int var_947_int; bool var_948_bool; float var_949_float; cvector var_950_cvector; cvector var_951_cvector;
	@IsExisting3DSound(var_944_bool, var_935_string);
	if(!var_944_bool) { //@nz
		var_945_int = 0;

		for(;;) {
			@IsExisting3DSound(var_946_bool, (var_935_string + (var_945_int + 1)));
			if(!var_946_bool) { //@nz
				break;
			Label_4478:
				@irand(var_947_int, var_945_int);
				var_935_string += (var_947_int + 1);
	}
			@Is3DSoundLoaded(var_948_bool, var_935_string);
			if(var_948_bool != 0) {
				@GetEyesHeight(var_949_float);
				@GetDirection(var_950_cvector);
				var_951_cvector = var_950_cvector * 50;
				var_962_float = GetByIndex(var_951_cvector, 1);
				SetByIndex(var_951_cvector, 1) = (var_962_float + var_949_float);
				@PlayGlobalSound(var_935_string, var_951_cvector);
			}
		}
		var_945_int += 1;
	}
	var_957_bool = !var_945_int; //@nz
	if(var_957_bool == 0) goto Label_4478;
}


// @pe
void func_2923(bool var_7_bool, object var_716_object)
{
	var_7_bool = var_716_object;
	@SetTimer(3, 1);
	object var_728_object;
	func_2965(var_721_bool, var_722_bool, var_723_float, var_724_int, var_725_object, var_728_object, var_728_object, false, 150.0);
	@KillTimer(3);
}


void func_1900(void)
{
	int var_136_int; int var_137_int; bool var_138_bool; float var_139_float; bool var_140_bool;
	@WaitForAnimEnd();
	bool var_141_bool;
	func_4317(var_141_bool);
	if(!var_141_bool) //@nz
		return 14;
	int var_143_int;
	func_4596(var_143_int);
	int var_134_int;
	var_143_int = var_134_int;
	int var_135_int = 0;
	
	for(;;) {
		bool var_156_bool = false;
		if(var_135_int < 5) {
			bool var_159_bool;
			func_4317(var_159_bool);
			if(var_159_bool != 0)
				var_156_bool = true;
		}
		if(var_156_bool != 0) {
			@irand(var_136_int, 3);
			if(var_136_int == 0) {
				if(var_134_int == 0) goto Label_1947;
				@irand(var_137_int, var_134_int);
				string var_165_string; int var_166_int;
				var_137_int = var_166_int;
				func_4589(var_165_string, var_166_int);
				@PlayAnimation("all", var_165_string);
				@WaitForAnimEnd(var_138_bool);
				if(!var_138_bool) { //@nz
				} else {
			} else {
			if(var_136_int == 1) {
				@rand(var_139_float, 4);
				@Sleep((var_139_float + 1), var_140_bool);
				if(!var_140_bool) { //@nz
					goto Label_1976;
				}
			} else if(var_135_int != 0) {
				goto Label_1976;
			}
			}
					bool var_168_bool;
					func_1979(var_168_bool);
					var_169_bool = !var_168_bool; //@nz
					if(var_169_bool == 0) goto Label_1971;
			}
		}
	Label_1976:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1971:
		@ResetAAS();
		var_135_int += 1;
	}
	
}


void func_4976(bool var_526_bool, int var_527_int)
{
	int var_529_int;
	@GetVariable(("b9q03Bonfire" + var_527_int), var_529_int);
	var_526_bool = var_529_int != 0;
}


void func_3443(bool var_1173_bool, float var_1174_float)
{
	float var_1177_float; bool var_1178_bool;
	@rand(var_1177_float);
	if(var_1177_float < var_1174_float) {

		for(;;) {
			@IsAnimationPlaying(var_1178_bool);
			if(!var_1178_bool) { //@nz
			} else {
				bool var_1181_bool;
				func_3553(var_1181_bool);
				if(var_1181_bool != 0) {
					var_1173_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_1173_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_3657(var_1178_bool);
}


void func_4984(int var_592_int)
{
	string var_595_string;
	@TriggerWorld("enable_bonfire", var_595_string);
	bool var_598_bool;
	func_4563(var_598_bool, "quest_b9_03", "bonfire_burn");
	@SetVariable(("b9q03Bonfire" + var_595_string), 1);
	object var_596_object;
	@GetScene(var_596_object);
	object var_608_object;
	func_4499(var_608_object);
	@BroadcastMessage("b9q03BonfireBurnedByFollower", var_608_object, var_596_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3961(bool var_854_bool, object var_855_object)
{
	object var_857_object;
	var_855_object = var_857_object;
	bool var_856_bool;
	func_4137(var_856_bool, var_857_object);
	var_856_bool = var_854_bool;
}


// @pe
void func_2939(float var_1077_float)
{
	var_1077_float = 0.1;
}


// @pe
void func_2942(int var_1084_int)
{
	var_1084_int = 0;
}


void func_3968(string var_872_string)
{
	var_872_string = "walk";
}


void func_2945(int var_1145_int)
{
	var_1145_int = 0;
}


void func_3970(string var_873_string)
{
	var_873_string = "run";
}


// @pe
void func_3972(string var_1108_string, int var_1109_int)
{
	if(var_1109_int == 2) {
		var_1108_string = "fire";
		return 0;
	EMIT "GOTO 0xf90";
	}
	if(var_1109_int == 1) {
		var_1108_string = "bullet";
		return 0;
	}
	var_1108_string = "phys";
}


void func_1418(object var_0_object, object var_1_object, object var_2_object, int var_76_int)
{
	cvector var_81_cvector; float var_82_float; cvector var_83_cvector; float var_84_float;
	if(var_76_int != 120) {
	}
	if(var_0_object == null) {
		@Stop();
		@KillTimer(1);
		var_2_object = true;
	} else {
		@GetDirection(var_81_cvector);
		@FindDirLength(var_82_float, var_81_cvector, 7000.0);
		cvector var_90_cvector;
		func_1315(var_84_float, var_90_cvector, 1.7453294);
		var_90_cvector = var_83_cvector;
		var_84_float = var_83_cvector | var_83_cvector;
		bool var_120_bool = false;
		if(var_84_float >= 2500.0) {
			bool var_123_bool;
			var_127_bool = var_84_float >= ((var_82_float * var_82_float) * 2.25);
			if(var_127_bool != 1) {
				bool var_128_bool;
				func_1486(true, var_128_bool);
				if(var_128_bool != 1)
					var_123_bool = false;
			}
			if(var_123_bool != 0)
				var_120_bool = true;
		}
		if(var_120_bool == 0) goto Label_1469;
		@Stop();
		cvector var_148_cvector;
		func_3986(var_148_cvector);
		var_1_object = var_148_cvector + var_83_cvector;
	}
Label_1469:
	
}


void func_2446(string var_614_string)
{
	@WaitForAnimEnd();
	bool var_619_bool;
	func_4317(var_619_bool);
	if(!var_619_bool) //@nz
		return 4;
	bool var_617_bool;
	@HasAnimation(var_617_bool, "all", var_614_string);
	if(!var_617_bool) //@nz
		return 4;
	@PlayAnimation("all", var_614_string);
	bool var_618_bool;
	@WaitForAnimEnd(var_618_bool);
}


void func_3470(object var_0_object, bool var_966_bool, float var_967_float)
{
	bool var_973_bool; cvector var_974_cvector; cvector var_975_cvector; cvector var_976_cvector; float var_977_float;
	
	for(;;) {
		@IsAnimationPlaying(var_973_bool);
		if(!var_973_bool) //@nz
			break;
		bool var_979_bool;
		func_3553(var_979_bool);
		if(var_979_bool != 0) {
			var_966_bool = true;
			return 10;
		}
		bool var_1024_bool = true;
		bool var_1025_bool;
		func_4137(var_1025_bool, var_0_object);
		var_1027_bool = !var_1025_bool; //@nz
		if(var_1027_bool != 1) {
			if(var_4_bool != 1)
				var_1024_bool = false;
		}
		if(var_1024_bool != 0) {
			var_966_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_974_cvector); //@t
		@GetPFPosition(var_975_cvector);
		var_976_cvector = var_974_cvector - var_975_cvector;
		var_977_float = var_976_cvector | var_976_cvector;
		if(var_977_float < (var_967_float * var_967_float)) {
			bool var_1031_bool; float var_1032_float;
			var_967_float = var_1032_float;
			func_3297(var_976_cvector, var_977_float, var_1031_bool, var_1032_float);
			var_966_bool = true;
			return 10;
		}
		@sync();
	}
	func_3657(var_977_float);
	var_966_bool = false;
}


void func_3986(cvector var_382_cvector)
{
	cvector var_384_cvector;
	@GetPosition(var_384_cvector);
	var_384_cvector = var_382_cvector;
}


void func_4499(object var_51_object)
{
	object var_53_object;
	@self(var_53_object);
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


void func_2965(object var_0_object, string var_3_string, bool var_4_bool, cvector var_6_cvector, object var_728_object, bool var_729_bool, float var_730_float, bool var_804_bool, bool var_904_bool)
{
	float var_742_float; cvector var_743_cvector; cvector var_744_cvector; bool var_746_bool; float var_749_float; cvector var_750_cvector; bool var_751_bool; float var_752_float;
	func_3223(var_750_cvector, var_751_bool, var_752_float);
	var_6_cvector = 0;
	var_777_bool = IsFuncExist(var_728_object, "@GetAttackDistance", 1);
	if(var_777_bool != 0) {
		var_728_object->GetAttackDistance(var_742_float);
		var_742_float += 50;
	} else {
						var_730_float = var_742_float;
	}
	if(var_742_float >= 150)
		var_742_float = 150;
	var_0_object = var_728_object;
	bool var_745_bool;
	@IsPlayerActor(var_0_object, var_745_bool);
	if(var_745_bool != 0)
		@PlayGlobalMusic("attack");
	if(var_729_bool != 0)
		var_746_bool = false;
	else
		var_746_bool = true;

	
Label_3000:
	for(;;) {
		bool var_785_bool = false;
		bool var_786_bool = false;
		bool var_787_bool;
		func_4137(var_787_bool, var_0_object);
		if(var_787_bool != 0) {
			if(!false) //@nz
				var_786_bool = true;
		}
		if(var_786_bool != 0) {
			if(!var_4_bool) //@nz
				var_785_bool = true;
		}
		if(var_785_bool != 0) {
			func_3657(var_752_float);
			var_0_object->GetPFPosition(var_743_cvector); //@t
			@GetPFPosition(var_744_cvector);
			var_749_float = (var_743_cvector - var_744_cvector) | (var_743_cvector - var_744_cvector);
			if(var_749_float >= ((300.0 + var_742_float) * (300.0 + var_742_float))) {
				bool var_798_bool; float var_800_float;
				var_742_float = var_800_float;
				TaskCall(17);
				func_3675(var_807_object, var_798_bool, var_0_object, var_800_float, 1000.0, true, false);
				TaskReturn();
				if(!var_804_bool) { //@nz
					var_3_string = true;
				} else {
					var_746_bool = false;
			} else {
			if(var_749_float >= (var_730_float * var_730_float)) {
				var_0_object->GetPFPosition(var_750_cvector); //@t
				@CanReachByPF(var_751_bool, var_750_cvector);
				if(!var_751_bool) { //@nz
					bool var_898_bool; float var_900_float;
					var_742_float = var_900_float;
					TaskCall(17);
					func_3675(var_907_object, var_898_bool, var_0_object, var_900_float, 1000.0, true, false);
					TaskReturn();
					if(!var_904_bool) { //@nz
						var_3_string = true;
						goto Label_3192;
					}
					var_746_bool = false;
					goto Label_3000;
				}
				if(!var_746_bool) { //@nz
					func_4306(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_3657(var_752_float);
					@StopAsync();
					var_746_bool = true;
					bool var_921_bool = true;
					bool var_922_bool;
					func_4137(var_922_bool, var_0_object);
					var_924_bool = !var_922_bool; //@nz
					if(var_924_bool != 1) {
						if(var_4_bool != 1)
							var_921_bool = false;
					}
					if(var_921_bool != 0) {
						goto Label_3192;
					}
				}
				@rand(var_752_float);
				bool var_926_bool;
				var_928_bool = var_752_float < 0.6;
				if(var_928_bool != 1) {
					bool var_929_bool;
					func_3614(true, var_929_bool);
					if(var_929_bool != 1)
						var_926_bool = false;
				}
				if(var_926_bool != 0) {
					@Face(var_0_object);
					func_3662();
					@PlayAnimation("all", "attack_stay");
					bool var_966_bool; float var_967_float;
					func_3470(var_752_float, var_966_bool, var_967_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_3657(var_752_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_1194_bool;
					func_3614(var_752_float, var_1194_bool);
					var_1195_bool = !var_1194_bool; //@nz
					if(var_1195_bool == 0) goto Label_3182;
					bool var_1196_bool = true;
					bool var_1197_bool;
					func_4137(var_1197_bool, var_0_object);
					var_1199_bool = !var_1197_bool; //@nz
					if(var_1199_bool != 1) {
						if(var_4_bool != 1)
							var_1196_bool = false;
					}
					if(var_1196_bool != 0) {
						goto Label_3192;
					}
					var_0_object->GetPFPosition(var_743_cvector); //@t
					@GetPFPosition(var_744_cvector);
					if(!(((var_743_cvector - var_744_cvector) | (var_743_cvector - var_744_cvector)) < (var_967_float * var_967_float))) goto Label_3182;
					bool var_1203_bool; float var_1204_float;
					var_730_float = var_1204_float;
					func_3297(var_751_bool, var_752_float, var_1203_bool, var_1204_float);
					var_1205_bool = !var_1203_bool; //@nz
					if(var_1205_bool == 0) goto Label_3182;
					goto Label_3192;
			}
				bool var_1206_bool; float var_1207_float;
				var_730_float = var_1207_float;
				func_3297(var_751_bool, var_752_float, var_1206_bool, var_1207_float);
				if(!var_1206_bool) { //@nz
					goto Label_3192;
				}
				var_746_bool = true;

			}
		Label_3182:
			goto Label_3191;
			}
			Label_3191:
			}
		}
	Label_3192:
		@WaitForAnimEnd();
		bool var_888_bool = true;
		if(var_3_string != 1) {
			if(var_4_bool != 1)
				var_888_bool = false;
		}
		if(var_888_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_745_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_3991(cvector var_1011_cvector, object var_1012_object)
{
	cvector var_1015_cvector;
	@GetPosition(var_1015_cvector);
	cvector var_1016_cvector;
	var_1012_object->GetPosition(var_1016_cvector);
	var_1011_cvector = var_1016_cvector - var_1015_cvector;
}


// @pe
void func_5017(bool var_58_bool, int var_59_int)
{
	if(var_59_int == 1) {
		@Trace("changing state to c_iStateWaitForCommand");
	} else if(var_59_int == 2) {
			@Trace("changing state to c_iStateFollow");
	}

	for(;;) {
		var_64_int = GlobalVars[2];
		var_59_int = var_64_int;
		GlobalVars[2] = var_64_int;
		var_58_bool = true;
		return 0;

	}
	
	if(var_59_int == 3) {
		@Trace("changing state to c_iStateIdleAndFollow");
	} else if(var_59_int == 4) {
		@Trace("changing state to c_iStateRetreatPlayer");
	} else if(var_59_int == 5) {
		@Trace("changing state to c_iStateBurn");
	} else if(var_59_int == 0) {
		var_79_int = GlobalVars[6];
		var_80_int = GlobalVars[2];
		var_80_int = var_79_int;
		GlobalVars[6] = var_79_int;
		@Trace("changing state to c_iStateWaitForLoad");
	} else if(var_59_int == 8) {
		@Trace("changing state to c_iStateGoAway");
	} else if(var_59_int == 9) {
		@Trace("changing state to c_iStateAttack");
	}
	var_58_bool = false;
}


void func_4505(cvector var_356_cvector, cvector var_357_cvector)
{
	float var_359_float = sqrt(var_357_cvector | var_357_cvector);
	if(var_359_float < 0.000001)
		var_356_cvector = [0.0, 0.0, 0.0];
	var_356_cvector = var_357_cvector / var_359_float;
}


void func_3998(float var_1297_float, object var_1298_object)
{
	cvector var_1303_cvector;
	@GetPosition(var_1303_cvector);
	cvector var_1304_cvector;
	var_1298_object->GetPosition(var_1304_cvector);
	var_1297_float = (var_1304_cvector - var_1303_cvector) | (var_1304_cvector - var_1303_cvector);
}


void func_2467(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_4515(float var_1118_float, float var_1119_float, float var_1120_float)
{
	if(var_1119_float < var_1120_float)
		var_1119_float = var_1118_float;
	else
		var_1120_float = var_1118_float;
	
}


void func_4006(bool var_827_bool, object var_828_object)
{
	bool var_830_bool;
	@IsPlayerActor(var_828_object, var_830_bool);
	var_830_bool = var_827_bool;
}


void func_2472(object var_2_object)
{
	object var_187_object;
	@FindActor(var_187_object, "player");
	bool var_189_bool; object var_190_object;
	var_187_object = var_190_object;
	func_4137(var_189_bool, var_190_object);
	if(!var_189_bool) { //@nz
		bool var_224_bool;
		func_5017(var_224_bool, 1);
	}
	bool var_226_bool; object var_227_object;
	object var_186_object;
	func_2572(var_186_object, var_227_object, var_226_bool, var_227_object, 250.0, (float)6000, true, true);
	if(var_226_bool != 0) {
		if(!var_2_object) { //@nz
			bool var_278_bool;
			func_5017(var_278_bool, 3);
		}
	}
}
EMIT "Stack[-1] = 0";


// @pe
void func_4522(float var_1128_float, float var_1129_float, float var_1130_float, float var_1131_float)
{
	if(var_1129_float < var_1130_float) {
		var_1130_float = var_1128_float;
		return 0;
	}
	if(var_1129_float > var_1131_float) {
		var_1131_float = var_1128_float;
		return 0;
	}
	var_1129_float = var_1128_float;
}


void func_4011(bool var_211_bool, object var_212_object, string var_213_string)
{
	var_218_bool = IsFuncExist(var_212_object, "HasProperty", 2);
	if(!var_218_bool) { //@nz
		var_211_bool = false;
		return 2;
	}
	bool var_215_bool;
	var_212_object->HasProperty(var_213_string, var_215_bool);
	var_215_bool = var_211_bool;
}


// @pe
void func_4533(float var_138_float, cvector var_139_cvector, cvector var_140_cvector)
{
	var_145_float = sqrt((var_139_cvector | var_139_cvector) * (var_140_cvector | var_140_cvector));
	var_138_float = (var_139_cvector | var_140_cvector) / var_145_float;
}


void func_4023(float var_1080_float, object var_1081_object, float var_1082_float, int var_1083_int)
{
	int var_1093_int; int var_1095_int;
	object var_1100_object;
	var_1081_object = var_1100_object;
	bool var_1099_bool;
	func_4011(var_1099_bool, var_1100_object, "health");
	if(!var_1099_bool) //@nz
		var_1080_float = 0.0;
	bool var_1103_bool; object var_1104_object;
	func_4011(var_1103_bool, var_1104_object, "armor");
	if(!var_1103_bool) //@nz
		var_1093_int = 0;
	else
		var_1104_object->GetProperty("armor", var_1093_int);
	string var_1108_string; int var_1109_int;
	var_1083_int = var_1109_int;
	func_3972(var_1108_string, var_1109_int);
	string var_1094_string = "armor_" + var_1108_string;
	bool var_1114_bool; object var_1115_object; string var_1116_string;
	var_1081_object = var_1115_object;
	func_4011(var_1114_bool, var_1115_object, var_1116_string);
	if(!var_1114_bool) //@nz
		var_1095_int = 0;
	else
		var_1081_object->GetProperty(var_1116_string, var_1095_int);

	float var_1118_float;
	func_4515(var_1118_float, ((var_1093_int + var_1095_int) / 100.0), (float)1);
	float var_1096_float;
	var_1118_float = var_1096_float;
	float var_1097_float;
	var_1081_object->GetProperty("health", var_1097_float);
	float var_1098_float = var_1082_float * (1 - var_1096_float);
	float var_1128_float;
	func_4522(var_1128_float, (var_1097_float - var_1098_float), (float)0, (float)1);
	var_1081_object->SetProperty("health", var_1128_float);
	bool var_1134_bool; object var_1135_object;
	var_1081_object = var_1135_object;
	func_4006(var_1134_bool, var_1135_object);
	if(var_1134_bool != 0) {
		float var_1136_float = -var_1098_float;
		func_4546(var_1136_float);
	}
	var_1098_float = var_1080_float;
	
}


void func_1979(bool var_168_bool)
{
	var_168_bool = true;
}


void func_1981(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1470(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_3519(object var_0_object, bool var_981_bool)
{
	cvector var_987_cvector; cvector var_988_cvector;
	bool var_992_bool = true;
	bool var_993_bool;
	func_4137(var_993_bool, var_0_object);
	var_995_bool = !var_993_bool; //@nz
	if(var_995_bool != 1) {
		if(var_4_bool != 1)
			var_992_bool = false;
	}
	if(var_992_bool != 0) {
		var_981_bool = false;
		return 10;
	}
	bool var_997_bool;
	float var_991_float;
	func_3614(var_991_float, var_997_bool);
	if(var_997_bool != 0) {
		var_0_object->GetPFPosition(var_987_cvector); //@t
		@GetPFPosition(var_988_cvector);
		var_0_object->GetAttackDistance(var_991_float); //@t
		var_981_bool = ((var_987_cvector - var_988_cvector) | (var_987_cvector - var_988_cvector)) <= ((var_991_float + 50) * (var_991_float + 50));
		return 10;
	}
	var_981_bool = false;
}


void func_4541(int var_129_int, string var_130_string)
{
	int var_132_int;
	@GetVariable(var_130_string, var_132_int);
	var_132_int = var_129_int;
}


void func_1986(object var_0_object)
{
	@SetTimer(2, 1);
	object var_289_object;
	@FindActor(var_289_object, "player");
	float var_290_float;
	@rand(var_290_float, 4);
	if(var_290_float > 1) {
		object var_297_object;
		var_289_object = var_297_object;
		func_4440(var_297_object);
		@Sleep(var_290_float + 2);
		@UnlookAsync("head");
	} else {
		@Sleep(var_290_float + 2);
	}
	if(!var_0_object) { //@nz
		bool var_308_bool;
		func_5017(var_308_bool, 2);
	}
	@KillTimer(2);
	
}
EMIT "Stack[-2] = 0";


void func_4546(float var_1136_float)
{
	object var_1138_object;
	@CreateFloatVector(var_1138_object);
	var_1138_object->add(var_1136_float);
	if(var_1136_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_1138_object);
}
EMIT "Stack[-1] = 0";


void func_1486(object var_0_object, bool var_128_bool)
{
	cvector var_131_cvector;
	@GetDirection(var_131_cvector);
	cvector var_133_cvector;
	func_3991(var_133_cvector, var_0_object);
	cvector var_132_cvector;
	var_133_cvector = var_132_cvector;
	float var_139_float; cvector var_140_cvector; cvector var_141_cvector;
	var_131_cvector = var_140_cvector;
	var_132_cvector = var_141_cvector;
	func_4533(var_139_float, var_140_cvector, var_141_cvector);
	var_128_bool = var_139_float >= -0.34202012;
}


void func_4563(bool var_598_bool, string var_599_string, string var_600_string)
{
	object var_602_object;
	@FindActor(var_602_object, var_599_string);
	if(var_602_object == null)
		var_598_bool = false;
	@Trigger(var_602_object, var_600_string);
	var_598_bool = true;
}
EMIT "Stack[-1] = 0";


void func_982(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_1502(object var_1219_object)
{
	@SetTimer(1, 3);
	object var_1226_object;
	func_1592(var_1222_cvector, var_1223_bool, var_1226_object, var_1226_object);
	@KillTimer(1);
}


// @pe
void func_5086(object var_77_object)
{
	@Trace("changing state to c_iStateAttack");
	var_79_int = GlobalVars[2];
	GlobalVars[2] = 9;
	var_80_object = GlobalVars[5];
	var_77_object = var_80_object;
	GlobalVars[5] = var_80_object;
}


void func_4575(float var_66_float)
{
	float var_68_float;
	@GetGameTime(var_68_float);
	var_68_float = var_66_float;
}


void func_3553(bool var_979_bool)
{
	bool var_980_bool = false;
	bool var_981_bool;
	func_3519(var_980_bool, var_981_bool);
	if(var_981_bool != 0) {
		bool var_1000_bool;
		func_3569(var_979_bool, var_980_bool, var_1000_bool);
		if(var_1000_bool != 0)
			var_980_bool = true;
	}
	if(var_980_bool != 0) {
		var_979_bool = true;
		return 0;
	}
	var_979_bool = false;
}


void func_4580(object var_791_object)
{
	bool var_793_bool;
	@IsPlayerActor(var_791_object, var_793_bool);
	if(var_793_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_998(object var_0_object, bool var_94_bool)
{
	cvector var_97_cvector;
	@GetDirection(var_97_cvector);
	cvector var_99_cvector;
	func_3991(var_99_cvector, var_0_object);
	cvector var_98_cvector;
	var_99_cvector = var_98_cvector;
	float var_105_float; cvector var_106_cvector; cvector var_107_cvector;
	var_97_cvector = var_106_cvector;
	var_98_cvector = var_107_cvector;
	func_4533(var_105_float, var_106_cvector, var_107_cvector);
	var_94_bool = var_105_float >= -0.34202012;
}


// @pe
void func_5097(object var_92_object)
{
	@Trace("changing state to c_iStateRetreatPDamage");
	var_94_int = GlobalVars[2];
	GlobalVars[2] = 7;
	var_95_object = GlobalVars[4];
	var_92_object = var_95_object;
	GlobalVars[4] = var_95_object;
}


void func_2027(void)
{
	@StopGroup0();
}


void func_4589(string var_149_string, int var_150_int)
{
	string var_152_string = "idle";
	if(var_150_int != 0)
		var_152_string += var_150_int;
	var_152_string = var_149_string;
}


void func_3569(object var_0_object, object var_5_object, bool var_1000_bool)
{
	object var_1006_object; float var_1008_float; cvector var_1009_cvector; cvector var_1010_cvector;
	@GetScene(var_1006_object);
	bool var_1007_bool = false;
	
	for(;;) {
		cvector var_1011_cvector;
		func_3991(var_1011_cvector, var_0_object);
		var_1017_int = -var_1011_cvector;
		@FindDirLength(var_1008_float, var_1017_int, var_5_object);
		if(var_1008_float < var_5_object) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_1009_cvector); //@t
				@GetPFPosition(var_1010_cvector);
				@WaitForAnimEnd();
				func_3657(var_1010_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_1007_bool = true;
				bool var_1022_bool;
				func_3519(var_1010_cvector, var_1022_bool);
				var_1023_bool = !var_1022_bool; //@nz
				if(var_1023_bool == 0) goto Label_3610;
		}
		for(;;) {
			var_1007_bool = var_1000_bool;

		}

	Label_3610:
	}
}
EMIT "Stack[-5] = 0";


void func_4596(int var_143_int)
{
	int var_146_int; bool var_147_bool;
	var_146_int = 0;
	
	for(;;) {
		string var_149_string; int var_150_int;
		var_146_int = var_150_int;
		func_4589(var_149_string, var_150_int);
		@HasAnimation(var_147_bool, "all", var_149_string);
		if(!var_147_bool) //@nz
			break;
		var_146_int += 1;
	}
	var_146_int = var_143_int;
}


void func_1014(void)
{
	object var_321_object;
	
Label_1015:
	for(;;) {
		if(true != 0) {
			@FindActor(var_321_object, "player");
			bool var_324_bool; object var_325_object;
			var_321_object = var_325_object;
			func_4137(var_324_bool, var_325_object);
			var_326_bool = !var_324_bool; //@nz
			if(var_326_bool == 0) goto Label_1034;
			@Sleep(3);
			if(var_3_string != 0) {
				goto Label_1043;
			EMIT "GOTO 0x40a";
		}
		Label_1043:
		}
	}
	
Label_1034:
	object var_329_object;
	object var_320_object;
	func_1085(var_319_bool, var_320_object, var_329_object, var_329_object);
	if(var_3_string != 0) {
		goto Label_1043;
	}
	var_321_object = null;
	goto Label_1015;
}


