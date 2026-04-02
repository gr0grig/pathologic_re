// @GLOBALS: 0:string:,1:object:,2:bool:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		var_0_bool = true;
		func_145();
		func_4406();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, float var_37_float, float var_38_float, int var_39_int)
	{
		bool var_41_bool;
		@IsOverrideActive(var_41_bool);
		if(!var_41_bool) { //@nz
			func_145();
			disable OnUse;
			bool var_43_bool; object var_44_object;
			var_39_int = var_44_object;
			func_3920(var_43_bool, var_44_object);
			enable OnUse;
			object var_57_object;
			var_39_int = var_57_object;
			func_5027(var_57_object);
			var_0_bool = false;
		}
	}

		void OnCollision(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, float var_37_float, float var_38_float, int var_39_int, object var_40_object, object var_41_object, object var_61_object)
		{
		bool var_63_bool;
		@IsPlayerActor(var_61_object, var_63_bool);
		if(var_63_bool != 0) {
			func_145();
			object var_65_object;
			var_61_object = var_65_object;
			TaskCall(2);
			func_148(var_65_object);
			TaskReturn();
			var_0_bool = false;
			@SetTimer(20, 10.0);
		}
		}

	void OnTimer(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, float var_37_float, float var_38_float, int var_39_int)
	{
		object var_41_object;
		if(var_39_int == 20) {
			@KillTimer(20);
		} else {
			if(!(var_39_int == 21)) goto Label_144;
			if(true == 0) goto Label_144;
			@FindActor(var_41_object, "player");
			bool var_49_bool = false;
			if(var_41_object != 0) {
				float var_51_float; object var_52_object;
				var_41_object = var_52_object;
				func_3861(var_51_float, var_52_object);
				if(var_51_float <= 62500.0)
					var_49_bool = true;
			}
			if(var_49_bool != 0) {
				object var_61_object;
				var_41_object = var_61_object;
				func_89();
			}
			var_41_object = null;
		}
	Label_144:
	
	}

}


