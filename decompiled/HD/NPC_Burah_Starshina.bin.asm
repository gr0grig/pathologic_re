GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Oracle
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Smile
	Refusal
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	Door 
	 not found
	Close
	locked
	SetProperty
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	HasItem
	ui/NPC_Starshina.png
	ui/NPC_Starshina_b.png
	icot_eva_door
	b7q01
	avroks blood is given
	avroks_blood
	b8q01
	b8q01KnowSgustki
	b9q01
	quest_b9_01_effect.bin
	ApplyEffect
	quest_b9_01
	remove_danko
	completed
	b9q01_stop
	oob9Starshina1
	oob9Starshina2
	oob10Starshina1
	b10q01
	b10q01StarshinaGotoKurgan
	pt_map_kurgan
	AddMark
	quest_b10_01
	usable_stone
	quest_b10_01_effect.bin
	oob11Starshina1
	b11q01
	quest_b11_01
	open_shaft
	starshina_fight
	playsound
	giveitem
	B_Mission3
	B_Mission4
	ShowMap
	map_chertez_state
	map_chertez_force
	pt_map_aglaja
	b10q01Butchers
	b11q01KnowWhoKilled
	b8q01_bone
	b10q03
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	Remove
	Can't find main outdoor scene
	GetMap
	GetLocator
	Warning: outdoor scene locator 
	 doesnt exist
	Can't find map
	SetMapParams
	branch

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	GetInvItemByName (2 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0x1075
RunTask = 18

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xba Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2c3 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x53a Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x7f7 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb08 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xdea Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xeb5 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xf80 Vars = (int, int)
	GTASK_16 Vars = (object) Params = 2
	GTASK_17 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x104b Vars = (int, int)
	GTASK_18 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x10ba Vars = (int)
		EVENT_6 Op = 0x10e0 Vars = ()
		EVENT_5 Op = 0x10ef Vars = ()
		EVENT_45 Op = 0x10fc Vars = (bool)
		EVENT_0 Op = 0x1108 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 130.0
0x5: Call2 0x1191

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x1351

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x134f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1353

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1355

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1669

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x12a7

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x11e8

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x11d6

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x86; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x1555

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Oracle"
0x5e: Call2 0xa4

0x5f: Pop(1)
0x60: Push((int) 521017)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 528565)
0x66: Push((int) 29962)
0x67: Push((int) 29961)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 528573)
0x6b: Push((int) 29966)
0x6c: Push((int) 29969)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x86

0x70: PushEmpty(string)
0x71: Stack[-1] = "Neutral"
0x72: Call2 0xa4

0x73: Pop(1)
0x74: Push((int) 521041)
0x75: @@ SetMessage(Stack[-1])
0x76: Pop(1)
0x77: @@ ClearReplies()
0x78: Pop(0)
0x79: Push((int) 528593)
0x7a: Push((int) 29994)
0x7b: Push((int) 29993)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 521042)
0x7f: Push((int) -1)
0x80: Push((int) 22238)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: GOTO 0x86

0x84: Return(); Pop(0)

0x85: GOTO 0x55

0x86: PushEmpty(bool)
0x87: Call2 0x1357

0x88: Pop(0)
0x89: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x8a: @ lshWaitForAnimEnd()
0x8b: Pop(0)
0x8c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8d: IF (Stack[-1] == 0) GOTO 0x8f; Pop(1)

0x8e: GOTO 0x94

0x8f: PushEmpty(string)
0x90: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x91: Call2 0x1272

0x92: Pop(1)
0x93: GOTO 0x8a

0x94: GOTO 0xa3

0x95: Push("all")
0x96: Push("idle")
0x97: @ PlayAnimation(Stack[-2], Stack[-1])
0x98: Pop(2)
0x99: @ WaitForAnimEnd()
0x9a: Pop(0)
0x9b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9c: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9d: GOTO 0xa3

0x9e: Push("all")
0x9f: Push("idle")
0xa0: @ PlayAnimation(Stack[-2], Stack[-1])
0xa1: Pop(2)
0xa2: GOTO 0x99

0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: PushEmpty(bool)
0xa6: Call2 0x1357

0xa7: Pop(0)
0xa8: Pop(1); Push((bool) Stack[-1] == 0)
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xac: IF (Stack[-1] == 0) GOTO 0xae; Pop(1)

0xad: Return(); Pop(0)

0xae: PushEmpty(string, bool)
0xaf: Stack[-2] = Stack[-3]
0xb0: Push("")
0xb1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb2: IF (Stack[-1] == 0) GOTO 0xb5; Pop(1)

0xb3: Stack[-1] = (bool) 0
0xb4: GOTO 0xb6

0xb5: Stack[-1] = (bool) 1
0xb6: Call2 0x1282

0xb7: Pop(2)
0xb8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb9: Return(); Pop(0)

0xba: PushEmpty()
0xbb: Push((int) 1)
0xbc: IF (Stack[-1] == 0) GOTO 0x1ff; Pop(1)

0xbd: PushEmpty()
0xbe: Call2 0x12a0

0xbf: Pop(0)
0xc0: Push((int) 22231)
0xc1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc2: IF (Stack[-1] == 0) GOTO 0xd2; Pop(1)

0xc3: PushEmpty(object, object)
0xc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc6: Call2 0x1360

0xc7: Pop(2)
0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0x1403

0xcc: Pop(2)
0xcd: PushEmpty(object, object)
0xce: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd0: Call2 0x1369

0xd1: Pop(2)
0xd2: Push((int) 22230)
0xd3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd4: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xd5: PushEmpty(bool, object)
0xd6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd7: Call2 0x1555

0xd8: Pop(1)
0xd9: IF (Stack[-1] == 0) GOTO 0xee; Pop(1)

0xda: PushEmpty(string)
0xdb: Stack[-1] = "Oracle"
0xdc: Call2 0xa4

0xdd: Pop(1)
0xde: Push((int) 521017)
0xdf: @@ SetMessage(Stack[-1])
0xe0: Pop(1)
0xe1: @@ ClearReplies()
0xe2: Pop(0)
0xe3: Push((int) 528565)
0xe4: Push((int) 29962)
0xe5: Push((int) 29961)
0xe6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7: Pop(3)
0xe8: Push((int) 528573)
0xe9: Push((int) 29966)
0xea: Push((int) 29969)
0xeb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xec: Pop(3)
0xed: Return(); Pop(0)

0xee: PushEmpty(string)
0xef: Stack[-1] = "Neutral"
0xf0: Call2 0xa4

0xf1: Pop(1)
0xf2: Push((int) 521041)
0xf3: @@ SetMessage(Stack[-1])
0xf4: Pop(1)
0xf5: @@ ClearReplies()
0xf6: Pop(0)
0xf7: Push((int) 528593)
0xf8: Push((int) 29994)
0xf9: Push((int) 29993)
0xfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfb: Pop(3)
0xfc: Push((int) 521042)
0xfd: Push((int) -1)
0xfe: Push((int) 22238)
0xff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100: Pop(3)
0x101: Return(); Pop(0)

0x102: Push((int) 29994)
0x103: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x105: PushEmpty(string)
0x106: Stack[-1] = "Neutral"
0x107: Call2 0xa4

0x108: Pop(1)
0x109: Push((int) 528594)
0x10a: @@ SetMessage(Stack[-1])
0x10b: Pop(1)
0x10c: @@ ClearReplies()
0x10d: Pop(0)
0x10e: Push((int) 528595)
0x10f: Push((int) -1)
0x110: Push((int) 29995)
0x111: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x112: Pop(3)
0x113: Return(); Pop(0)

0x114: Push((int) 29962)
0x115: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x116: IF (Stack[-1] == 0) GOTO 0x12b; Pop(1)

0x117: PushEmpty(string)
0x118: Stack[-1] = "Oracle"
0x119: Call2 0xa4

0x11a: Pop(1)
0x11b: Push((int) 528566)
0x11c: @@ SetMessage(Stack[-1])
0x11d: Pop(1)
0x11e: @@ ClearReplies()
0x11f: Pop(0)
0x120: Push((int) 528567)
0x121: Push((int) 29964)
0x122: Push((int) 29963)
0x123: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x124: Pop(3)
0x125: Push((int) 528574)
0x126: Push((int) 29964)
0x127: Push((int) 29970)
0x128: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x129: Pop(3)
0x12a: Return(); Pop(0)

0x12b: Push((int) 29964)
0x12c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12d: IF (Stack[-1] == 0) GOTO 0x142; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Smile"
0x130: Call2 0xa4

0x131: Pop(1)
0x132: Push((int) 528568)
0x133: @@ SetMessage(Stack[-1])
0x134: Pop(1)
0x135: @@ ClearReplies()
0x136: Pop(0)
0x137: Push((int) 528569)
0x138: Push((int) 29987)
0x139: Push((int) 29965)
0x13a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13b: Pop(3)
0x13c: Push((int) 528575)
0x13d: Push((int) 29973)
0x13e: Push((int) 29972)
0x13f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x140: Pop(3)
0x141: Return(); Pop(0)

0x142: Push((int) 29973)
0x143: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x144: IF (Stack[-1] == 0) GOTO 0x154; Pop(1)

0x145: PushEmpty(string)
0x146: Stack[-1] = "Neutral"
0x147: Call2 0xa4

0x148: Pop(1)
0x149: Push((int) 528576)
0x14a: @@ SetMessage(Stack[-1])
0x14b: Pop(1)
0x14c: @@ ClearReplies()
0x14d: Pop(0)
0x14e: Push((int) 528577)
0x14f: Push((int) -1)
0x150: Push((int) 29974)
0x151: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x152: Pop(3)
0x153: Return(); Pop(0)

0x154: Push((int) 29987)
0x155: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x156: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x157: PushEmpty(string)
0x158: Stack[-1] = "Neutral"
0x159: Call2 0xa4

0x15a: Pop(1)
0x15b: Push((int) 528588)
0x15c: @@ SetMessage(Stack[-1])
0x15d: Pop(1)
0x15e: @@ ClearReplies()
0x15f: Pop(0)
0x160: Push((int) 528589)
0x161: Push((int) 29966)
0x162: Push((int) 29988)
0x163: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x164: Pop(3)
0x165: Push((int) 528590)
0x166: Push((int) 29966)
0x167: Push((int) 29989)
0x168: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x169: Pop(3)
0x16a: Return(); Pop(0)

0x16b: Push((int) 29966)
0x16c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x16d: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x16e: PushEmpty(string)
0x16f: Stack[-1] = "Neutral"
0x170: Call2 0xa4

0x171: Pop(1)
0x172: Push((int) 528570)
0x173: @@ SetMessage(Stack[-1])
0x174: Pop(1)
0x175: @@ ClearReplies()
0x176: Pop(0)
0x177: Push((int) 528571)
0x178: Push((int) 29968)
0x179: Push((int) 29967)
0x17a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17b: Pop(3)
0x17c: Return(); Pop(0)

0x17d: Push((int) 29968)
0x17e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x17f: IF (Stack[-1] == 0) GOTO 0x194; Pop(1)

0x180: PushEmpty(string)
0x181: Stack[-1] = "Neutral"
0x182: Call2 0xa4

0x183: Pop(1)
0x184: Push((int) 528572)
0x185: @@ SetMessage(Stack[-1])
0x186: Pop(1)
0x187: @@ ClearReplies()
0x188: Pop(0)
0x189: Push((int) 528578)
0x18a: Push((int) 29976)
0x18b: Push((int) 29975)
0x18c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x18d: Pop(3)
0x18e: Push((int) 528584)
0x18f: Push((int) 29976)
0x190: Push((int) 29981)
0x191: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x192: Pop(3)
0x193: Return(); Pop(0)

0x194: Push((int) 29976)
0x195: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x196: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x197: PushEmpty(string)
0x198: Stack[-1] = "Oracle"
0x199: Call2 0xa4

0x19a: Pop(1)
0x19b: Push((int) 528579)
0x19c: @@ SetMessage(Stack[-1])
0x19d: Pop(1)
0x19e: @@ ClearReplies()
0x19f: Pop(0)
0x1a0: Push((int) 528585)
0x1a1: Push((int) 29984)
0x1a2: Push((int) 29983)
0x1a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a4: Pop(3)
0x1a5: Push((int) 528587)
0x1a6: Push((int) 29984)
0x1a7: Push((int) 29985)
0x1a8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a9: Pop(3)
0x1aa: Return(); Pop(0)

0x1ab: Push((int) 29984)
0x1ac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1bd; Pop(1)

0x1ae: PushEmpty(string)
0x1af: Stack[-1] = "Refusal"
0x1b0: Call2 0xa4

0x1b1: Pop(1)
0x1b2: Push((int) 528586)
0x1b3: @@ SetMessage(Stack[-1])
0x1b4: Pop(1)
0x1b5: @@ ClearReplies()
0x1b6: Pop(0)
0x1b7: Push((int) 528580)
0x1b8: Push((int) 29978)
0x1b9: Push((int) 29977)
0x1ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bb: Pop(3)
0x1bc: Return(); Pop(0)

0x1bd: Push((int) 29978)
0x1be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1bf: IF (Stack[-1] == 0) GOTO 0x1cf; Pop(1)

0x1c0: PushEmpty(string)
0x1c1: Stack[-1] = "Neutral"
0x1c2: Call2 0xa4

0x1c3: Pop(1)
0x1c4: Push((int) 528581)
0x1c5: @@ SetMessage(Stack[-1])
0x1c6: Pop(1)
0x1c7: @@ ClearReplies()
0x1c8: Pop(0)
0x1c9: Push((int) 528582)
0x1ca: Push((int) 29980)
0x1cb: Push((int) 29979)
0x1cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cd: Pop(3)
0x1ce: Return(); Pop(0)

0x1cf: Push((int) 29980)
0x1d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d2: PushEmpty(string)
0x1d3: Stack[-1] = "Neutral"
0x1d4: Call2 0xa4

0x1d5: Pop(1)
0x1d6: Push((int) 528583)
0x1d7: @@ SetMessage(Stack[-1])
0x1d8: Pop(1)
0x1d9: @@ ClearReplies()
0x1da: Pop(0)
0x1db: Push((int) 528591)
0x1dc: Push((int) 29992)
0x1dd: Push((int) 29991)
0x1de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1df: Pop(3)
0x1e0: Return(); Pop(0)

0x1e1: Push((int) 29992)
0x1e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e3: IF (Stack[-1] == 0) GOTO 0x1f3; Pop(1)

0x1e4: PushEmpty(string)
0x1e5: Stack[-1] = "Refusal"
0x1e6: Call2 0xa4

0x1e7: Pop(1)
0x1e8: Push((int) 528592)
0x1e9: @@ SetMessage(Stack[-1])
0x1ea: Pop(1)
0x1eb: @@ ClearReplies()
0x1ec: Pop(0)
0x1ed: Push((int) 521018)
0x1ee: Push((int) -1)
0x1ef: Push((int) 22231)
0x1f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f1: Pop(3)
0x1f2: Return(); Pop(0)

0x1f3: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1f4: PushEmpty(bool)
0x1f5: Call2 0x1357

0x1f6: Pop(0)
0x1f7: IF (Stack[-1] == 0) GOTO 0x1fb; Pop(1)

0x1f8: @ lshStopAnimation()
0x1f9: Pop(0)
0x1fa: GOTO 0x1fd

0x1fb: @ StopAnimation()
0x1fc: Pop(0)
0x1fd: Return(); Pop(0)

0x1fe: GOTO 0xbb

0x1ff: Return(); Pop(0)

0x200: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x201: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x202: PushEmpty(bool, object, float)
0x203: Stack[-2] = Stack[-12]
0x204: Stack[-1] = (float) 130.0
0x205: Call2 0x1191

0x206: Pop(2)
0x207: Pop(1); Push((bool) Stack[-1] == 0)
0x208: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x209: Stack[-10] = (int) -2
0x20a: Return(); Pop(8)

0x20b: @ CreateDialog(Stack[-4])
0x20c: Pop(0)
0x20d: PushEmpty(int)
0x20e: Call2 0x1351

0x20f: Pop(0)
0x210: @@ SetNPCName(Stack[-1])
0x211: Pop(1)
0x212: PushEmpty(int)
0x213: Call2 0x134f

0x214: Pop(0)
0x215: @@ SetNPCDescription(Stack[-1])
0x216: Pop(1)
0x217: PushEmpty(string)
0x218: Call2 0x1353

0x219: Pop(0)
0x21a: @@ SetPhoto(Stack[-1])
0x21b: Pop(1)
0x21c: PushEmpty(string)
0x21d: Call2 0x1355

0x21e: Pop(0)
0x21f: @@ SetPhoto2(Stack[-1])
0x220: Pop(1)
0x221: PushEmpty(int)
0x222: Call2 0x1669

0x223: Pop(0)
0x224: @@ SetPlayerName(Stack[-1])
0x225: Pop(1)
0x226: Stack[-2] = (int) -1
0x227: @ IsOverrideActive(Stack[-3])
0x228: Pop(0)
0x229: Push(Stack[-3])
0x22a: IF (Stack[-1] == 0) GOTO 0x22d; Pop(1)

0x22b: Stack[-10] = (int) -2
0x22c: Return(); Pop(8)

0x22d: @ DoDialog(Stack[-4])
0x22e: Pop(0)
0x22f: PushEmpty(bool, object)
0x230: PushEmpty(object)
0x231: Call2 0x12a7

0x232: Stack[-2] = Stack[-1]
0x233: Pop(1)
0x234: Call2 0x11e8

0x235: Pop(2)
0x236: PushEmpty(object, object)
0x237: Stack[-2] = Stack[-11]
0x238: Stack[-1] = Stack[-6]
0x239: Push(-2, 4); TaskCall(3)
0x23a: Call2 0x251

0x23b: Pop(-2, 4); TaskReturn
0x23c: Pop(2)
0x23d: @@ IsDialogEnd(Stack[-1])
0x23e: Pop(0)
0x23f: Pop(0); Push((bool) Stack[-1] == 0)
0x240: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x241: @ sync()
0x242: Pop(0)
0x243: @@ IsDialogEnd(Stack[-1])
0x244: Pop(0)
0x245: GOTO 0x23f

0x246: PushEmpty(object)
0x247: Stack[-1] = Stack[-10]
0x248: Call2 0x11d6

0x249: Pop(1)
0x24a: @ StopDialog(Stack[-4])
0x24b: Pop(0)
0x24c: @@ GetReturnValue(Stack[-2])
0x24d: Pop(0)
0x24e: Stack[-10] = Stack[-2]
0x24f: Return(); Pop(8)

0x250: Stack[-4] = 0
0x251: PushEmpty()
0x252: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x253: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x254: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x255: Push((int) 1)
0x256: IF (Stack[-1] == 0) GOTO 0x28f; Pop(1)

0x257: PushEmpty(bool, object)
0x258: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x259: Call2 0x148b

0x25a: Pop(1)
0x25b: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x25c: PushEmpty(string)
0x25d: Stack[-1] = "Refusal"
0x25e: Call2 0x2ad

0x25f: Pop(1)
0x260: Push((int) 521418)
0x261: @@ SetMessage(Stack[-1])
0x262: Pop(1)
0x263: @@ ClearReplies()
0x264: Pop(0)
0x265: Push((int) 521419)
0x266: Push((int) 24983)
0x267: Push((int) 22597)
0x268: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x269: Pop(3)
0x26a: GOTO 0x28f

0x26b: PushEmpty(string)
0x26c: Stack[-1] = "Neutral"
0x26d: Call2 0x2ad

0x26e: Pop(1)
0x26f: Push((int) 521423)
0x270: @@ SetMessage(Stack[-1])
0x271: Pop(1)
0x272: @@ ClearReplies()
0x273: Pop(0)
0x274: PushEmpty(bool)
0x275: Stack[-1] = (bool) 0
0x276: PushEmpty(bool, object)
0x277: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x278: Call2 0x147f

0x279: Pop(1)
0x27a: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x27b: PushEmpty(bool, object)
0x27c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27d: Call2 0x153e

0x27e: Pop(1)
0x27f: IF (Stack[-1] == 0) GOTO 0x281; Pop(1)

0x280: Stack[-1] = (bool) 1
0x281: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x282: Push((int) 521425)
0x283: Push((int) 22604)
0x284: Push((int) 22603)
0x285: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x286: Pop(3)
0x287: Push((int) 521424)
0x288: Push((int) -1)
0x289: Push((int) 22602)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: GOTO 0x28f

0x28d: Return(); Pop(0)

0x28e: GOTO 0x255

0x28f: PushEmpty(bool)
0x290: Call2 0x1357

0x291: Pop(0)
0x292: IF (Stack[-1] == 0) GOTO 0x29e; Pop(1)

0x293: @ lshWaitForAnimEnd()
0x294: Pop(0)
0x295: Push( Stack[3 + Tasks[-1].StackPointer] )
0x296: IF (Stack[-1] == 0) GOTO 0x298; Pop(1)

0x297: GOTO 0x29d

0x298: PushEmpty(string)
0x299: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x29a: Call2 0x1272

0x29b: Pop(1)
0x29c: GOTO 0x293

0x29d: GOTO 0x2ac

0x29e: Push("all")
0x29f: Push("idle")
0x2a0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a1: Pop(2)
0x2a2: @ WaitForAnimEnd()
0x2a3: Pop(0)
0x2a4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2a5: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a6: GOTO 0x2ac

0x2a7: Push("all")
0x2a8: Push("idle")
0x2a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2aa: Pop(2)
0x2ab: GOTO 0x2a2

0x2ac: Return(); Pop(0)

0x2ad: PushEmpty()
0x2ae: PushEmpty(bool)
0x2af: Call2 0x1357