task task_2
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		func_193();
		func_4406();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, float var_37_float, float var_38_float, int var_39_int)
	{
		bool var_41_bool;
		@IsOverrideActive(var_41_bool);
		if(!var_41_bool) { //@nz
			func_193();
			disable OnUse;
			bool var_43_bool; object var_44_object;
			var_39_int = var_44_object;
			func_3920(var_43_bool, var_44_object);
			enable OnUse;
			object var_57_object;
			var_39_int = var_57_object;
			func_5027(var_57_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		func_4406();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_4216();
			if(var_40_int == 26708) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_bool;
				func_4453();
				object var_96_object = var_1_object;
				func_4601(var_0_bool);
			}
			if(var_40_int == 44290) {
				object var_124_object = var_1_object;
				func_4417(var_0_bool);
			}
			if(var_40_int == 44277) {
				object var_166_object = var_1_object;
				func_4581(var_0_bool);
			}
			if(var_40_int == 26610) {
				object var_173_object; object var_174_object;
				var_173_object = var_1_object;
				var_174_object = var_0_bool;
				func_4424();
			}
			if(var_40_int == 44473) {
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_bool;
				func_4424();
			}
			if(var_40_int == 26740) {
				object var_199_object; object var_200_object;
				var_199_object = var_1_object;
				var_200_object = var_0_bool;
				func_4479();
			}
			if(var_40_int == 26739) {
				object var_205_object = var_1_object;
				func_4485(var_0_bool);
				object var_223_object = var_1_object;
				func_4565(var_0_bool);
				object var_244_object; object var_245_object;
				var_244_object = var_1_object;
				var_245_object = var_0_bool;
				func_4575();
			}
			if(var_40_int == 26751) {
				object var_250_object; object var_251_object;
				var_250_object = var_1_object;
				var_251_object = var_0_bool;
				func_4502();
				object var_262_object = var_1_object;
				func_4417(var_0_bool);
			}
			if(var_40_int == 26748) {
				object var_266_object; object var_267_object;
				var_266_object = var_1_object;
				var_267_object = var_0_bool;
				func_4511();
				object var_278_object = var_1_object;
				func_4555(var_0_bool);
				object var_283_object; object var_284_object;
				var_283_object = var_1_object;
				var_284_object = var_0_bool;
				func_4575();
			}
			if(var_40_int == 26746) {
				object var_287_object; object var_288_object;
				var_287_object = var_1_object;
				var_288_object = var_0_bool;
				func_4520();
				object var_299_object = var_1_object;
				func_4588(var_0_bool);
			}
			if(var_39_float == 26705) {
				bool var_306_bool = false;
				bool var_307_bool;
				func_4629(var_1_object);
				if(var_307_bool != 0) {
					bool var_315_bool;
					func_4617(var_1_object);
					if(!var_315_bool) //@nz
						var_306_bool = true;
				}
				if(var_306_bool != 0) {
					object var_322_object; object var_323_object;
					var_322_object = var_1_object;
					var_323_object = var_0_bool;
					func_4447();
					func_539(var_40_int, "Neutral");
					var_0_bool->SetMessage(525337); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(525338, 44250, 26706); //@t
					var_0_bool->AddReply(539465, 44260, 41388); //@t
					return 0;
				}
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(525237); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_352_bool;
				func_4617(var_1_object);
				if(var_352_bool != 0)
					var_0_bool->AddReply(525238, 26607, 26606); //@t
				bool var_357_bool = false;
				bool var_358_bool;
				func_4641(var_1_object);
				if(var_358_bool != 0) {
					bool var_364_bool;
					func_4675(var_1_object);
					if(var_364_bool != 0)
						var_357_bool = true;
				}
				if(var_357_bool != 0)
					var_0_bool->AddReply(525372, 26741, 26740); //@t
				bool var_373_bool = false;
				bool var_374_bool;
				func_4665(var_374_bool, var_1_object);
				if(var_374_bool != 0) {
					bool var_386_bool;
					func_4687(var_1_object);
					if(var_386_bool != 0)
						var_373_bool = true;
				}
				if(var_373_bool != 0)
					var_0_bool->AddReply(525369, 44309, 26737); //@t
				bool var_395_bool = false;
				bool var_396_bool;
				func_4665(var_396_bool, var_1_object);
				if(!var_396_bool) { //@nz
					bool var_399_bool;
					func_4687(var_1_object);
					if(var_399_bool != 0)
						var_395_bool = true;
				}
				if(var_395_bool != 0)
					var_0_bool->AddReply(525381, 26750, 26749); //@t
				bool var_404_bool;
				func_4653(var_1_object);
				if(var_404_bool != 0)
					var_0_bool->AddReply(525375, 26744, 26743); //@t
				var_0_bool->AddReply(525243, -1, 26611); //@t
				var_0_bool->AddReply(529207, -1, 30658); //@t
				return 0;
			}
			if(var_39_float == 26744) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(525376); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542113, 44419, 44418); //@t
				return 0;
			}
			if(var_39_float == 44419) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(542114); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542115, 44421, 44420); //@t
				return 0;
			}
			if(var_39_float == 44421) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(542116); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525377, 26747, 26745); //@t
				var_0_bool->AddReply(542117, 44423, 44422); //@t
				return 0;
			}
			if(var_39_float == 44423) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(542118); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525378, -1, 26746); //@t
				return 0;
			}
			if(var_39_float == 26747) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(525379); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525380, -1, 26748); //@t
				return 0;
			}
			if(var_39_float == 26750) {
				func_539(var_40_int, "Fear");
				var_0_bool->SetMessage(525382); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525383, -1, 26751); //@t
				return 0;
			}
			if(var_39_float == 44309) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(542032); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542033, 44311, 44310); //@t
				return 0;
			}
			if(var_39_float == 44311) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(542034); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542035, 44428, 44312); //@t
				var_0_bool->AddReply(542120, 26738, 44425); //@t
				return 0;
			}
			if(var_39_float == 44428) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(542122); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542123, 44430, 44429); //@t
				var_0_bool->AddReply(542126, 26738, 44432); //@t
				return 0;
			}
			if(var_39_float == 44430) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(542124); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542125, 26738, 44431); //@t
				return 0;
			}
			if(var_39_float == 26738) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(525370); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525371, -1, 26739); //@t
				return 0;
			}
			if(var_39_float == 26741) {
				func_539(var_40_int, "Fear");
				var_0_bool->SetMessage(525373); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525374, 44313, 26742); //@t
				return 0;
			}
			if(var_39_float == 44313) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(542036); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542119, -1, 44424); //@t
				return 0;
			}
			if(var_39_float == 26607) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(525239); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529208, 44301, 30659); //@t
				var_0_bool->AddReply(529212, 44453, 30663); //@t
				return 0;
			}
			if(var_39_float == 44453) {
				func_539(var_40_int, "Rage");
				var_0_bool->SetMessage(542140); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542141, 44458, 44454); //@t
				return 0;
			}
			if(var_39_float == 44458) {
				func_539(var_40_int, "Rage");
				var_0_bool->SetMessage(542145); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542146, 30660, 44459); //@t
				return 0;
			}
			if(var_39_float == 44301) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(542024); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542025, 30660, 44302); //@t
				var_0_bool->AddReply(542143, 44457, 44456); //@t
				return 0;
			}
			if(var_39_float == 44457) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(542144); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542147, 30660, 44462); //@t
				return 0;
			}
			if(var_39_float == 30660) {
				func_539(var_40_int, "Fear");
				var_0_bool->SetMessage(529209); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529210, 30662, 30661); //@t
				return 0;
			}
			if(var_39_float == 30662) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(529211); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525240, 26609, 26608); //@t
				var_0_bool->AddReply(542150, 44466, 44465); //@t
				return 0;
			}
			if(var_39_float == 44466) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(542151); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542152, 44468, 44467); //@t
				return 0;
			}
			if(var_39_float == 44468) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(542153); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542154, 26609, 44469); //@t
				return 0;
			}
			if(var_39_float == 26609) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(525241); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542022, 44300, 44299); //@t
				return 0;
			}
			if(var_39_float == 44300) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(542023); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542155, 44472, 44471); //@t
				return 0;
			}
			if(var_39_float == 44472) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(542156); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525242, -1, 26610); //@t
				var_0_bool->AddReply(542157, -1, 44473); //@t
				return 0;
			}
			if(var_39_float == 44260) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(541993); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541994, 44250, 44261); //@t
				var_0_bool->AddReply(541995, 44263, 44262); //@t
				return 0;
			}
			if(var_39_float == 44263) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(541996); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541997, 44250, 44264); //@t
				return 0;
			}
			if(var_39_float == 44250) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(541985); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541986, 26707, 44251); //@t
				var_0_bool->AddReply(541998, 44252, 44266); //@t
				return 0;
			}
			if(var_39_float == 44252) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(541987); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541988, 44268, 44253); //@t
				var_0_bool->AddReply(542001, 26707, 44270); //@t
				return 0;
			}
			if(var_39_float == 26707) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(525339); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541989, 44268, 44254); //@t
				var_0_bool->AddReply(542002, 44273, 44272); //@t
				return 0;
			}
			if(var_39_float == 44273) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(542003); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542004, 44268, 44274); //@t
				var_0_bool->AddReply(542005, 44276, 44275); //@t
				return 0;
			}
			if(var_39_float == 44276) {
				func_539(var_40_int, "Untrust");
				var_0_bool->SetMessage(542006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542007, -1, 44277); //@t
				var_0_bool->AddReply(542008, 44255, 44278); //@t
				return 0;
			}
			if(var_39_float == 44268) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(541999); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542000, 44255, 44269); //@t
				var_0_bool->AddReply(542009, 44286, 44281); //@t
				return 0;
			}
			if(var_39_float == 44255) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(541990); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542010, 44284, 44283); //@t
				var_0_bool->AddReply(542012, 44286, 44285); //@t
				return 0;
			}
			if(var_39_float == 44286) {
				func_539(var_40_int, "Rage");
				var_0_bool->SetMessage(542013); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542015, -1, 44290); //@t
				var_0_bool->AddReply(542014, 44284, 44289); //@t
				return 0;
			}
			if(var_39_float == 44284) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(542011); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541991, 44257, 44256); //@t
				var_0_bool->AddReply(542016, 44293, 44292); //@t
				return 0;
			}
			if(var_39_float == 44293) {
				func_539(var_40_int, "Rage");
				var_0_bool->SetMessage(542017); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542018, 44297, 44294); //@t
				var_0_bool->AddReply(542019, 44257, 44295); //@t
				return 0;
			}
			if(var_39_float == 44297) {
				func_539(var_40_int, "Sly");
				var_0_bool->SetMessage(542020); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542021, 44257, 44298); //@t
				return 0;
			}
			if(var_39_float == 44257) {
				func_539(var_40_int, "Neutral");
				var_0_bool->SetMessage(541992); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525340, -1, 26708); //@t
				var_0_bool->AddReply(525341, -1, 26709); //@t
				return 0;
			}
			var_3_object = true;
			bool var_749_bool;
			func_4415(var_749_bool);
			if(var_749_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x232";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_4216();
			if(var_40_int == 26783) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_bool;
				func_4529();
			}
			if(var_39_float == 26782) {
				func_1786(var_40_int, "Neutral");
				var_0_bool->SetMessage(525414); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_69_bool = false;
				bool var_70_bool;
				func_4699(var_1_object);
				if(var_70_bool != 0) {
					bool var_78_bool;
					func_4711(var_1_object);
					if(var_78_bool != 0)
						var_69_bool = true;
				}
				if(var_69_bool != 0)
					var_0_bool->AddReply(525415, 42567, 26783); //@t
				var_0_bool->AddReply(525418, -1, 26786); //@t
				return 0;
			}
			if(var_39_float == 42567) {
				func_1786(var_40_int, "Untrust");
				var_0_bool->SetMessage(540558); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540559, 26784, 42568); //@t
				var_0_bool->AddReply(540560, 40922, 42569); //@t
				return 0;
			}
			if(var_39_float == 26784) {
				func_1786(var_40_int, "Untrust");
				var_0_bool->SetMessage(525416); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525417, 40922, 26785); //@t
				var_0_bool->AddReply(540561, 40924, 42571); //@t
				return 0;
			}
			if(var_39_float == 40922) {
				func_1786(var_40_int, "Fear");
				var_0_bool->SetMessage(538982); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538983, 40924, 40923); //@t
				return 0;
			}
			if(var_39_float == 40924) {
				func_1786(var_40_int, "Neutral");
				var_0_bool->SetMessage(538984); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538985, 40926, 40925); //@t
				var_0_bool->AddReply(538988, 40929, 40928); //@t
				return 0;
			}
			if(var_39_float == 40929) {
				func_1786(var_40_int, "Untrust");
				var_0_bool->SetMessage(538989); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540565, 42578, 42577); //@t
				var_0_bool->AddReply(538990, 40931, 40930); //@t
				return 0;
			}
			if(var_39_float == 40931) {
				func_1786(var_40_int, "Fear");
				var_0_bool->SetMessage(538991); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538992, -1, 40932); //@t
				var_0_bool->AddReply(540575, -1, 42589); //@t
				return 0;
			}
			if(var_39_float == 40926) {
				func_1786(var_40_int, "Untrust");
				var_0_bool->SetMessage(538986); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538987, 42573, 40927); //@t
				return 0;
			}
			if(var_39_float == 42573) {
				func_1786(var_40_int, "Rage");
				var_0_bool->SetMessage(540562); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540563, 40929, 42574); //@t
				var_0_bool->AddReply(540564, 42578, 42576); //@t
				return 0;
			}
			if(var_39_float == 42578) {
				func_1786(var_40_int, "Rage");
				var_0_bool->SetMessage(540566); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540592, 42607, 42606); //@t
				return 0;
			}
			if(var_39_float == 42607) {
				func_1786(var_40_int, "Rage");
				var_0_bool->SetMessage(540593); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540594, 42609, 42608); //@t
				var_0_bool->AddReply(540601, -1, 42615); //@t
				return 0;
			}
			if(var_39_float == 42609) {
				func_1786(var_40_int, "Neutral");
				var_0_bool->SetMessage(540595); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540596, 42611, 42610); //@t
				return 0;
			}
			if(var_39_float == 42611) {
				func_1786(var_40_int, "Neutral");
				var_0_bool->SetMessage(540597); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540600, -1, 42614); //@t
				return 0;
			}
			var_3_object = true;
			bool var_195_bool;
			func_4415(var_195_bool);
			if(var_195_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x711";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_4216();
			if(var_39_float == 26869) {
				func_2262(var_40_int, "Neutral");
				var_0_bool->SetMessage(525513); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525514, 30738, 26870); //@t
				var_0_bool->AddReply(529284, 30738, 30737); //@t
				return 0;
			}
			if(var_39_float == 30738) {
				func_2262(var_40_int, "Neutral");
				var_0_bool->SetMessage(529285); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529286, -1, 30740); //@t
				var_0_bool->AddReply(529287, -1, 30741); //@t
				return 0;
			}
			var_3_object = true;
			bool var_79_bool;
			func_4415(var_79_bool);
			if(var_79_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8ed";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_4216();
			if(var_40_int == 27141) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_bool;
				func_4535();
			}
			if(var_40_int == 27143) {
				object var_51_object; object var_52_object;
				var_51_object = var_1_object;
				var_52_object = var_0_bool;
				func_4541();
			}
			if(var_40_int == 27144) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_bool;
				func_4595();
			}
			if(var_39_float == 27140) {
				func_2517(var_40_int, "Neutral");
				var_0_bool->SetMessage(525841); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_102_bool = false;
				bool var_103_bool;
				func_4723(var_1_object);
				if(var_103_bool != 0) {
					bool var_111_bool;
					func_4735(var_1_object);
					if(var_111_bool != 0)
						var_102_bool = true;
				}
				if(var_102_bool != 0)
					var_0_bool->AddReply(525842, 30544, 27141); //@t
				bool var_120_bool;
				func_4771(var_1_object);
				if(var_120_bool != 0)
					var_0_bool->AddReply(525845, 30542, 27144); //@t
				var_0_bool->AddReply(529095, -1, 30540); //@t
				var_0_bool->AddReply(529096, -1, 30541); //@t
				return 0;
			}
			if(var_39_float == 30542) {
				func_2517(var_40_int, "Untrust");
				var_0_bool->SetMessage(529097); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529098, -1, 30543); //@t
				var_0_bool->AddReply(541643, -1, 43815); //@t
				return 0;
			}
			if(var_39_float == 30544) {
				func_2517(var_40_int, "Sly");
				var_0_bool->SetMessage(529099); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529100, 30546, 30545); //@t
				return 0;
			}
			if(var_39_float == 30546) {
				func_2517(var_40_int, "Sly");
				var_0_bool->SetMessage(529101); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529102, 27142, 30547); //@t
				return 0;
			}
			if(var_39_float == 27142) {
				func_2517(var_40_int, "Sly");
				var_0_bool->SetMessage(525843); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529103, 30549, 30548); //@t
				return 0;
			}
			if(var_39_float == 30549) {
				func_2517(var_40_int, "Rage");
				var_0_bool->SetMessage(529104); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(529105, 30551, 30550); //@t
				var_0_bool->AddReply(539587, 41533, 41532); //@t
				return 0;
			}
			if(var_39_float == 41533) {
				func_2517(var_40_int, "Neutral");
				var_0_bool->SetMessage(539588); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(539589, 30551, 41534); //@t
				return 0;
			}
			if(var_39_float == 30551) {
				func_2517(var_40_int, "Untrust");
				var_0_bool->SetMessage(529106); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(525844, -1, 27143); //@t
				return 0;
			}
			var_3_object = true;
			bool var_190_bool;
			func_4415(var_190_bool);
			if(var_190_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9ec";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_4216();
			if(var_40_int == 28018) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_bool;
				func_4546();
			}
			if(var_40_int == 45451) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_bool;
				func_4546();
			}
			if(var_39_float == 28015) {
				func_2929(var_40_int, "Rage");
				var_0_bool->SetMessage(526738); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_96_bool;
				func_4759(var_1_object);
				if(var_96_bool != 0)
					var_0_bool->AddReply(526739, 28017, 28016); //@t
				bool var_107_bool;
				func_4747(var_1_object);
				if(var_107_bool != 0)
					var_0_bool->AddReply(528763, 30180, 30179); //@t
				var_0_bool->AddReply(526742, -1, 28019); //@t
				var_0_bool->AddReply(528847, -1, 30265); //@t
				return 0;
			}
			if(var_39_float == 30180) {
				func_2929(var_40_int, "Rage");
				var_0_bool->SetMessage(528764); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542466, 44860, 44859); //@t
				var_0_bool->AddReply(542463, 44857, 44856); //@t
				var_0_bool->AddReply(528765, -1, 30181); //@t
				return 0;
			}
			if(var_39_float == 44857) {
				func_2929(var_40_int, "Neutral");
				var_0_bool->SetMessage(542464); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542465, -1, 44858); //@t
				return 0;
			}
			if(var_39_float == 44860) {
				func_2929(var_40_int, "Neutral");
				var_0_bool->SetMessage(542467); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542468, -1, 44861); //@t
				var_0_bool->AddReply(543008, -1, 45460); //@t
				return 0;
			}
			if(var_39_float == 28017) {
				func_2929(var_40_int, "Rage");
				var_0_bool->SetMessage(526740); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528841, 30260, 30259); //@t
				var_0_bool->AddReply(528848, 30267, 30266); //@t
				return 0;
			}
			if(var_39_float == 30267) {
				func_2929(var_40_int, "Neutral");
				var_0_bool->SetMessage(528849); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528850, 45452, 30268); //@t
				var_0_bool->AddReply(528851, 45452, 30269); //@t
				return 0;
			}
			if(var_39_float == 45452) {
				func_2929(var_40_int, "Neutral");
				var_0_bool->SetMessage(543003); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543005, 45457, 45456); //@t
				return 0;
			}
			if(var_39_float == 45457) {
				func_2929(var_40_int, "Sly");
				var_0_bool->SetMessage(543006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543007, 30264, 45458); //@t
				return 0;
			}
			if(var_39_float == 30260) {
				func_2929(var_40_int, "Sly");
				var_0_bool->SetMessage(528842); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528843, 30262, 30261); //@t
				return 0;
			}
			if(var_39_float == 30262) {
				func_2929(var_40_int, "Rage");
				var_0_bool->SetMessage(528844); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(528845, 30264, 30263); //@t
				var_0_bool->AddReply(543004, 30264, 45454); //@t
				return 0;
			}
			if(var_39_float == 30264) {
				func_2929(var_40_int, "Neutral");
				var_0_bool->SetMessage(528846); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(526741, -1, 28018); //@t
				var_0_bool->AddReply(543002, -1, 45451); //@t
				return 0;
			}
			var_3_object = true;
			bool var_213_bool;
			func_4415(var_213_bool);
			if(var_213_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb88";
	
	}

}


task task_14
{
}


task task_15
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, object var_33_object, object var_34_object, object var_35_object, string var_36_string, bool var_37_bool, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_4216();
			if(var_39_float == 36906) {
				func_3388(var_40_int, "Neutral");
				var_0_bool->SetMessage(535231); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535232, 36953, 36907); //@t
				var_0_bool->AddReply(535233, -1, 36908); //@t
				var_0_bool->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_39_float == 36953) {
				func_3388(var_40_int, "Neutral");
				var_0_bool->SetMessage(535277); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535278, 36957, 36954); //@t
				var_0_bool->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_39_float == 36957) {
				func_3388(var_40_int, "Neutral");
				var_0_bool->SetMessage(535281); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535282, -1, 36958); //@t
				var_0_bool->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_object = true;
			bool var_92_bool;
			func_4415(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd53";
	
	}

}


task task_16
{
}


task task_17
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, int var_36_int, int var_37_int, float var_38_float, float var_39_float, int var_40_int)
	{
		if(1 != 0) {
			func_4216();
			if(var_39_float == 42554) {
				func_3642(var_40_int, "Neutral");
				var_0_bool->SetMessage(540545); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540546, -1, 42555); //@t
				var_0_bool->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_object = true;
			bool var_69_bool;
			func_4415(var_69_bool);
			if(var_69_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xe51";
	
	}

}


maintask task_18
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		var_39_bool = GlobalVars[2];
		GlobalVars[2] = false;
		func_3713(var_36_float, var_37_float, var_38_int);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
	{
		func_4406();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int, object var_39_object)
	{
		bool var_41_bool;
		@IsOverrideActive(var_41_bool);
		if(!var_41_bool) { //@nz
			disable OnUse;
			bool var_43_bool; object var_44_object;
			var_39_object = var_44_object;
			func_3920(var_43_bool, var_44_object);
			enable OnUse;
			object var_57_object;
			var_39_object = var_57_object;
			func_5027(var_57_object);
		}
	}

}


void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, object var_31_object, object var_32_object, object var_33_object, string var_34_string, bool var_35_bool, float var_36_float, float var_37_float, int var_38_int)
{
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_81_bool;
	func_3940(var_81_bool);
	if(!var_81_bool) goto Label_0; //@nz
}


// @pe
void func_3584(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_749_object, object var_750_object)
{
	var_0_bool = var_750_object;
	var_1_object = var_749_object;
	var_3_object = false;
	if(1 != 0) {
		func_3642(var_750_object, "Neutral");
		var_0_bool->SetMessage(540545); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540546, -1, 42555); //@t
		var_0_bool->AddReply(540798, -1, 42847); //@t
		goto Label_3612;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xe04";
	}
Label_3612:
	bool var_771_bool;
	func_4415(var_771_bool);
	if(var_771_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4170(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3641;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3641:
		return 0;

	}
	
}


// @pe
void func_256(string var_174_string, string var_175_string, int var_176_int)
{
	if(var_176_int == 0) {
	} else {
		var_174_string += var_176_int;
	}
	
}


void func_4354(int var_187_int)
{
	float var_189_float;
	@GetGameTime(var_189_float);
	var_187_int = 1 + (var_189_float / 24);
}


void func_4867(void)
{
	object var_292_object;
	@CreateDiaryEntry(var_292_object, 516, 2, 529715);
	bool var_296_bool; object var_297_object;
	var_292_object = var_297_object;
	func_4932(var_296_bool, var_297_object, 507);
}
EMIT "Stack[-1] = 0";


void func_264(int var_167_int, string var_168_string)
{
	int var_171_int; bool var_172_bool;
	var_171_int = 0;
	
	for(;;) {
		string var_174_string; string var_175_string; int var_176_int;
		var_168_string = var_175_string;
		var_171_int = var_176_int;
		func_256(var_174_string, var_175_string, var_176_int);
		@HasAnimation(var_172_bool, "all", var_174_string);
		if(!var_172_bool) //@nz
			break;
		var_171_int += 1;
	}
	var_171_int = var_167_int;
}


// @pe
void func_4617(bool var_329_bool)
{
	int var_331_int;
	func_4268(var_331_int, "k2q01");
	if(var_331_int == 1)
		var_329_bool = true;
	var_329_bool = false;
}


// @pe
void func_4363(bool var_286_bool, int var_287_int)
{
	int var_288_int;
	func_4354(var_288_int);
	var_286_bool = var_288_int == var_287_int;
}


void func_13(bool var_0_bool, bool var_122_bool, cvector var_123_cvector, cvector var_124_cvector)
{
	var_0_bool = true;
	@SetTimer(21, 0.5);
	
Label_19:
	for(;;) {
		bool var_130_bool; cvector var_131_cvector;
		var_123_cvector = var_131_cvector;
		func_3910(var_130_bool, var_131_cvector);
		var_140_bool = !var_130_bool; //@nz
		if(var_140_bool == 0) goto Label_26;
	}
	
Label_26:
	bool var_127_bool;
	@MovePoint(var_123_cvector, false, var_127_bool);
	if(var_127_bool != 0) {
	} else {
		goto Label_19;
	}
	@KillTimer(20);
	@KillTimer(21);
	var_0_bool = false;
	@WaitForAnimEnd(var_127_bool);
	if(!var_127_bool) { //@nz
		var_122_bool = false;
		return 2;
	}
	var_146_float = GetByIndex(var_124_cvector, 0);
	var_147_float = GetByIndex(var_124_cvector, 2);
	@Rotate(var_146_float, var_147_float, var_127_bool);
	if(!var_127_bool) { //@nz
		var_122_bool = false;
		return 2;
	}
	var_122_bool = true;
	
}


void func_3856(cvector var_103_cvector)
{
	cvector var_105_cvector;
	@GetPosition(var_105_cvector);
	var_105_cvector = var_103_cvector;
}


void func_4369(string var_191_string, int var_192_int)
{
	string var_194_string = "idle";
	if(var_192_int != 0)
		var_194_string += var_192_int;
	var_194_string = var_191_string;
}