0x2b0: Pop(0)
0x2b1: Pop(1); Push((bool) Stack[-1] == 0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2b3: Return(); Pop(0)

0x2b4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2b5: IF (Stack[-1] == 0) GOTO 0x2b7; Pop(1)

0x2b6: Return(); Pop(0)

0x2b7: PushEmpty(string, bool)
0x2b8: Stack[-2] = Stack[-3]
0x2b9: Push("")
0x2ba: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2bb: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2bc: Stack[-1] = (bool) 0
0x2bd: GOTO 0x2bf

0x2be: Stack[-1] = (bool) 1
0x2bf: Call2 0x1282

0x2c0: Pop(2)
0x2c1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c2: Return(); Pop(0)

0x2c3: PushEmpty()
0x2c4: Push((int) 1)
0x2c5: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x2c6: PushEmpty()
0x2c7: Call2 0x12a0

0x2c8: Pop(0)
0x2c9: Push((int) 22599)
0x2ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cc: PushEmpty(object, object)
0x2cd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2cf: Call2 0x1374

0x2d0: Pop(2)
0x2d1: Push((int) 22607)
0x2d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d3: IF (Stack[-1] == 0) GOTO 0x2e8; Pop(1)

0x2d4: PushEmpty(object, object)
0x2d5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d7: Call2 0x137d

0x2d8: Pop(2)
0x2d9: PushEmpty(object, object)
0x2da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2dc: Call2 0x1409

0x2dd: Pop(2)
0x2de: PushEmpty(object, object)
0x2df: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e1: Call2 0x144d

0x2e2: Pop(2)
0x2e3: PushEmpty(object, object)
0x2e4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e6: Call2 0x146f

0x2e7: Pop(2)
0x2e8: Push((int) 22596)
0x2e9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ea: IF (Stack[-1] == 0) GOTO 0x321; Pop(1)

0x2eb: PushEmpty(bool, object)
0x2ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ed: Call2 0x148b

0x2ee: Pop(1)
0x2ef: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = "Refusal"
0x2f2: Call2 0x2ad

0x2f3: Pop(1)
0x2f4: Push((int) 521418)
0x2f5: @@ SetMessage(Stack[-1])
0x2f6: Pop(1)
0x2f7: @@ ClearReplies()
0x2f8: Pop(0)
0x2f9: Push((int) 521419)
0x2fa: Push((int) 24983)
0x2fb: Push((int) 22597)
0x2fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fd: Pop(3)
0x2fe: Return(); Pop(0)

0x2ff: PushEmpty(string)
0x300: Stack[-1] = "Neutral"
0x301: Call2 0x2ad

0x302: Pop(1)
0x303: Push((int) 521423)
0x304: @@ SetMessage(Stack[-1])
0x305: Pop(1)
0x306: @@ ClearReplies()
0x307: Pop(0)
0x308: PushEmpty(bool)
0x309: Stack[-1] = (bool) 0
0x30a: PushEmpty(bool, object)
0x30b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x30c: Call2 0x147f

0x30d: Pop(1)
0x30e: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x30f: PushEmpty(bool, object)
0x310: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x311: Call2 0x153e

0x312: Pop(1)
0x313: IF (Stack[-1] == 0) GOTO 0x315; Pop(1)

0x314: Stack[-1] = (bool) 1
0x315: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x316: Push((int) 521425)
0x317: Push((int) 22604)
0x318: Push((int) 22603)
0x319: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(3)
0x31b: Push((int) 521424)
0x31c: Push((int) -1)
0x31d: Push((int) 22602)
0x31e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31f: Pop(3)
0x320: Return(); Pop(0)

0x321: Push((int) 22604)
0x322: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x324: PushEmpty(string)
0x325: Stack[-1] = "Oracle"
0x326: Call2 0x2ad

0x327: Pop(1)
0x328: Push((int) 521426)
0x329: @@ SetMessage(Stack[-1])
0x32a: Pop(1)
0x32b: @@ ClearReplies()
0x32c: Pop(0)
0x32d: Push((int) 521427)
0x32e: Push((int) 22606)
0x32f: Push((int) 22605)
0x330: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x331: Pop(3)
0x332: Return(); Pop(0)

0x333: Push((int) 22606)
0x334: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x336: PushEmpty(string)
0x337: Stack[-1] = "Oracle"
0x338: Call2 0x2ad

0x339: Pop(1)
0x33a: Push((int) 521428)
0x33b: @@ SetMessage(Stack[-1])
0x33c: Pop(1)
0x33d: @@ ClearReplies()
0x33e: Pop(0)
0x33f: Push((int) 523745)
0x340: Push((int) 25009)
0x341: Push((int) 25008)
0x342: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x343: Pop(3)
0x344: Return(); Pop(0)

0x345: Push((int) 25009)
0x346: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x348: PushEmpty(string)
0x349: Stack[-1] = "Oracle"
0x34a: Call2 0x2ad

0x34b: Pop(1)
0x34c: Push((int) 523746)
0x34d: @@ SetMessage(Stack[-1])
0x34e: Pop(1)
0x34f: @@ ClearReplies()
0x350: Pop(0)
0x351: Push((int) 523747)
0x352: Push((int) 25011)
0x353: Push((int) 25010)
0x354: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x355: Pop(3)
0x356: Return(); Pop(0)

0x357: Push((int) 25011)
0x358: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x359: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x35a: PushEmpty(string)
0x35b: Stack[-1] = "Oracle"
0x35c: Call2 0x2ad

0x35d: Pop(1)
0x35e: Push((int) 523748)
0x35f: @@ SetMessage(Stack[-1])
0x360: Pop(1)
0x361: @@ ClearReplies()
0x362: Pop(0)
0x363: Push((int) 523749)
0x364: Push((int) 25013)
0x365: Push((int) 25012)
0x366: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x367: Pop(3)
0x368: Return(); Pop(0)

0x369: Push((int) 25013)
0x36a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x37b; Pop(1)

0x36c: PushEmpty(string)
0x36d: Stack[-1] = "Neutral"
0x36e: Call2 0x2ad

0x36f: Pop(1)
0x370: Push((int) 523750)
0x371: @@ SetMessage(Stack[-1])
0x372: Pop(1)
0x373: @@ ClearReplies()
0x374: Pop(0)
0x375: Push((int) 523751)
0x376: Push((int) 25015)
0x377: Push((int) 25014)
0x378: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x379: Pop(3)
0x37a: Return(); Pop(0)

0x37b: Push((int) 25015)
0x37c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x37d: IF (Stack[-1] == 0) GOTO 0x38d; Pop(1)

0x37e: PushEmpty(string)
0x37f: Stack[-1] = "Refusal"
0x380: Call2 0x2ad

0x381: Pop(1)
0x382: Push((int) 523752)
0x383: @@ SetMessage(Stack[-1])
0x384: Pop(1)
0x385: @@ ClearReplies()
0x386: Pop(0)
0x387: Push((int) 523753)
0x388: Push((int) 25017)
0x389: Push((int) 25016)
0x38a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38b: Pop(3)
0x38c: Return(); Pop(0)

0x38d: Push((int) 25017)
0x38e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38f: IF (Stack[-1] == 0) GOTO 0x39f; Pop(1)

0x390: PushEmpty(string)
0x391: Stack[-1] = "Refusal"
0x392: Call2 0x2ad

0x393: Pop(1)
0x394: Push((int) 523754)
0x395: @@ SetMessage(Stack[-1])
0x396: Pop(1)
0x397: @@ ClearReplies()
0x398: Pop(0)
0x399: Push((int) 523755)
0x39a: Push((int) 25019)
0x39b: Push((int) 25018)
0x39c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39d: Pop(3)
0x39e: Return(); Pop(0)

0x39f: Push((int) 25019)
0x3a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3a2: PushEmpty(string)
0x3a3: Stack[-1] = "Refusal"
0x3a4: Call2 0x2ad

0x3a5: Pop(1)
0x3a6: Push((int) 523756)
0x3a7: @@ SetMessage(Stack[-1])
0x3a8: Pop(1)
0x3a9: @@ ClearReplies()
0x3aa: Pop(0)
0x3ab: Push((int) 521429)
0x3ac: Push((int) -1)
0x3ad: Push((int) 22607)
0x3ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3af: Pop(3)
0x3b0: Return(); Pop(0)

0x3b1: Push((int) 24983)
0x3b2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b3: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3b4: PushEmpty(string)
0x3b5: Stack[-1] = "Refusal"
0x3b6: Call2 0x2ad

0x3b7: Pop(1)
0x3b8: Push((int) 523725)
0x3b9: @@ SetMessage(Stack[-1])
0x3ba: Pop(1)
0x3bb: @@ ClearReplies()
0x3bc: Pop(0)
0x3bd: Push((int) 523726)
0x3be: Push((int) 24985)
0x3bf: Push((int) 24984)
0x3c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c1: Pop(3)
0x3c2: Return(); Pop(0)

0x3c3: Push((int) 24985)
0x3c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3da; Pop(1)

0x3c6: PushEmpty(string)
0x3c7: Stack[-1] = "Neutral"
0x3c8: Call2 0x2ad

0x3c9: Pop(1)
0x3ca: Push((int) 523727)
0x3cb: @@ SetMessage(Stack[-1])
0x3cc: Pop(1)
0x3cd: @@ ClearReplies()
0x3ce: Pop(0)
0x3cf: Push((int) 523728)
0x3d0: Push((int) 24987)
0x3d1: Push((int) 24986)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: Push((int) 523740)
0x3d5: Push((int) 24994)
0x3d6: Push((int) 25000)
0x3d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d8: Pop(3)
0x3d9: Return(); Pop(0)

0x3da: Push((int) 24987)
0x3db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3f1; Pop(1)

0x3dd: PushEmpty(string)
0x3de: Stack[-1] = "Neutral"
0x3df: Call2 0x2ad

0x3e0: Pop(1)
0x3e1: Push((int) 523729)
0x3e2: @@ SetMessage(Stack[-1])
0x3e3: Pop(1)
0x3e4: @@ ClearReplies()
0x3e5: Pop(0)
0x3e6: Push((int) 523730)
0x3e7: Push((int) 24989)
0x3e8: Push((int) 24988)
0x3e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ea: Pop(3)
0x3eb: Push((int) 523737)
0x3ec: Push((int) 24994)
0x3ed: Push((int) 24995)
0x3ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ef: Pop(3)
0x3f0: Return(); Pop(0)

0x3f1: Push((int) 24989)
0x3f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f3: IF (Stack[-1] == 0) GOTO 0x408; Pop(1)

0x3f4: PushEmpty(string)
0x3f5: Stack[-1] = "Neutral"
0x3f6: Call2 0x2ad

0x3f7: Pop(1)
0x3f8: Push((int) 523731)
0x3f9: @@ SetMessage(Stack[-1])
0x3fa: Pop(1)
0x3fb: @@ ClearReplies()
0x3fc: Pop(0)
0x3fd: Push((int) 523732)
0x3fe: Push((int) 24991)
0x3ff: Push((int) 24990)
0x400: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x401: Pop(3)
0x402: Push((int) 523739)
0x403: Push((int) 24994)
0x404: Push((int) 24998)
0x405: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x406: Pop(3)
0x407: Return(); Pop(0)

0x408: Push((int) 24991)
0x409: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x41f; Pop(1)

0x40b: PushEmpty(string)
0x40c: Stack[-1] = "Neutral"
0x40d: Call2 0x2ad

0x40e: Pop(1)
0x40f: Push((int) 523733)
0x410: @@ SetMessage(Stack[-1])
0x411: Pop(1)
0x412: @@ ClearReplies()
0x413: Pop(0)
0x414: Push((int) 523734)
0x415: Push((int) 25002)
0x416: Push((int) 24992)
0x417: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x418: Pop(3)
0x419: Push((int) 523735)
0x41a: Push((int) 24994)
0x41b: Push((int) 24993)
0x41c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41d: Pop(3)
0x41e: Return(); Pop(0)

0x41f: Push((int) 24994)
0x420: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x421: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x422: PushEmpty(string)
0x423: Stack[-1] = "Neutral"
0x424: Call2 0x2ad

0x425: Pop(1)
0x426: Push((int) 523736)
0x427: @@ SetMessage(Stack[-1])
0x428: Pop(1)
0x429: @@ ClearReplies()
0x42a: Pop(0)
0x42b: Push((int) 523738)
0x42c: Push((int) 25005)
0x42d: Push((int) 24996)
0x42e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42f: Pop(3)
0x430: Return(); Pop(0)

0x431: Push((int) 25002)
0x432: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x433: IF (Stack[-1] == 0) GOTO 0x448; Pop(1)

0x434: PushEmpty(string)
0x435: Stack[-1] = "Oracle"
0x436: Call2 0x2ad

0x437: Pop(1)
0x438: Push((int) 523741)
0x439: @@ SetMessage(Stack[-1])
0x43a: Pop(1)
0x43b: @@ ClearReplies()
0x43c: Pop(0)
0x43d: Push((int) 523742)
0x43e: Push((int) 25005)
0x43f: Push((int) 25003)
0x440: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x441: Pop(3)
0x442: Push((int) 523743)
0x443: Push((int) 25005)
0x444: Push((int) 25004)
0x445: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x446: Pop(3)
0x447: Return(); Pop(0)

0x448: Push((int) 25005)
0x449: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44a: IF (Stack[-1] == 0) GOTO 0x45a; Pop(1)

0x44b: PushEmpty(string)
0x44c: Stack[-1] = "Oracle"
0x44d: Call2 0x2ad

0x44e: Pop(1)
0x44f: Push((int) 523744)
0x450: @@ SetMessage(Stack[-1])
0x451: Pop(1)
0x452: @@ ClearReplies()
0x453: Pop(0)
0x454: Push((int) 521421)
0x455: Push((int) -1)
0x456: Push((int) 22599)
0x457: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x458: Pop(3)
0x459: Return(); Pop(0)

0x45a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x45b: PushEmpty(bool)
0x45c: Call2 0x1357

0x45d: Pop(0)
0x45e: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x45f: @ lshStopAnimation()
0x460: Pop(0)
0x461: GOTO 0x464

0x462: @ StopAnimation()
0x463: Pop(0)
0x464: Return(); Pop(0)

0x465: GOTO 0x2c4

0x466: Return(); Pop(0)

0x467: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x468: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x469: PushEmpty(bool, object, float)
0x46a: Stack[-2] = Stack[-12]
0x46b: Stack[-1] = (float) 130.0
0x46c: Call2 0x1191

0x46d: Pop(2)
0x46e: Pop(1); Push((bool) Stack[-1] == 0)
0x46f: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x470: Stack[-10] = (int) -2
0x471: Return(); Pop(8)

0x472: @ CreateDialog(Stack[-4])
0x473: Pop(0)
0x474: PushEmpty(int)
0x475: Call2 0x1351

0x476: Pop(0)
0x477: @@ SetNPCName(Stack[-1])
0x478: Pop(1)
0x479: PushEmpty(int)
0x47a: Call2 0x134f

0x47b: Pop(0)
0x47c: @@ SetNPCDescription(Stack[-1])
0x47d: Pop(1)
0x47e: PushEmpty(string)
0x47f: Call2 0x1353

0x480: Pop(0)
0x481: @@ SetPhoto(Stack[-1])
0x482: Pop(1)
0x483: PushEmpty(string)
0x484: Call2 0x1355

0x485: Pop(0)
0x486: @@ SetPhoto2(Stack[-1])
0x487: Pop(1)
0x488: PushEmpty(int)
0x489: Call2 0x1669

0x48a: Pop(0)
0x48b: @@ SetPlayerName(Stack[-1])
0x48c: Pop(1)
0x48d: Stack[-2] = (int) -1
0x48e: @ IsOverrideActive(Stack[-3])
0x48f: Pop(0)
0x490: Push(Stack[-3])
0x491: IF (Stack[-1] == 0) GOTO 0x494; Pop(1)

0x492: Stack[-10] = (int) -2
0x493: Return(); Pop(8)

0x494: @ DoDialog(Stack[-4])
0x495: Pop(0)
0x496: PushEmpty(bool, object)
0x497: PushEmpty(object)
0x498: Call2 0x12a7

0x499: Stack[-2] = Stack[-1]
0x49a: Pop(1)
0x49b: Call2 0x11e8

0x49c: Pop(2)
0x49d: PushEmpty(object, object)
0x49e: Stack[-2] = Stack[-11]
0x49f: Stack[-1] = Stack[-6]
0x4a0: Push(-2, 4); TaskCall(5)
0x4a1: Call2 0x4b8

0x4a2: Pop(-2, 4); TaskReturn
0x4a3: Pop(2)
0x4a4: @@ IsDialogEnd(Stack[-1])
0x4a5: Pop(0)
0x4a6: Pop(0); Push((bool) Stack[-1] == 0)
0x4a7: IF (Stack[-1] == 0) GOTO 0x4ad; Pop(1)

0x4a8: @ sync()
0x4a9: Pop(0)
0x4aa: @@ IsDialogEnd(Stack[-1])
0x4ab: Pop(0)
0x4ac: GOTO 0x4a6

0x4ad: PushEmpty(object)
0x4ae: Stack[-1] = Stack[-10]
0x4af: Call2 0x11d6

0x4b0: Pop(1)
0x4b1: @ StopDialog(Stack[-4])
0x4b2: Pop(0)
0x4b3: @@ GetReturnValue(Stack[-2])
0x4b4: Pop(0)
0x4b5: Stack[-10] = Stack[-2]
0x4b6: Return(); Pop(8)

0x4b7: Stack[-4] = 0
0x4b8: PushEmpty()
0x4b9: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4ba: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4bb: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4bc: Push((int) 1)
0x4bd: IF (Stack[-1] == 0) GOTO 0x506; Pop(1)

0x4be: PushEmpty(bool, object)
0x4bf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4c0: Call2 0x14a3

0x4c1: Pop(1)
0x4c2: IF (Stack[-1] == 0) GOTO 0x4d7; Pop(1)

0x4c3: PushEmpty(object, object)
0x4c4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4c6: Call2 0x13ab

0x4c7: Pop(2)
0x4c8: PushEmpty(string)
0x4c9: Stack[-1] = "Neutral"
0x4ca: Call2 0x524

0x4cb: Pop(1)
0x4cc: Push((int) 521539)
0x4cd: @@ SetMessage(Stack[-1])
0x4ce: Pop(1)
0x4cf: @@ ClearReplies()
0x4d0: Pop(0)
0x4d1: Push((int) 522390)
0x4d2: Push((int) 23556)
0x4d3: Push((int) 23555)
0x4d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d5: Pop(3)
0x4d6: GOTO 0x506

0x4d7: PushEmpty(string)
0x4d8: Stack[-1] = "Neutral"
0x4d9: Call2 0x524

0x4da: Pop(1)
0x4db: Push((int) 521544)
0x4dc: @@ SetMessage(Stack[-1])
0x4dd: Pop(1)
0x4de: @@ ClearReplies()
0x4df: Pop(0)
0x4e0: PushEmpty(bool, object)
0x4e1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4e2: Call2 0x1497

0x4e3: Pop(1)
0x4e4: IF (Stack[-1] == 0) GOTO 0x4ea; Pop(1)

0x4e5: Push((int) 521545)
0x4e6: Push((int) 22710)
0x4e7: Push((int) 22706)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: PushEmpty(bool, object)
0x4eb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ec: Call2 0x14af

0x4ed: Pop(1)
0x4ee: IF (Stack[-1] == 0) GOTO 0x4f4; Pop(1)

0x4ef: Push((int) 521587)
0x4f0: Push((int) 22749)
0x4f1: Push((int) 22748)
0x4f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f3: Pop(3)
0x4f4: PushEmpty(bool, object)
0x4f5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f6: Call2 0x14bb

0x4f7: Pop(1)
0x4f8: IF (Stack[-1] == 0) GOTO 0x4fe; Pop(1)

0x4f9: Push((int) 522411)
0x4fa: Push((int) 23579)
0x4fb: Push((int) 23578)
0x4fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fd: Pop(3)
0x4fe: Push((int) 521546)
0x4ff: Push((int) -1)
0x500: Push((int) 22707)
0x501: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x502: Pop(3)
0x503: GOTO 0x506

0x504: Return(); Pop(0)

0x505: GOTO 0x4bc

0x506: PushEmpty(bool)
0x507: Call2 0x1357

0x508: Pop(0)
0x509: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x50a: @ lshWaitForAnimEnd()
0x50b: Pop(0)
0x50c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x50d: IF (Stack[-1] == 0) GOTO 0x50f; Pop(1)

0x50e: GOTO 0x514

0x50f: PushEmpty(string)
0x510: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x511: Call2 0x1272

0x512: Pop(1)
0x513: GOTO 0x50a

0x514: GOTO 0x523

0x515: Push("all")
0x516: Push("idle")
0x517: @ PlayAnimation(Stack[-2], Stack[-1])
0x518: Pop(2)
0x519: @ WaitForAnimEnd()
0x51a: Pop(0)
0x51b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x51c: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x51d: GOTO 0x523

0x51e: Push("all")
0x51f: Push("idle")
0x520: @ PlayAnimation(Stack[-2], Stack[-1])
0x521: Pop(2)
0x522: GOTO 0x519

0x523: Return(); Pop(0)

0x524: PushEmpty()
0x525: PushEmpty(bool)
0x526: Call2 0x1357

0x527: Pop(0)
0x528: Pop(1); Push((bool) Stack[-1] == 0)
0x529: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x52a: Return(); Pop(0)

0x52b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x52c: IF (Stack[-1] == 0) GOTO 0x52e; Pop(1)

0x52d: Return(); Pop(0)

0x52e: PushEmpty(string, bool)
0x52f: Stack[-2] = Stack[-3]
0x530: Push("")
0x531: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x532: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x533: Stack[-1] = (bool) 0
0x534: GOTO 0x536

0x535: Stack[-1] = (bool) 1
0x536: Call2 0x1282

0x537: Pop(2)
0x538: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x539: Return(); Pop(0)

0x53a: PushEmpty()
0x53b: Push((int) 1)
0x53c: IF (Stack[-1] == 0) GOTO 0x707; Pop(1)

0x53d: PushEmpty()
0x53e: Call2 0x12a0

0x53f: Pop(0)
0x540: Push((int) 22709)
0x541: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x54d; Pop(1)

0x543: PushEmpty(object, object)
0x544: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x545: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x546: Call2 0x138a

0x547: Pop(2)
0x548: PushEmpty(object, object)
0x549: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x54a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x54b: Call2 0x1359

0x54c: Pop(2)
0x54d: Push((int) 22711)
0x54e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x54f: IF (Stack[-1] == 0) GOTO 0x555; Pop(1)

0x550: PushEmpty(object, object)
0x551: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x552: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x553: Call2 0x138a

0x554: Pop(2)
0x555: Push((int) 22772)
0x556: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x557: IF (Stack[-1] == 0) GOTO 0x55d; Pop(1)

0x558: PushEmpty(object, object)
0x559: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x55a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x55b: Call2 0x139e

0x55c: Pop(2)
0x55d: Push((int) 23578)
0x55e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x55f: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x560: PushEmpty(object, object)
0x561: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x562: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x563: Call2 0x13b1

0x564: Pop(2)
0x565: Push((int) 22700)
0x566: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x567: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x568: PushEmpty(bool, object)
0x569: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56a: Call2 0x14a3

0x56b: Pop(1)
0x56c: IF (Stack[-1] == 0) GOTO 0x581; Pop(1)

0x56d: PushEmpty(object, object)
0x56e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x56f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x570: Call2 0x13ab

0x571: Pop(2)
0x572: PushEmpty(string)
0x573: Stack[-1] = "Neutral"
0x574: Call2 0x524

0x575: Pop(1)
0x576: Push((int) 521539)
0x577: @@ SetMessage(Stack[-1])
0x578: Pop(1)
0x579: @@ ClearReplies()
0x57a: Pop(0)
0x57b: Push((int) 522390)
0x57c: Push((int) 23556)
0x57d: Push((int) 23555)
0x57e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57f: Pop(3)
0x580: Return(); Pop(0)

0x581: PushEmpty(string)
0x582: Stack[-1] = "Neutral"
0x583: Call2 0x524

0x584: Pop(1)
0x585: Push((int) 521544)
0x586: @@ SetMessage(Stack[-1])
0x587: Pop(1)
0x588: @@ ClearReplies()
0x589: Pop(0)
0x58a: PushEmpty(bool, object)
0x58b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x58c: Call2 0x1497

0x58d: Pop(1)
0x58e: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x58f: Push((int) 521545)
0x590: Push((int) 22710)
0x591: Push((int) 22706)
0x592: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x593: Pop(3)
0x594: PushEmpty(bool, object)
0x595: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x596: Call2 0x14af

0x597: Pop(1)
0x598: IF (Stack[-1] == 0) GOTO 0x59e; Pop(1)

0x599: Push((int) 521587)
0x59a: Push((int) 22749)
0x59b: Push((int) 22748)
0x59c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x59d: Pop(3)
0x59e: PushEmpty(bool, object)
0x59f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5a0: Call2 0x14bb

0x5a1: Pop(1)
0x5a2: IF (Stack[-1] == 0) GOTO 0x5a8; Pop(1)

0x5a3: Push((int) 522411)
0x5a4: Push((int) 23579)
0x5a5: Push((int) 23578)
0x5a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a7: Pop(3)
0x5a8: Push((int) 521546)
0x5a9: Push((int) -1)
0x5aa: Push((int) 22707)
0x5ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ac: Pop(3)
0x5ad: Return(); Pop(0)

0x5ae: Push((int) 23579)
0x5af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5b0: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5b1: PushEmpty(string)
0x5b2: Stack[-1] = "Neutral"
0x5b3: Call2 0x524

0x5b4: Pop(1)
0x5b5: Push((int) 522412)
0x5b6: @@ SetMessage(Stack[-1])
0x5b7: Pop(1)
0x5b8: @@ ClearReplies()
0x5b9: Pop(0)
0x5ba: Push((int) 522414)
0x5bb: Push((int) 23582)
0x5bc: Push((int) 23581)
0x5bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5be: Pop(3)
0x5bf: Push((int) 522413)
0x5c0: Push((int) -1)
0x5c1: Push((int) 23580)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: Return(); Pop(0)

0x5c5: Push((int) 23582)
0x5c6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5c7: IF (Stack[-1] == 0) GOTO 0x5d7; Pop(1)

0x5c8: PushEmpty(string)
0x5c9: Stack[-1] = "Neutral"
0x5ca: Call2 0x524

0x5cb: Pop(1)
0x5cc: Push((int) 522415)
0x5cd: @@ SetMessage(Stack[-1])
0x5ce: Pop(1)
0x5cf: @@ ClearReplies()
0x5d0: Pop(0)
0x5d1: Push((int) 522416)
0x5d2: Push((int) -1)
0x5d3: Push((int) 23583)
0x5d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5d5: Pop(3)
0x5d6: Return(); Pop(0)

0x5d7: Push((int) 22749)
0x5d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d9: IF (Stack[-1] == 0) GOTO 0x5e9; Pop(1)

0x5da: PushEmpty(string)
0x5db: Stack[-1] = "Neutral"
0x5dc: Call2 0x524

0x5dd: Pop(1)
0x5de: Push((int) 521588)
0x5df: @@ SetMessage(Stack[-1])
0x5e0: Pop(1)
0x5e1: @@ ClearReplies()
0x5e2: Pop(0)
0x5e3: Push((int) 521589)
0x5e4: Push((int) 22751)
0x5e5: Push((int) 22750)
0x5e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5e7: Pop(3)
0x5e8: Return(); Pop(0)

0x5e9: Push((int) 22751)
0x5ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5eb: IF (Stack[-1] == 0) GOTO 0x5fb; Pop(1)

0x5ec: PushEmpty(string)
0x5ed: Stack[-1] = "Neutral"
0x5ee: Call2 0x524

0x5ef: Pop(1)
0x5f0: Push((int) 521590)
0x5f1: @@ SetMessage(Stack[-1])
0x5f2: Pop(1)
0x5f3: @@ ClearReplies()
0x5f4: Pop(0)
0x5f5: Push((int) 521592)
0x5f6: Push((int) 22768)
0x5f7: Push((int) 22755)
0x5f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f9: Pop(3)
0x5fa: Return(); Pop(0)

0x5fb: Push((int) 22768)
0x5fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5fd: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x5fe: PushEmpty(string)
0x5ff: Stack[-1] = "Neutral"
0x600: Call2 0x524

0x601: Pop(1)
0x602: Push((int) 521603)
0x603: @@ SetMessage(Stack[-1])
0x604: Pop(1)
0x605: @@ ClearReplies()
0x606: Pop(0)
0x607: Push((int) 522468)
0x608: Push((int) 23642)
0x609: Push((int) 23641)
0x60a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(3)
0x60c: Return(); Pop(0)

0x60d: Push((int) 23642)
0x60e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60f: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x610: PushEmpty(string)
0x611: Stack[-1] = "Neutral"
0x612: Call2 0x524

0x613: Pop(1)
0x614: Push((int) 522469)
0x615: @@ SetMessage(Stack[-1])
0x616: Pop(1)
0x617: @@ ClearReplies()
0x618: Pop(0)
0x619: Push((int) 521593)
0x61a: Push((int) 22771)
0x61b: Push((int) 22756)
0x61c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61d: Pop(3)
0x61e: Return(); Pop(0)

0x61f: Push((int) 22771)
0x620: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x621: IF (Stack[-1] == 0) GOTO 0x631; Pop(1)

0x622: PushEmpty(string)
0x623: Stack[-1] = "Neutral"
0x624: Call2 0x524

0x625: Pop(1)
0x626: Push((int) 521605)
0x627: @@ SetMessage(Stack[-1])
0x628: Pop(1)
0x629: @@ ClearReplies()
0x62a: Pop(0)
0x62b: Push((int) 521606)
0x62c: Push((int) -1)
0x62d: Push((int) 22772)
0x62e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62f: Pop(3)
0x630: Return(); Pop(0)

0x631: Push((int) 22710)
0x632: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x633: IF (Stack[-1] == 0) GOTO 0x643; Pop(1)

0x634: PushEmpty(string)
0x635: Stack[-1] = "Neutral"
0x636: Call2 0x524

0x637: Pop(1)
0x638: Push((int) 521549)
0x639: @@ SetMessage(Stack[-1])
0x63a: Pop(1)
0x63b: @@ ClearReplies()
0x63c: Pop(0)
0x63d: Push((int) 521550)
0x63e: Push((int) -1)
0x63f: Push((int) 22711)
0x640: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x641: Pop(3)
0x642: Return(); Pop(0)

0x643: Push((int) 23556)
0x644: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x645: IF (Stack[-1] == 0) GOTO 0x65a; Pop(1)

0x646: PushEmpty(string)
0x647: Stack[-1] = "Neutral"
0x648: Call2 0x524

0x649: Pop(1)
0x64a: Push((int) 522391)
0x64b: @@ SetMessage(Stack[-1])
0x64c: Pop(1)
0x64d: @@ ClearReplies()
0x64e: Pop(0)
0x64f: Push((int) 522393)
0x650: Push((int) 23559)
0x651: Push((int) 23558)
0x652: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x653: Pop(3)
0x654: Push((int) 522392)
0x655: Push((int) -1)
0x656: Push((int) 23557)
0x657: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x658: Pop(3)
0x659: Return(); Pop(0)

0x65a: Push((int) 23559)
0x65b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x676; Pop(1)

0x65d: PushEmpty(string)
0x65e: Stack[-1] = "Neutral"
0x65f: Call2 0x524

0x660: Pop(1)
0x661: Push((int) 522394)
0x662: @@ SetMessage(Stack[-1])
0x663: Pop(1)
0x664: @@ ClearReplies()
0x665: Pop(0)
0x666: Push((int) 521540)
0x667: Push((int) 22702)
0x668: Push((int) 22701)
0x669: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66a: Pop(3)
0x66b: Push((int) 522396)
0x66c: Push((int) 23562)
0x66d: Push((int) 23561)
0x66e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66f: Pop(3)
0x670: Push((int) 522395)
0x671: Push((int) 23570)
0x672: Push((int) 23560)
0x673: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x674: Pop(3)
0x675: Return(); Pop(0)

0x676: Push((int) 23570)
0x677: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x678: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x679: PushEmpty(string)
0x67a: Stack[-1] = "Smile"
0x67b: Call2 0x524

0x67c: Pop(1)
0x67d: Push((int) 522404)
0x67e: @@ SetMessage(Stack[-1])
0x67f: Pop(1)
0x680: @@ ClearReplies()
0x681: Pop(0)
0x682: Push((int) 522405)
0x683: Push((int) 23572)
0x684: Push((int) 23571)
0x685: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x686: Pop(3)
0x687: Return(); Pop(0)

0x688: Push((int) 23572)
0x689: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x68a: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x68b: PushEmpty(string)
0x68c: Stack[-1] = "Smile"
0x68d: Call2 0x524

0x68e: Pop(1)
0x68f: Push((int) 522406)
0x690: @@ SetMessage(Stack[-1])
0x691: Pop(1)
0x692: @@ ClearReplies()
0x693: Pop(0)
0x694: Push((int) 522407)
0x695: Push((int) 23564)
0x696: Push((int) 23573)
0x697: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: Push((int) 522408)
0x69a: Push((int) -1)
0x69b: Push((int) 23574)
0x69c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69d: Pop(3)
0x69e: Return(); Pop(0)

0x69f: Push((int) 23562)
0x6a0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6a1: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6a2: PushEmpty(string)
0x6a3: Stack[-1] = "Neutral"
0x6a4: Call2 0x524

0x6a5: Pop(1)
0x6a6: Push((int) 522397)
0x6a7: @@ SetMessage(Stack[-1])
0x6a8: Pop(1)
0x6a9: @@ ClearReplies()
0x6aa: Pop(0)
0x6ab: Push((int) 522398)
0x6ac: Push((int) 23564)
0x6ad: Push((int) 23563)
0x6ae: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6af: Pop(3)
0x6b0: Push((int) 522401)
0x6b1: Push((int) 23564)
0x6b2: Push((int) 23566)
0x6b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b4: Pop(3)
0x6b5: Push((int) 522403)
0x6b6: Push((int) -1)
0x6b7: Push((int) 23569)
0x6b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b9: Pop(3)
0x6ba: Return(); Pop(0)

0x6bb: Push((int) 23564)
0x6bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6bd: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6be: PushEmpty(string)
0x6bf: Stack[-1] = "Neutral"
0x6c0: Call2 0x524

0x6c1: Pop(1)
0x6c2: Push((int) 522399)
0x6c3: @@ SetMessage(Stack[-1])
0x6c4: Pop(1)
0x6c5: @@ ClearReplies()
0x6c6: Pop(0)
0x6c7: Push((int) 522400)
0x6c8: Push((int) -1)
0x6c9: Push((int) 23565)
0x6ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6cb: Pop(3)
0x6cc: Push((int) 522402)
0x6cd: Push((int) -1)
0x6ce: Push((int) 23567)
0x6cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6d0: Pop(3)
0x6d1: Return(); Pop(0)

0x6d2: Push((int) 22702)
0x6d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6d4: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6d5: PushEmpty(string)
0x6d6: Stack[-1] = "Refusal"
0x6d7: Call2 0x524

0x6d8: Pop(1)
0x6d9: Push((int) 521541)
0x6da: @@ SetMessage(Stack[-1])
0x6db: Pop(1)
0x6dc: @@ ClearReplies()
0x6dd: Pop(0)
0x6de: Push((int) 521542)
0x6df: Push((int) 22708)
0x6e0: Push((int) 22703)
0x6e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e2: Pop(3)
0x6e3: Push((int) 521543)
0x6e4: Push((int) -1)
0x6e5: Push((int) 22704)
0x6e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e7: Pop(3)
0x6e8: Return(); Pop(0)

0x6e9: Push((int) 22708)
0x6ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6eb: IF (Stack[-1] == 0) GOTO 0x6fb; Pop(1)

0x6ec: PushEmpty(string)
0x6ed: Stack[-1] = "Neutral"
0x6ee: Call2 0x524

0x6ef: Pop(1)
0x6f0: Push((int) 521547)
0x6f1: @@ SetMessage(Stack[-1])
0x6f2: Pop(1)
0x6f3: @@ ClearReplies()
0x6f4: Pop(0)
0x6f5: Push((int) 521548)
0x6f6: Push((int) -1)
0x6f7: Push((int) 22709)
0x6f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f9: Pop(3)
0x6fa: Return(); Pop(0)

0x6fb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6fc: PushEmpty(bool)
0x6fd: Call2 0x1357

0x6fe: Pop(0)
0x6ff: IF (Stack[-1] == 0) GOTO 0x703; Pop(1)

0x700: @ lshStopAnimation()
0x701: Pop(0)
0x702: GOTO 0x705

0x703: @ StopAnimation()
0x704: Pop(0)
0x705: Return(); Pop(0)

0x706: GOTO 0x53b

0x707: Return(); Pop(0)

0x708: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x709: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x70a: PushEmpty(bool, object, float)
0x70b: Stack[-2] = Stack[-12]
0x70c: Stack[-1] = (float) 130.0
0x70d: Call2 0x1191

0x70e: Pop(2)
0x70f: Pop(1); Push((bool) Stack[-1] == 0)
0x710: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x711: Stack[-10] = (int) -2
0x712: Return(); Pop(8)

0x713: @ CreateDialog(Stack[-4])
0x714: Pop(0)
0x715: PushEmpty(int)
0x716: Call2 0x1351

0x717: Pop(0)
0x718: @@ SetNPCName(Stack[-1])
0x719: Pop(1)
0x71a: PushEmpty(int)
0x71b: Call2 0x134f

0x71c: Pop(0)
0x71d: @@ SetNPCDescription(Stack[-1])
0x71e: Pop(1)
0x71f: PushEmpty(string)
0x720: Call2 0x1353

0x721: Pop(0)
0x722: @@ SetPhoto(Stack[-1])
0x723: Pop(1)
0x724: PushEmpty(string)
0x725: Call2 0x1355

0x726: Pop(0)
0x727: @@ SetPhoto2(Stack[-1])
0x728: Pop(1)
0x729: PushEmpty(int)
0x72a: Call2 0x1669

0x72b: Pop(0)
0x72c: @@ SetPlayerName(Stack[-1])
0x72d: Pop(1)
0x72e: Stack[-2] = (int) -1
0x72f: @ IsOverrideActive(Stack[-3])
0x730: Pop(0)
0x731: Push(Stack[-3])
0x732: IF (Stack[-1] == 0) GOTO 0x735; Pop(1)

0x733: Stack[-10] = (int) -2
0x734: Return(); Pop(8)

0x735: @ DoDialog(Stack[-4])
0x736: Pop(0)
0x737: PushEmpty(bool, object)
0x738: PushEmpty(object)
0x739: Call2 0x12a7

0x73a: Stack[-2] = Stack[-1]
0x73b: Pop(1)
0x73c: Call2 0x11e8

0x73d: Pop(2)
0x73e: PushEmpty(object, object)
0x73f: Stack[-2] = Stack[-11]
0x740: Stack[-1] = Stack[-6]
0x741: Push(-2, 4); TaskCall(7)
0x742: Call2 0x759

0x743: Pop(-2, 4); TaskReturn
0x744: Pop(2)
0x745: @@ IsDialogEnd(Stack[-1])
0x746: Pop(0)
0x747: Pop(0); Push((bool) Stack[-1] == 0)
0x748: IF (Stack[-1] == 0) GOTO 0x74e; Pop(1)

0x749: @ sync()
0x74a: Pop(0)
0x74b: @@ IsDialogEnd(Stack[-1])
0x74c: Pop(0)
0x74d: GOTO 0x747

0x74e: PushEmpty(object)
0x74f: Stack[-1] = Stack[-10]
0x750: Call2 0x11d6

0x751: Pop(1)
0x752: @ StopDialog(Stack[-4])
0x753: Pop(0)
0x754: @@ GetReturnValue(Stack[-2])
0x755: Pop(0)
0x756: Stack[-10] = Stack[-2]
0x757: Return(); Pop(8)

0x758: Stack[-4] = 0
0x759: PushEmpty()
0x75a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x75b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x75c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x75d: Push((int) 1)
0x75e: IF (Stack[-1] == 0) GOTO 0x7c3; Pop(1)

0x75f: PushEmpty(bool)
0x760: Stack[-1] = (bool) 0
0x761: PushEmpty(bool, object)
0x762: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x763: Call2 0x14c7

0x764: Pop(1)
0x765: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x766: PushEmpty(bool, object)
0x767: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x768: Call2 0x14f6

0x769: Pop(1)
0x76a: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76b: Stack[-1] = (bool) 1
0x76c: IF (Stack[-1] == 0) GOTO 0x78b; Pop(1)

0x76d: PushEmpty(object, object)
0x76e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x76f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x770: Call2 0x13b7

0x771: Pop(2)
0x772: PushEmpty(string)
0x773: Stack[-1] = "Smile"
0x774: Call2 0x7e1

0x775: Pop(1)
0x776: Push((int) 521870)
0x777: @@ SetMessage(Stack[-1])
0x778: Pop(1)
0x779: @@ ClearReplies()
0x77a: Pop(0)
0x77b: Push((int) 522575)
0x77c: Push((int) 23755)
0x77d: Push((int) 23754)
0x77e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77f: Pop(3)
0x780: Push((int) 522581)
0x781: Push((int) 23755)
0x782: Push((int) 23760)
0x783: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x784: Pop(3)
0x785: Push((int) 522586)
0x786: Push((int) 23047)
0x787: Push((int) 23767)
0x788: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x789: Pop(3)
0x78a: GOTO 0x7c3

0x78b: PushEmpty(string)
0x78c: Stack[-1] = "Neutral"
0x78d: Call2 0x7e1

0x78e: Pop(1)
0x78f: Push((int) 521873)
0x790: @@ SetMessage(Stack[-1])
0x791: Pop(1)
0x792: @@ ClearReplies()
0x793: Pop(0)
0x794: PushEmpty(bool, object)
0x795: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x796: Call2 0x14f6

0x797: Pop(1)
0x798: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x799: Push((int) 521874)
0x79a: Push((int) 23049)
0x79b: Push((int) 23046)
0x79c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79d: Pop(3)
0x79e: PushEmpty(bool, object)
0x79f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a0: Call2 0x14df

0x7a1: Pop(1)
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a3: Push((int) 521886)
0x7a4: Push((int) 23059)
0x7a5: Push((int) 23058)
0x7a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a7: Pop(3)
0x7a8: PushEmpty(bool)
0x7a9: Stack[-1] = (bool) 0
0x7aa: PushEmpty(bool, object)
0x7ab: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ac: Call2 0x14d3

0x7ad: Pop(1)
0x7ae: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7af: PushEmpty(bool, object)
0x7b0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7b1: Call2 0x1532

0x7b2: Pop(1)
0x7b3: IF (Stack[-1] == 0) GOTO 0x7b5; Pop(1)

0x7b4: Stack[-1] = (bool) 1
0x7b5: IF (Stack[-1] == 0) GOTO 0x7bb; Pop(1)

0x7b6: Push((int) 521883)
0x7b7: Push((int) 23744)
0x7b8: Push((int) 23055)
0x7b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ba: Pop(3)
0x7bb: Push((int) 521879)
0x7bc: Push((int) -1)
0x7bd: Push((int) 23051)
0x7be: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7bf: Pop(3)
0x7c0: GOTO 0x7c3

0x7c1: Return(); Pop(0)

0x7c2: GOTO 0x75d

0x7c3: PushEmpty(bool)
0x7c4: Call2 0x1357

0x7c5: Pop(0)
0x7c6: IF (Stack[-1] == 0) GOTO 0x7d2; Pop(1)

0x7c7: @ lshWaitForAnimEnd()
0x7c8: Pop(0)
0x7c9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cc; Pop(1)

0x7cb: GOTO 0x7d1

0x7cc: PushEmpty(string)
0x7cd: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7ce: Call2 0x1272

0x7cf: Pop(1)
0x7d0: GOTO 0x7c7

0x7d1: GOTO 0x7e0

0x7d2: Push("all")
0x7d3: Push("idle")
0x7d4: @ PlayAnimation(Stack[-2], Stack[-1])
0x7d5: Pop(2)
0x7d6: @ WaitForAnimEnd()
0x7d7: Pop(0)
0x7d8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7d9: IF (Stack[-1] == 0) GOTO 0x7db; Pop(1)

0x7da: GOTO 0x7e0

0x7db: Push("all")
0x7dc: Push("idle")
0x7dd: @ PlayAnimation(Stack[-2], Stack[-1])
0x7de: Pop(2)
0x7df: GOTO 0x7d6

0x7e0: Return(); Pop(0)

0x7e1: PushEmpty()
0x7e2: PushEmpty(bool)
0x7e3: Call2 0x1357

0x7e4: Pop(0)
0x7e5: Pop(1); Push((bool) Stack[-1] == 0)
0x7e6: IF (Stack[-1] == 0) GOTO 0x7e8; Pop(1)

0x7e7: Return(); Pop(0)

0x7e8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x7e9: IF (Stack[-1] == 0) GOTO 0x7eb; Pop(1)

0x7ea: Return(); Pop(0)

0x7eb: PushEmpty(string, bool)
0x7ec: Stack[-2] = Stack[-3]
0x7ed: Push("")
0x7ee: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f2; Pop(1)

0x7f0: Stack[-1] = (bool) 0
0x7f1: GOTO 0x7f3

0x7f2: Stack[-1] = (bool) 1
0x7f3: Call2 0x1282

0x7f4: Pop(2)
0x7f5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x7f6: Return(); Pop(0)

0x7f7: PushEmpty()
0x7f8: Push((int) 1)
0x7f9: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0x7fa: PushEmpty()
0x7fb: Call2 0x12a0

0x7fc: Pop(0)
0x7fd: Push((int) 23048)
0x7fe: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7ff: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x800: PushEmpty(object, object)
0x801: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x802: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x803: Call2 0x13bd

0x804: Pop(2)
0x805: PushEmpty(object, object)
0x806: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x807: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x808: Call2 0x143d

0x809: Pop(2)
0x80a: Push((int) 23050)
0x80b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x80c: IF (Stack[-1] == 0) GOTO 0x817; Pop(1)

0x80d: PushEmpty(object, object)
0x80e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x80f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x810: Call2 0x13bd

0x811: Pop(2)
0x812: PushEmpty(object, object)
0x813: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x814: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x815: Call2 0x143d

0x816: Pop(2)
0x817: Push((int) 23057)
0x818: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x819: IF (Stack[-1] == 0) GOTO 0x81f; Pop(1)

0x81a: PushEmpty(object, object)
0x81b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x81c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x81d: Call2 0x13dc

0x81e: Pop(2)
0x81f: Push((int) 23752)
0x820: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x821: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x822: PushEmpty(object, object)
0x823: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x824: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x825: Call2 0x13dc

0x826: Pop(2)
0x827: Push((int) 23042)
0x828: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x829: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x82a: PushEmpty(bool)
0x82b: Stack[-1] = (bool) 0
0x82c: PushEmpty(bool, object)
0x82d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82e: Call2 0x14c7

0x82f: Pop(1)
0x830: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x831: PushEmpty(bool, object)
0x832: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x833: Call2 0x14f6

0x834: Pop(1)
0x835: IF (Stack[-1] == 0) GOTO 0x837; Pop(1)

0x836: Stack[-1] = (bool) 1
0x837: IF (Stack[-1] == 0) GOTO 0x856; Pop(1)

0x838: PushEmpty(object, object)
0x839: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x83a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x83b: Call2 0x13b7

0x83c: Pop(2)
0x83d: PushEmpty(string)
0x83e: Stack[-1] = "Smile"
0x83f: Call2 0x7e1

0x840: Pop(1)
0x841: Push((int) 521870)
0x842: @@ SetMessage(Stack[-1])
0x843: Pop(1)
0x844: @@ ClearReplies()
0x845: Pop(0)
0x846: Push((int) 522575)
0x847: Push((int) 23755)
0x848: Push((int) 23754)
0x849: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84a: Pop(3)
0x84b: Push((int) 522581)
0x84c: Push((int) 23755)
0x84d: Push((int) 23760)
0x84e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84f: Pop(3)
0x850: Push((int) 522586)
0x851: Push((int) 23047)
0x852: Push((int) 23767)
0x853: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x854: Pop(3)
0x855: Return(); Pop(0)

0x856: PushEmpty(string)
0x857: Stack[-1] = "Neutral"
0x858: Call2 0x7e1

0x859: Pop(1)
0x85a: Push((int) 521873)
0x85b: @@ SetMessage(Stack[-1])
0x85c: Pop(1)
0x85d: @@ ClearReplies()
0x85e: Pop(0)
0x85f: PushEmpty(bool, object)
0x860: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x861: Call2 0x14f6

0x862: Pop(1)
0x863: IF (Stack[-1] == 0) GOTO 0x869; Pop(1)

0x864: Push((int) 521874)
0x865: Push((int) 23049)
0x866: Push((int) 23046)
0x867: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x868: Pop(3)
0x869: PushEmpty(bool, object)
0x86a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x86b: Call2 0x14df

0x86c: Pop(1)
0x86d: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x86e: Push((int) 521886)
0x86f: Push((int) 23059)
0x870: Push((int) 23058)
0x871: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x872: Pop(3)
0x873: PushEmpty(bool)
0x874: Stack[-1] = (bool) 0
0x875: PushEmpty(bool, object)
0x876: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x877: Call2 0x14d3

0x878: Pop(1)
0x879: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87a: PushEmpty(bool, object)
0x87b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x87c: Call2 0x1532

0x87d: Pop(1)
0x87e: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x87f: Stack[-1] = (bool) 1
0x880: IF (Stack[-1] == 0) GOTO 0x886; Pop(1)

0x881: Push((int) 521883)
0x882: Push((int) 23744)
0x883: Push((int) 23055)
0x884: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x885: Pop(3)
0x886: Push((int) 521879)
0x887: Push((int) -1)
0x888: Push((int) 23051)
0x889: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x88a: Pop(3)
0x88b: Return(); Pop(0)

0x88c: Push((int) 23744)
0x88d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x88e: IF (Stack[-1] == 0) GOTO 0x89e; Pop(1)

0x88f: PushEmpty(string)
0x890: Stack[-1] = "Neutral"
0x891: Call2 0x7e1

0x892: Pop(1)
0x893: Push((int) 522565)
0x894: @@ SetMessage(Stack[-1])
0x895: Pop(1)
0x896: @@ ClearReplies()
0x897: Pop(0)
0x898: Push((int) 522566)
0x899: Push((int) 23635)
0x89a: Push((int) 23745)
0x89b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89c: Pop(3)
0x89d: Return(); Pop(0)

0x89e: Push((int) 23635)
0x89f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8b0; Pop(1)

0x8a1: PushEmpty(string)
0x8a2: Stack[-1] = "Oracle"
0x8a3: Call2 0x7e1

0x8a4: Pop(1)
0x8a5: Push((int) 522462)
0x8a6: @@ SetMessage(Stack[-1])
0x8a7: Pop(1)
0x8a8: @@ ClearReplies()
0x8a9: Pop(0)
0x8aa: Push((int) 522463)
0x8ab: Push((int) 23637)
0x8ac: Push((int) 23636)
0x8ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8ae: Pop(3)
0x8af: Return(); Pop(0)

0x8b0: Push((int) 23637)
0x8b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b2: IF (Stack[-1] == 0) GOTO 0x8c2; Pop(1)

0x8b3: PushEmpty(string)
0x8b4: Stack[-1] = "Oracle"
0x8b5: Call2 0x7e1

0x8b6: Pop(1)
0x8b7: Push((int) 522464)
0x8b8: @@ SetMessage(Stack[-1])
0x8b9: Pop(1)
0x8ba: @@ ClearReplies()
0x8bb: Pop(0)
0x8bc: Push((int) 522567)
0x8bd: Push((int) 23747)
0x8be: Push((int) 23746)
0x8bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c0: Pop(3)
0x8c1: Return(); Pop(0)

0x8c2: Push((int) 23747)
0x8c3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c4: IF (Stack[-1] == 0) GOTO 0x8d9; Pop(1)

0x8c5: PushEmpty(string)
0x8c6: Stack[-1] = "Smile"
0x8c7: Call2 0x7e1

0x8c8: Pop(1)
0x8c9: Push((int) 522568)
0x8ca: @@ SetMessage(Stack[-1])
0x8cb: Pop(1)
0x8cc: @@ ClearReplies()
0x8cd: Pop(0)
0x8ce: Push((int) 522465)
0x8cf: Push((int) 23639)
0x8d0: Push((int) 23638)
0x8d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d2: Pop(3)
0x8d3: Push((int) 522569)
0x8d4: Push((int) 23749)
0x8d5: Push((int) 23748)
0x8d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d7: Pop(3)
0x8d8: Return(); Pop(0)

0x8d9: Push((int) 23749)
0x8da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8db: IF (Stack[-1] == 0) GOTO 0x8eb; Pop(1)

0x8dc: PushEmpty(string)
0x8dd: Stack[-1] = "Smile"
0x8de: Call2 0x7e1

0x8df: Pop(1)
0x8e0: Push((int) 522570)
0x8e1: @@ SetMessage(Stack[-1])
0x8e2: Pop(1)
0x8e3: @@ ClearReplies()
0x8e4: Pop(0)
0x8e5: Push((int) 522571)
0x8e6: Push((int) 23751)
0x8e7: Push((int) 23750)
0x8e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e9: Pop(3)
0x8ea: Return(); Pop(0)

0x8eb: Push((int) 23751)
0x8ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ed: IF (Stack[-1] == 0) GOTO 0x8fd; Pop(1)

0x8ee: PushEmpty(string)
0x8ef: Stack[-1] = "Neutral"
0x8f0: Call2 0x7e1

0x8f1: Pop(1)
0x8f2: Push((int) 522572)
0x8f3: @@ SetMessage(Stack[-1])
0x8f4: Pop(1)
0x8f5: @@ ClearReplies()
0x8f6: Pop(0)
0x8f7: Push((int) 522573)
0x8f8: Push((int) -1)
0x8f9: Push((int) 23752)
0x8fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fb: Pop(3)
0x8fc: Return(); Pop(0)

0x8fd: Push((int) 23639)
0x8fe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ff: IF (Stack[-1] == 0) GOTO 0x90f; Pop(1)

0x900: PushEmpty(string)
0x901: Stack[-1] = "Neutral"
0x902: Call2 0x7e1

0x903: Pop(1)
0x904: Push((int) 522466)
0x905: @@ SetMessage(Stack[-1])
0x906: Pop(1)
0x907: @@ ClearReplies()
0x908: Pop(0)
0x909: Push((int) 521885)
0x90a: Push((int) -1)
0x90b: Push((int) 23057)
0x90c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90d: Pop(3)
0x90e: Return(); Pop(0)

0x90f: Push((int) 23059)
0x910: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x911: IF (Stack[-1] == 0) GOTO 0x926; Pop(1)

0x912: PushEmpty(string)
0x913: Stack[-1] = "Smile"
0x914: Call2 0x7e1

0x915: Pop(1)
0x916: Push((int) 521887)
0x917: @@ SetMessage(Stack[-1])
0x918: Pop(1)
0x919: @@ ClearReplies()
0x91a: Pop(0)
0x91b: Push((int) 521888)
0x91c: Push((int) -1)
0x91d: Push((int) 23060)
0x91e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91f: Pop(3)
0x920: Push((int) 522560)
0x921: Push((int) 23740)
0x922: Push((int) 23739)
0x923: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x924: Pop(3)
0x925: Return(); Pop(0)

0x926: Push((int) 23740)
0x927: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x928: IF (Stack[-1] == 0) GOTO 0x938; Pop(1)

0x929: PushEmpty(string)
0x92a: Stack[-1] = "Smile"
0x92b: Call2 0x7e1

0x92c: Pop(1)
0x92d: Push((int) 522561)
0x92e: @@ SetMessage(Stack[-1])
0x92f: Pop(1)
0x930: @@ ClearReplies()
0x931: Pop(0)
0x932: Push((int) 522562)
0x933: Push((int) 23742)
0x934: Push((int) 23741)
0x935: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x936: Pop(3)
0x937: Return(); Pop(0)

0x938: Push((int) 23742)
0x939: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x93a: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x93b: PushEmpty(string)
0x93c: Stack[-1] = "Smile"
0x93d: Call2 0x7e1

0x93e: Pop(1)
0x93f: Push((int) 522563)
0x940: @@ SetMessage(Stack[-1])
0x941: Pop(1)
0x942: @@ ClearReplies()
0x943: Pop(0)
0x944: Push((int) 522564)
0x945: Push((int) -1)
0x946: Push((int) 23743)
0x947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: Return(); Pop(0)

0x94a: Push((int) 23049)
0x94b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x94d: PushEmpty(string)
0x94e: Stack[-1] = "Neutral"
0x94f: Call2 0x7e1

0x950: Pop(1)
0x951: Push((int) 521877)
0x952: @@ SetMessage(Stack[-1])
0x953: Pop(1)
0x954: @@ ClearReplies()
0x955: Pop(0)
0x956: Push((int) 521878)
0x957: Push((int) -1)
0x958: Push((int) 23050)
0x959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: Return(); Pop(0)

0x95c: Push((int) 23755)
0x95d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x95e: IF (Stack[-1] == 0) GOTO 0x96e; Pop(1)

0x95f: PushEmpty(string)
0x960: Stack[-1] = "Smile"
0x961: Call2 0x7e1

0x962: Pop(1)
0x963: Push((int) 522576)
0x964: @@ SetMessage(Stack[-1])
0x965: Pop(1)
0x966: @@ ClearReplies()
0x967: Pop(0)
0x968: Push((int) 522577)
0x969: Push((int) 23757)
0x96a: Push((int) 23756)
0x96b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x96c: Pop(3)
0x96d: Return(); Pop(0)

0x96e: Push((int) 23757)
0x96f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x970: IF (Stack[-1] == 0) GOTO 0x985; Pop(1)

0x971: PushEmpty(string)
0x972: Stack[-1] = "Smile"
0x973: Call2 0x7e1

0x974: Pop(1)
0x975: Push((int) 522578)
0x976: @@ SetMessage(Stack[-1])
0x977: Pop(1)
0x978: @@ ClearReplies()
0x979: Pop(0)
0x97a: Push((int) 521871)
0x97b: Push((int) 23047)
0x97c: Push((int) 23043)
0x97d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97e: Pop(3)
0x97f: Push((int) 522584)
0x980: Push((int) 23047)
0x981: Push((int) 23765)
0x982: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x983: Pop(3)
0x984: Return(); Pop(0)

0x985: Push((int) 23047)
0x986: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x987: IF (Stack[-1] == 0) GOTO 0x9a1; Pop(1)

0x988: PushEmpty(string)
0x989: Stack[-1] = "Refusal"
0x98a: Call2 0x7e1

0x98b: Pop(1)
0x98c: Push((int) 521875)
0x98d: @@ SetMessage(Stack[-1])
0x98e: Pop(1)
0x98f: @@ ClearReplies()
0x990: Pop(0)
0x991: Push((int) 522579)
0x992: Push((int) 23759)
0x993: Push((int) 23758)
0x994: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x995: Pop(3)
0x996: Push((int) 521872)
0x997: Push((int) 23771)
0x998: Push((int) 23044)
0x999: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99a: Pop(3)
0x99b: Push((int) 522591)
0x99c: Push((int) 23777)
0x99d: Push((int) 23776)
0x99e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99f: Pop(3)
0x9a0: Return(); Pop(0)

0x9a1: Push((int) 23777)
0x9a2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9a3: IF (Stack[-1] == 0) GOTO 0x9b3; Pop(1)

0x9a4: PushEmpty(string)
0x9a5: Stack[-1] = "Refusal"
0x9a6: Call2 0x7e1

0x9a7: Pop(1)
0x9a8: Push((int) 522592)
0x9a9: @@ SetMessage(Stack[-1])
0x9aa: Pop(1)
0x9ab: @@ ClearReplies()
0x9ac: Pop(0)
0x9ad: Push((int) 522593)
0x9ae: Push((int) 23759)
0x9af: Push((int) 23778)
0x9b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9b1: Pop(3)
0x9b2: Return(); Pop(0)

0x9b3: Push((int) 23771)
0x9b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9b5: IF (Stack[-1] == 0) GOTO 0x9ca; Pop(1)

0x9b6: PushEmpty(string)
0x9b7: Stack[-1] = "Refusal"
0x9b8: Call2 0x7e1

0x9b9: Pop(1)
0x9ba: Push((int) 522587)
0x9bb: @@ SetMessage(Stack[-1])
0x9bc: Pop(1)
0x9bd: @@ ClearReplies()
0x9be: Pop(0)
0x9bf: Push((int) 522588)
0x9c0: Push((int) 23773)
0x9c1: Push((int) 23772)
0x9c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c3: Pop(3)
0x9c4: Push((int) 522590)
0x9c5: Push((int) 23759)
0x9c6: Push((int) 23774)
0x9c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c8: Pop(3)
0x9c9: Return(); Pop(0)

0x9ca: Push((int) 23773)
0x9cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9cc: IF (Stack[-1] == 0) GOTO 0x9dc; Pop(1)

0x9cd: PushEmpty(string)
0x9ce: Stack[-1] = "Refusal"
0x9cf: Call2 0x7e1

0x9d0: Pop(1)
0x9d1: Push((int) 522589)
0x9d2: @@ SetMessage(Stack[-1])
0x9d3: Pop(1)
0x9d4: @@ ClearReplies()
0x9d5: Pop(0)
0x9d6: Push((int) 532185)
0x9d7: Push((int) 23759)
0x9d8: Push((int) 33601)
0x9d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9da: Pop(3)
0x9db: Return(); Pop(0)

0x9dc: Push((int) 23759)
0x9dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9de: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9df: PushEmpty(string)
0x9e0: Stack[-1] = "Refusal"
0x9e1: Call2 0x7e1

0x9e2: Pop(1)
0x9e3: Push((int) 522580)
0x9e4: @@ SetMessage(Stack[-1])
0x9e5: Pop(1)
0x9e6: @@ ClearReplies()
0x9e7: Pop(0)
0x9e8: Push((int) 522594)
0x9e9: Push((int) 23781)
0x9ea: Push((int) 23780)
0x9eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ec: Pop(3)
0x9ed: Push((int) 522582)
0x9ee: Push((int) -1)
0x9ef: Push((int) 23763)
0x9f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9f1: Pop(3)
0x9f2: Return(); Pop(0)

0x9f3: Push((int) 23781)
0x9f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f5: IF (Stack[-1] == 0) GOTO 0xa0a; Pop(1)

0x9f6: PushEmpty(string)
0x9f7: Stack[-1] = "Refusal"
0x9f8: Call2 0x7e1

0x9f9: Pop(1)
0x9fa: Push((int) 522595)
0x9fb: @@ SetMessage(Stack[-1])
0x9fc: Pop(1)
0x9fd: @@ ClearReplies()
0x9fe: Pop(0)
0x9ff: Push((int) 521876)
0xa00: Push((int) -1)
0xa01: Push((int) 23048)
0xa02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa03: Pop(3)
0xa04: Push((int) 522596)
0xa05: Push((int) -1)
0xa06: Push((int) 23782)
0xa07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa08: Pop(3)
0xa09: Return(); Pop(0)

0xa0a: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa0b: PushEmpty(bool)
0xa0c: Call2 0x1357

0xa0d: Pop(0)
0xa0e: IF (Stack[-1] == 0) GOTO 0xa12; Pop(1)

0xa0f: @ lshStopAnimation()
0xa10: Pop(0)
0xa11: GOTO 0xa14

0xa12: @ StopAnimation()
0xa13: Pop(0)
0xa14: Return(); Pop(0)

0xa15: GOTO 0x7f8

0xa16: Return(); Pop(0)

0xa17: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa18: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa19: PushEmpty(bool, object, float)
0xa1a: Stack[-2] = Stack[-12]
0xa1b: Stack[-1] = (float) 130.0
0xa1c: Call2 0x1191

0xa1d: Pop(2)
0xa1e: Pop(1); Push((bool) Stack[-1] == 0)
0xa1f: IF (Stack[-1] == 0) GOTO 0xa22; Pop(1)

0xa20: Stack[-10] = (int) -2
0xa21: Return(); Pop(8)

0xa22: @ CreateDialog(Stack[-4])
0xa23: Pop(0)
0xa24: PushEmpty(int)
0xa25: Call2 0x1351

0xa26: Pop(0)
0xa27: @@ SetNPCName(Stack[-1])
0xa28: Pop(1)
0xa29: PushEmpty(int)
0xa2a: Call2 0x134f

0xa2b: Pop(0)
0xa2c: @@ SetNPCDescription(Stack[-1])
0xa2d: Pop(1)
0xa2e: PushEmpty(string)
0xa2f: Call2 0x1353

0xa30: Pop(0)
0xa31: @@ SetPhoto(Stack[-1])
0xa32: Pop(1)
0xa33: PushEmpty(string)
0xa34: Call2 0x1355

0xa35: Pop(0)
0xa36: @@ SetPhoto2(Stack[-1])
0xa37: Pop(1)
0xa38: PushEmpty(int)
0xa39: Call2 0x1669

0xa3a: Pop(0)
0xa3b: @@ SetPlayerName(Stack[-1])
0xa3c: Pop(1)
0xa3d: Stack[-2] = (int) -1
0xa3e: @ IsOverrideActive(Stack[-3])
0xa3f: Pop(0)
0xa40: Push(Stack[-3])
0xa41: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa42: Stack[-10] = (int) -2
0xa43: Return(); Pop(8)

0xa44: @ DoDialog(Stack[-4])
0xa45: Pop(0)
0xa46: PushEmpty(bool, object)
0xa47: PushEmpty(object)
0xa48: Call2 0x12a7

0xa49: Stack[-2] = Stack[-1]
0xa4a: Pop(1)
0xa4b: Call2 0x11e8

0xa4c: Pop(2)
0xa4d: PushEmpty(object, object)
0xa4e: Stack[-2] = Stack[-11]
0xa4f: Stack[-1] = Stack[-6]
0xa50: Push(-2, 4); TaskCall(9)
0xa51: Call2 0xa68

0xa52: Pop(-2, 4); TaskReturn
0xa53: Pop(2)
0xa54: @@ IsDialogEnd(Stack[-1])
0xa55: Pop(0)
0xa56: Pop(0); Push((bool) Stack[-1] == 0)
0xa57: IF (Stack[-1] == 0) GOTO 0xa5d; Pop(1)

0xa58: @ sync()
0xa59: Pop(0)
0xa5a: @@ IsDialogEnd(Stack[-1])
0xa5b: Pop(0)
0xa5c: GOTO 0xa56

0xa5d: PushEmpty(object)
0xa5e: Stack[-1] = Stack[-10]
0xa5f: Call2 0x11d6

0xa60: Pop(1)
0xa61: @ StopDialog(Stack[-4])
0xa62: Pop(0)
0xa63: @@ GetReturnValue(Stack[-2])
0xa64: Pop(0)
0xa65: Stack[-10] = Stack[-2]
0xa66: Return(); Pop(8)

0xa67: Stack[-4] = 0
0xa68: PushEmpty()
0xa69: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa6a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa6b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa6c: Push((int) 1)
0xa6d: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xa6e: PushEmpty(bool, object)
0xa6f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa70: Call2 0x1502

0xa71: Pop(1)
0xa72: IF (Stack[-1] == 0) GOTO 0xa91; Pop(1)

0xa73: PushEmpty(object, object)
0xa74: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa76: Call2 0x13e5

0xa77: Pop(2)
0xa78: PushEmpty(string)
0xa79: Stack[-1] = "Neutral"
0xa7a: Call2 0xaf2

0xa7b: Pop(1)
0xa7c: Push((int) 521993)
0xa7d: @@ SetMessage(Stack[-1])
0xa7e: Pop(1)
0xa7f: @@ ClearReplies()
0xa80: Pop(0)
0xa81: Push((int) 521994)
0xa82: Push((int) 23168)
0xa83: Push((int) 23164)
0xa84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa85: Pop(3)
0xa86: PushEmpty(bool, object)
0xa87: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa88: Call2 0x1549

0xa89: Pop(1)
0xa8a: IF (Stack[-1] == 0) GOTO 0xa90; Pop(1)

0xa8b: Push((int) 521996)
0xa8c: Push((int) 23168)
0xa8d: Push((int) 23166)
0xa8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8f: Pop(3)
0xa90: GOTO 0xad4

0xa91: PushEmpty(bool, object)
0xa92: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa93: Call2 0x1526

0xa94: Pop(1)
0xa95: IF (Stack[-1] == 0) GOTO 0xaaf; Pop(1)

0xa96: PushEmpty(string)
0xa97: Stack[-1] = "Smile"
0xa98: Call2 0xaf2

0xa99: Pop(1)
0xa9a: Push((int) 522051)
0xa9b: @@ SetMessage(Stack[-1])
0xa9c: Pop(1)
0xa9d: @@ ClearReplies()
0xa9e: Pop(0)
0xa9f: Push((int) 523621)
0xaa0: Push((int) 24861)
0xaa1: Push((int) 24860)
0xaa2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa3: Pop(3)
0xaa4: Push((int) 523612)
0xaa5: Push((int) 24851)
0xaa6: Push((int) 24849)
0xaa7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa8: Pop(3)
0xaa9: Push((int) 523613)
0xaaa: Push((int) 24851)
0xaab: Push((int) 24850)
0xaac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaad: Pop(3)
0xaae: GOTO 0xad4

0xaaf: PushEmpty(string)
0xab0: Stack[-1] = "Neutral"
0xab1: Call2 0xaf2

0xab2: Pop(1)
0xab3: Push((int) 521997)
0xab4: @@ SetMessage(Stack[-1])
0xab5: Pop(1)
0xab6: @@ ClearReplies()
0xab7: Pop(0)
0xab8: PushEmpty(bool, object)
0xab9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xaba: Call2 0x150e

0xabb: Pop(1)
0xabc: IF (Stack[-1] == 0) GOTO 0xac2; Pop(1)

0xabd: Push((int) 522000)
0xabe: Push((int) 24859)
0xabf: Push((int) 23170)
0xac0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac1: Pop(3)
0xac2: PushEmpty(bool, object)
0xac3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac4: Call2 0x151a

0xac5: Pop(1)
0xac6: IF (Stack[-1] == 0) GOTO 0xacc; Pop(1)

0xac7: Push((int) 522003)
0xac8: Push((int) 23226)
0xac9: Push((int) 23173)
0xaca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacb: Pop(3)
0xacc: Push((int) 522004)
0xacd: Push((int) -1)
0xace: Push((int) 23174)
0xacf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad0: Pop(3)
0xad1: GOTO 0xad4

0xad2: Return(); Pop(0)

0xad3: GOTO 0xa6c

0xad4: PushEmpty(bool)
0xad5: Call2 0x1357

0xad6: Pop(0)
0xad7: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xad8: @ lshWaitForAnimEnd()
0xad9: Pop(0)
0xada: Push( Stack[3 + Tasks[-1].StackPointer] )
0xadb: IF (Stack[-1] == 0) GOTO 0xadd; Pop(1)

0xadc: GOTO 0xae2

0xadd: PushEmpty(string)
0xade: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xadf: Call2 0x1272

0xae0: Pop(1)
0xae1: GOTO 0xad8

0xae2: GOTO 0xaf1

0xae3: Push("all")
0xae4: Push("idle")
0xae5: @ PlayAnimation(Stack[-2], Stack[-1])
0xae6: Pop(2)
0xae7: @ WaitForAnimEnd()
0xae8: Pop(0)
0xae9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaea: IF (Stack[-1] == 0) GOTO 0xaec; Pop(1)

0xaeb: GOTO 0xaf1

0xaec: Push("all")
0xaed: Push("idle")
0xaee: @ PlayAnimation(Stack[-2], Stack[-1])
0xaef: Pop(2)
0xaf0: GOTO 0xae7

0xaf1: Return(); Pop(0)

0xaf2: PushEmpty()
0xaf3: PushEmpty(bool)
0xaf4: Call2 0x1357

0xaf5: Pop(0)
0xaf6: Pop(1); Push((bool) Stack[-1] == 0)
0xaf7: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xaf8: Return(); Pop(0)

0xaf9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xafa: IF (Stack[-1] == 0) GOTO 0xafc; Pop(1)

0xafb: Return(); Pop(0)

0xafc: PushEmpty(string, bool)
0xafd: Stack[-2] = Stack[-3]
0xafe: Push("")
0xaff: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb00: IF (Stack[-1] == 0) GOTO 0xb03; Pop(1)

0xb01: Stack[-1] = (bool) 0
0xb02: GOTO 0xb04

0xb03: Stack[-1] = (bool) 1
0xb04: Call2 0x1282

0xb05: Pop(2)
0xb06: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb07: Return(); Pop(0)

0xb08: PushEmpty()
0xb09: Push((int) 1)
0xb0a: IF (Stack[-1] == 0) GOTO 0xd48; Pop(1)

0xb0b: PushEmpty()
0xb0c: Call2 0x12a0

0xb0d: Pop(0)
0xb0e: Push((int) 23169)
0xb0f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb10: IF (Stack[-1] == 0) GOTO 0xb20; Pop(1)

0xb11: PushEmpty(object, object)
0xb12: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb13: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb14: Call2 0x13eb

0xb15: Pop(2)
0xb16: PushEmpty(object, object)
0xb17: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb18: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb19: Call2 0x145e

0xb1a: Pop(2)
0xb1b: PushEmpty(object, object)
0xb1c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb1e: Call2 0x146f

0xb1f: Pop(2)
0xb20: Push((int) 24875)
0xb21: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb22: IF (Stack[-1] == 0) GOTO 0xb32; Pop(1)

0xb23: PushEmpty(object, object)
0xb24: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb25: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb26: Call2 0x13eb

0xb27: Pop(2)
0xb28: PushEmpty(object, object)
0xb29: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2b: Call2 0x145e

0xb2c: Pop(2)
0xb2d: PushEmpty(object, object)
0xb2e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb30: Call2 0x146f

0xb31: Pop(2)
0xb32: Push((int) 23225)
0xb33: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb34: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb35: PushEmpty(object, object)
0xb36: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb37: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb38: Call2 0x13fc

0xb39: Pop(2)
0xb3a: Push((int) 24857)
0xb3b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb3c: IF (Stack[-1] == 0) GOTO 0xb42; Pop(1)

0xb3d: PushEmpty(object, object)
0xb3e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb40: Call2 0x13fc

0xb41: Pop(2)
0xb42: Push((int) 24858)
0xb43: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb44: IF (Stack[-1] == 0) GOTO 0xb4a; Pop(1)

0xb45: PushEmpty(object, object)
0xb46: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb47: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb48: Call2 0x13fc

0xb49: Pop(2)
0xb4a: Push((int) 24882)
0xb4b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb4c: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb4d: PushEmpty(object, object)
0xb4e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb4f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb50: Call2 0x13eb

0xb51: Pop(2)
0xb52: Push((int) 24885)
0xb53: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb54: IF (Stack[-1] == 0) GOTO 0xb5a; Pop(1)

0xb55: PushEmpty(object, object)
0xb56: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb57: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb58: Call2 0x13eb

0xb59: Pop(2)
0xb5a: Push((int) 23227)
0xb5b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb5c: IF (Stack[-1] == 0) GOTO 0xb67; Pop(1)

0xb5d: PushEmpty(object, object)
0xb5e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb5f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb60: Call2 0x13fc

0xb61: Pop(2)
0xb62: PushEmpty(object, object)
0xb63: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb64: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb65: Call2 0x1421

0xb66: Pop(2)
0xb67: Push((int) 24844)
0xb68: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb69: IF (Stack[-1] == 0) GOTO 0xb74; Pop(1)

0xb6a: PushEmpty(object, object)
0xb6b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb6c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb6d: Call2 0x13fc

0xb6e: Pop(2)
0xb6f: PushEmpty(object, object)
0xb70: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb71: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb72: Call2 0x1421

0xb73: Pop(2)
0xb74: Push((int) 24846)
0xb75: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb76: IF (Stack[-1] == 0) GOTO 0xb81; Pop(1)

0xb77: PushEmpty(object, object)
0xb78: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb79: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7a: Call2 0x13fc

0xb7b: Pop(2)
0xb7c: PushEmpty(object, object)
0xb7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb7f: Call2 0x1421

0xb80: Pop(2)
0xb81: Push((int) 23163)
0xb82: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb83: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xb84: PushEmpty(bool, object)
0xb85: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb86: Call2 0x1502

0xb87: Pop(1)
0xb88: IF (Stack[-1] == 0) GOTO 0xba7; Pop(1)

0xb89: PushEmpty(object, object)
0xb8a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb8b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8c: Call2 0x13e5

0xb8d: Pop(2)
0xb8e: PushEmpty(string)
0xb8f: Stack[-1] = "Neutral"
0xb90: Call2 0xaf2

0xb91: Pop(1)
0xb92: Push((int) 521993)
0xb93: @@ SetMessage(Stack[-1])
0xb94: Pop(1)
0xb95: @@ ClearReplies()
0xb96: Pop(0)
0xb97: Push((int) 521994)
0xb98: Push((int) 23168)
0xb99: Push((int) 23164)
0xb9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9b: Pop(3)
0xb9c: PushEmpty(bool, object)
0xb9d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb9e: Call2 0x1549

0xb9f: Pop(1)
0xba0: IF (Stack[-1] == 0) GOTO 0xba6; Pop(1)

0xba1: Push((int) 521996)
0xba2: Push((int) 23168)
0xba3: Push((int) 23166)
0xba4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba5: Pop(3)
0xba6: Return(); Pop(0)

0xba7: PushEmpty(bool, object)
0xba8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xba9: Call2 0x1526

0xbaa: Pop(1)
0xbab: IF (Stack[-1] == 0) GOTO 0xbc5; Pop(1)

0xbac: PushEmpty(string)
0xbad: Stack[-1] = "Smile"
0xbae: Call2 0xaf2

0xbaf: Pop(1)
0xbb0: Push((int) 522051)
0xbb1: @@ SetMessage(Stack[-1])
0xbb2: Pop(1)
0xbb3: @@ ClearReplies()
0xbb4: Pop(0)
0xbb5: Push((int) 523621)
0xbb6: Push((int) 24861)
0xbb7: Push((int) 24860)
0xbb8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb9: Pop(3)
0xbba: Push((int) 523612)
0xbbb: Push((int) 24851)
0xbbc: Push((int) 24849)
0xbbd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbe: Pop(3)
0xbbf: Push((int) 523613)
0xbc0: Push((int) 24851)
0xbc1: Push((int) 24850)
0xbc2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc3: Pop(3)
0xbc4: Return(); Pop(0)

0xbc5: PushEmpty(string)
0xbc6: Stack[-1] = "Neutral"
0xbc7: Call2 0xaf2

0xbc8: Pop(1)
0xbc9: Push((int) 521997)
0xbca: @@ SetMessage(Stack[-1])
0xbcb: Pop(1)
0xbcc: @@ ClearReplies()
0xbcd: Pop(0)
0xbce: PushEmpty(bool, object)
0xbcf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbd0: Call2 0x150e

0xbd1: Pop(1)
0xbd2: IF (Stack[-1] == 0) GOTO 0xbd8; Pop(1)

0xbd3: Push((int) 522000)
0xbd4: Push((int) 24859)
0xbd5: Push((int) 23170)
0xbd6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbd7: Pop(3)
0xbd8: PushEmpty(bool, object)
0xbd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbda: Call2 0x151a

0xbdb: Pop(1)
0xbdc: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbdd: Push((int) 522003)
0xbde: Push((int) 23226)
0xbdf: Push((int) 23173)
0xbe0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe1: Pop(3)
0xbe2: Push((int) 522004)
0xbe3: Push((int) -1)
0xbe4: Push((int) 23174)
0xbe5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe6: Pop(3)
0xbe7: Return(); Pop(0)

0xbe8: Push((int) 23226)
0xbe9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbea: IF (Stack[-1] == 0) GOTO 0xc04; Pop(1)

0xbeb: PushEmpty(string)
0xbec: Stack[-1] = "Smile"
0xbed: Call2 0xaf2

0xbee: Pop(1)
0xbef: Push((int) 522053)
0xbf0: @@ SetMessage(Stack[-1])
0xbf1: Pop(1)
0xbf2: @@ ClearReplies()
0xbf3: Pop(0)
0xbf4: Push((int) 522054)
0xbf5: Push((int) -1)
0xbf6: Push((int) 23227)
0xbf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf8: Pop(3)
0xbf9: Push((int) 523600)
0xbfa: Push((int) 24837)
0xbfb: Push((int) 24835)
0xbfc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfd: Pop(3)
0xbfe: Push((int) 523603)
0xbff: Push((int) 24839)
0xc00: Push((int) 24838)
0xc01: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc02: Pop(3)
0xc03: Return(); Pop(0)

0xc04: Push((int) 24839)
0xc05: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc06: IF (Stack[-1] == 0) GOTO 0xc1b; Pop(1)

0xc07: PushEmpty(string)
0xc08: Stack[-1] = "Smile"
0xc09: Call2 0xaf2

0xc0a: Pop(1)
0xc0b: Push((int) 523604)
0xc0c: @@ SetMessage(Stack[-1])
0xc0d: Pop(1)
0xc0e: @@ ClearReplies()
0xc0f: Pop(0)
0xc10: Push((int) 523605)
0xc11: Push((int) 24837)
0xc12: Push((int) 24840)
0xc13: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc14: Pop(3)
0xc15: Push((int) 523606)
0xc16: Push((int) 24842)
0xc17: Push((int) 24841)
0xc18: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc19: Pop(3)
0xc1a: Return(); Pop(0)

0xc1b: Push((int) 24842)
0xc1c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc1d: IF (Stack[-1] == 0) GOTO 0xc32; Pop(1)

0xc1e: PushEmpty(string)
0xc1f: Stack[-1] = "Smile"
0xc20: Call2 0xaf2

0xc21: Pop(1)
0xc22: Push((int) 523607)
0xc23: @@ SetMessage(Stack[-1])
0xc24: Pop(1)
0xc25: @@ ClearReplies()
0xc26: Pop(0)
0xc27: Push((int) 523610)
0xc28: Push((int) -1)
0xc29: Push((int) 24846)
0xc2a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc2b: Pop(3)
0xc2c: Push((int) 523611)
0xc2d: Push((int) 24837)
0xc2e: Push((int) 24847)
0xc2f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc30: Pop(3)
0xc31: Return(); Pop(0)

0xc32: Push((int) 24837)
0xc33: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc34: IF (Stack[-1] == 0) GOTO 0xc49; Pop(1)

0xc35: PushEmpty(string)
0xc36: Stack[-1] = "Smile"
0xc37: Call2 0xaf2

0xc38: Pop(1)
0xc39: Push((int) 523602)
0xc3a: @@ SetMessage(Stack[-1])
0xc3b: Pop(1)
0xc3c: @@ ClearReplies()
0xc3d: Pop(0)
0xc3e: Push((int) 523608)
0xc3f: Push((int) -1)
0xc40: Push((int) 24844)
0xc41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc42: Pop(3)
0xc43: Push((int) 523609)
0xc44: Push((int) -1)
0xc45: Push((int) 24845)
0xc46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc47: Pop(3)
0xc48: Return(); Pop(0)

0xc49: Push((int) 24859)
0xc4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc4b: IF (Stack[-1] == 0) GOTO 0xc5b; Pop(1)

0xc4c: PushEmpty(string)
0xc4d: Stack[-1] = "Oracle"
0xc4e: Call2 0xaf2

0xc4f: Pop(1)
0xc50: Push((int) 523620)
0xc51: @@ SetMessage(Stack[-1])
0xc52: Pop(1)
0xc53: @@ ClearReplies()
0xc54: Pop(0)
0xc55: Push((int) 523637)
0xc56: Push((int) 24881)
0xc57: Push((int) 24880)
0xc58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc59: Pop(3)
0xc5a: Return(); Pop(0)

0xc5b: Push((int) 24881)
0xc5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc5d: IF (Stack[-1] == 0) GOTO 0xc72; Pop(1)

0xc5e: PushEmpty(string)
0xc5f: Stack[-1] = "Neutral"
0xc60: Call2 0xaf2

0xc61: Pop(1)
0xc62: Push((int) 523638)
0xc63: @@ SetMessage(Stack[-1])
0xc64: Pop(1)
0xc65: @@ ClearReplies()
0xc66: Pop(0)
0xc67: Push((int) 523639)
0xc68: Push((int) -1)
0xc69: Push((int) 24882)
0xc6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc6b: Pop(3)
0xc6c: Push((int) 523640)
0xc6d: Push((int) 24884)
0xc6e: Push((int) 24883)
0xc6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc70: Pop(3)
0xc71: Return(); Pop(0)

0xc72: Push((int) 24884)
0xc73: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc74: IF (Stack[-1] == 0) GOTO 0xc84; Pop(1)

0xc75: PushEmpty(string)
0xc76: Stack[-1] = "Neutral"
0xc77: Call2 0xaf2

0xc78: Pop(1)
0xc79: Push((int) 523641)
0xc7a: @@ SetMessage(Stack[-1])
0xc7b: Pop(1)
0xc7c: @@ ClearReplies()
0xc7d: Pop(0)
0xc7e: Push((int) 523642)
0xc7f: Push((int) -1)
0xc80: Push((int) 24885)
0xc81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc82: Pop(3)
0xc83: Return(); Pop(0)

0xc84: Push((int) 24851)
0xc85: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc86: IF (Stack[-1] == 0) GOTO 0xc9b; Pop(1)

0xc87: PushEmpty(string)
0xc88: Stack[-1] = "Refusal"
0xc89: Call2 0xaf2

0xc8a: Pop(1)
0xc8b: Push((int) 523614)
0xc8c: @@ SetMessage(Stack[-1])
0xc8d: Pop(1)
0xc8e: @@ ClearReplies()
0xc8f: Pop(0)
0xc90: Push((int) 523615)
0xc91: Push((int) 24855)
0xc92: Push((int) 24853)
0xc93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc94: Pop(3)
0xc95: Push((int) 523616)
0xc96: Push((int) 24855)
0xc97: Push((int) 24854)
0xc98: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc99: Pop(3)
0xc9a: Return(); Pop(0)

0xc9b: Push((int) 24855)
0xc9c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc9d: IF (Stack[-1] == 0) GOTO 0xcb7; Pop(1)

0xc9e: PushEmpty(string)
0xc9f: Stack[-1] = "Refusal"
0xca0: Call2 0xaf2

0xca1: Pop(1)
0xca2: Push((int) 523617)
0xca3: @@ SetMessage(Stack[-1])
0xca4: Pop(1)
0xca5: @@ ClearReplies()
0xca6: Pop(0)
0xca7: Push((int) 522052)
0xca8: Push((int) -1)
0xca9: Push((int) 23225)
0xcaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcab: Pop(3)
0xcac: Push((int) 523618)
0xcad: Push((int) -1)
0xcae: Push((int) 24857)
0xcaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb0: Pop(3)
0xcb1: Push((int) 523619)
0xcb2: Push((int) -1)
0xcb3: Push((int) 24858)
0xcb4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcb5: Pop(3)
0xcb6: Return(); Pop(0)

0xcb7: Push((int) 24861)
0xcb8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb9: IF (Stack[-1] == 0) GOTO 0xcce; Pop(1)

0xcba: PushEmpty(string)
0xcbb: Stack[-1] = "Smile"
0xcbc: Call2 0xaf2

0xcbd: Pop(1)
0xcbe: Push((int) 523622)
0xcbf: @@ SetMessage(Stack[-1])
0xcc0: Pop(1)
0xcc1: @@ ClearReplies()
0xcc2: Pop(0)
0xcc3: Push((int) 523623)
0xcc4: Push((int) 24851)
0xcc5: Push((int) 24862)
0xcc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc7: Pop(3)
0xcc8: Push((int) 523624)
0xcc9: Push((int) 24851)
0xcca: Push((int) 24864)
0xccb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xccc: Pop(3)
0xccd: Return(); Pop(0)

0xcce: Push((int) 23168)
0xccf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcd0: IF (Stack[-1] == 0) GOTO 0xce5; Pop(1)

0xcd1: PushEmpty(string)
0xcd2: Stack[-1] = "Oracle"
0xcd3: Call2 0xaf2

0xcd4: Pop(1)
0xcd5: Push((int) 521998)
0xcd6: @@ SetMessage(Stack[-1])
0xcd7: Pop(1)
0xcd8: @@ ClearReplies()
0xcd9: Pop(0)
0xcda: Push((int) 523625)
0xcdb: Push((int) 24867)
0xcdc: Push((int) 24866)
0xcdd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcde: Pop(3)
0xcdf: Push((int) 523627)
0xce0: Push((int) 24869)
0xce1: Push((int) 24868)
0xce2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce3: Pop(3)
0xce4: Return(); Pop(0)

0xce5: Push((int) 24867)
0xce6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xce7: IF (Stack[-1] == 0) GOTO 0xcfc; Pop(1)

0xce8: PushEmpty(string)
0xce9: Stack[-1] = "Oracle"
0xcea: Call2 0xaf2

0xceb: Pop(1)
0xcec: Push((int) 523626)
0xced: @@ SetMessage(Stack[-1])
0xcee: Pop(1)
0xcef: @@ ClearReplies()
0xcf0: Pop(0)
0xcf1: Push((int) 523629)
0xcf2: Push((int) 24869)
0xcf3: Push((int) 24870)
0xcf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf5: Pop(3)
0xcf6: Push((int) 523634)
0xcf7: Push((int) 24877)
0xcf8: Push((int) 24876)
0xcf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfa: Pop(3)
0xcfb: Return(); Pop(0)

0xcfc: Push((int) 24877)
0xcfd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcfe: IF (Stack[-1] == 0) GOTO 0xd0e; Pop(1)

0xcff: PushEmpty(string)
0xd00: Stack[-1] = "Neutral"
0xd01: Call2 0xaf2

0xd02: Pop(1)
0xd03: Push((int) 523635)
0xd04: @@ SetMessage(Stack[-1])
0xd05: Pop(1)
0xd06: @@ ClearReplies()
0xd07: Pop(0)
0xd08: Push((int) 523636)
0xd09: Push((int) 24869)
0xd0a: Push((int) 24878)
0xd0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0c: Pop(3)
0xd0d: Return(); Pop(0)

0xd0e: Push((int) 24869)
0xd0f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd10: IF (Stack[-1] == 0) GOTO 0xd25; Pop(1)

0xd11: PushEmpty(string)
0xd12: Stack[-1] = "Neutral"
0xd13: Call2 0xaf2

0xd14: Pop(1)
0xd15: Push((int) 523628)
0xd16: @@ SetMessage(Stack[-1])
0xd17: Pop(1)
0xd18: @@ ClearReplies()
0xd19: Pop(0)
0xd1a: Push((int) 521999)
0xd1b: Push((int) -1)
0xd1c: Push((int) 23169)
0xd1d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1e: Pop(3)
0xd1f: Push((int) 523631)
0xd20: Push((int) 24874)
0xd21: Push((int) 24873)
0xd22: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd23: Pop(3)
0xd24: Return(); Pop(0)

0xd25: Push((int) 24874)
0xd26: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd27: IF (Stack[-1] == 0) GOTO 0xd3c; Pop(1)

0xd28: PushEmpty(string)
0xd29: Stack[-1] = "Neutral"
0xd2a: Call2 0xaf2

0xd2b: Pop(1)
0xd2c: Push((int) 523632)
0xd2d: @@ SetMessage(Stack[-1])
0xd2e: Pop(1)
0xd2f: @@ ClearReplies()
0xd30: Pop(0)
0xd31: Push((int) 523633)
0xd32: Push((int) -1)
0xd33: Push((int) 24875)
0xd34: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd35: Pop(3)
0xd36: Push((int) 523630)
0xd37: Push((int) -1)
0xd38: Push((int) 24871)
0xd39: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3a: Pop(3)
0xd3b: Return(); Pop(0)

0xd3c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd3d: PushEmpty(bool)
0xd3e: Call2 0x1357

0xd3f: Pop(0)
0xd40: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd41: @ lshStopAnimation()
0xd42: Pop(0)
0xd43: GOTO 0xd46

0xd44: @ StopAnimation()
0xd45: Pop(0)
0xd46: Return(); Pop(0)

0xd47: GOTO 0xb09

0xd48: Return(); Pop(0)

0xd49: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xd4a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xd4b: PushEmpty(bool, object, float)
0xd4c: Stack[-2] = Stack[-12]
0xd4d: Stack[-1] = (float) 130.0
0xd4e: Call2 0x1191

0xd4f: Pop(2)
0xd50: Pop(1); Push((bool) Stack[-1] == 0)
0xd51: IF (Stack[-1] == 0) GOTO 0xd54; Pop(1)

0xd52: Stack[-10] = (int) -2
0xd53: Return(); Pop(8)

0xd54: @ CreateDialog(Stack[-4])
0xd55: Pop(0)
0xd56: PushEmpty(int)
0xd57: Call2 0x1351

0xd58: Pop(0)
0xd59: @@ SetNPCName(Stack[-1])
0xd5a: Pop(1)
0xd5b: PushEmpty(int)
0xd5c: Call2 0x134f

0xd5d: Pop(0)
0xd5e: @@ SetNPCDescription(Stack[-1])
0xd5f: Pop(1)
0xd60: PushEmpty(string)
0xd61: Call2 0x1353

0xd62: Pop(0)
0xd63: @@ SetPhoto(Stack[-1])
0xd64: Pop(1)
0xd65: PushEmpty(string)
0xd66: Call2 0x1355

0xd67: Pop(0)
0xd68: @@ SetPhoto2(Stack[-1])
0xd69: Pop(1)
0xd6a: PushEmpty(int)
0xd6b: Call2 0x1669

0xd6c: Pop(0)
0xd6d: @@ SetPlayerName(Stack[-1])
0xd6e: Pop(1)
0xd6f: Stack[-2] = (int) -1
0xd70: @ IsOverrideActive(Stack[-3])
0xd71: Pop(0)
0xd72: Push(Stack[-3])
0xd73: IF (Stack[-1] == 0) GOTO 0xd76; Pop(1)

0xd74: Stack[-10] = (int) -2
0xd75: Return(); Pop(8)

0xd76: @ DoDialog(Stack[-4])
0xd77: Pop(0)
0xd78: PushEmpty(bool, object)
0xd79: PushEmpty(object)
0xd7a: Call2 0x12a7

0xd7b: Stack[-2] = Stack[-1]
0xd7c: Pop(1)
0xd7d: Call2 0x11e8

0xd7e: Pop(2)
0xd7f: PushEmpty(object, object)
0xd80: Stack[-2] = Stack[-11]
0xd81: Stack[-1] = Stack[-6]
0xd82: Push(-2, 4); TaskCall(11)
0xd83: Call2 0xd9a

0xd84: Pop(-2, 4); TaskReturn
0xd85: Pop(2)
0xd86: @@ IsDialogEnd(Stack[-1])
0xd87: Pop(0)
0xd88: Pop(0); Push((bool) Stack[-1] == 0)
0xd89: IF (Stack[-1] == 0) GOTO 0xd8f; Pop(1)

0xd8a: @ sync()
0xd8b: Pop(0)
0xd8c: @@ IsDialogEnd(Stack[-1])
0xd8d: Pop(0)
0xd8e: GOTO 0xd88

0xd8f: PushEmpty(object)
0xd90: Stack[-1] = Stack[-10]
0xd91: Call2 0x11d6

0xd92: Pop(1)
0xd93: @ StopDialog(Stack[-4])
0xd94: Pop(0)
0xd95: @@ GetReturnValue(Stack[-2])
0xd96: Pop(0)
0xd97: Stack[-10] = Stack[-2]
0xd98: Return(); Pop(8)

0xd99: Stack[-4] = 0
0xd9a: PushEmpty()
0xd9b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xd9c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xd9d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xd9e: Push((int) 1)
0xd9f: IF (Stack[-1] == 0) GOTO 0xdb6; Pop(1)

0xda0: PushEmpty(string)
0xda1: Stack[-1] = "Neutral"
0xda2: Call2 0xdd4

0xda3: Pop(1)
0xda4: Push((int) 529926)
0xda5: @@ SetMessage(Stack[-1])
0xda6: Pop(1)
0xda7: @@ ClearReplies()
0xda8: Pop(0)
0xda9: Push((int) 529927)
0xdaa: Push((int) -1)
0xdab: Push((int) 31310)
0xdac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdad: Pop(3)
0xdae: Push((int) 529928)
0xdaf: Push((int) -1)
0xdb0: Push((int) 31311)
0xdb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdb2: Pop(3)
0xdb3: GOTO 0xdb6

0xdb4: Return(); Pop(0)

0xdb5: GOTO 0xd9e

0xdb6: PushEmpty(bool)
0xdb7: Call2 0x1357

0xdb8: Pop(0)
0xdb9: IF (Stack[-1] == 0) GOTO 0xdc5; Pop(1)

0xdba: @ lshWaitForAnimEnd()
0xdbb: Pop(0)
0xdbc: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdbd: IF (Stack[-1] == 0) GOTO 0xdbf; Pop(1)

0xdbe: GOTO 0xdc4

0xdbf: PushEmpty(string)
0xdc0: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xdc1: Call2 0x1272

0xdc2: Pop(1)
0xdc3: GOTO 0xdba

0xdc4: GOTO 0xdd3

0xdc5: Push("all")
0xdc6: Push("idle")
0xdc7: @ PlayAnimation(Stack[-2], Stack[-1])
0xdc8: Pop(2)
0xdc9: @ WaitForAnimEnd()
0xdca: Pop(0)
0xdcb: Push( Stack[3 + Tasks[-1].StackPointer] )
0xdcc: IF (Stack[-1] == 0) GOTO 0xdce; Pop(1)

0xdcd: GOTO 0xdd3

0xdce: Push("all")
0xdcf: Push("idle")
0xdd0: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd1: Pop(2)
0xdd2: GOTO 0xdc9

0xdd3: Return(); Pop(0)

0xdd4: PushEmpty()
0xdd5: PushEmpty(bool)
0xdd6: Call2 0x1357

0xdd7: Pop(0)
0xdd8: Pop(1); Push((bool) Stack[-1] == 0)
0xdd9: IF (Stack[-1] == 0) GOTO 0xddb; Pop(1)

0xdda: Return(); Pop(0)

0xddb: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xddc: IF (Stack[-1] == 0) GOTO 0xdde; Pop(1)

0xddd: Return(); Pop(0)

0xdde: PushEmpty(string, bool)
0xddf: Stack[-2] = Stack[-3]
0xde0: Push("")
0xde1: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xde2: IF (Stack[-1] == 0) GOTO 0xde5; Pop(1)

0xde3: Stack[-1] = (bool) 0
0xde4: GOTO 0xde6

0xde5: Stack[-1] = (bool) 1
0xde6: Call2 0x1282

0xde7: Pop(2)
0xde8: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xde9: Return(); Pop(0)

0xdea: PushEmpty()
0xdeb: Push((int) 1)
0xdec: IF (Stack[-1] == 0) GOTO 0xe13; Pop(1)

0xded: PushEmpty()
0xdee: Call2 0x12a0

0xdef: Pop(0)
0xdf0: Push((int) 31309)
0xdf1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdf2: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xdf3: PushEmpty(string)
0xdf4: Stack[-1] = "Neutral"
0xdf5: Call2 0xdd4

0xdf6: Pop(1)
0xdf7: Push((int) 529926)
0xdf8: @@ SetMessage(Stack[-1])
0xdf9: Pop(1)
0xdfa: @@ ClearReplies()
0xdfb: Pop(0)
0xdfc: Push((int) 529927)
0xdfd: Push((int) -1)
0xdfe: Push((int) 31310)
0xdff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe00: Pop(3)
0xe01: Push((int) 529928)
0xe02: Push((int) -1)
0xe03: Push((int) 31311)
0xe04: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe05: Pop(3)
0xe06: Return(); Pop(0)

0xe07: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe08: PushEmpty(bool)
0xe09: Call2 0x1357

0xe0a: Pop(0)
0xe0b: IF (Stack[-1] == 0) GOTO 0xe0f; Pop(1)

0xe0c: @ lshStopAnimation()
0xe0d: Pop(0)
0xe0e: GOTO 0xe11

0xe0f: @ StopAnimation()
0xe10: Pop(0)
0xe11: Return(); Pop(0)

0xe12: GOTO 0xdeb

0xe13: Return(); Pop(0)

0xe14: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xe15: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe16: PushEmpty(bool, object, float)
0xe17: Stack[-2] = Stack[-12]
0xe18: Stack[-1] = (float) 130.0
0xe19: Call2 0x1191

0xe1a: Pop(2)
0xe1b: Pop(1); Push((bool) Stack[-1] == 0)
0xe1c: IF (Stack[-1] == 0) GOTO 0xe1f; Pop(1)

0xe1d: Stack[-10] = (int) -2
0xe1e: Return(); Pop(8)

0xe1f: @ CreateDialog(Stack[-4])
0xe20: Pop(0)
0xe21: PushEmpty(int)
0xe22: Call2 0x1351

0xe23: Pop(0)
0xe24: @@ SetNPCName(Stack[-1])
0xe25: Pop(1)
0xe26: PushEmpty(int)
0xe27: Call2 0x134f

0xe28: Pop(0)
0xe29: @@ SetNPCDescription(Stack[-1])
0xe2a: Pop(1)
0xe2b: PushEmpty(string)
0xe2c: Call2 0x1353

0xe2d: Pop(0)
0xe2e: @@ SetPhoto(Stack[-1])
0xe2f: Pop(1)
0xe30: PushEmpty(string)
0xe31: Call2 0x1355

0xe32: Pop(0)
0xe33: @@ SetPhoto2(Stack[-1])
0xe34: Pop(1)
0xe35: PushEmpty(int)
0xe36: Call2 0x1669

0xe37: Pop(0)
0xe38: @@ SetPlayerName(Stack[-1])
0xe39: Pop(1)
0xe3a: Stack[-2] = (int) -1
0xe3b: @ IsOverrideActive(Stack[-3])
0xe3c: Pop(0)
0xe3d: Push(Stack[-3])
0xe3e: IF (Stack[-1] == 0) GOTO 0xe41; Pop(1)

0xe3f: Stack[-10] = (int) -2
0xe40: Return(); Pop(8)

0xe41: @ DoDialog(Stack[-4])
0xe42: Pop(0)
0xe43: PushEmpty(bool, object)
0xe44: PushEmpty(object)
0xe45: Call2 0x12a7

0xe46: Stack[-2] = Stack[-1]
0xe47: Pop(1)
0xe48: Call2 0x11e8

0xe49: Pop(2)
0xe4a: PushEmpty(object, object)
0xe4b: Stack[-2] = Stack[-11]
0xe4c: Stack[-1] = Stack[-6]
0xe4d: Push(-2, 4); TaskCall(13)
0xe4e: Call2 0xe65

0xe4f: Pop(-2, 4); TaskReturn
0xe50: Pop(2)
0xe51: @@ IsDialogEnd(Stack[-1])
0xe52: Pop(0)
0xe53: Pop(0); Push((bool) Stack[-1] == 0)
0xe54: IF (Stack[-1] == 0) GOTO 0xe5a; Pop(1)

0xe55: @ sync()
0xe56: Pop(0)
0xe57: @@ IsDialogEnd(Stack[-1])
0xe58: Pop(0)
0xe59: GOTO 0xe53

0xe5a: PushEmpty(object)
0xe5b: Stack[-1] = Stack[-10]
0xe5c: Call2 0x11d6

0xe5d: Pop(1)
0xe5e: @ StopDialog(Stack[-4])
0xe5f: Pop(0)
0xe60: @@ GetReturnValue(Stack[-2])
0xe61: Pop(0)
0xe62: Stack[-10] = Stack[-2]
0xe63: Return(); Pop(8)

0xe64: Stack[-4] = 0
0xe65: PushEmpty()
0xe66: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xe67: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xe68: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xe69: Push((int) 1)
0xe6a: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe6b: PushEmpty(string)
0xe6c: Stack[-1] = "Neutral"
0xe6d: Call2 0xe9f

0xe6e: Pop(1)
0xe6f: Push((int) 529934)
0xe70: @@ SetMessage(Stack[-1])
0xe71: Pop(1)
0xe72: @@ ClearReplies()
0xe73: Pop(0)
0xe74: Push((int) 529935)
0xe75: Push((int) -1)
0xe76: Push((int) 31318)
0xe77: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe78: Pop(3)
0xe79: Push((int) 529936)
0xe7a: Push((int) -1)
0xe7b: Push((int) 31319)
0xe7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7d: Pop(3)
0xe7e: GOTO 0xe81

0xe7f: Return(); Pop(0)

0xe80: GOTO 0xe69

0xe81: PushEmpty(bool)
0xe82: Call2 0x1357

0xe83: Pop(0)
0xe84: IF (Stack[-1] == 0) GOTO 0xe90; Pop(1)

0xe85: @ lshWaitForAnimEnd()
0xe86: Pop(0)
0xe87: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe88: IF (Stack[-1] == 0) GOTO 0xe8a; Pop(1)

0xe89: GOTO 0xe8f

0xe8a: PushEmpty(string)
0xe8b: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xe8c: Call2 0x1272

0xe8d: Pop(1)
0xe8e: GOTO 0xe85

0xe8f: GOTO 0xe9e

0xe90: Push("all")
0xe91: Push("idle")
0xe92: @ PlayAnimation(Stack[-2], Stack[-1])
0xe93: Pop(2)
0xe94: @ WaitForAnimEnd()
0xe95: Pop(0)
0xe96: Push( Stack[3 + Tasks[-1].StackPointer] )
0xe97: IF (Stack[-1] == 0) GOTO 0xe99; Pop(1)

0xe98: GOTO 0xe9e

0xe99: Push("all")
0xe9a: Push("idle")
0xe9b: @ PlayAnimation(Stack[-2], Stack[-1])
0xe9c: Pop(2)
0xe9d: GOTO 0xe94

0xe9e: Return(); Pop(0)

0xe9f: PushEmpty()
0xea0: PushEmpty(bool)
0xea1: Call2 0x1357

0xea2: Pop(0)
0xea3: Pop(1); Push((bool) Stack[-1] == 0)
0xea4: IF (Stack[-1] == 0) GOTO 0xea6; Pop(1)

0xea5: Return(); Pop(0)

0xea6: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xea7: IF (Stack[-1] == 0) GOTO 0xea9; Pop(1)

0xea8: Return(); Pop(0)

0xea9: PushEmpty(string, bool)
0xeaa: Stack[-2] = Stack[-3]
0xeab: Push("")
0xeac: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xead: IF (Stack[-1] == 0) GOTO 0xeb0; Pop(1)

0xeae: Stack[-1] = (bool) 0
0xeaf: GOTO 0xeb1

0xeb0: Stack[-1] = (bool) 1
0xeb1: Call2 0x1282

0xeb2: Pop(2)
0xeb3: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xeb4: Return(); Pop(0)

0xeb5: PushEmpty()
0xeb6: Push((int) 1)
0xeb7: IF (Stack[-1] == 0) GOTO 0xede; Pop(1)

0xeb8: PushEmpty()
0xeb9: Call2 0x12a0

0xeba: Pop(0)
0xebb: Push((int) 31317)
0xebc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xebd: IF (Stack[-1] == 0) GOTO 0xed2; Pop(1)

0xebe: PushEmpty(string)
0xebf: Stack[-1] = "Neutral"
0xec0: Call2 0xe9f

0xec1: Pop(1)
0xec2: Push((int) 529934)
0xec3: @@ SetMessage(Stack[-1])
0xec4: Pop(1)
0xec5: @@ ClearReplies()
0xec6: Pop(0)
0xec7: Push((int) 529935)
0xec8: Push((int) -1)
0xec9: Push((int) 31318)
0xeca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xecb: Pop(3)
0xecc: Push((int) 529936)
0xecd: Push((int) -1)
0xece: Push((int) 31319)
0xecf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed0: Pop(3)
0xed1: Return(); Pop(0)

0xed2: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xed3: PushEmpty(bool)
0xed4: Call2 0x1357

0xed5: Pop(0)
0xed6: IF (Stack[-1] == 0) GOTO 0xeda; Pop(1)

0xed7: @ lshStopAnimation()
0xed8: Pop(0)
0xed9: GOTO 0xedc

0xeda: @ StopAnimation()
0xedb: Pop(0)
0xedc: Return(); Pop(0)

0xedd: GOTO 0xeb6

0xede: Return(); Pop(0)

0xedf: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xee0: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xee1: PushEmpty(bool, object, float)
0xee2: Stack[-2] = Stack[-12]
0xee3: Stack[-1] = (float) 130.0
0xee4: Call2 0x1191

0xee5: Pop(2)
0xee6: Pop(1); Push((bool) Stack[-1] == 0)
0xee7: IF (Stack[-1] == 0) GOTO 0xeea; Pop(1)

0xee8: Stack[-10] = (int) -2
0xee9: Return(); Pop(8)

0xeea: @ CreateDialog(Stack[-4])
0xeeb: Pop(0)
0xeec: PushEmpty(int)
0xeed: Call2 0x1351

0xeee: Pop(0)
0xeef: @@ SetNPCName(Stack[-1])
0xef0: Pop(1)
0xef1: PushEmpty(int)
0xef2: Call2 0x134f

0xef3: Pop(0)
0xef4: @@ SetNPCDescription(Stack[-1])
0xef5: Pop(1)
0xef6: PushEmpty(string)
0xef7: Call2 0x1353

0xef8: Pop(0)
0xef9: @@ SetPhoto(Stack[-1])
0xefa: Pop(1)
0xefb: PushEmpty(string)
0xefc: Call2 0x1355

0xefd: Pop(0)
0xefe: @@ SetPhoto2(Stack[-1])
0xeff: Pop(1)
0xf00: PushEmpty(int)
0xf01: Call2 0x1669

0xf02: Pop(0)
0xf03: @@ SetPlayerName(Stack[-1])
0xf04: Pop(1)
0xf05: Stack[-2] = (int) -1
0xf06: @ IsOverrideActive(Stack[-3])
0xf07: Pop(0)
0xf08: Push(Stack[-3])
0xf09: IF (Stack[-1] == 0) GOTO 0xf0c; Pop(1)

0xf0a: Stack[-10] = (int) -2
0xf0b: Return(); Pop(8)

0xf0c: @ DoDialog(Stack[-4])
0xf0d: Pop(0)
0xf0e: PushEmpty(bool, object)
0xf0f: PushEmpty(object)
0xf10: Call2 0x12a7

0xf11: Stack[-2] = Stack[-1]
0xf12: Pop(1)
0xf13: Call2 0x11e8

0xf14: Pop(2)
0xf15: PushEmpty(object, object)
0xf16: Stack[-2] = Stack[-11]
0xf17: Stack[-1] = Stack[-6]
0xf18: Push(-2, 4); TaskCall(15)
0xf19: Call2 0xf30

0xf1a: Pop(-2, 4); TaskReturn
0xf1b: Pop(2)
0xf1c: @@ IsDialogEnd(Stack[-1])
0xf1d: Pop(0)
0xf1e: Pop(0); Push((bool) Stack[-1] == 0)
0xf1f: IF (Stack[-1] == 0) GOTO 0xf25; Pop(1)

0xf20: @ sync()
0xf21: Pop(0)
0xf22: @@ IsDialogEnd(Stack[-1])
0xf23: Pop(0)
0xf24: GOTO 0xf1e

0xf25: PushEmpty(object)
0xf26: Stack[-1] = Stack[-10]
0xf27: Call2 0x11d6

0xf28: Pop(1)
0xf29: @ StopDialog(Stack[-4])
0xf2a: Pop(0)
0xf2b: @@ GetReturnValue(Stack[-2])
0xf2c: Pop(0)
0xf2d: Stack[-10] = Stack[-2]
0xf2e: Return(); Pop(8)

0xf2f: Stack[-4] = 0
0xf30: PushEmpty()
0xf31: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xf32: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xf33: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xf34: Push((int) 1)
0xf35: IF (Stack[-1] == 0) GOTO 0xf4c; Pop(1)

0xf36: PushEmpty(string)
0xf37: Stack[-1] = "Neutral"
0xf38: Call2 0xf6a

0xf39: Pop(1)
0xf3a: Push((int) 529938)
0xf3b: @@ SetMessage(Stack[-1])
0xf3c: Pop(1)
0xf3d: @@ ClearReplies()
0xf3e: Pop(0)
0xf3f: Push((int) 529939)
0xf40: Push((int) -1)
0xf41: Push((int) 31322)
0xf42: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf43: Pop(3)
0xf44: Push((int) 529940)
0xf45: Push((int) -1)
0xf46: Push((int) 31323)
0xf47: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf48: Pop(3)
0xf49: GOTO 0xf4c

0xf4a: Return(); Pop(0)

0xf4b: GOTO 0xf34

0xf4c: PushEmpty(bool)
0xf4d: Call2 0x1357

0xf4e: Pop(0)
0xf4f: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf50: @ lshWaitForAnimEnd()
0xf51: Pop(0)
0xf52: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf53: IF (Stack[-1] == 0) GOTO 0xf55; Pop(1)

0xf54: GOTO 0xf5a

0xf55: PushEmpty(string)
0xf56: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xf57: Call2 0x1272

0xf58: Pop(1)
0xf59: GOTO 0xf50

0xf5a: GOTO 0xf69

0xf5b: Push("all")
0xf5c: Push("idle")
0xf5d: @ PlayAnimation(Stack[-2], Stack[-1])
0xf5e: Pop(2)
0xf5f: @ WaitForAnimEnd()
0xf60: Pop(0)
0xf61: Push( Stack[3 + Tasks[-1].StackPointer] )
0xf62: IF (Stack[-1] == 0) GOTO 0xf64; Pop(1)

0xf63: GOTO 0xf69

0xf64: Push("all")
0xf65: Push("idle")
0xf66: @ PlayAnimation(Stack[-2], Stack[-1])
0xf67: Pop(2)
0xf68: GOTO 0xf5f

0xf69: Return(); Pop(0)

0xf6a: PushEmpty()
0xf6b: PushEmpty(bool)
0xf6c: Call2 0x1357

0xf6d: Pop(0)
0xf6e: Pop(1); Push((bool) Stack[-1] == 0)
0xf6f: IF (Stack[-1] == 0) GOTO 0xf71; Pop(1)

0xf70: Return(); Pop(0)

0xf71: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xf72: IF (Stack[-1] == 0) GOTO 0xf74; Pop(1)

0xf73: Return(); Pop(0)

0xf74: PushEmpty(string, bool)
0xf75: Stack[-2] = Stack[-3]
0xf76: Push("")
0xf77: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xf78: IF (Stack[-1] == 0) GOTO 0xf7b; Pop(1)

0xf79: Stack[-1] = (bool) 0
0xf7a: GOTO 0xf7c

0xf7b: Stack[-1] = (bool) 1
0xf7c: Call2 0x1282

0xf7d: Pop(2)
0xf7e: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xf7f: Return(); Pop(0)

0xf80: PushEmpty()
0xf81: Push((int) 1)
0xf82: IF (Stack[-1] == 0) GOTO 0xfa9; Pop(1)

0xf83: PushEmpty()
0xf84: Call2 0x12a0

0xf85: Pop(0)
0xf86: Push((int) 31321)
0xf87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf88: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf89: PushEmpty(string)
0xf8a: Stack[-1] = "Neutral"
0xf8b: Call2 0xf6a

0xf8c: Pop(1)
0xf8d: Push((int) 529938)
0xf8e: @@ SetMessage(Stack[-1])
0xf8f: Pop(1)
0xf90: @@ ClearReplies()
0xf91: Pop(0)
0xf92: Push((int) 529939)
0xf93: Push((int) -1)
0xf94: Push((int) 31322)
0xf95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf96: Pop(3)
0xf97: Push((int) 529940)
0xf98: Push((int) -1)
0xf99: Push((int) 31323)
0xf9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9b: Pop(3)
0xf9c: Return(); Pop(0)

0xf9d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf9e: PushEmpty(bool)
0xf9f: Call2 0x1357

0xfa0: Pop(0)
0xfa1: IF (Stack[-1] == 0) GOTO 0xfa5; Pop(1)

0xfa2: @ lshStopAnimation()
0xfa3: Pop(0)
0xfa4: GOTO 0xfa7

0xfa5: @ StopAnimation()
0xfa6: Pop(0)
0xfa7: Return(); Pop(0)

0xfa8: GOTO 0xf81

0xfa9: Return(); Pop(0)

0xfaa: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfab: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfac: PushEmpty(bool, object, float)
0xfad: Stack[-2] = Stack[-12]
0xfae: Stack[-1] = (float) 130.0
0xfaf: Call2 0x1191

0xfb0: Pop(2)
0xfb1: Pop(1); Push((bool) Stack[-1] == 0)
0xfb2: IF (Stack[-1] == 0) GOTO 0xfb5; Pop(1)

0xfb3: Stack[-10] = (int) -2
0xfb4: Return(); Pop(8)

0xfb5: @ CreateDialog(Stack[-4])
0xfb6: Pop(0)
0xfb7: PushEmpty(int)
0xfb8: Call2 0x1351

0xfb9: Pop(0)
0xfba: @@ SetNPCName(Stack[-1])
0xfbb: Pop(1)
0xfbc: PushEmpty(int)
0xfbd: Call2 0x134f

0xfbe: Pop(0)
0xfbf: @@ SetNPCDescription(Stack[-1])
0xfc0: Pop(1)
0xfc1: PushEmpty(string)
0xfc2: Call2 0x1353

0xfc3: Pop(0)
0xfc4: @@ SetPhoto(Stack[-1])
0xfc5: Pop(1)
0xfc6: PushEmpty(string)
0xfc7: Call2 0x1355

0xfc8: Pop(0)
0xfc9: @@ SetPhoto2(Stack[-1])
0xfca: Pop(1)
0xfcb: PushEmpty(int)
0xfcc: Call2 0x1669

0xfcd: Pop(0)
0xfce: @@ SetPlayerName(Stack[-1])
0xfcf: Pop(1)
0xfd0: Stack[-2] = (int) -1
0xfd1: @ IsOverrideActive(Stack[-3])
0xfd2: Pop(0)
0xfd3: Push(Stack[-3])
0xfd4: IF (Stack[-1] == 0) GOTO 0xfd7; Pop(1)

0xfd5: Stack[-10] = (int) -2
0xfd6: Return(); Pop(8)

0xfd7: @ DoDialog(Stack[-4])
0xfd8: Pop(0)
0xfd9: PushEmpty(bool, object)
0xfda: PushEmpty(object)
0xfdb: Call2 0x12a7

0xfdc: Stack[-2] = Stack[-1]
0xfdd: Pop(1)
0xfde: Call2 0x11e8

0xfdf: Pop(2)
0xfe0: PushEmpty(object, object)
0xfe1: Stack[-2] = Stack[-11]
0xfe2: Stack[-1] = Stack[-6]
0xfe3: Push(-2, 4); TaskCall(17)
0xfe4: Call2 0xffb

0xfe5: Pop(-2, 4); TaskReturn
0xfe6: Pop(2)
0xfe7: @@ IsDialogEnd(Stack[-1])
0xfe8: Pop(0)
0xfe9: Pop(0); Push((bool) Stack[-1] == 0)
0xfea: IF (Stack[-1] == 0) GOTO 0xff0; Pop(1)

0xfeb: @ sync()
0xfec: Pop(0)
0xfed: @@ IsDialogEnd(Stack[-1])
0xfee: Pop(0)
0xfef: GOTO 0xfe9

0xff0: PushEmpty(object)
0xff1: Stack[-1] = Stack[-10]
0xff2: Call2 0x11d6

0xff3: Pop(1)
0xff4: @ StopDialog(Stack[-4])
0xff5: Pop(0)
0xff6: @@ GetReturnValue(Stack[-2])
0xff7: Pop(0)
0xff8: Stack[-10] = Stack[-2]
0xff9: Return(); Pop(8)

0xffa: Stack[-4] = 0
0xffb: PushEmpty()
0xffc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xffd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xffe: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xfff: Push((int) 1)
0x1000: IF (Stack[-1] == 0) GOTO 0x1017; Pop(1)

0x1001: PushEmpty(string)
0x1002: Stack[-1] = "Neutral"
0x1003: Call2 0x1035

0x1004: Pop(1)
0x1005: Push((int) 540554)
0x1006: @@ SetMessage(Stack[-1])
0x1007: Pop(1)
0x1008: @@ ClearReplies()
0x1009: Pop(0)
0x100a: Push((int) 540555)
0x100b: Push((int) -1)
0x100c: Push((int) 42564)
0x100d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x100e: Pop(3)
0x100f: Push((int) 540794)
0x1010: Push((int) -1)
0x1011: Push((int) 42843)
0x1012: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1013: Pop(3)
0x1014: GOTO 0x1017

0x1015: Return(); Pop(0)

0x1016: GOTO 0xfff

0x1017: PushEmpty(bool)
0x1018: Call2 0x1357

0x1019: Pop(0)
0x101a: IF (Stack[-1] == 0) GOTO 0x1026; Pop(1)

0x101b: @ lshWaitForAnimEnd()
0x101c: Pop(0)
0x101d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x101e: IF (Stack[-1] == 0) GOTO 0x1020; Pop(1)

0x101f: GOTO 0x1025

0x1020: PushEmpty(string)
0x1021: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1022: Call2 0x1272

0x1023: Pop(1)
0x1024: GOTO 0x101b

0x1025: GOTO 0x1034

0x1026: Push("all")
0x1027: Push("idle")
0x1028: @ PlayAnimation(Stack[-2], Stack[-1])
0x1029: Pop(2)
0x102a: @ WaitForAnimEnd()
0x102b: Pop(0)
0x102c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x102d: IF (Stack[-1] == 0) GOTO 0x102f; Pop(1)

0x102e: GOTO 0x1034

0x102f: Push("all")
0x1030: Push("idle")
0x1031: @ PlayAnimation(Stack[-2], Stack[-1])
0x1032: Pop(2)
0x1033: GOTO 0x102a

0x1034: Return(); Pop(0)

0x1035: PushEmpty()
0x1036: PushEmpty(bool)
0x1037: Call2 0x1357

0x1038: Pop(0)
0x1039: Pop(1); Push((bool) Stack[-1] == 0)
0x103a: IF (Stack[-1] == 0) GOTO 0x103c; Pop(1)

0x103b: Return(); Pop(0)

0x103c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x103d: IF (Stack[-1] == 0) GOTO 0x103f; Pop(1)

0x103e: Return(); Pop(0)

0x103f: PushEmpty(string, bool)
0x1040: Stack[-2] = Stack[-3]
0x1041: Push("")
0x1042: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1043: IF (Stack[-1] == 0) GOTO 0x1046; Pop(1)

0x1044: Stack[-1] = (bool) 0
0x1045: GOTO 0x1047

0x1046: Stack[-1] = (bool) 1
0x1047: Call2 0x1282

0x1048: Pop(2)
0x1049: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x104a: Return(); Pop(0)

0x104b: PushEmpty()
0x104c: Push((int) 1)
0x104d: IF (Stack[-1] == 0) GOTO 0x1074; Pop(1)

0x104e: PushEmpty()
0x104f: Call2 0x12a0

0x1050: Pop(0)
0x1051: Push((int) 42563)
0x1052: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1053: IF (Stack[-1] == 0) GOTO 0x1068; Pop(1)

0x1054: PushEmpty(string)
0x1055: Stack[-1] = "Neutral"
0x1056: Call2 0x1035

0x1057: Pop(1)
0x1058: Push((int) 540554)
0x1059: @@ SetMessage(Stack[-1])
0x105a: Pop(1)
0x105b: @@ ClearReplies()
0x105c: Pop(0)
0x105d: Push((int) 540555)
0x105e: Push((int) -1)
0x105f: Push((int) 42564)
0x1060: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1061: Pop(3)
0x1062: Push((int) 540794)
0x1063: Push((int) -1)
0x1064: Push((int) 42843)
0x1065: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1066: Pop(3)
0x1067: Return(); Pop(0)

0x1068: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1069: PushEmpty(bool)
0x106a: Call2 0x1357

0x106b: Pop(0)
0x106c: IF (Stack[-1] == 0) GOTO 0x1070; Pop(1)

0x106d: @ lshStopAnimation()
0x106e: Pop(0)
0x106f: GOTO 0x1072

0x1070: @ StopAnimation()
0x1071: Pop(0)
0x1072: Return(); Pop(0)

0x1073: GOTO 0x104c

0x1074: Return(); Pop(0)

0x1075: PushEmpty(bool)
0x1076: Call2 0x118c

0x1077: Pop(0)
0x1078: Pop(1); Push((bool) Stack[-1] == 0)
0x1079: IF (Stack[-1] == 0) GOTO 0x107c; Pop(1)

0x107a: @ Hold()
0x107b: Pop(0)
0x107c: @ GetDirection(Stack[-0])
0x107d: Pop(0)
0x107e: PushEmpty()
0x107f: Call2 0x1125

0x1080: Pop(0)
0x1081: GOTO 0x107e

0x1082: Return(); Pop(0)

0x1083: PushEmpty(object, object)
0x1084: Push("player")
0x1085: @ FindActor(Stack[-2], Stack[-1])
0x1086: Pop(1)
0x1087: Pop(0); Push((bool) Stack[-1] == 0)
0x1088: IF (Stack[-1] == 0) GOTO 0x108b; Pop(1)

0x1089: Stack[-3] = (bool) 0
0x108a: Return(); Pop(2)

0x108b: PushEmpty(bool, object)
0x108c: Stack[-1] = Stack[-3]
0x108d: Call2 0x1183

0x108e: Stack[-5] = Stack[-2]
0x108f: Pop(2)
0x1090: Return(); Pop(2)

0x1091: Stack[-1] = 0
0x1092: Push(CvectorIndex(Stack[-0], 0))
0x1093: Push(CvectorIndex(Stack[-0], 2))
0x1094: @ RotateAsync(Stack[-2], Stack[-1])
0x1095: Pop(2)
0x1096: Return(); Pop(0)

0x1097: PushEmpty(object, bool, object, bool)
0x1098: Push("player")
0x1099: @ FindActor(Stack[-3], Stack[-1])
0x109a: Pop(1)
0x109b: Pop(0); Push((bool) Stack[-2] == 0)
0x109c: IF (Stack[-1] == 0) GOTO 0x109f; Pop(1)

0x109d: Stack[-5] = (bool) 0
0x109e: Return(); Pop(4)

0x109f: PushEmpty(float, object)
0x10a0: Stack[-1] = Stack[-4]
0x10a1: Call2 0x1171

0x10a2: Pop(1)
0x10a3: Push((float)90000.0)
0x10a4: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x10a5: IF (Stack[-1] == 0) GOTO 0x10a8; Pop(1)

0x10a6: Stack[-5] = (bool) 0
0x10a7: Return(); Pop(4)

0x10a8: @ CanSee(Stack[-1], Stack[-2])
0x10a9: Pop(0)
0x10aa: Stack[-5] = Stack[-1]
0x10ab: Return(); Pop(4)

0x10ac: Stack[-2] = 0
0x10ad: PushEmpty(float, float)
0x10ae: Push((int) 8)
0x10af: Push((int) 16)
0x10b0: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x10b1: Pop(2)
0x10b2: Push((int) 10)
0x10b3: @ SetTimer(Stack[-1], Stack[-2])
0x10b4: Pop(1)
0x10b5: Return(); Pop(2)

0x10b6: Push((int) 10)
0x10b7: @ KillTimer(Stack[-1])
0x10b8: Pop(1)
0x10b9: Return(); Pop(0)

0x10ba: PushEmpty()
0x10bb: Push((int) 10)
0x10bc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10bd: IF (Stack[-1] == 0) GOTO 0x10df; Pop(1)

0x10be: PushEmpty()
0x10bf: Call2 0x10b6

0x10c0: Pop(0)
0x10c1: PushEmpty(bool)
0x10c2: Stack[-1] = (bool) 0
0x10c3: PushEmpty(bool)
0x10c4: Call2 0x118c

0x10c5: Pop(0)
0x10c6: IF (Stack[-1] == 0) GOTO 0x10cc; Pop(1)

0x10c7: PushEmpty(bool)
0x10c8: Call2 0x1097

0x10c9: Pop(0)
0x10ca: IF (Stack[-1] == 0) GOTO 0x10cc; Pop(1)

0x10cb: Stack[-1] = (bool) 1
0x10cc: IF (Stack[-1] == 0) GOTO 0x10d9; Pop(1)

0x10cd: PushEmpty(bool)
0x10ce: Call2 0x1083

0x10cf: Pop(0)
0x10d0: IF (Stack[-1] == 0) GOTO 0x10d8; Pop(1)

0x10d1: PushEmpty(bool, object)
0x10d2: PushEmpty(object)
0x10d3: Call2 0x12a7

0x10d4: Stack[-2] = Stack[-1]
0x10d5: Pop(1)
0x10d6: Call2 0x1222

0x10d7: Pop(2)
0x10d8: GOTO 0x10df

0x10d9: PushEmpty()
0x10da: Call2 0x1092

0x10db: Pop(0)
0x10dc: PushEmpty()
0x10dd: Call2 0x10ad

0x10de: Pop(0)
0x10df: Return(); Pop(0)

0x10e0: PushEmpty()
0x10e1: Call2 0x116c

0x10e2: Pop(0)
0x10e3: PushEmpty()
0x10e4: Call2 0x10b6

0x10e5: Pop(0)
0x10e6: @ lshStopSpeech()
0x10e7: Pop(0)
0x10e8: @ lshStopAnimation()
0x10e9: Pop(0)
0x10ea: @ StopAsync()
0x10eb: Pop(0)
0x10ec: @ Hold()
0x10ed: Pop(0)
0x10ee: Return(); Pop(0)

0x10ef: @ StopGroup0()
0x10f0: Pop(0)
0x10f1: PushEmpty()
0x10f2: Call2 0x10b6

0x10f3: Pop(0)
0x10f4: PushEmpty(string)
0x10f5: Stack[-1] = "Neutral"
0x10f6: Call2 0x1272

0x10f7: Pop(1)
0x10f8: PushEmpty()
0x10f9: Call2 0x10ad

0x10fa: Pop(0)
0x10fb: Return(); Pop(0)

0x10fc: PushEmpty()
0x10fd: Push(Stack[-1])
0x10fe: IF (Stack[-1] == 0) GOTO 0x1103; Pop(1)

0x10ff: PushEmpty()
0x1100: Call2 0x10ad

0x1101: Pop(0)
0x1102: GOTO 0x1107

0x1103: PushEmpty(string)
0x1104: Stack[-1] = "Neutral"
0x1105: Call2 0x1272

0x1106: Pop(1)
0x1107: Return(); Pop(0)

0x1108: PushEmpty(bool, bool)
0x1109: @ IsOverrideActive(Stack[-1])
0x110a: Pop(0)
0x110b: Pop(0); Push((bool) Stack[-1] == 0)
0x110c: IF (Stack[-1] == 0) GOTO 0x1124; Pop(1)

0x110d: EventDisable(0)
0x110e: PushEmpty()
0x110f: Call2 0x116c

0x1110: Pop(0)
0x1111: PushEmpty(bool, object)
0x1112: Stack[-1] = Stack[-5]
0x1113: Call2 0x1183

0x1114: Pop(2)
0x1115: EventEnable(0)
0x1116: PushEmpty(object)
0x1117: Stack[-1] = Stack[-4]
0x1118: Call2 0x167a

0x1119: Pop(1)
0x111a: PushEmpty(string)
0x111b: Stack[-1] = "Neutral"
0x111c: Call2 0x1272

0x111d: Pop(1)
0x111e: PushEmpty()
0x111f: Call2 0x10b6

0x1120: Pop(0)
0x1121: PushEmpty()
0x1122: Call2 0x10ad

0x1123: Pop(0)
0x1124: Return(); Pop(2)

0x1125: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x1126: @ WaitForAnimEnd()
0x1127: Pop(0)
0x1128: PushEmpty(bool)
0x1129: Call2 0x118c

0x112a: Pop(0)
0x112b: Pop(1); Push((bool) Stack[-1] == 0)
0x112c: IF (Stack[-1] == 0) GOTO 0x112e; Pop(1)

0x112d: Return(); Pop(12)

0x112e: PushEmpty(int)
0x112f: Call2 0x133e

0x1130: Stack[-7] = Stack[-1]
0x1131: Pop(1)
0x1132: Stack[-5] = (int) 0
0x1133: PushEmpty(bool)
0x1134: Stack[-1] = (bool) 0
0x1135: Push((int) 5)
0x1136: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x1137: IF (Stack[-1] == 0) GOTO 0x113d; Pop(1)

0x1138: PushEmpty(bool)
0x1139: Call2 0x118c

0x113a: Pop(0)
0x113b: IF (Stack[-1] == 0) GOTO 0x113d; Pop(1)

0x113c: Stack[-1] = (bool) 1
0x113d: IF (Stack[-1] == 0) GOTO 0x1167; Pop(1)

0x113e: Pop(0); Push((bool) Stack[-6] == 0)
0x113f: IF (Stack[-1] == 0) GOTO 0x1147; Pop(1)

0x1140: Push((int) 3)
0x1141: @ Sleep(Stack[-1], Stack[-5])
0x1142: Pop(1)
0x1143: Pop(0); Push((bool) Stack[-4] == 0)
0x1144: IF (Stack[-1] == 0) GOTO 0x1146; Pop(1)

0x1145: GOTO 0x1167

0x1146: GOTO 0x115c

0x1147: @ irand(Stack[-3], Stack[-6])
0x1148: Pop(0)
0x1149: Push((int) 5)
0x114a: @ irand(Stack[-3], Stack[-1])
0x114b: Pop(1)
0x114c: Push((int) 0)
0x114d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x114e: IF (Stack[-1] == 0) GOTO 0x1150; Pop(1)

0x114f: Stack[-3] = (int) 0
0x1150: Push("all")
0x1151: PushEmpty(string, int)
0x1152: Stack[-1] = Stack[-6]
0x1153: Call2 0x1337

0x1154: Pop(1)
0x1155: @ PlayAnimation(Stack[-2], Stack[-1])
0x1156: Pop(2)
0x1157: @ WaitForAnimEnd(Stack[-1])
0x1158: Pop(0)
0x1159: Pop(0); Push((bool) Stack[-1] == 0)
0x115a: IF (Stack[-1] == 0) GOTO 0x115c; Pop(1)

0x115b: GOTO 0x1167

0x115c: PushEmpty(bool)
0x115d: Call2 0x116a

0x115e: Pop(0)
0x115f: Pop(1); Push((bool) Stack[-1] == 0)
0x1160: IF (Stack[-1] == 0) GOTO 0x1162; Pop(1)

0x1161: GOTO 0x1167

0x1162: @ ResetAAS()
0x1163: Pop(0)
0x1164: Push((int) 1)
0x1165: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x1166: GOTO 0x1133

0x1167: @ ResetAAS()
0x1168: Pop(0)
0x1169: Return(); Pop(12)

0x116a: Stack[-1] = (bool) 1
0x116b: Return(); Pop(0)

0x116c: @ StopAnimation()
0x116d: Pop(0)
0x116e: @ StopGroup0()
0x116f: Pop(0)
0x1170: Return(); Pop(0)

0x1171: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x1172: @ GetPosition(Stack[-3])
0x1173: Pop(0)
0x1174: @@ GetPosition(Stack[-2])
0x1175: Pop(0)
0x1176: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x1177: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x1178: Return(); Pop(6)

0x1179: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x117a: @ GetPosition(Stack[-3])
0x117b: Pop(0)
0x117c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x117d: Push(CvectorIndex(Stack[-2], 0))
0x117e: Push(CvectorIndex(Stack[-3], 2))
0x117f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x1180: Pop(2)
0x1181: Stack[-8] = Stack[-1]
0x1182: Return(); Pop(6)

0x1183: PushEmpty(cvector, cvector)
0x1184: @@ GetPosition(Stack[-1])
0x1185: Pop(0)
0x1186: PushEmpty(bool, cvector)
0x1187: Stack[-1] = Stack[-3]
0x1188: Call2 0x1179

0x1189: Stack[-6] = Stack[-2]
0x118a: Pop(2)
0x118b: Return(); Pop(2)

0x118c: PushEmpty(bool, bool)
0x118d: @ IsLoaded(Stack[-1])
0x118e: Pop(0)
0x118f: Stack[-3] = Stack[-1]
0x1190: Return(); Pop(2)

0x1191: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x1192: @@ GetPosition(Stack[-8])
0x1193: Pop(0)
0x1194: @@ GetEyesHeight(Stack[-9])
0x1195: Pop(0)
0x1196: Push(CvectorIndex(Stack[-8], 1))
0x1197: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x1198: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x1199: @ GetPosition(Stack[-7])
0x119a: Pop(0)
0x119b: @ GetEyesHeight(Stack[-9])
0x119c: Pop(0)
0x119d: Push(CvectorIndex(Stack[-7], 1))
0x119e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x119f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x11a0: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x11a1: Push(CvectorIndex(Stack[-6], 1))
0x11a2: Stack[-1] = (int) 0
0x11a3: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x11a4: Pop(0); Push(Stack[-6] | Stack[-6]);
0x11a5: Pop(1); Push(Sqrt(Stack[-1]))
0x11a6: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x11a7: Stack[-5] = -Stack[-6]; Pop(0);
0x11a8: Pop(0); Push(Stack[-6] * Stack[-19]);
0x11a9: PushEmpty(cvector, cvector)
0x11aa: Push(CVector(0.0, 1.0, 0.0))
0x11ab: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x11ac: Call2 0x12ad

0x11ad: Pop(1)
0x11ae: Push((int) 25)
0x11af: Pop(2); Push(Stack[-2] * Stack[-1]);
0x11b0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11b1: Push(CVector(0.0, 10.0, 0.0))
0x11b2: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x11b3: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x11b4: @ IsOverrideActive(Stack[-2])
0x11b5: Pop(0)
0x11b6: Push(Stack[-2])
0x11b7: IF (Stack[-1] == 0) GOTO 0x11ba; Pop(1)

0x11b8: Stack[-21] = (bool) 0
0x11b9: Return(); Pop(18)

0x11ba: @ StopWorld()
0x11bb: Pop(0)
0x11bc: Push((bool) 1)
0x11bd: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x11be: Pop(1)
0x11bf: Push(CvectorIndex(Stack[-4], 0))
0x11c0: Push(CvectorIndex(Stack[-5], 2))
0x11c1: @ Rotate(Stack[-2], Stack[-1])
0x11c2: Pop(2)
0x11c3: PushEmpty(bool)
0x11c4: Call2 0x1357

0x11c5: Pop(0)
0x11c6: IF (Stack[-1] == 0) GOTO 0x11c8; Pop(1)

0x11c7: GOTO 0x11d0

0x11c8: Push("head")
0x11c9: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11ca: Pop(1)
0x11cb: Push(Stack[-1])
0x11cc: IF (Stack[-1] == 0) GOTO 0x11d0; Pop(1)

0x11cd: Push("head")
0x11ce: @ LookAsyncCamera(Stack[-1])
0x11cf: Pop(1)
0x11d0: @ CameraWaitForPlayFinish()
0x11d1: Pop(0)
0x11d2: @ ResumeWorld()
0x11d3: Pop(0)
0x11d4: Stack[-21] = (bool) 1
0x11d5: Return(); Pop(18)

0x11d6: PushEmpty(bool, bool)
0x11d7: Push((bool) 1)
0x11d8: @ CameraSwitchToNormal(Stack[-1])
0x11d9: Pop(1)
0x11da: PushEmpty(bool)
0x11db: Call2 0x1357

0x11dc: Pop(0)
0x11dd: IF (Stack[-1] == 0) GOTO 0x11df; Pop(1)

0x11de: GOTO 0x11e7

0x11df: Push("head")
0x11e0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11e1: Pop(1)
0x11e2: Push(Stack[-1])
0x11e3: IF (Stack[-1] == 0) GOTO 0x11e7; Pop(1)

0x11e4: Push("head")
0x11e5: @ UnlookAsync(Stack[-1])
0x11e6: Pop(1)
0x11e7: Return(); Pop(2)

0x11e8: PushEmpty(int, int, int, int)
0x11e9: Push("voice_common")
0x11ea: @ GetVariable(Stack[-1], Stack[-3])
0x11eb: Pop(1)
0x11ec: Push(Stack[-2])
0x11ed: IF (Stack[-1] == 0) GOTO 0x120e; Pop(1)

0x11ee: PushEmpty(bool, object)
0x11ef: Stack[-1] = Stack[-7]
0x11f0: Call2 0x1222

0x11f1: Pop(1)
0x11f2: Pop(1); Push((bool) Stack[-1] == 0)
0x11f3: IF (Stack[-1] == 0) GOTO 0x11fc; Pop(1)

0x11f4: PushEmpty(bool, object)
0x11f5: Stack[-1] = Stack[-7]
0x11f6: Call2 0x1247

0x11f7: Pop(1)
0x11f8: Pop(1); Push((bool) Stack[-1] == 0)
0x11f9: IF (Stack[-1] == 0) GOTO 0x11fc; Pop(1)

0x11fa: Stack[-6] = (bool) 0
0x11fb: Return(); Pop(4)

0x11fc: Push((int) 2)
0x11fd: @ irand(Stack[-2], Stack[-1])
0x11fe: Pop(1)
0x11ff: Push(Stack[-1])
0x1200: IF (Stack[-1] == 0) GOTO 0x1209; Pop(1)

0x1201: Push("voice_common")
0x1202: Push((int) 1)
0x1203: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1204: Push((int) 3)
0x1205: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1206: @ SetVariable(Stack[-2], Stack[-1])
0x1207: Pop(2)
0x1208: GOTO 0x120d

0x1209: Push("voice_common")
0x120a: Push((int) 0)
0x120b: @ SetVariable(Stack[-2], Stack[-1])
0x120c: Pop(2)
0x120d: GOTO 0x1220

0x120e: PushEmpty(bool, object)
0x120f: Stack[-1] = Stack[-7]
0x1210: Call2 0x1247

0x1211: Pop(1)
0x1212: Pop(1); Push((bool) Stack[-1] == 0)
0x1213: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x1214: PushEmpty(bool, object)
0x1215: Stack[-1] = Stack[-7]
0x1216: Call2 0x1222

0x1217: Pop(1)
0x1218: Pop(1); Push((bool) Stack[-1] == 0)
0x1219: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x121a: Stack[-6] = (bool) 0
0x121b: Return(); Pop(4)

0x121c: Push("voice_common")
0x121d: Push((int) 1)
0x121e: @ SetVariable(Stack[-2], Stack[-1])
0x121f: Pop(2)
0x1220: Stack[-6] = (bool) 1
0x1221: Return(); Pop(4)

0x1222: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1223: Stack[-5] = "c"
0x1224: Stack[-4] = (int) 0
0x1225: Push((int) 1)
0x1226: IF (Stack[-1] == 0) GOTO 0x1232; Pop(1)

0x1227: Push((int) 1)
0x1228: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1229: Pop(1); Push(Stack[-6] + Stack[-1]);
0x122a: @@ HasProperty(Stack[-1], Stack[-4])
0x122b: Pop(1)
0x122c: Pop(0); Push((bool) Stack[-3] == 0)
0x122d: IF (Stack[-1] == 0) GOTO 0x122f; Pop(1)

0x122e: GOTO 0x1232

0x122f: Push((int) 1)
0x1230: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x1231: GOTO 0x1225

0x1232: Pop(0); Push((bool) Stack[-4] == 0)
0x1233: IF (Stack[-1] == 0) GOTO 0x1236; Pop(1)

0x1234: Stack[-12] = (bool) 0
0x1235: Return(); Pop(10)

0x1236: Stack[-2] = (int) 0
0x1237: Push((int) 1)
0x1238: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1239: IF (Stack[-1] == 0) GOTO 0x123c; Pop(1)

0x123a: @ irand(Stack[-2], Stack[-4])
0x123b: Pop(0)
0x123c: Push((int) 1)
0x123d: Pop(1); Push(Stack[-3] + Stack[-1]);
0x123e: Pop(1); Push(Stack[-6] + Stack[-1]);
0x123f: @@ GetProperty(Stack[-1], Stack[-2])
0x1240: Pop(1)
0x1241: PushEmpty(bool, string)
0x1242: Stack[-1] = Stack[-3]
0x1243: Call2 0x1291

0x1244: Stack[-14] = Stack[-2]
0x1245: Pop(2)
0x1246: Return(); Pop(10)

0x1247: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1248: Push("d")
0x1249: PushEmpty(int)
0x124a: Call2 0x1315

0x124b: Pop(0)
0x124c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x124d: Push("m")
0x124e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x124f: Stack[-4] = (int) 0
0x1250: Push((int) 1)
0x1251: IF (Stack[-1] == 0) GOTO 0x125d; Pop(1)

0x1252: Push((int) 1)
0x1253: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1254: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1255: @@ HasProperty(Stack[-1], Stack[-4])
0x1256: Pop(1)
0x1257: Pop(0); Push((bool) Stack[-3] == 0)
0x1258: IF (Stack[-1] == 0) GOTO 0x125a; Pop(1)

0x1259: GOTO 0x125d

0x125a: Push((int) 1)
0x125b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x125c: GOTO 0x1250

0x125d: Pop(0); Push((bool) Stack[-4] == 0)
0x125e: IF (Stack[-1] == 0) GOTO 0x1261; Pop(1)

0x125f: Stack[-12] = (bool) 0
0x1260: Return(); Pop(10)

0x1261: Stack[-2] = (int) 0
0x1262: Push((int) 1)
0x1263: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1264: IF (Stack[-1] == 0) GOTO 0x1267; Pop(1)

0x1265: @ irand(Stack[-2], Stack[-4])
0x1266: Pop(0)
0x1267: Push((int) 1)
0x1268: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1269: Pop(1); Push(Stack[-6] + Stack[-1]);
0x126a: @@ GetProperty(Stack[-1], Stack[-2])
0x126b: Pop(1)
0x126c: PushEmpty(bool, string)
0x126d: Stack[-1] = Stack[-3]
0x126e: Call2 0x1291

0x126f: Stack[-14] = Stack[-2]
0x1270: Pop(2)
0x1271: Return(); Pop(10)

0x1272: PushEmpty(bool, float, float, bool, float, float)
0x1273: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1274: Pop(0)
0x1275: Push(Stack[-3])
0x1276: IF (Stack[-1] == 0) GOTO 0x127d; Pop(1)

0x1277: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1278: Pop(0)
0x1279: Push((bool) 0)
0x127a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x127b: Pop(1)
0x127c: GOTO 0x1281

0x127d: Push("Can't find lsh animation : ")
0x127e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x127f: @ Trace(Stack[-1])
0x1280: Pop(1)
0x1281: Return(); Pop(6)

0x1282: PushEmpty(bool, float, float, bool, float, float)
0x1283: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1284: Pop(0)
0x1285: Push(Stack[-3])
0x1286: IF (Stack[-1] == 0) GOTO 0x128c; Pop(1)

0x1287: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1288: Pop(0)
0x1289: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x128a: Pop(0)
0x128b: GOTO 0x1290

0x128c: Push("Can't find lsh animation : ")
0x128d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x128e: @ Trace(Stack[-1])
0x128f: Pop(1)
0x1290: Return(); Pop(6)

0x1291: PushEmpty(bool, bool)
0x1292: PushEmpty(bool)
0x1293: Call2 0x1357

0x1294: Pop(0)
0x1295: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x1296: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1297: Pop(0)
0x1298: Push(Stack[-1])
0x1299: IF (Stack[-1] == 0) GOTO 0x129e; Pop(1)

0x129a: @ lshPlaySpeech(Stack[-3])
0x129b: Pop(0)
0x129c: Stack[-4] = (bool) 1
0x129d: Return(); Pop(2)

0x129e: Stack[-4] = (bool) 0
0x129f: Return(); Pop(2)

0x12a0: PushEmpty(bool)
0x12a1: Call2 0x1357

0x12a2: Pop(0)
0x12a3: IF (Stack[-1] == 0) GOTO 0x12a6; Pop(1)

0x12a4: @ lshStopSpeech()
0x12a5: Pop(0)
0x12a6: Return(); Pop(0)

0x12a7: PushEmpty(object, object)
0x12a8: @ self(Stack[-1])
0x12a9: Pop(0)
0x12aa: Stack[-3] = Stack[-1]
0x12ab: Return(); Pop(2)

0x12ac: Stack[-1] = 0
0x12ad: PushEmpty(float, float)
0x12ae: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12af: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12b0: Push((float)0.0)
0x12b1: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12b2: IF (Stack[-1] == 0) GOTO 0x12b5; Pop(1)

0x12b3: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x12b4: Return(); Pop(2)

0x12b5: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12b6: Return(); Pop(2)

0x12b7: PushEmpty(int, int)
0x12b8: @ GetVariable(Stack[-3], Stack[-1])
0x12b9: Pop(0)
0x12ba: Stack[-4] = Stack[-1]
0x12bb: Return(); Pop(2)

0x12bc: PushEmpty(object, object)
0x12bd: @ FindActor(Stack[-1], Stack[-4])
0x12be: Pop(0)
0x12bf: Pop(0); Push((bool) Stack[-1] == 0)
0x12c0: IF (Stack[-1] == 0) GOTO 0x12c8; Pop(1)

0x12c1: Push("Door ")
0x12c2: Pop(1); Push(Stack[-1] + Stack[-5]);
0x12c3: Push(" not found")
0x12c4: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12c5: @ Trace(Stack[-1])
0x12c6: Pop(1)
0x12c7: GOTO 0x12cf

0x12c8: Push(Stack[-3])
0x12c9: IF (Stack[-1] == 0) GOTO 0x12cc; Pop(1)

0x12ca: @@ Close()
0x12cb: Pop(0)
0x12cc: Push("locked")
0x12cd: @@ SetProperty(Stack[-1], Stack[-4])
0x12ce: Pop(1)
0x12cf: Return(); Pop(2)

0x12d0: Stack[-1] = 0
0x12d1: PushEmpty(object, object)
0x12d2: @ CreateIntVector(Stack[-1])
0x12d3: Pop(0)
0x12d4: @@ add(Stack[-4])
0x12d5: Pop(0)
0x12d6: @@ add(Stack[-3])
0x12d7: Pop(0)
0x12d8: Push((int) 3)
0x12d9: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x12da: Pop(1)
0x12db: Return(); Pop(2)

0x12dc: Stack[-1] = 0
0x12dd: PushEmpty(int, int, bool, int, int, bool)
0x12de: @@ GetItemID(Stack[-3])
0x12df: Pop(0)
0x12e0: Push("Category")
0x12e1: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x12e2: Pop(1)
0x12e3: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x12e4: Pop(0)
0x12e5: Pop(0); Push((bool) Stack[-1] == 0)
0x12e6: IF (Stack[-1] == 0) GOTO 0x12ea; Pop(1)

0x12e7: @@ DropItems(Stack[-8], Stack[-7])
0x12e8: Pop(0)
0x12e9: GOTO 0x12ef

0x12ea: PushEmpty(int, int)
0x12eb: Stack[-2] = Stack[-5]
0x12ec: Stack[-1] = Stack[-9]
0x12ed: Call2 0x12d1

0x12ee: Pop(2)
0x12ef: Return(); Pop(6)

0x12f0: PushEmpty(object, object)
0x12f1: @ CreateInvItem(Stack[-1])
0x12f2: Pop(0)
0x12f3: @@ SetItemName(Stack[-4])
0x12f4: Pop(0)
0x12f5: PushEmpty(object, object, int)
0x12f6: Stack[-3] = Stack[-8]
0x12f7: Stack[-2] = Stack[-4]
0x12f8: Stack[-1] = Stack[-6]
0x12f9: Call2 0x12dd

0x12fa: Pop(3)
0x12fb: Return(); Pop(2)

0x12fc: Stack[-1] = 0
0x12fd: PushEmpty(int, bool, int, bool)
0x12fe: @ GetInvItemByName(Stack[-2], Stack[-5])
0x12ff: Pop(0)
0x1300: @@ HasItem(Stack[-2], Stack[-1])
0x1301: Pop(0)
0x1302: Stack[-7] = Stack[-1]
0x1303: Return(); Pop(4)

0x1304: PushEmpty(object, object)
0x1305: @ FindActor(Stack[-1], Stack[-4])
0x1306: Pop(0)
0x1307: Pop(0); Push((bool) Stack[-1] == 0)
0x1308: IF (Stack[-1] == 0) GOTO 0x130b; Pop(1)

0x1309: Stack[-5] = (bool) 0
0x130a: Return(); Pop(2)

0x130b: @ Trigger(Stack[-1], Stack[-3])
0x130c: Pop(0)
0x130d: Stack[-5] = (bool) 1
0x130e: Return(); Pop(2)

0x130f: Stack[-1] = 0
0x1310: PushEmpty(float, float)
0x1311: @ GetGameTime(Stack[-1])
0x1312: Pop(0)
0x1313: Stack[-3] = Stack[-1]
0x1314: Return(); Pop(2)

0x1315: PushEmpty(float, float)
0x1316: @ GetGameTime(Stack[-1])
0x1317: Pop(0)
0x1318: Push((int) 1)
0x1319: PushEmpty(int)
0x131a: Push((int) 24)
0x131b: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x131c: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x131d: Return(); Pop(2)

0x131e: PushEmpty()
0x131f: PushEmpty(int)
0x1320: Call2 0x1315

0x1321: Pop(0)
0x1322: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1323: Return(); Pop(0)

0x1324: PushEmpty(float, int, int, float, int, int)
0x1325: @ GetGameTime(Stack[-3])
0x1326: Pop(0)
0x1327: Push((int) 1)
0x1328: PushEmpty(int)
0x1329: Push((int) 24)
0x132a: Stack[-2] = Stack[-6] / Stack[-1]; Pop(1);
0x132b: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x132c: Pop(0); Push((bool) Stack[-2] != Stack[-7])
0x132d: IF (Stack[-1] == 0) GOTO 0x1330; Pop(1)

0x132e: Stack[-8] = (bool) 0
0x132f: Return(); Pop(6)

0x1330: PushEmpty(int)
0x1331: Stack[-1] = Stack[-4]
0x1332: Push((int) 24)
0x1333: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x1334: Push((int) 7)
0x1335: Stack[-9] = Stack[-2] < Stack[-1]; Pop(1);
0x1336: Return(); Pop(6)

0x1337: PushEmpty(string, string)
0x1338: Stack[-1] = "idle"
0x1339: Push(Stack[-3])
0x133a: IF (Stack[-1] == 0) GOTO 0x133c; Pop(1)

0x133b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x133c: Stack[-4] = Stack[-1]
0x133d: Return(); Pop(2)

0x133e: PushEmpty(int, bool, int, bool)
0x133f: Stack[-2] = (int) 0
0x1340: Push("all")
0x1341: PushEmpty(string, int)
0x1342: Stack[-1] = Stack[-5]
0x1343: Call2 0x1337

0x1344: Pop(1)
0x1345: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1346: Pop(2)
0x1347: Pop(0); Push((bool) Stack[-1] == 0)
0x1348: IF (Stack[-1] == 0) GOTO 0x134a; Pop(1)

0x1349: GOTO 0x134d

0x134a: Push((int) 1)
0x134b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x134c: GOTO 0x1340

0x134d: Stack[-5] = Stack[-2]
0x134e: Return(); Pop(4)

0x134f: Stack[-1] = (int) 515553
0x1350: Return(); Pop(0)

0x1351: Stack[-1] = (int) 502878
0x1352: Return(); Pop(0)

0x1353: Stack[-1] = "ui/NPC_Starshina.png"
0x1354: Return(); Pop(0)

0x1355: Stack[-1] = "ui/NPC_Starshina_b.png"
0x1356: Return(); Pop(0)

0x1357: Stack[-1] = (bool) 1
0x1358: Return(); Pop(0)

0x1359: PushEmpty()
0x135a: PushEmpty(string, bool)
0x135b: Stack[-2] = "icot_eva_door"
0x135c: Stack[-1] = (bool) 1
0x135d: Call2 0x12bc

0x135e: Pop(2)
0x135f: Return(); Pop(0)

0x1360: PushEmpty()
0x1361: Push("b7q01")
0x1362: Push((int) 8)
0x1363: @ SetVariable(Stack[-2], Stack[-1])
0x1364: Pop(2)
0x1365: PushEmpty()
0x1366: Call2 0x15af

0x1367: Pop(0)
0x1368: Return(); Pop(0)

0x1369: PushEmpty()
0x136a: Push("avroks blood is given")
0x136b: @ Trace(Stack[-1])
0x136c: Pop(1)
0x136d: PushEmpty(object, string, int)
0x136e: Stack[-3] = Stack[-5]
0x136f: Stack[-2] = "avroks_blood"
0x1370: Stack[-1] = (int) 1
0x1371: Call2 0x12f0

0x1372: Pop(3)
0x1373: Return(); Pop(0)

0x1374: PushEmpty()
0x1375: Push("b8q01")
0x1376: Push((int) 5)
0x1377: @ SetVariable(Stack[-2], Stack[-1])
0x1378: Pop(2)
0x1379: PushEmpty()
0x137a: Call2 0x15c9

0x137b: Pop(0)
0x137c: Return(); Pop(0)

0x137d: PushEmpty()
0x137e: Push("b8q01")
0x137f: Push((int) 7)
0x1380: @ SetVariable(Stack[-2], Stack[-1])
0x1381: Pop(2)
0x1382: Push("b8q01KnowSgustki")
0x1383: Push((int) 1)
0x1384: @ SetVariable(Stack[-2], Stack[-1])
0x1385: Pop(2)
0x1386: PushEmpty()
0x1387: Call2 0x15bc

0x1388: Pop(0)
0x1389: Return(); Pop(0)

0x138a: PushEmpty()
0x138b: Push("b9q01")
0x138c: Push((int) 1)
0x138d: @ SetVariable(Stack[-2], Stack[-1])
0x138e: Pop(2)
0x138f: PushEmpty()
0x1390: Call2 0x15d6

0x1391: Pop(0)
0x1392: PushEmpty()
0x1393: Call2 0x15f0

0x1394: Pop(0)
0x1395: Push("quest_b9_01_effect.bin")
0x1396: @@ ApplyEffect(Stack[-1])
0x1397: Pop(1)
0x1398: PushEmpty(bool, string, string)
0x1399: Stack[-2] = "quest_b9_01"
0x139a: Stack[-1] = "remove_danko"
0x139b: Call2 0x1304

0x139c: Pop(3)
0x139d: Return(); Pop(0)

0x139e: PushEmpty()
0x139f: PushEmpty()
0x13a0: Call2 0x15e3

0x13a1: Pop(0)
0x13a2: PushEmpty(bool, string, string)
0x13a3: Stack[-2] = "quest_b9_01"
0x13a4: Stack[-1] = "completed"
0x13a5: Call2 0x1304

0x13a6: Pop(3)
0x13a7: Push("b9q01_stop")
0x13a8: @ Trigger(Stack[-3], Stack[-1])
0x13a9: Pop(1)
0x13aa: Return(); Pop(0)

0x13ab: PushEmpty()
0x13ac: Push("oob9Starshina1")
0x13ad: Push((int) 1)
0x13ae: @ SetVariable(Stack[-2], Stack[-1])
0x13af: Pop(2)
0x13b0: Return(); Pop(0)

0x13b1: PushEmpty()
0x13b2: Push("oob9Starshina2")
0x13b3: Push((int) 1)
0x13b4: @ SetVariable(Stack[-2], Stack[-1])
0x13b5: Pop(2)
0x13b6: Return(); Pop(0)

0x13b7: PushEmpty()
0x13b8: Push("oob10Starshina1")
0x13b9: Push((int) 1)
0x13ba: @ SetVariable(Stack[-2], Stack[-1])
0x13bb: Pop(2)
0x13bc: Return(); Pop(0)

0x13bd: PushEmpty(object, object)
0x13be: Push("b10q01")
0x13bf: Push((int) 2)
0x13c0: @ SetVariable(Stack[-2], Stack[-1])
0x13c1: Pop(2)
0x13c2: PushEmpty(object)
0x13c3: Call2 0x1637

0x13c4: Stack[-2] = Stack[-1]
0x13c5: Pop(1)
0x13c6: Push("b10q01StarshinaGotoKurgan")
0x13c7: Push("pt_map_kurgan")
0x13c8: Push((int) 1)
0x13c9: Push((int) 531553)
0x13ca: PushEmpty(float)
0x13cb: Call2 0x1310

0x13cc: Pop(0)
0x13cd: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13ce: Pop(5)
0x13cf: PushEmpty()
0x13d0: Call2 0x1588

0x13d1: Pop(0)
0x13d2: PushEmpty(bool, string, string)
0x13d3: Stack[-2] = "quest_b10_01"
0x13d4: Stack[-1] = "usable_stone"
0x13d5: Call2 0x1304

0x13d6: Pop(3)
0x13d7: Push("quest_b10_01_effect.bin")
0x13d8: @@ ApplyEffect(Stack[-1])
0x13d9: Pop(1)
0x13da: Return(); Pop(2)

0x13db: Stack[-1] = 0
0x13dc: PushEmpty()
0x13dd: Push("b10q01")
0x13de: Push((int) 3)
0x13df: @ SetVariable(Stack[-2], Stack[-1])
0x13e0: Pop(2)
0x13e1: PushEmpty()
0x13e2: Call2 0x157b

0x13e3: Pop(0)
0x13e4: Return(); Pop(0)

0x13e5: PushEmpty()
0x13e6: Push("oob11Starshina1")
0x13e7: Push((int) 1)
0x13e8: @ SetVariable(Stack[-2], Stack[-1])
0x13e9: Pop(2)
0x13ea: Return(); Pop(0)

0x13eb: PushEmpty()
0x13ec: Push("b11q01")
0x13ed: Push((int) 1)
0x13ee: @ SetVariable(Stack[-2], Stack[-1])
0x13ef: Pop(2)
0x13f0: PushEmpty()
0x13f1: Call2 0x1595

0x13f2: Pop(0)
0x13f3: PushEmpty()
0x13f4: Call2 0x15a2

0x13f5: Pop(0)
0x13f6: PushEmpty(bool, string, string)
0x13f7: Stack[-2] = "quest_b11_01"
0x13f8: Stack[-1] = "open_shaft"
0x13f9: Call2 0x1304

0x13fa: Pop(3)
0x13fb: Return(); Pop(0)

0x13fc: PushEmpty()
0x13fd: PushEmpty(bool, string, string)
0x13fe: Stack[-2] = "quest_b11_01"
0x13ff: Stack[-1] = "starshina_fight"
0x1400: Call2 0x1304

0x1401: Pop(3)
0x1402: Return(); Pop(0)

0x1403: PushEmpty()
0x1404: Push("playsound")
0x1405: Push("giveitem")
0x1406: @ TriggerWorld(Stack[-2], Stack[-1])
0x1407: Pop(2)
0x1408: Return(); Pop(0)

0x1409: PushEmpty()
0x140a: PushEmpty(int, string)
0x140b: Stack[-1] = "B_Mission3"
0x140c: Call2 0x12b7

0x140d: Pop(1)
0x140e: Push((int) 0)
0x140f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1410: IF (Stack[-1] == 0) GOTO 0x1420; Pop(1)

0x1411: Push("B_Mission3")
0x1412: Push((int) 1)
0x1413: @ SetVariable(Stack[-2], Stack[-1])
0x1414: Pop(2)
0x1415: PushEmpty()
0x1416: Call2 0x1561

0x1417: Pop(0)
0x1418: PushEmpty(bool, int)
0x1419: Stack[-1] = (int) 562
0x141a: Call2 0x1626

0x141b: Pop(2)
0x141c: PushEmpty(bool, int)
0x141d: Stack[-1] = (int) 563
0x141e: Call2 0x1626

0x141f: Pop(2)
0x1420: Return(); Pop(0)

0x1421: PushEmpty()
0x1422: PushEmpty(int, string)
0x1423: Stack[-1] = "B_Mission4"
0x1424: Call2 0x12b7

0x1425: Pop(1)
0x1426: Push((int) 0)
0x1427: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1428: IF (Stack[-1] == 0) GOTO 0x143c; Pop(1)

0x1429: Push("B_Mission4")
0x142a: Push((int) 1)
0x142b: @ SetVariable(Stack[-2], Stack[-1])
0x142c: Pop(2)
0x142d: PushEmpty()
0x142e: Call2 0x156e

0x142f: Pop(0)
0x1430: PushEmpty(bool, int)
0x1431: Stack[-1] = (int) 562
0x1432: Call2 0x1626

0x1433: Pop(2)
0x1434: PushEmpty(bool, int)
0x1435: Stack[-1] = (int) 563
0x1436: Call2 0x1626

0x1437: Pop(2)
0x1438: PushEmpty(bool, int)
0x1439: Stack[-1] = (int) 564
0x143a: Call2 0x1626

0x143b: Pop(2)
0x143c: Return(); Pop(0)

0x143d: PushEmpty()
0x143e: PushEmpty(object, string, float)
0x143f: PushEmpty(object)
0x1440: Call2 0x1637

0x1441: Stack[-4] = Stack[-1]
0x1442: Pop(1)
0x1443: Stack[-2] = "pt_map_kurgan"
0x1444: Stack[-1] = (int) 2
0x1445: Call2 0x1648

0x1446: Pop(3)
0x1447: PushEmpty(object)
0x1448: Call2 0x1637

0x1449: Pop(0)
0x144a: @@ ShowMap(Stack[-1])
0x144b: Pop(1)
0x144c: Return(); Pop(0)

0x144d: PushEmpty()
0x144e: PushEmpty(int, string)
0x144f: Stack[-1] = "map_chertez_state"
0x1450: Call2 0x12b7

0x1451: Pop(1)
0x1452: Push((int) 3)
0x1453: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1454: IF (Stack[-1] == 0) GOTO 0x145d; Pop(1)

0x1455: Push("map_chertez_state")
0x1456: Push((int) 3)
0x1457: @ SetVariable(Stack[-2], Stack[-1])
0x1458: Pop(2)
0x1459: Push("map_chertez_force")
0x145a: Push((int) 1)
0x145b: @ SetVariable(Stack[-2], Stack[-1])
0x145c: Pop(2)
0x145d: Return(); Pop(0)

0x145e: PushEmpty()
0x145f: PushEmpty(int, string)
0x1460: Stack[-1] = "map_chertez_state"
0x1461: Call2 0x12b7

0x1462: Pop(1)
0x1463: Push((int) 6)
0x1464: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1465: IF (Stack[-1] == 0) GOTO 0x146e; Pop(1)

0x1466: Push("map_chertez_state")
0x1467: Push((int) 6)
0x1468: @ SetVariable(Stack[-2], Stack[-1])
0x1469: Pop(2)
0x146a: Push("map_chertez_force")
0x146b: Push((int) 1)
0x146c: @ SetVariable(Stack[-2], Stack[-1])
0x146d: Pop(2)
0x146e: Return(); Pop(0)

0x146f: PushEmpty()
0x1470: PushEmpty(object, string, float)
0x1471: PushEmpty(object)
0x1472: Call2 0x1637

0x1473: Stack[-4] = Stack[-1]
0x1474: Pop(1)
0x1475: Stack[-2] = "pt_map_aglaja"
0x1476: Stack[-1] = (int) -1
0x1477: Call2 0x1648

0x1478: Pop(3)
0x1479: PushEmpty(object)
0x147a: Call2 0x1637

0x147b: Pop(0)
0x147c: @@ ShowMap(Stack[-1])
0x147d: Pop(1)
0x147e: Return(); Pop(0)

0x147f: PushEmpty()
0x1480: PushEmpty(int, string)
0x1481: Stack[-1] = "b8q01"
0x1482: Call2 0x12b7

0x1483: Pop(1)
0x1484: Push((int) 6)
0x1485: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1486: IF (Stack[-1] == 0) GOTO 0x1489; Pop(1)

0x1487: Stack[-2] = (bool) 1
0x1488: Return(); Pop(0)

0x1489: Stack[-2] = (bool) 0
0x148a: Return(); Pop(0)

0x148b: PushEmpty()
0x148c: PushEmpty(int, string)
0x148d: Stack[-1] = "b8q01"
0x148e: Call2 0x12b7

0x148f: Pop(1)
0x1490: Push((int) 4)
0x1491: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1492: IF (Stack[-1] == 0) GOTO 0x1495; Pop(1)

0x1493: Stack[-2] = (bool) 1
0x1494: Return(); Pop(0)

0x1495: Stack[-2] = (bool) 0
0x1496: Return(); Pop(0)

0x1497: PushEmpty()
0x1498: PushEmpty(int, string)
0x1499: Stack[-1] = "b9q01"
0x149a: Call2 0x12b7

0x149b: Pop(1)
0x149c: Push((int) 0)
0x149d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x149e: IF (Stack[-1] == 0) GOTO 0x14a1; Pop(1)

0x149f: Stack[-2] = (bool) 1
0x14a0: Return(); Pop(0)

0x14a1: Stack[-2] = (bool) 0
0x14a2: Return(); Pop(0)

0x14a3: PushEmpty()
0x14a4: PushEmpty(int, string)
0x14a5: Stack[-1] = "oob9Starshina1"
0x14a6: Call2 0x12b7

0x14a7: Pop(1)
0x14a8: Push((int) 0)
0x14a9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14aa: IF (Stack[-1] == 0) GOTO 0x14ad; Pop(1)

0x14ab: Stack[-2] = (bool) 1
0x14ac: Return(); Pop(0)

0x14ad: Stack[-2] = (bool) 0
0x14ae: Return(); Pop(0)

0x14af: PushEmpty()
0x14b0: PushEmpty(int, string)
0x14b1: Stack[-1] = "b9q01"
0x14b2: Call2 0x12b7

0x14b3: Pop(1)
0x14b4: Push((int) 3)
0x14b5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b6: IF (Stack[-1] == 0) GOTO 0x14b9; Pop(1)

0x14b7: Stack[-2] = (bool) 1
0x14b8: Return(); Pop(0)

0x14b9: Stack[-2] = (bool) 0
0x14ba: Return(); Pop(0)

0x14bb: PushEmpty()
0x14bc: PushEmpty(int, string)
0x14bd: Stack[-1] = "oob9Starshina2"
0x14be: Call2 0x12b7

0x14bf: Pop(1)
0x14c0: Push((int) 0)
0x14c1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14c2: IF (Stack[-1] == 0) GOTO 0x14c5; Pop(1)

0x14c3: Stack[-2] = (bool) 1
0x14c4: Return(); Pop(0)

0x14c5: Stack[-2] = (bool) 0
0x14c6: Return(); Pop(0)

0x14c7: PushEmpty()
0x14c8: PushEmpty(int, string)
0x14c9: Stack[-1] = "oob10Starshina1"
0x14ca: Call2 0x12b7

0x14cb: Pop(1)
0x14cc: Push((int) 0)
0x14cd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ce: IF (Stack[-1] == 0) GOTO 0x14d1; Pop(1)

0x14cf: Stack[-2] = (bool) 1
0x14d0: Return(); Pop(0)

0x14d1: Stack[-2] = (bool) 0
0x14d2: Return(); Pop(0)

0x14d3: PushEmpty()
0x14d4: PushEmpty(int, string)
0x14d5: Stack[-1] = "b10q01Butchers"
0x14d6: Call2 0x12b7

0x14d7: Pop(1)
0x14d8: Push((int) 3)
0x14d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14da: IF (Stack[-1] == 0) GOTO 0x14dd; Pop(1)

0x14db: Stack[-2] = (bool) 1
0x14dc: Return(); Pop(0)

0x14dd: Stack[-2] = (bool) 0
0x14de: Return(); Pop(0)

0x14df: PushEmpty()
0x14e0: PushEmpty(bool)
0x14e1: Stack[-1] = (bool) 1
0x14e2: PushEmpty(int, string)
0x14e3: Stack[-1] = "b10q01Butchers"
0x14e4: Call2 0x12b7

0x14e5: Pop(1)
0x14e6: Push((int) 1)
0x14e7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e8: IF (Stack[-1] == 0) GOTO 0x14f1; Pop(1)

0x14e9: PushEmpty(int, string)
0x14ea: Stack[-1] = "b10q01Butchers"
0x14eb: Call2 0x12b7

0x14ec: Pop(1)
0x14ed: Push((int) 2)
0x14ee: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ef: IF (Stack[-1] == 0) GOTO 0x14f1; Pop(1)

0x14f0: Stack[-1] = (bool) 0
0x14f1: IF (Stack[-1] == 0) GOTO 0x14f4; Pop(1)

0x14f2: Stack[-2] = (bool) 1
0x14f3: Return(); Pop(0)

0x14f4: Stack[-2] = (bool) 0
0x14f5: Return(); Pop(0)

0x14f6: PushEmpty()
0x14f7: PushEmpty(int, string)
0x14f8: Stack[-1] = "b10q01"
0x14f9: Call2 0x12b7

0x14fa: Pop(1)
0x14fb: Push((int) 1)
0x14fc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14fd: IF (Stack[-1] == 0) GOTO 0x1500; Pop(1)

0x14fe: Stack[-2] = (bool) 1
0x14ff: Return(); Pop(0)

0x1500: Stack[-2] = (bool) 0
0x1501: Return(); Pop(0)

0x1502: PushEmpty()
0x1503: PushEmpty(int, string)
0x1504: Stack[-1] = "oob11Starshina1"
0x1505: Call2 0x12b7

0x1506: Pop(1)
0x1507: Push((int) 0)
0x1508: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1509: IF (Stack[-1] == 0) GOTO 0x150c; Pop(1)

0x150a: Stack[-2] = (bool) 1
0x150b: Return(); Pop(0)

0x150c: Stack[-2] = (bool) 0
0x150d: Return(); Pop(0)

0x150e: PushEmpty()
0x150f: PushEmpty(int, string)
0x1510: Stack[-1] = "b11q01"
0x1511: Call2 0x12b7

0x1512: Pop(1)
0x1513: Push((int) 0)
0x1514: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1515: IF (Stack[-1] == 0) GOTO 0x1518; Pop(1)

0x1516: Stack[-2] = (bool) 1
0x1517: Return(); Pop(0)

0x1518: Stack[-2] = (bool) 0
0x1519: Return(); Pop(0)

0x151a: PushEmpty()
0x151b: PushEmpty(int, string)
0x151c: Stack[-1] = "b11q01KnowWhoKilled"
0x151d: Call2 0x12b7

0x151e: Pop(1)
0x151f: Push((int) 1)
0x1520: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1521: IF (Stack[-1] == 0) GOTO 0x1524; Pop(1)

0x1522: Stack[-2] = (bool) 1
0x1523: Return(); Pop(0)

0x1524: Stack[-2] = (bool) 0
0x1525: Return(); Pop(0)

0x1526: PushEmpty()
0x1527: PushEmpty(int, string)
0x1528: Stack[-1] = "b11q01"
0x1529: Call2 0x12b7

0x152a: Pop(1)
0x152b: Push((int) 2)
0x152c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152d: IF (Stack[-1] == 0) GOTO 0x1530; Pop(1)

0x152e: Stack[-2] = (bool) 1
0x152f: Return(); Pop(0)

0x1530: Stack[-2] = (bool) 0
0x1531: Return(); Pop(0)

0x1532: PushEmpty()
0x1533: PushEmpty(int, string)
0x1534: Stack[-1] = "b10q01"
0x1535: Call2 0x12b7

0x1536: Pop(1)
0x1537: Push((int) 2)
0x1538: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1539: IF (Stack[-1] == 0) GOTO 0x153c; Pop(1)

0x153a: Stack[-2] = (bool) 1
0x153b: Return(); Pop(0)

0x153c: Stack[-2] = (bool) 0
0x153d: Return(); Pop(0)

0x153e: PushEmpty()
0x153f: PushEmpty(bool, object, string)
0x1540: Stack[-2] = Stack[-4]
0x1541: Stack[-1] = "b8q01_bone"
0x1542: Call2 0x12fd

0x1543: Pop(2)
0x1544: IF (Stack[-1] == 0) GOTO 0x1547; Pop(1)

0x1545: Stack[-2] = (bool) 1
0x1546: Return(); Pop(0)

0x1547: Stack[-2] = (bool) 0
0x1548: Return(); Pop(0)

0x1549: PushEmpty()
0x154a: PushEmpty(int, string)
0x154b: Stack[-1] = "b10q03"
0x154c: Call2 0x12b7

0x154d: Pop(1)
0x154e: Push((int) 1000)
0x154f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1550: IF (Stack[-1] == 0) GOTO 0x1553; Pop(1)

0x1551: Stack[-2] = (bool) 1
0x1552: Return(); Pop(0)

0x1553: Stack[-2] = (bool) 0
0x1554: Return(); Pop(0)

0x1555: PushEmpty()
0x1556: PushEmpty(int, string)
0x1557: Stack[-1] = "b7q01"
0x1558: Call2 0x12b7

0x1559: Pop(1)
0x155a: Push((int) 7)
0x155b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x155c: IF (Stack[-1] == 0) GOTO 0x155f; Pop(1)

0x155d: Stack[-2] = (bool) 1
0x155e: Return(); Pop(0)

0x155f: Stack[-2] = (bool) 0
0x1560: Return(); Pop(0)

0x1561: PushEmpty(object, object)
0x1562: Push((int) 564)
0x1563: Push((int) 0)
0x1564: Push((int) 530578)
0x1565: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1566: Pop(3)
0x1567: PushEmpty(bool, object, int)
0x1568: Stack[-2] = Stack[-4]
0x1569: Stack[-1] = (int) -1
0x156a: Call2 0x160a

0x156b: Pop(3)
0x156c: Return(); Pop(2)

0x156d: Stack[-1] = 0
0x156e: PushEmpty(object, object)
0x156f: Push((int) 565)
0x1570: Push((int) 0)
0x1571: Push((int) 530579)
0x1572: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1573: Pop(3)
0x1574: PushEmpty(bool, object, int)
0x1575: Stack[-2] = Stack[-4]
0x1576: Stack[-1] = (int) -1
0x1577: Call2 0x160a

0x1578: Pop(3)
0x1579: Return(); Pop(2)

0x157a: Stack[-1] = 0
0x157b: PushEmpty(object, object)
0x157c: Push((int) 309)
0x157d: Push((int) 1)
0x157e: Push((int) 521960)
0x157f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1580: Pop(3)
0x1581: PushEmpty(bool, object, int)
0x1582: Stack[-2] = Stack[-4]
0x1583: Stack[-1] = (int) 305
0x1584: Call2 0x160a

0x1585: Pop(3)
0x1586: Return(); Pop(2)

0x1587: Stack[-1] = 0
0x1588: PushEmpty(object, object)
0x1589: Push((int) 307)
0x158a: Push((int) 1)
0x158b: Push((int) 521958)
0x158c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x158d: Pop(3)
0x158e: PushEmpty(bool, object, int)
0x158f: Stack[-2] = Stack[-4]
0x1590: Stack[-1] = (int) 305
0x1591: Call2 0x160a

0x1592: Pop(3)
0x1593: Return(); Pop(2)

0x1594: Stack[-1] = 0
0x1595: PushEmpty(object, object)
0x1596: Push((int) 313)
0x1597: Push((int) 1)
0x1598: Push((int) 522055)
0x1599: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x159a: Pop(3)
0x159b: PushEmpty(bool, object, int)
0x159c: Stack[-2] = Stack[-4]
0x159d: Stack[-1] = (int) -1
0x159e: Call2 0x160a

0x159f: Pop(3)
0x15a0: Return(); Pop(2)

0x15a1: Stack[-1] = 0
0x15a2: PushEmpty(object, object)
0x15a3: Push((int) 314)
0x15a4: Push((int) 1)
0x15a5: Push((int) 522056)
0x15a6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15a7: Pop(3)
0x15a8: PushEmpty(bool, object, int)
0x15a9: Stack[-2] = Stack[-4]
0x15aa: Stack[-1] = (int) 313
0x15ab: Call2 0x160a

0x15ac: Pop(3)
0x15ad: Return(); Pop(2)

0x15ae: Stack[-1] = 0
0x15af: PushEmpty(object, object)
0x15b0: Push((int) 260)
0x15b1: Push((int) 1)
0x15b2: Push((int) 521032)
0x15b3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15b4: Pop(3)
0x15b5: PushEmpty(bool, object, int)
0x15b6: Stack[-2] = Stack[-4]
0x15b7: Stack[-1] = (int) 253
0x15b8: Call2 0x160a

0x15b9: Pop(3)
0x15ba: Return(); Pop(2)

0x15bb: Stack[-1] = 0
0x15bc: PushEmpty(object, object)
0x15bd: Push((int) 291)
0x15be: Push((int) 1)
0x15bf: Push((int) 521462)
0x15c0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15c1: Pop(3)
0x15c2: PushEmpty(bool, object, int)
0x15c3: Stack[-2] = Stack[-4]
0x15c4: Stack[-1] = (int) 284
0x15c5: Call2 0x160a

0x15c6: Pop(3)
0x15c7: Return(); Pop(2)

0x15c8: Stack[-1] = 0
0x15c9: PushEmpty(object, object)
0x15ca: Push((int) 289)
0x15cb: Push((int) 1)
0x15cc: Push((int) 521460)
0x15cd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15ce: Pop(3)
0x15cf: PushEmpty(bool, object, int)
0x15d0: Stack[-2] = Stack[-4]
0x15d1: Stack[-1] = (int) 284
0x15d2: Call2 0x160a

0x15d3: Pop(3)
0x15d4: Return(); Pop(2)

0x15d5: Stack[-1] = 0
0x15d6: PushEmpty(object, object)
0x15d7: Push((int) 297)
0x15d8: Push((int) 1)
0x15d9: Push((int) 521612)
0x15da: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15db: Pop(3)
0x15dc: PushEmpty(bool, object, int)
0x15dd: Stack[-2] = Stack[-4]
0x15de: Stack[-1] = (int) -1
0x15df: Call2 0x160a

0x15e0: Pop(3)
0x15e1: Return(); Pop(2)

0x15e2: Stack[-1] = 0
0x15e3: PushEmpty(object, object)
0x15e4: Push((int) 304)
0x15e5: Push((int) 1)
0x15e6: Push((int) 521619)
0x15e7: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15e8: Pop(3)
0x15e9: PushEmpty(bool, object, int)
0x15ea: Stack[-2] = Stack[-4]
0x15eb: Stack[-1] = (int) 297
0x15ec: Call2 0x160a

0x15ed: Pop(3)
0x15ee: Return(); Pop(2)

0x15ef: Stack[-1] = 0
0x15f0: PushEmpty(object, object)
0x15f1: Push((int) 298)
0x15f2: Push((int) 1)
0x15f3: Push((int) 521613)
0x15f4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15f5: Pop(3)
0x15f6: PushEmpty(bool, object, int)
0x15f7: Stack[-2] = Stack[-4]
0x15f8: Stack[-1] = (int) 297
0x15f9: Call2 0x160a

0x15fa: Pop(3)
0x15fb: Return(); Pop(2)

0x15fc: Stack[-1] = 0
0x15fd: PushEmpty(object, object)
0x15fe: @ GetDiaryRoot(Stack[-1])
0x15ff: Pop(0)
0x1600: Pop(0); Push((bool) Stack[-1] == 0)
0x1601: IF (Stack[-1] == 0) GOTO 0x1607; Pop(1)

0x1602: Push("Can't retrieve diary root")
0x1603: @ Trace(Stack[-1])
0x1604: Pop(1)
0x1605: Stack[-3] = (bool) 0
0x1606: Return(); Pop(2)

0x1607: Stack[-3] = Stack[-1]
0x1608: Return(); Pop(2)

0x1609: Stack[-1] = 0
0x160a: PushEmpty(object, object, int, object, object, int)
0x160b: PushEmpty(object)
0x160c: Call2 0x15fd

0x160d: Stack[-4] = Stack[-1]
0x160e: Pop(1)
0x160f: @@ Find(Stack[-7], Stack[-2])
0x1610: Pop(0)
0x1611: Pop(0); Push((bool) Stack[-2] == 0)
0x1612: IF (Stack[-1] == 0) GOTO 0x1619; Pop(1)

0x1613: Push("Can't find diary parent with id: ")
0x1614: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1615: @ Trace(Stack[-1])
0x1616: Pop(1)
0x1617: Stack[-9] = (bool) 0
0x1618: Return(); Pop(6)

0x1619: @@ AddChild(Stack[-8])
0x161a: Pop(0)
0x161b: Push((int) 7)
0x161c: @ SendWorldWndMessage(Stack[-1])
0x161d: Pop(1)
0x161e: @@ GetCategory(Stack[-1])
0x161f: Pop(0)
0x1620: @ SetDiarySection(Stack[-1])
0x1621: Pop(0)
0x1622: Stack[-9] = (bool) 0
0x1623: Return(); Pop(6)

0x1624: Stack[-2] = 0
0x1625: Stack[-3] = 0
0x1626: PushEmpty(object, object, object, object)
0x1627: PushEmpty(object)
0x1628: Call2 0x15fd

0x1629: Stack[-3] = Stack[-1]
0x162a: Pop(1)
0x162b: @@ Find(Stack[-5], Stack[-1])
0x162c: Pop(0)
0x162d: Pop(0); Push((bool) Stack[-1] == 0)
0x162e: IF (Stack[-1] == 0) GOTO 0x1631; Pop(1)

0x162f: Stack[-6] = (bool) 0
0x1630: Return(); Pop(4)

0x1631: @@ Remove()
0x1632: Pop(0)
0x1633: Stack[-6] = (bool) 1
0x1634: Return(); Pop(4)

0x1635: Stack[-1] = 0
0x1636: Stack[-2] = 0
0x1637: PushEmpty(object, object, object, object)
0x1638: @ GetMainOutdoorScene(Stack[-2])
0x1639: Pop(0)
0x163a: Pop(0); Push((bool) Stack[-2] == 0)
0x163b: IF (Stack[-1] == 0) GOTO 0x1642; Pop(1)

0x163c: Push("Can't find main outdoor scene")
0x163d: @ Trace(Stack[-1])
0x163e: Pop(1)
0x163f: Stack[-1] = 0
0x1640: Stack[-5] = Stack[-1]
0x1641: Return(); Pop(4)

0x1642: @@ GetMap(Stack[-1])
0x1643: Pop(0)
0x1644: Stack[-5] = Stack[-1]
0x1645: Return(); Pop(4)

0x1646: Stack[-1] = 0
0x1647: Stack[-2] = 0
0x1648: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1649: @ GetMainOutdoorScene(Stack[-2])
0x164a: Pop(0)
0x164b: Pop(0); Push((bool) Stack[-2] == 0)
0x164c: IF (Stack[-1] == 0) GOTO 0x1651; Pop(1)

0x164d: Push("Can't find main outdoor scene")
0x164e: @ Trace(Stack[-1])
0x164f: Pop(1)
0x1650: Return(); Pop(8)

0x1651: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1652: Pop(0)
0x1653: Pop(0); Push((bool) Stack[-1] == 0)
0x1654: IF (Stack[-1] == 0) GOTO 0x165b; Pop(1)

0x1655: Push("Warning: outdoor scene locator ")
0x1656: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1657: Push(" doesnt exist")
0x1658: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1659: @ Trace(Stack[-1])
0x165a: Pop(1)
0x165b: @@ GetMap(Stack[-11])
0x165c: Pop(0)
0x165d: Pop(0); Push((bool) Stack[-11] == 0)
0x165e: IF (Stack[-1] == 0) GOTO 0x1663; Pop(1)

0x165f: Push("Can't find map")
0x1660: @ Trace(Stack[-1])
0x1661: Pop(1)
0x1662: Return(); Pop(8)

0x1663: Push(CvectorIndex(Stack[-4], 0))
0x1664: Push(CvectorIndex(Stack[-5], 2))
0x1665: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1666: Pop(2)
0x1667: Return(); Pop(8)

0x1668: Stack[-2] = 0
0x1669: PushEmpty(int, int)
0x166a: Push("branch")
0x166b: @ GetVariable(Stack[-1], Stack[-2])
0x166c: Pop(1)
0x166d: Push((int) 0)
0x166e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x166f: IF (Stack[-1] == 0) GOTO 0x1673; Pop(1)

0x1670: Stack[-3] = (int) 1
0x1671: Return(); Pop(2)

0x1672: GOTO 0x1678

0x1673: Push((int) 1)
0x1674: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1675: IF (Stack[-1] == 0) GOTO 0x1678; Pop(1)

0x1676: Stack[-3] = (int) 2
0x1677: Return(); Pop(2)

0x1678: Stack[-3] = (int) 3
0x1679: Return(); Pop(2)

0x167a: PushEmpty()
0x167b: PushEmpty(bool, int)
0x167c: Stack[-1] = (int) 9
0x167d: Call2 0x1324

0x167e: Pop(1)
0x167f: IF (Stack[-1] == 0) GOTO 0x1687; Pop(1)

0x1680: PushEmpty(int, object)
0x1681: Stack[-1] = Stack[-3]
0x1682: Push(-2, 1); TaskCall(10)
0x1683: Call2 0xd49

0x1684: Pop(-2, 1); TaskReturn
0x1685: Pop(2)
0x1686: Return(); Pop(0)

0x1687: PushEmpty(bool, int)
0x1688: Stack[-1] = (int) 10
0x1689: Call2 0x1324

0x168a: Pop(1)
0x168b: IF (Stack[-1] == 0) GOTO 0x1693; Pop(1)

0x168c: PushEmpty(int, object)
0x168d: Stack[-1] = Stack[-3]
0x168e: Push(-2, 1); TaskCall(12)
0x168f: Call2 0xe14

0x1690: Pop(-2, 1); TaskReturn
0x1691: Pop(2)
0x1692: Return(); Pop(0)

0x1693: PushEmpty(bool, int)
0x1694: Stack[-1] = (int) 11
0x1695: Call2 0x1324

0x1696: Pop(1)
0x1697: IF (Stack[-1] == 0) GOTO 0x169f; Pop(1)

0x1698: PushEmpty(int, object)
0x1699: Stack[-1] = Stack[-3]
0x169a: Push(-2, 1); TaskCall(14)
0x169b: Call2 0xedf

0x169c: Pop(-2, 1); TaskReturn
0x169d: Pop(2)
0x169e: Return(); Pop(0)

0x169f: PushEmpty(bool, int)
0x16a0: Stack[-1] = (int) 7
0x16a1: Call2 0x131e

0x16a2: Pop(1)
0x16a3: IF (Stack[-1] == 0) GOTO 0x16ab; Pop(1)

0x16a4: PushEmpty(int, object)
0x16a5: Stack[-1] = Stack[-3]
0x16a6: Push(-2, 1); TaskCall(0)
0x16a7: Call2 0x0

0x16a8: Pop(-2, 1); TaskReturn
0x16a9: Pop(2)
0x16aa: Return(); Pop(0)

0x16ab: PushEmpty(bool, int)
0x16ac: Stack[-1] = (int) 8
0x16ad: Call2 0x131e

0x16ae: Pop(1)
0x16af: IF (Stack[-1] == 0) GOTO 0x16b7; Pop(1)

0x16b0: PushEmpty(int, object)
0x16b1: Stack[-1] = Stack[-3]
0x16b2: Push(-2, 1); TaskCall(2)
0x16b3: Call2 0x200

0x16b4: Pop(-2, 1); TaskReturn
0x16b5: Pop(2)
0x16b6: Return(); Pop(0)

0x16b7: PushEmpty(bool, int)
0x16b8: Stack[-1] = (int) 9
0x16b9: Call2 0x131e

0x16ba: Pop(1)
0x16bb: IF (Stack[-1] == 0) GOTO 0x16c3; Pop(1)

0x16bc: PushEmpty(int, object)
0x16bd: Stack[-1] = Stack[-3]
0x16be: Push(-2, 1); TaskCall(4)
0x16bf: Call2 0x467

0x16c0: Pop(-2, 1); TaskReturn
0x16c1: Pop(2)
0x16c2: Return(); Pop(0)

0x16c3: PushEmpty(bool, int)
0x16c4: Stack[-1] = (int) 10
0x16c5: Call2 0x131e

0x16c6: Pop(1)
0x16c7: IF (Stack[-1] == 0) GOTO 0x16cf; Pop(1)

0x16c8: PushEmpty(int, object)
0x16c9: Stack[-1] = Stack[-3]
0x16ca: Push(-2, 1); TaskCall(6)
0x16cb: Call2 0x708

0x16cc: Pop(-2, 1); TaskReturn
0x16cd: Pop(2)
0x16ce: Return(); Pop(0)

0x16cf: PushEmpty(bool, int)
0x16d0: Stack[-1] = (int) 11
0x16d1: Call2 0x131e

0x16d2: Pop(1)
0x16d3: IF (Stack[-1] == 0) GOTO 0x16db; Pop(1)

0x16d4: PushEmpty(int, object)
0x16d5: Stack[-1] = Stack[-3]
0x16d6: Push(-2, 1); TaskCall(8)
0x16d7: Call2 0xa17

0x16d8: Pop(-2, 1); TaskReturn
0x16d9: Pop(2)
0x16da: Return(); Pop(0)

0x16db: PushEmpty(int, object)
0x16dc: Stack[-1] = Stack[-3]
0x16dd: Push(-2, 1); TaskCall(16)
0x16de: Call2 0xfaa

0x16df: Pop(-2, 1); TaskReturn
0x16e0: Pop(2)
0x16e1: Return(); Pop(0)