void func_4880(void)
{
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 508, 2, 529707);
	bool var_93_bool; object var_94_object;
	var_89_object = var_94_object;
	func_4932(var_93_bool, var_94_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4629(bool var_321_bool)
{
	int var_323_int;
	func_4268(var_323_int, "ook2MladVlad1");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


void func_3861(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_4376(int var_185_int)
{
	int var_188_int; bool var_189_bool;
	var_188_int = 0;
	
	for(;;) {
		string var_191_string; int var_192_int;
		var_188_int = var_192_int;
		func_4369(var_191_string, var_192_int);
		@HasAnimation(var_189_bool, "all", var_191_string);
		if(!var_189_bool) //@nz
			break;
		var_188_int += 1;
	}
	var_188_int = var_185_int;
}


void func_282(bool var_0_bool, int var_289_int, object var_290_object)
{
	var_0_bool = var_290_object;
	bool var_300_bool; object var_301_object;
	var_290_object = var_301_object;
	func_3945(var_300_bool, var_301_object, 70.0);
	if(!var_300_bool) { //@nz
		var_289_int = -2;
		return 8;
	}
	object var_296_object;
	@CreateDialog(var_296_object);
	int var_304_int;
	func_4409(var_304_int);
	var_296_object->SetNPCName(var_304_int);
	int var_305_int;
	func_4407(var_305_int);
	var_296_object->SetNPCDescription(var_305_int);
	string var_306_string;
	func_4411(var_306_string);
	var_296_object->SetPhoto(var_306_string);
	string var_307_string;
	func_4413(var_307_string);
	var_296_object->SetPhoto2(var_307_string);
	int var_308_int;
	func_5010(var_308_int);
	var_296_object->SetPlayerName(var_308_int);
	bool var_297_bool;
	@IsOverrideActive(var_297_bool);
	if(var_297_bool != 0) {
		var_289_int = -2;
		return 8;
	}
	@DoDialog(var_296_object);
	bool var_310_bool; object var_311_object;
	object var_312_object;
	func_4223(var_312_object);
	var_312_object = var_311_object;
	func_4032(var_310_bool, var_311_object);
	object var_313_object; object var_314_object;
	var_290_object = var_313_object;
	var_296_object = var_314_object;
	TaskCall(5);
	func_363(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object);
	TaskReturn();
	bool var_299_bool;
	var_296_object->IsDialogEnd(var_299_bool);
	
	for(;;) {
		var_432_bool = !var_299_bool; //@nz
		if(var_432_bool == 0) goto Label_352;
		@sync();
		var_296_object->IsDialogEnd(var_299_bool);
	}
	
Label_352:
	object var_433_object;
	var_290_object = var_433_object;
	func_4014();
	@StopDialog(var_296_object);
	var_296_object->GetReturnValue(-1);
	int var_298_int = var_289_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_539(object var_2_object, string var_340_string)
{
	bool var_341_bool;
	func_4415(var_341_bool);
	if(!var_341_bool) //@nz
		return 0;
	if(var_340_string == var_2_object)
		return 0;
	string var_344_string; bool var_345_bool;
	var_340_string = var_344_string;
	if(var_340_string == "")
		var_345_bool = false;
	else
		var_345_bool = true;
	func_4186(var_344_string, var_345_bool);
	var_2_object = var_340_string;
	
}


void func_3869(bool var_145_bool, object var_146_object, string var_147_string)
{
	var_152_bool = IsFuncExist(var_146_object, "HasProperty", 2);
	if(!var_152_bool) { //@nz
		var_145_bool = false;
		return 2;
	}
	bool var_149_bool;
	var_146_object->HasProperty(var_147_string, var_149_bool);
	var_149_bool = var_145_bool;
}


void func_4893(void)
{
	object var_54_object;
	@CreateDiaryEntry(var_54_object, 392, 1, 525885);
	bool var_58_bool; object var_59_object;
	var_54_object = var_59_object;
	func_4932(var_58_bool, var_59_object, 390);
}
EMIT "Stack[-1] = 0";


void func_4127(bool var_174_bool, object var_175_object)
{
	bool var_183_bool; int var_184_int; string var_185_string;
	int var_187_int;
	func_4354(var_187_int);
	string var_181_string = ("d" + var_187_int) + "m";
	int var_182_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_175_object->HasProperty((var_181_string + (var_182_int + 1)), var_183_bool);
			if(!var_183_bool) { //@nz
			} else {
				var_182_int += 1;
			}
		}
		if(!var_182_int) { //@nz
			var_174_bool = false;
			return 10;
		}
		var_184_int = 0;
		if(var_182_int > 1)
			@irand(var_184_int, var_182_int);
		var_175_object->GetProperty((var_181_string + (var_184_int + 1)), var_185_string);
		bool var_206_bool; string var_207_string;
		var_185_string = var_207_string;
		func_4201(var_206_bool, var_207_string);
		var_206_bool = var_174_bool;
		return 10;

	}
}


// @pe
void func_4641(bool var_371_bool)
{
	int var_373_int;
	func_4268(var_373_int, "k2q04");
	if(var_373_int == 2)
		var_371_bool = true;
	var_371_bool = false;
}


// @pe
void func_2851(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_614_object, object var_615_object)
{
	var_0_bool = var_615_object;
	var_1_object = var_614_object;
	var_3_object = false;
	if(1 != 0) {
		func_2929(var_615_object, "Rage");
		var_0_bool->SetMessage(526738); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_630_bool;
		func_4759(var_1_object);
		if(var_630_bool != 0)
			var_0_bool->AddReply(526739, 28017, 28016); //@t
		bool var_639_bool;
		func_4747(var_1_object);
		if(var_639_bool != 0)
			var_0_bool->AddReply(528763, 30180, 30179); //@t
		var_0_bool->AddReply(526742, -1, 28019); //@t
		var_0_bool->AddReply(528847, -1, 30265); //@t
		goto Label_2899;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb27";
	}
Label_2899:
	bool var_654_bool;
	func_4415(var_654_bool);
	if(var_654_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4170(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2928;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2928:
		return 0;

	}
	
}


// @pe
void func_4393(string var_67_string, int var_68_int)
{
	if(var_68_int == 0) {
		var_72_string = GlobalVars[0];
		var_67_string = "pt_" + var_72_string;
	} else {
		var_74_string = GlobalVars[0];
		var_67_string = ("pt_" + var_74_string) + var_68_int;
	}
	
}


void func_3881(bool var_137_bool, object var_138_object, string var_139_string, float var_140_float, float var_141_float, float var_142_float)
{
	object var_146_object;
	var_138_object = var_146_object;
	string var_147_string;
	var_139_string = var_147_string;
	bool var_145_bool;
	func_3869(var_145_bool, var_146_object, var_147_string);
	if(!var_145_bool) //@nz
		var_137_bool = false;
	float var_144_float;
	var_138_object->GetProperty(var_139_string, var_144_float);
	float var_155_float; float var_157_float; float var_158_float;
	var_141_float = var_157_float;
	var_142_float = var_158_float;
	func_4247(var_155_float, (var_144_float + var_140_float), var_157_float, var_158_float);
	var_138_object->SetProperty(var_139_string, var_155_float);
	var_137_bool = true;
}


void func_4906(void)
{
	object var_50_object;
	@CreateDiaryEntry(var_50_object, 503, 2, 528769);
	bool var_54_bool; object var_55_object;
	var_50_object = var_55_object;
	func_4932(var_54_bool, var_55_object, 500);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4653(bool var_417_bool)
{
	int var_419_int;
	func_4268(var_419_int, "k2q04");
	if(var_419_int == 3)
		var_417_bool = true;
	var_417_bool = false;
}


void func_2349(bool var_0_bool, int var_507_int, object var_508_object)
{
	var_0_bool = var_508_object;
	bool var_518_bool; object var_519_object;
	var_508_object = var_519_object;
	func_3945(var_518_bool, var_519_object, 70.0);
	if(!var_518_bool) { //@nz
		var_507_int = -2;
		return 8;
	}
	object var_514_object;
	@CreateDialog(var_514_object);
	int var_522_int;
	func_4409(var_522_int);
	var_514_object->SetNPCName(var_522_int);
	int var_523_int;
	func_4407(var_523_int);
	var_514_object->SetNPCDescription(var_523_int);
	string var_524_string;
	func_4411(var_524_string);
	var_514_object->SetPhoto(var_524_string);
	string var_525_string;
	func_4413(var_525_string);
	var_514_object->SetPhoto2(var_525_string);
	int var_526_int;
	func_5010(var_526_int);
	var_514_object->SetPlayerName(var_526_int);
	bool var_515_bool;
	@IsOverrideActive(var_515_bool);
	if(var_515_bool != 0) {
		var_507_int = -2;
		return 8;
	}
	@DoDialog(var_514_object);
	bool var_528_bool; object var_529_object;
	object var_530_object;
	func_4223(var_530_object);
	var_530_object = var_529_object;
	func_4032(var_528_bool, var_529_object);
	object var_531_object; object var_532_object;
	var_508_object = var_531_object;
	var_514_object = var_532_object;
	TaskCall(11);
	func_2430(var_533_object, var_534_object, var_535_string, var_536_bool, var_531_object, var_532_object);
	TaskReturn();
	bool var_517_bool;
	var_514_object->IsDialogEnd(var_517_bool);
	
	for(;;) {
		var_586_bool = !var_517_bool; //@nz
		if(var_586_bool == 0) goto Label_2419;
		@sync();
		var_514_object->IsDialogEnd(var_517_bool);
	}
	
Label_2419:
	object var_587_object;
	var_508_object = var_587_object;
	func_4014();
	@StopDialog(var_514_object);
	var_514_object->GetReturnValue(-1);
	int var_516_int = var_507_int;
}
EMIT "Stack[-4] = 0";


void func_4407(int var_120_int)
{
	var_120_int = 515547;
}


void func_4919(object var_63_object)
{
	object var_65_object;
	@GetDiaryRoot(var_65_object);
	if(!var_65_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_63_object = false;
	}
	var_65_object = var_63_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4665(bool var_387_bool, object var_388_object)
{
	object var_390_object;
	var_388_object = var_390_object;
	bool var_389_bool;
	func_4783(var_389_bool, var_390_object);
	if(var_389_bool != 0) {
		var_387_bool = true;
		return 0;
	}
	var_387_bool = false;
}


// @pe
void func_3642(object var_2_object, string var_756_string)
{
	bool var_757_bool;
	func_4415(var_757_bool);
	if(!var_757_bool) //@nz
		return 0;
	if(var_756_string == var_2_object)
		return 0;
	string var_760_string; bool var_761_bool;
	var_756_string = var_760_string;
	if(var_756_string == "")
		var_761_bool = false;
	else
		var_761_bool = true;
	func_4186(var_760_string, var_761_bool);
	var_2_object = var_756_string;
	
}


void func_4409(int var_119_int)
{
	var_119_int = 502872;
}


void func_4411(string var_121_string)
{
	var_121_string = "ui/NPC_MladVlad.png";
}


// @pe
void func_3388(object var_2_object, string var_697_string)
{
	bool var_698_bool;
	func_4415(var_698_bool);
	if(!var_698_bool) //@nz
		return 0;
	if(var_697_string == var_2_object)
		return 0;
	string var_701_string; bool var_702_bool;
	var_697_string = var_701_string;
	if(var_697_string == "")
		var_702_bool = false;
	else
		var_702_bool = true;
	func_4186(var_701_string, var_702_bool);
	var_2_object = var_697_string;
	
}


void func_4413(string var_122_string)
{
	var_122_string = "ui/NPC_MladVlad_b.png";
}


void func_4415(bool var_114_bool)
{
	var_114_bool = true;
}


void func_3903(object var_230_object, string var_231_string, int var_232_int)
{
	int var_234_int;
	var_230_object->GetProperty(var_231_string, var_234_int);
	var_230_object->SetProperty(var_231_string, (var_234_int + var_232_int));
}


// @pe
void func_4417(object var_124_object)
{
	object var_127_object;
	var_124_object = var_127_object;
	bool var_126_bool;
	func_4304(var_126_bool, var_127_object, -0.05);
}


// @pe
void func_4675(bool var_377_bool)
{
	int var_379_int;
	func_4268(var_379_int, "ook2MladVlad2");
	if(var_379_int == 0) {
		var_377_bool = true;
		return 0;
	}
	var_377_bool = false;
}


void func_4932(bool var_54_bool, object var_55_object, int var_56_int)
{
	object var_63_object;
	func_4919(var_63_object);
	object var_60_object;
	var_63_object = var_60_object;
	object var_61_object;
	var_60_object->Find(var_56_int, var_61_object);
	if(!var_61_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_56_int);
		var_54_bool = false;
	}
	var_61_object->AddChild(var_55_object);
	@SendWorldWndMessage(7);
	int var_62_int;
	var_55_object->GetCategory(var_62_int);
	@SetDiarySection(var_62_int);
	var_54_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_3910(bool var_130_bool, cvector var_131_cvector)
{
	cvector var_135_cvector;
	@GetPosition(var_135_cvector);
	cvector var_136_cvector = var_131_cvector - var_135_cvector;
	var_138_float = GetByIndex(var_136_cvector, 0);
	var_139_float = GetByIndex(var_136_cvector, 2);
	bool var_137_bool;
	@Rotate(var_138_float, var_139_float, var_137_bool);
	var_137_bool = var_130_bool;
}


void func_4424(void)
{
	@SetVariable("k2q01", 2);
	object var_179_object;
	func_4960(var_179_object);
	object var_176_object;
	var_179_object = var_176_object;
	float var_184_float;
	func_4349(var_184_float);
	var_176_object->AddMark("k2q01MladVladGotoOspina", "pt_map_ospina", 1, 539374, var_184_float);
	func_4802();
}
EMIT "Stack[-1] = 0";


void func_4170(string var_260_string)
{
	bool var_264_bool; float var_265_float; float var_266_float;
	@lshHasAnimation(var_264_bool, var_260_string);
	if(var_264_bool != 0) {
		@lshGetAnimTimes(var_260_string, var_265_float, var_266_float);
		@lshPlayAnimation(var_265_float, var_266_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_260_string);
	}
	
}


void func_2123(bool var_0_bool, int var_60_int, object var_61_object)
{
	var_0_bool = var_61_object;
	bool var_71_bool; object var_72_object;
	var_61_object = var_72_object;
	func_3945(var_71_bool, var_72_object, 70.0);
	if(!var_71_bool) { //@nz
		var_60_int = -2;
		return 8;
	}
	object var_67_object;
	@CreateDialog(var_67_object);
	int var_119_int;
	func_4409(var_119_int);
	var_67_object->SetNPCName(var_119_int);
	int var_120_int;
	func_4407(var_120_int);
	var_67_object->SetNPCDescription(var_120_int);
	string var_121_string;
	func_4411(var_121_string);
	var_67_object->SetPhoto(var_121_string);
	string var_122_string;
	func_4413(var_122_string);
	var_67_object->SetPhoto2(var_122_string);
	int var_123_int;
	func_5010(var_123_int);
	var_67_object->SetPlayerName(var_123_int);
	bool var_68_bool;
	@IsOverrideActive(var_68_bool);
	if(var_68_bool != 0) {
		var_60_int = -2;
		return 8;
	}
	@DoDialog(var_67_object);
	bool var_132_bool; object var_133_object;
	object var_134_object;
	func_4223(var_134_object);
	var_134_object = var_133_object;
	func_4032(var_132_bool, var_133_object);
	object var_227_object; object var_228_object;
	var_61_object = var_227_object;
	var_67_object = var_228_object;
	TaskCall(9);
	func_2204(var_229_object, var_230_object, var_231_string, var_232_bool, var_227_object, var_228_object);
	TaskReturn();
	bool var_70_bool;
	var_67_object->IsDialogEnd(var_70_bool);
	
	for(;;) {
		var_276_bool = !var_70_bool; //@nz
		if(var_276_bool == 0) goto Label_2193;
		@sync();
		var_67_object->IsDialogEnd(var_70_bool);
	}
	
Label_2193:
	object var_277_object;
	var_61_object = var_277_object;
	func_4014();
	@StopDialog(var_67_object);
	var_67_object->GetReturnValue(-1);
	int var_69_int = var_60_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4687(bool var_399_bool)
{
	int var_401_int;
	func_4268(var_401_int, "k2q04");
	if(var_401_int == 9)
		var_399_bool = true;
	var_399_bool = false;
}


void func_3920(bool var_43_bool, object var_44_object)
{
	cvector var_46_cvector;
	var_44_object->GetPosition(var_46_cvector);
	bool var_47_bool; cvector var_48_cvector;
	var_46_cvector = var_48_cvector;
	func_3910(var_47_bool, var_48_cvector);
	var_47_bool = var_43_bool;
}


void func_4186(string var_238_string, bool var_239_bool)
{
	bool var_245_bool; float var_246_float; float var_247_float;
	@lshHasAnimation(var_245_bool, var_238_string);
	if(var_245_bool != 0) {
		@lshGetAnimTimes(var_238_string, var_246_float, var_247_float);
		@lshPlayAnimation(var_246_float, var_247_float, var_239_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_238_string);
	}
	
}


// @pe
void func_4699(bool var_477_bool)
{
	int var_479_int;
	func_4268(var_479_int, "k3q01");
	if(var_479_int == 2)
		var_477_bool = true;
	var_477_bool = false;
}


// @pe
void func_3325(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_690_object, object var_691_object)
{
	var_0_bool = var_691_object;
	var_1_object = var_690_object;
	var_3_object = false;
	if(1 != 0) {
		func_3388(var_691_object, "Neutral");
		var_0_bool->SetMessage(535231); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535232, 36953, 36907); //@t
		var_0_bool->AddReply(535233, -1, 36908); //@t
		var_0_bool->AddReply(535280, -1, 36956); //@t
		goto Label_3358;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xd01";
	}
Label_3358:
	bool var_715_bool;
	func_4415(var_715_bool);
	if(var_715_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4170(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_3387;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_3387:
		return 0;

	}
	
}


void func_3929(object var_69_object)
{
	cvector var_73_cvector;
	var_69_object->GetPosition(var_73_cvector);
	cvector var_74_cvector;
	@GetPosition(var_74_cvector);
	cvector var_75_cvector = var_73_cvector - var_74_cvector;
	var_76_float = GetByIndex(var_75_cvector, 0);
	var_77_float = GetByIndex(var_75_cvector, 2);
	@RotateAsync(var_76_float, var_77_float);
}


// @pe
void func_4447(void)
{
	@SetVariable("ook2MladVlad1", 1);
}


void func_4960(object var_51_object)
{
	object var_54_object; object var_55_object;
	@GetMainOutdoorScene(var_54_object);
	if(var_54_object == null) {
		@Trace("Can't find main outdoor scene");
		var_55_object = null;
		var_55_object = var_51_object;
	}
	var_54_object->GetMap(var_55_object);
	var_55_object = var_51_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1633(bool var_0_bool, int var_436_int, object var_437_object)
{
	var_0_bool = var_437_object;
	bool var_447_bool; object var_448_object;
	var_437_object = var_448_object;
	func_3945(var_447_bool, var_448_object, 70.0);
	if(!var_447_bool) { //@nz
		var_436_int = -2;
		return 8;
	}
	object var_443_object;
	@CreateDialog(var_443_object);
	int var_451_int;
	func_4409(var_451_int);
	var_443_object->SetNPCName(var_451_int);
	int var_452_int;
	func_4407(var_452_int);
	var_443_object->SetNPCDescription(var_452_int);
	string var_453_string;
	func_4411(var_453_string);
	var_443_object->SetPhoto(var_453_string);
	string var_454_string;
	func_4413(var_454_string);
	var_443_object->SetPhoto2(var_454_string);
	int var_455_int;
	func_5010(var_455_int);
	var_443_object->SetPlayerName(var_455_int);
	bool var_444_bool;
	@IsOverrideActive(var_444_bool);
	if(var_444_bool != 0) {
		var_436_int = -2;
		return 8;
	}
	@DoDialog(var_443_object);
	bool var_457_bool; object var_458_object;
	object var_459_object;
	func_4223(var_459_object);
	var_459_object = var_458_object;
	func_4032(var_457_bool, var_458_object);
	object var_460_object; object var_461_object;
	var_437_object = var_460_object;
	var_443_object = var_461_object;
	TaskCall(7);
	func_1714(var_462_object, var_463_object, var_464_string, var_465_bool, var_460_object, var_461_object);
	TaskReturn();
	bool var_446_bool;
	var_443_object->IsDialogEnd(var_446_bool);
	
	for(;;) {
		var_503_bool = !var_446_bool; //@nz
		if(var_503_bool == 0) goto Label_1703;
		@sync();
		var_443_object->IsDialogEnd(var_446_bool);
	}
	
Label_1703:
	object var_504_object;
	var_437_object = var_504_object;
	func_4014();
	@StopDialog(var_443_object);
	var_443_object->GetReturnValue(-1);
	int var_445_int = var_436_int;
}
EMIT "Stack[-4] = 0";


void func_4090(bool var_143_bool, object var_144_object)
{
	string var_150_string; bool var_152_bool; int var_153_int; string var_154_string;
	var_150_string = "c";
	int var_151_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_144_object->HasProperty((var_150_string + (var_151_int + 1)), var_152_bool);
			if(!var_152_bool) { //@nz
			} else {
				var_151_int += 1;
			}
		}
		if(!var_151_int) { //@nz
			var_143_bool = false;
			return 10;
		}
		var_153_int = 0;
		if(var_151_int > 1)
			@irand(var_153_int, var_151_int);
		var_144_object->GetProperty((var_150_string + (var_153_int + 1)), var_154_string);
		bool var_166_bool; string var_167_string;
		var_154_string = var_167_string;
		func_4201(var_166_bool, var_167_string);
		var_166_bool = var_143_bool;
		return 10;

	}
}


void func_3940(bool var_77_bool)
{
	bool var_79_bool;
	@IsLoaded(var_79_bool);
	var_79_bool = var_77_bool;
}


void func_4453(void)
{
	@SetVariable("k2q04", 1);
	object var_51_object;
	func_4960(var_51_object);
	object var_48_object;
	var_51_object = var_48_object;
	float var_62_float;
	func_4349(var_62_float);
	var_48_object->AddMark("k2q04MladVladGotoAnna", "pt_map_anna", 0, 508645, var_62_float);
	func_4815();
	func_4880();
}
EMIT "Stack[-1] = 0";


// @pe
void func_4711(bool var_483_bool)
{
	int var_485_int;
	func_4268(var_485_int, "ook3MladVlad1");
	if(var_485_int == 0) {
		var_483_bool = true;
		return 0;
	}
	var_483_bool = false;
}


void func_4201(bool var_166_bool, string var_167_string)
{
	bool var_169_bool;
	bool var_170_bool;
	func_4415(var_170_bool);
	if(var_170_bool != 0) {
		@lshHasSpeech(var_169_bool, var_167_string);
		if(var_169_bool != 0) {
			@lshPlaySpeech(var_167_string);
			var_166_bool = true;
		}
	}
	var_166_bool = false;
}


void func_3945(bool var_71_bool, object var_72_object, float var_73_float)
{
	cvector var_84_cvector; bool var_91_bool;
	var_72_object->GetPosition(var_84_cvector);
	float var_83_float;
	var_72_object->GetEyesHeight(var_83_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	SetByIndex(var_84_cvector, 1) = (var_92_float + var_83_float);
	cvector var_85_cvector;
	@GetPosition(var_85_cvector);
	@GetEyesHeight(var_83_float);
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (var_93_float + var_83_float);
	cvector var_86_cvector = var_84_cvector - var_85_cvector;
	var_94_float = GetByIndex(var_86_cvector, 1);
	SetByIndex(var_86_cvector, 1) = (float)0;
	var_96_float = sqrt(var_86_cvector | var_86_cvector);
	var_86_cvector /= var_96_float;
	cvector var_87_cvector = -var_86_cvector;
	cvector var_98_cvector;
	func_4229(var_98_cvector, (var_87_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_88_cvector = ((var_86_cvector * var_73_float) + (var_98_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_90_bool;
	@IsOverrideActive(var_90_bool);
	if(var_90_bool != 0)
		var_71_bool = false;
	@StopWorld();
	@CameraTransit((var_85_cvector + var_88_cvector), var_87_cvector, true);
	var_112_float = GetByIndex(var_88_cvector, 0);
	var_113_float = GetByIndex(var_88_cvector, 2);
	@Rotate(var_112_float, var_113_float);
	bool var_114_bool;
	func_4415(var_114_bool);
	if(var_114_bool != 0) {
	} else {
		@HasAnimationTrack(var_91_bool, "head");
		if(var_91_bool == 0) goto Label_4008;
		@LookAsyncCamera("head");
	}
Label_4008:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_71_bool = true;
	
}


// @pe
void func_363(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_313_object, object var_314_object)
{
	var_0_bool = var_314_object;
	var_1_object = var_313_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_320_bool = false;
		bool var_321_bool;
		func_4629(var_1_object);
		if(var_321_bool != 0) {
			bool var_329_bool;
			func_4617(var_1_object);
			if(!var_329_bool) //@nz
				var_320_bool = true;
		}
		if(var_320_bool != 0) {
			object var_336_object; object var_337_object;
			var_336_object = var_1_object;
			var_337_object = var_0_bool;
			func_4447();
			func_539(var_314_object, "Neutral");
			var_0_bool->SetMessage(525337); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(525338, 44250, 26706); //@t
			var_0_bool->AddReply(539465, 44260, 41388); //@t
		} else {
					func_539(var_314_object, "Neutral");
					var_0_bool->SetMessage(525237); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_365_bool;
					func_4617(var_1_object);
					if(var_365_bool != 0)
						var_0_bool->AddReply(525238, 26607, 26606); //@t
					bool var_370_bool = false;
					bool var_371_bool;
					func_4641(var_1_object);
					if(var_371_bool != 0) {
						bool var_377_bool;
						func_4675(var_1_object);
						if(var_377_bool != 0)
							var_370_bool = true;
					}
					if(var_370_bool != 0)
						var_0_bool->AddReply(525372, 26741, 26740); //@t
					bool var_386_bool = false;
					bool var_387_bool;
					func_4665(var_387_bool, var_1_object);
					if(var_387_bool != 0) {
						bool var_399_bool;
						func_4687(var_1_object);
						if(var_399_bool != 0)
							var_386_bool = true;
					}
					if(var_386_bool != 0)
						var_0_bool->AddReply(525369, 44309, 26737); //@t
					bool var_408_bool = false;
					bool var_409_bool;
					func_4665(var_409_bool, var_1_object);
					if(!var_409_bool) { //@nz
						bool var_412_bool;
						func_4687(var_1_object);
						if(var_412_bool != 0)
							var_408_bool = true;
					}
					if(var_408_bool != 0)
						var_0_bool->AddReply(525381, 26750, 26749); //@t
					bool var_417_bool;
					func_4653(var_1_object);
					if(var_417_bool != 0)
						var_0_bool->AddReply(525375, 26744, 26743); //@t
					var_0_bool->AddReply(525243, -1, 26611); //@t
					var_0_bool->AddReply(529207, -1, 30658); //@t
		}
	}
	for(;;) {
		bool var_355_bool;
		func_4415(var_355_bool);
		if(var_355_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4170(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_538;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_538:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x16f";


// @pe
void func_2929(object var_2_object, string var_621_string)
{
	bool var_622_bool;
	func_4415(var_622_bool);
	if(!var_622_bool) //@nz
		return 0;
	if(var_621_string == var_2_object)
		return 0;
	string var_625_string; bool var_626_bool;
	var_621_string = var_625_string;
	if(var_621_string == "")
		var_626_bool = false;
	else
		var_626_bool = true;
	func_4186(var_625_string, var_626_bool);
	var_2_object = var_621_string;
	
}


void func_4977(object var_98_object, string var_99_string, float var_100_float)
{
	object var_108_object;
	@GetMainOutdoorScene(var_108_object);
	if(var_108_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_106_cvector;
	cvector var_107_cvector;
	bool var_109_bool;
	var_108_object->GetLocator(var_99_string, var_109_bool, var_106_cvector, var_107_cvector);
	if(!var_109_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_99_string) + " doesnt exist");
	var_108_object->GetMap(var_98_object);
	if(var_98_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_119_float = GetByIndex(var_106_cvector, 0);
	var_120_float = GetByIndex(var_106_cvector, 2);
	var_98_object->SetMapParams(var_119_float, var_120_float, var_100_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_4723(bool var_548_bool)
{
	int var_550_int;
	func_4268(var_550_int, "k5q01");
	if(var_550_int == 1)
		var_548_bool = true;
	var_548_bool = false;
}


void func_4216(void)
{
	bool var_42_bool;
	func_4415(var_42_bool);
	if(var_42_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_2430(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_531_object, object var_532_object)
{
	var_0_bool = var_532_object;
	var_1_object = var_531_object;
	var_3_object = false;
	if(1 != 0) {
		func_2517(var_532_object, "Neutral");
		var_0_bool->SetMessage(525841); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_547_bool = false;
		bool var_548_bool;
		func_4723(var_1_object);
		if(var_548_bool != 0) {
			bool var_554_bool;
			func_4735(var_1_object);
			if(var_554_bool != 0)
				var_547_bool = true;
		}
		if(var_547_bool != 0)
			var_0_bool->AddReply(525842, 30544, 27141); //@t
		bool var_563_bool;
		func_4771(var_1_object);
		if(var_563_bool != 0)
			var_0_bool->AddReply(525845, 30542, 27144); //@t
		var_0_bool->AddReply(529095, -1, 30540); //@t
		var_0_bool->AddReply(529096, -1, 30541); //@t
		goto Label_2487;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x982";
	}
Label_2487:
	bool var_578_bool;
	func_4415(var_578_bool);
	if(var_578_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4170(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2516;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2516:
		return 0;

	}
	
}


void func_4223(object var_134_object)
{
	object var_136_object;
	@self(var_136_object);
	var_136_object = var_134_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_4735(bool var_554_bool)
{
	int var_556_int;
	func_4268(var_556_int, "ook5MladVlad1");
	if(var_556_int == 0) {
		var_554_bool = true;
		return 0;
	}
	var_554_bool = false;
}


void func_3713(bool var_0_bool, object var_1_object, object var_2_object)
{
	bool var_52_bool; int var_53_int; bool var_54_bool; cvector var_55_cvector; cvector var_56_cvector; cvector var_57_cvector; float var_58_float; cvector var_59_cvector; bool var_60_bool; cvector var_61_cvector;
	@SensePlayerOnly(true);
	func_3801();
	object var_51_object;
	@GetScene(var_51_object);
	var_2_object = 0;
	
	for(;;) {
		string var_67_string;
		func_4393(var_67_string, var_2_object);
		var_51_object->GetLocator(var_67_string, var_52_bool);
		if(!var_52_bool) { //@nz
		} else {
		}
		bool var_77_bool;
		func_3940(var_77_bool);
		if(!var_77_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		func_3809(var_60_bool, var_61_cvector);

		for(;;) {
			@irand(var_53_int, (var_2_object + 1));
			string var_101_string; int var_102_int;
			var_53_int = var_102_int;
			func_4393(var_101_string, var_102_int);
			var_51_object->GetLocator(var_101_string, var_54_bool, var_55_cvector, var_56_cvector);
			cvector var_103_cvector;
			func_3856(var_103_cvector);
			var_57_cvector = var_55_cvector - var_103_cvector;
			float var_106_float; cvector var_107_cvector;
			var_57_cvector = var_107_cvector;
			func_4258(var_106_float, var_107_cvector);
			if(var_106_float > var_1_object) {
				@GetHeight(var_58_float);
				var_116_float = GetByIndex(var_59_cvector, 1);
				SetByIndex(var_59_cvector, 1) = (var_116_float + var_58_float);
				@CanReachByPF(var_60_bool, var_59_cvector);
				if(var_60_bool != 0) {
					var_119_float = sqrt(var_57_cvector | var_57_cvector);
					var_61_cvector = var_59_cvector - (var_57_cvector * (var_0_bool / var_119_float));
					bool var_122_bool; cvector var_123_cvector; cvector var_124_cvector;
					var_61_cvector = var_123_cvector;
					var_56_cvector = var_124_cvector;
					TaskCall(1);
					func_13(var_125_bool, var_122_bool, var_123_cvector, var_124_cvector);
					TaskReturn();
					if(var_125_bool != 0) {
						int var_149_int;
						var_53_int = var_149_int;
						TaskCall(3);
						func_198(var_149_int);
						TaskReturn();
					}
				}
			}
			@Sleep(1);
		}

	}
}
EMIT "Return(); Pop(22)";
EMIT "Stack[-11] = 0";


// @pe
void func_4479(void)
{
	@SetVariable("ook2MladVlad2", 1);
}


void func_4229(cvector var_98_cvector, cvector var_99_cvector)
{
	float var_102_float = sqrt(var_99_cvector | var_99_cvector);
	if(var_102_float < 0.000001)
		var_98_cvector = [0.0, 0.0, 0.0];
	var_98_cvector = var_99_cvector / var_102_float;
}


void func_4485(object var_205_object)
{
	@SetVariable("k2q04", 1000);
	func_4828();
	int var_208_int;
	var_205_object->RemoveItemByType(var_208_int, "alpha_pills", 4);
	var_205_object->RemoveItemByType(var_208_int, "beta_pills", 4);
}


// @pe
void func_4747(bool var_639_bool)
{
	int var_641_int;
	func_4268(var_641_int, "k6q01");
	if(var_641_int == 1)
		var_639_bool = true;
	var_639_bool = false;
}


// @pe
void func_4239(float var_95_float, float var_96_float)
{
	if(var_96_float < 0)
		var_95_float = -var_96_float;
	else
		var_96_float = var_95_float;
	
}


void func_145(void)
{
	@Stop();
}


void func_5010(int var_123_int)
{
	int var_125_int;
	@GetVariable("branch", var_125_int);
	if(var_125_int == 0) {
		var_123_int = 1;
		return 2;
	EMIT "GOTO 0x13a1";
	}
	if(var_125_int == 1) {
		var_123_int = 2;
		return 2;
	}
	var_123_int = 3;
}


void func_148(object var_65_object)
{
	bool var_67_bool;
	@WaitForAnimEnd(var_67_bool);
	if(!var_67_bool) { //@nz
	}
	object var_69_object;
	var_65_object = var_69_object;
	func_3929(var_69_object);
	@Sleep(6);
}


// @pe
void func_4502(void)
{
	@SetVariable("k2q04", 1000);
	func_4841();
}


// @pe
void func_4759(bool var_630_bool)
{
	int var_632_int;
	func_4268(var_632_int, "k6q02");
	if(var_632_int == 2)
		var_630_bool = true;
	var_630_bool = false;
}


// @pe
void func_4247(float var_155_float, float var_156_float, float var_157_float, float var_158_float)
{
	if(var_156_float < var_157_float) {
		var_157_float = var_155_float;
		return 0;
	}
	if(var_156_float > var_158_float) {
		var_158_float = var_155_float;
		return 0;
	}
	var_156_float = var_155_float;
}


// @pe
void func_2204(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_227_object, object var_228_object)
{
	var_0_bool = var_228_object;
	var_1_object = var_227_object;
	var_3_object = false;
	if(1 != 0) {
		func_2262(var_228_object, "Neutral");
		var_0_bool->SetMessage(525513); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(525514, 30738, 26870); //@t
		var_0_bool->AddReply(529284, 30738, 30737); //@t
		goto Label_2232;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a0";
	}
Label_2232:
	bool var_258_bool;
	func_4415(var_258_bool);
	if(var_258_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4170(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2261;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2261:
		return 0;

	}
	
}


// @pe
void func_4511(void)
{
	@SetVariable("k2q04", 1000);
	func_4854();
}


// @pe
void func_4258(float var_106_float, cvector var_107_cvector)
{
	var_108_float = GetByIndex(var_107_cvector, 0);
	var_109_float = GetByIndex(var_107_cvector, 0);
	var_111_float = GetByIndex(var_107_cvector, 2);
	var_112_float = GetByIndex(var_107_cvector, 2);
	var_106_float = sqrt((var_108_float * var_109_float) + (var_111_float * var_112_float));
}


// @pe
void func_4771(bool var_563_bool)
{
	int var_565_int;
	func_4268(var_565_int, "ook5MladVlad2");
	if(var_565_int == 0) {
		var_563_bool = true;
		return 0;
	}
	var_563_bool = false;
}


// @pe
void func_5027(object var_57_object)
{
	var_58_bool = GlobalVars[2];
	if(!var_58_bool) { //@nz
		int var_60_int; object var_61_object;
		var_57_object = var_61_object;
		TaskCall(8);
		func_2123(var_62_object, var_60_int, var_61_object);
		TaskReturn();
		var_285_bool = GlobalVars[2];
		GlobalVars[2] = true;
	}
	bool var_286_bool;
	func_4363(var_286_bool, 2);
	if(var_286_bool != 0) {
		int var_289_int; object var_290_object;
		var_57_object = var_290_object;
		TaskCall(4);
		func_282(var_291_object, var_289_int, var_290_object);
		TaskReturn();
		return 0;
	}
	bool var_434_bool;
	func_4363(var_434_bool, 3);
	if(var_434_bool != 0) {
		int var_436_int; object var_437_object;
		var_57_object = var_437_object;
		TaskCall(6);
		func_1633(var_438_object, var_436_int, var_437_object);
		TaskReturn();
		return 0;
	}
	bool var_505_bool;
	func_4363(var_505_bool, 5);
	if(var_505_bool != 0) {
		int var_507_int; object var_508_object;
		var_57_object = var_508_object;
		TaskCall(10);
		func_2349(var_509_object, var_507_int, var_508_object);
		TaskReturn();
		return 0;
	}
	bool var_588_bool;
	func_4363(var_588_bool, 6);
	if(var_588_bool != 0) {
		int var_590_int; object var_591_object;
		var_57_object = var_591_object;
		TaskCall(12);
		func_2770(var_592_object, var_590_int, var_591_object);
		TaskReturn();
		return 0;
	}
	bool var_664_bool;
	func_4363(var_664_bool, 12);
	if(var_664_bool != 0) {
		int var_666_int; object var_667_object;
		var_57_object = var_667_object;
		TaskCall(14);
		func_3244(var_668_object, var_666_int, var_667_object);
		TaskReturn();
		return 0;
	}
	int var_725_int; object var_726_object;
	var_57_object = var_726_object;
	TaskCall(16);
	func_3503(var_727_object, var_725_int, var_726_object);
	TaskReturn();
}


// @pe
void func_4520(void)
{
	@SetVariable("k2q04", 1000);
	func_4867();
}


void func_4268(int var_323_int, string var_324_string)
{
	int var_326_int;
	@GetVariable(var_324_string, var_326_int);
	var_326_int = var_323_int;
}


void func_3244(bool var_0_bool, int var_666_int, object var_667_object)
{
	var_0_bool = var_667_object;
	bool var_677_bool; object var_678_object;
	var_667_object = var_678_object;
	func_3945(var_677_bool, var_678_object, 70.0);
	if(!var_677_bool) { //@nz
		var_666_int = -2;
		return 8;
	}
	object var_673_object;
	@CreateDialog(var_673_object);
	int var_681_int;
	func_4409(var_681_int);
	var_673_object->SetNPCName(var_681_int);
	int var_682_int;
	func_4407(var_682_int);
	var_673_object->SetNPCDescription(var_682_int);
	string var_683_string;
	func_4411(var_683_string);
	var_673_object->SetPhoto(var_683_string);
	string var_684_string;
	func_4413(var_684_string);
	var_673_object->SetPhoto2(var_684_string);
	int var_685_int;
	func_5010(var_685_int);
	var_673_object->SetPlayerName(var_685_int);
	bool var_674_bool;
	@IsOverrideActive(var_674_bool);
	if(var_674_bool != 0) {
		var_666_int = -2;
		return 8;
	}
	@DoDialog(var_673_object);
	bool var_687_bool; object var_688_object;
	object var_689_object;
	func_4223(var_689_object);
	var_689_object = var_688_object;
	func_4032(var_687_bool, var_688_object);
	object var_690_object; object var_691_object;
	var_667_object = var_690_object;
	var_673_object = var_691_object;
	TaskCall(15);
	func_3325(var_692_object, var_693_object, var_694_string, var_695_bool, var_690_object, var_691_object);
	TaskReturn();
	bool var_676_bool;
	var_673_object->IsDialogEnd(var_676_bool);
	
	for(;;) {
		var_723_bool = !var_676_bool; //@nz
		if(var_723_bool == 0) goto Label_3314;
		@sync();
		var_673_object->IsDialogEnd(var_676_bool);
	}
	
Label_3314:
	object var_724_object;
	var_667_object = var_724_object;
	func_4014();
	@StopDialog(var_673_object);
	var_673_object->GetReturnValue(-1);
	int var_675_int = var_666_int;
}
EMIT "Stack[-4] = 0";


void func_4014(void)
{
	bool var_279_bool;
	@CameraSwitchToNormal(true);
	bool var_281_bool;
	func_4415(var_281_bool);
	if(var_281_bool != 0) {
	} else {
		@HasAnimationTrack(var_279_bool, "head");
		if(var_279_bool == 0) goto Label_4031;
		@UnlookAsync("head");
	}
Label_4031:
	
}


void func_4783(bool var_389_bool, object var_390_object)
{
	int var_392_int;
	var_390_object->GetItemCountOfType(var_392_int, "alpha_pills");
	if(var_392_int < 4) {
		var_389_bool = false;
		return 2;
	}
	var_390_object->GetItemCountOfType(var_392_int, "beta_pills");
	if(var_392_int < 4) {
		var_389_bool = false;
		return 2;
	}
	var_389_bool = true;
}


void func_3503(bool var_0_bool, int var_725_int, object var_726_object)
{
	var_0_bool = var_726_object;
	bool var_736_bool; object var_737_object;
	var_726_object = var_737_object;
	func_3945(var_736_bool, var_737_object, 70.0);
	if(!var_736_bool) { //@nz
		var_725_int = -2;
		return 8;
	}
	object var_732_object;
	@CreateDialog(var_732_object);
	int var_740_int;
	func_4409(var_740_int);
	var_732_object->SetNPCName(var_740_int);
	int var_741_int;
	func_4407(var_741_int);
	var_732_object->SetNPCDescription(var_741_int);
	string var_742_string;
	func_4411(var_742_string);
	var_732_object->SetPhoto(var_742_string);
	string var_743_string;
	func_4413(var_743_string);
	var_732_object->SetPhoto2(var_743_string);
	int var_744_int;
	func_5010(var_744_int);
	var_732_object->SetPlayerName(var_744_int);
	bool var_733_bool;
	@IsOverrideActive(var_733_bool);
	if(var_733_bool != 0) {
		var_725_int = -2;
		return 8;
	}
	@DoDialog(var_732_object);
	bool var_746_bool; object var_747_object;
	object var_748_object;
	func_4223(var_748_object);
	var_748_object = var_747_object;
	func_4032(var_746_bool, var_747_object);
	object var_749_object; object var_750_object;
	var_726_object = var_749_object;
	var_732_object = var_750_object;
	TaskCall(17);
	func_3584(var_751_object, var_752_object, var_753_string, var_754_bool, var_749_object, var_750_object);
	TaskReturn();
	bool var_735_bool;
	var_732_object->IsDialogEnd(var_735_bool);
	
	for(;;) {
		var_779_bool = !var_735_bool; //@nz
		if(var_779_bool == 0) goto Label_3573;
		@sync();
		var_732_object->IsDialogEnd(var_735_bool);
	}
	
Label_3573:
	object var_780_object;
	var_726_object = var_780_object;
	func_4014();
	@StopDialog(var_732_object);
	var_732_object->GetReturnValue(-1);
	int var_734_int = var_725_int;
}
EMIT "Stack[-4] = 0";


void func_4273(int var_239_int, int var_240_int)
{
	object var_242_object;
	@CreateIntVector(var_242_object);
	var_242_object->add(var_239_int);
	var_242_object->add(var_240_int);
	@SendWorldWndMessage(3, var_242_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1714(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_460_object, object var_461_object)
{
	var_0_bool = var_461_object;
	var_1_object = var_460_object;
	var_3_object = false;
	if(1 != 0) {
		func_1786(var_461_object, "Neutral");
		var_0_bool->SetMessage(525414); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_476_bool = false;
		bool var_477_bool;
		func_4699(var_1_object);
		if(var_477_bool != 0) {
			bool var_483_bool;
			func_4711(var_1_object);
			if(var_483_bool != 0)
				var_476_bool = true;
		}
		if(var_476_bool != 0)
			var_0_bool->AddReply(525415, 42567, 26783); //@t
		var_0_bool->AddReply(525418, -1, 26786); //@t
		goto Label_1756;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6b6";
	}
Label_1756:
	bool var_495_bool;
	func_4415(var_495_bool);
	if(var_495_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_4170(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1785;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1785:
		return 0;

	}
	
}


// @pe
void func_4529(void)
{
	@SetVariable("ook3MladVlad1", 1);
}


// @pe
void func_4535(void)
{
	@SetVariable("ook5MladVlad1", 1);
}


void func_4285(object var_226_object, int var_227_int)
{
	int var_229_int;
	object var_230_object;
	var_226_object = var_230_object;
	int var_232_int;
	func_3903(var_230_object, "money", var_232_int);
	if(var_232_int > 0) {
		@GetInvItemByName(var_229_int, "Money");
		int var_239_int; int var_240_int;
		var_229_int = var_239_int;
		var_227_int = var_240_int;
		func_4273(var_239_int, var_240_int);
	}
}


// @pe
void func_4541(void)
{
	func_4893();
}


void func_4032(bool var_132_bool, object var_133_object)
{
	int var_139_int; int var_140_int;
	@GetVariable("voice_common", var_139_int);
	if(var_139_int != 0) {
		bool var_143_bool; object var_144_object;
		var_133_object = var_144_object;
		func_4090(var_143_bool, var_144_object);
		if(!var_143_bool) { //@nz
			bool var_174_bool; object var_175_object;
			var_133_object = var_175_object;
			func_4127(var_174_bool, var_175_object);
			if(!var_174_bool) { //@nz
				var_132_bool = false;
				return 4;
			}
		}
		@irand(var_140_int, 2);
		if(var_140_int != 0)
			@SetVariable("voice_common", ((var_139_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_219_bool; object var_220_object;
		var_133_object = var_220_object;
		func_4127(var_219_bool, var_220_object);
		if(!var_219_bool) { //@nz
			bool var_222_bool; object var_223_object;
			var_133_object = var_223_object;
			func_4090(var_222_bool, var_223_object);
			if(!var_222_bool) { //@nz
				var_132_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_4088;
	
Label_4088:
	var_132_bool = true;
	
}


void func_193(void)
{
	@StopGroup0();
	@StopAnimation();
}


void func_4802(void)
{
	object var_186_object;
	@CreateDiaryEntry(var_186_object, 463, 1, 527779);
	bool var_190_bool; object var_191_object;
	var_186_object = var_191_object;
	func_4932(var_190_bool, var_191_object, 461);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4546(void)
{
	@SetVariable("k6q02", 3);
	func_4906();
}


void func_198(int var_149_int)
{
	string var_157_string; string var_159_string; int var_160_int; int var_161_int; int var_162_int; int var_163_int;
	if(var_149_int != 0)
		var_157_string = "ptidle" + var_149_int;
	else
		var_157_string = "ptidle";
	bool var_158_bool;
	@HasProperty(var_157_string, var_158_bool);
	if(var_158_bool != 0) {
		@GetProperty(var_157_string, var_159_string);
		int var_167_int; string var_168_string;
		var_159_string = var_168_string;
		func_264(var_167_int, var_168_string);
		var_167_int = var_160_int;
		@irand(var_161_int, var_160_int);
		string var_182_string; string var_183_string; int var_184_int;
		var_159_string = var_183_string;
		var_161_int = var_184_int;
		func_256(var_182_string, var_183_string, var_184_int);
		@PlayAnimation("all", var_182_string);
		@WaitForAnimEnd();
	} else {
		int var_185_int;
		func_4376(var_185_int);
		var_185_int = var_162_int;
		if(var_162_int == 0) goto Label_246;
		@irand(var_163_int, var_162_int);
		string var_200_string; int var_201_int;
		var_163_int = var_201_int;
		func_4369(var_200_string, var_201_int);
		@PlayAnimation("all", var_200_string);
		@WaitForAnimEnd();

	}
Label_246:
	
}


// @pe
void func_4555(object var_278_object)
{
	@Trace("money1000 is given");
	object var_281_object;
	var_278_object = var_281_object;
	func_4285(var_281_object, 1000);
}


void func_4815(void)
{
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 507, 2, 529706);
	bool var_70_bool; object var_71_object;
	var_66_object = var_71_object;
	func_4932(var_70_bool, var_71_object, -1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4304(bool var_126_bool, object var_127_object, float var_128_float)
{
	if(!var_127_object) { //@nz
		var_126_bool = false;
		return 0;
	}
	if(var_128_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_128_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_133_float;
		var_128_float = var_133_float;
		func_4339(var_133_float);
		bool var_137_bool; object var_138_object; float var_140_float;
		var_127_object = var_138_object;
		var_128_float = var_140_float;
		func_3881(var_137_bool, var_138_object, "reputation", var_140_float, (float)0, (float)1);
		var_126_bool = true;
		return 0;

	}
	
	var_126_bool = false;
}


void func_2770(bool var_0_bool, int var_590_int, object var_591_object)
{
	var_0_bool = var_591_object;
	bool var_601_bool; object var_602_object;
	var_591_object = var_602_object;
	func_3945(var_601_bool, var_602_object, 70.0);
	if(!var_601_bool) { //@nz
		var_590_int = -2;
		return 8;
	}
	object var_597_object;
	@CreateDialog(var_597_object);
	int var_605_int;
	func_4409(var_605_int);
	var_597_object->SetNPCName(var_605_int);
	int var_606_int;
	func_4407(var_606_int);
	var_597_object->SetNPCDescription(var_606_int);
	string var_607_string;
	func_4411(var_607_string);
	var_597_object->SetPhoto(var_607_string);
	string var_608_string;
	func_4413(var_608_string);
	var_597_object->SetPhoto2(var_608_string);
	int var_609_int;
	func_5010(var_609_int);
	var_597_object->SetPlayerName(var_609_int);
	bool var_598_bool;
	@IsOverrideActive(var_598_bool);
	if(var_598_bool != 0) {
		var_590_int = -2;
		return 8;
	}
	@DoDialog(var_597_object);
	bool var_611_bool; object var_612_object;
	object var_613_object;
	func_4223(var_613_object);
	var_613_object = var_612_object;
	func_4032(var_611_bool, var_612_object);
	object var_614_object; object var_615_object;
	var_591_object = var_614_object;
	var_597_object = var_615_object;
	TaskCall(13);
	func_2851(var_616_object, var_617_object, var_618_string, var_619_bool, var_614_object, var_615_object);
	TaskReturn();
	bool var_600_bool;
	var_597_object->IsDialogEnd(var_600_bool);
	
	for(;;) {
		var_662_bool = !var_600_bool; //@nz
		if(var_662_bool == 0) goto Label_2840;
		@sync();
		var_597_object->IsDialogEnd(var_600_bool);
	}
	
Label_2840:
	object var_663_object;
	var_591_object = var_663_object;
	func_4014();
	@StopDialog(var_597_object);
	var_597_object->GetReturnValue(-1);
	int var_599_int = var_590_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_4565(object var_223_object)
{
	@Trace("money500 is given");
	object var_226_object;
	var_223_object = var_226_object;
	func_4285(var_226_object, 500);
}


// @pe
void func_2262(object var_2_object, string var_234_string)
{
	bool var_235_bool;
	func_4415(var_235_bool);
	if(!var_235_bool) //@nz
		return 0;
	if(var_234_string == var_2_object)
		return 0;
	string var_238_string; bool var_239_bool;
	var_234_string = var_238_string;
	if(var_234_string == "")
		var_239_bool = false;
	else
		var_239_bool = true;
	func_4186(var_238_string, var_239_bool);
	var_2_object = var_234_string;
	
}


// @pe
void func_2517(object var_2_object, string var_538_string)
{
	bool var_539_bool;
	func_4415(var_539_bool);
	if(!var_539_bool) //@nz
		return 0;
	if(var_538_string == var_2_object)
		return 0;
	string var_542_string; bool var_543_bool;
	var_538_string = var_542_string;
	if(var_538_string == "")
		var_543_bool = false;
	else
		var_543_bool = true;
	func_4186(var_542_string, var_543_bool);
	var_2_object = var_538_string;
	
}


void func_3801(void)
{
	string var_64_string;
	@GetProperty("loc", var_64_string);
	var_66_string = GlobalVars[0];
	var_64_string = var_66_string;
	GlobalVars[0] = var_66_string;
}


void func_4828(void)
{
	object var_212_object;
	@CreateDiaryEntry(var_212_object, 513, 2, 529712);
	bool var_216_bool; object var_217_object;
	var_212_object = var_217_object;
	func_4932(var_216_bool, var_217_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4575(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_3809(bool var_0_bool, object var_1_object)
{
	cvector var_85_cvector;
	@GetAnimationOffset(var_85_cvector, "all", "walk_stopl");
	cvector var_86_cvector;
	@GetAnimationOffset(var_86_cvector, "all", "walk_stopr");
	var_91_float = GetByIndex(var_85_cvector, 2);
	var_92_float = GetByIndex(var_86_cvector, 2);
	float var_95_float;
	var_97_float = GetByIndex(var_85_cvector, 2);
	func_4239(var_95_float, (var_97_float - ((var_91_float + var_92_float) / 2.0)));
	var_1_object = var_95_float + 40;
}


// @pe
void func_4581(object var_166_object)
{
	object var_169_object;
	var_166_object = var_169_object;
	bool var_168_bool;
	func_4304(var_168_bool, var_169_object, -0.02);
}


void func_4841(void)
{
	object var_255_object;
	@CreateDiaryEntry(var_255_object, 514, 2, 529713);
	bool var_259_bool; object var_260_object;
	var_255_object = var_260_object;
	func_4932(var_259_bool, var_260_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4588(object var_299_object)
{
	object var_302_object;
	var_299_object = var_302_object;
	bool var_301_bool;
	func_4304(var_301_bool, var_302_object, 0.02);
}


void func_4339(float var_133_float)
{
	object var_135_object;
	@CreateFloatVector(var_135_object);
	var_135_object->add(var_133_float);
	@SendWorldWndMessage(16, var_135_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4595(void)
{
	@SetVariable("ook5MladVlad2", 1);
}


void func_4854(void)
{
	object var_271_object;
	@CreateDiaryEntry(var_271_object, 515, 2, 529714);
	bool var_275_bool; object var_276_object;
	var_271_object = var_276_object;
	func_4932(var_275_bool, var_276_object, 507);
}
EMIT "Stack[-1] = 0";


// @pe
void func_4601(object var_97_object)
{
	object var_101_object;
	func_4960(var_101_object);
	object var_98_object;
	var_101_object = var_98_object;
	func_4977(var_98_object, "pt_map_anna", (float)2);
	object var_121_object;
	func_4960(var_121_object);
	var_97_object->ShowMap(var_121_object);
}


// @pe
void func_1786(object var_2_object, string var_467_string)
{
	bool var_468_bool;
	func_4415(var_468_bool);
	if(!var_468_bool) //@nz
		return 0;
	if(var_467_string == var_2_object)
		return 0;
	string var_471_string; bool var_472_bool;
	var_467_string = var_471_string;
	if(var_467_string == "")
		var_472_bool = false;
	else
		var_472_bool = true;
	func_4186(var_471_string, var_472_bool);
	var_2_object = var_467_string;
	
}


void func_4349(float var_62_float)
{
	float var_64_float;
	@GetGameTime(var_64_float);
	var_64_float = var_62_float;
}


