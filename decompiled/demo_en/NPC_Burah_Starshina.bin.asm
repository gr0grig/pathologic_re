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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Oracle
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x16c Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x237 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x31b Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x524 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x79b Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa58 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd69 Vars = (int, int)
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
0xe: Call2 0x134f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x134d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1351

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1353

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1667

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
0x31: Call2 0x12a5

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x11e6

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
0x48: Call2 0x11d5

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
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 529926)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 529927)
0x61: Push((int) -1)
0x62: Push((int) 31310)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 529928)
0x66: Push((int) -1)
0x67: Push((int) 31311)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x1355

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x1270

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x1355

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x1280

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x129e

0xa6: Pop(0)
0xa7: Push((int) 31309)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 529926)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 529927)
0xb4: Push((int) -1)
0xb5: Push((int) 31310)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 529928)
0xb9: Push((int) -1)
0xba: Push((int) 31311)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xbf: PushEmpty(bool)
0xc0: Call2 0x1355

0xc1: Pop(0)
0xc2: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc3: @ lshStopAnimation()
0xc4: Pop(0)
0xc5: GOTO 0xc8

0xc6: @ StopAnimation()
0xc7: Pop(0)
0xc8: Return(); Pop(0)

0xc9: GOTO 0xa2

0xca: Return(); Pop(0)

0xcb: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xcc: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xcd: PushEmpty(bool, object, float)
0xce: Stack[-2] = Stack[-12]
0xcf: Stack[-1] = (float) 130.0
0xd0: Call2 0x1191

0xd1: Pop(2)
0xd2: Pop(1); Push((bool) Stack[-1] == 0)
0xd3: IF (Stack[-1] == 0) GOTO 0xd6; Pop(1)

0xd4: Stack[-10] = (int) -2
0xd5: Return(); Pop(8)

0xd6: @ CreateDialog(Stack[-4])
0xd7: Pop(0)
0xd8: PushEmpty(int)
0xd9: Call2 0x134f

0xda: Pop(0)
0xdb: @@ SetNPCName(Stack[-1])
0xdc: Pop(1)
0xdd: PushEmpty(int)
0xde: Call2 0x134d

0xdf: Pop(0)
0xe0: @@ SetNPCDescription(Stack[-1])
0xe1: Pop(1)
0xe2: PushEmpty(string)
0xe3: Call2 0x1351

0xe4: Pop(0)
0xe5: @@ SetPhoto(Stack[-1])
0xe6: Pop(1)
0xe7: PushEmpty(string)
0xe8: Call2 0x1353

0xe9: Pop(0)
0xea: @@ SetPhoto2(Stack[-1])
0xeb: Pop(1)
0xec: PushEmpty(int)
0xed: Call2 0x1667

0xee: Pop(0)
0xef: @@ SetPlayerName(Stack[-1])
0xf0: Pop(1)
0xf1: Stack[-2] = (int) -1
0xf2: @ IsOverrideActive(Stack[-3])
0xf3: Pop(0)
0xf4: Push(Stack[-3])
0xf5: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xf6: Stack[-10] = (int) -2
0xf7: Return(); Pop(8)

0xf8: @ DoDialog(Stack[-4])
0xf9: Pop(0)
0xfa: PushEmpty(bool, object)
0xfb: PushEmpty(object)
0xfc: Call2 0x12a5

0xfd: Stack[-2] = Stack[-1]
0xfe: Pop(1)
0xff: Call2 0x11e6

0x100: Pop(2)
0x101: PushEmpty(object, object)
0x102: Stack[-2] = Stack[-11]
0x103: Stack[-1] = Stack[-6]
0x104: Push(-2, 4); TaskCall(3)
0x105: Call2 0x11c

0x106: Pop(-2, 4); TaskReturn
0x107: Pop(2)
0x108: @@ IsDialogEnd(Stack[-1])
0x109: Pop(0)
0x10a: Pop(0); Push((bool) Stack[-1] == 0)
0x10b: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10c: @ sync()
0x10d: Pop(0)
0x10e: @@ IsDialogEnd(Stack[-1])
0x10f: Pop(0)
0x110: GOTO 0x10a

0x111: PushEmpty(object)
0x112: Stack[-1] = Stack[-10]
0x113: Call2 0x11d5

0x114: Pop(1)
0x115: @ StopDialog(Stack[-4])
0x116: Pop(0)
0x117: @@ GetReturnValue(Stack[-2])
0x118: Pop(0)
0x119: Stack[-10] = Stack[-2]
0x11a: Return(); Pop(8)

0x11b: Stack[-4] = 0
0x11c: PushEmpty()
0x11d: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x11e: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x11f: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x120: Push((int) 1)
0x121: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0x122: PushEmpty(string)
0x123: Stack[-1] = "Neutral"
0x124: Call2 0x156

0x125: Pop(1)
0x126: Push((int) 529934)
0x127: @@ SetMessage(Stack[-1])
0x128: Pop(1)
0x129: @@ ClearReplies()
0x12a: Pop(0)
0x12b: Push((int) 529935)
0x12c: Push((int) -1)
0x12d: Push((int) 31318)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 529936)
0x131: Push((int) -1)
0x132: Push((int) 31319)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: GOTO 0x138

0x136: Return(); Pop(0)

0x137: GOTO 0x120

0x138: PushEmpty(bool)
0x139: Call2 0x1355

0x13a: Pop(0)
0x13b: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x13c: @ lshWaitForAnimEnd()
0x13d: Pop(0)
0x13e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x13f: IF (Stack[-1] == 0) GOTO 0x141; Pop(1)

0x140: GOTO 0x146

0x141: PushEmpty(string)
0x142: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x143: Call2 0x1270

0x144: Pop(1)
0x145: GOTO 0x13c

0x146: GOTO 0x155

0x147: Push("all")
0x148: Push("idle")
0x149: @ PlayAnimation(Stack[-2], Stack[-1])
0x14a: Pop(2)
0x14b: @ WaitForAnimEnd()
0x14c: Pop(0)
0x14d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x14e: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x14f: GOTO 0x155

0x150: Push("all")
0x151: Push("idle")
0x152: @ PlayAnimation(Stack[-2], Stack[-1])
0x153: Pop(2)
0x154: GOTO 0x14b

0x155: Return(); Pop(0)

0x156: PushEmpty()
0x157: PushEmpty(bool)
0x158: Call2 0x1355

0x159: Pop(0)
0x15a: Pop(1); Push((bool) Stack[-1] == 0)
0x15b: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x15c: Return(); Pop(0)

0x15d: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x15e: IF (Stack[-1] == 0) GOTO 0x160; Pop(1)

0x15f: Return(); Pop(0)

0x160: PushEmpty(string, bool)
0x161: Stack[-2] = Stack[-3]
0x162: Push("")
0x163: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x164: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x165: Stack[-1] = (bool) 0
0x166: GOTO 0x168

0x167: Stack[-1] = (bool) 1
0x168: Call2 0x1280

0x169: Pop(2)
0x16a: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x16b: Return(); Pop(0)

0x16c: PushEmpty()
0x16d: Push((int) 1)
0x16e: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x16f: PushEmpty()
0x170: Call2 0x129e

0x171: Pop(0)
0x172: Push((int) 31317)
0x173: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x174: IF (Stack[-1] == 0) GOTO 0x189; Pop(1)

0x175: PushEmpty(string)
0x176: Stack[-1] = "Neutral"
0x177: Call2 0x156

0x178: Pop(1)
0x179: Push((int) 529934)
0x17a: @@ SetMessage(Stack[-1])
0x17b: Pop(1)
0x17c: @@ ClearReplies()
0x17d: Pop(0)
0x17e: Push((int) 529935)
0x17f: Push((int) -1)
0x180: Push((int) 31318)
0x181: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x182: Pop(3)
0x183: Push((int) 529936)
0x184: Push((int) -1)
0x185: Push((int) 31319)
0x186: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x187: Pop(3)
0x188: Return(); Pop(0)

0x189: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x18a: PushEmpty(bool)
0x18b: Call2 0x1355

0x18c: Pop(0)
0x18d: IF (Stack[-1] == 0) GOTO 0x191; Pop(1)

0x18e: @ lshStopAnimation()
0x18f: Pop(0)
0x190: GOTO 0x193

0x191: @ StopAnimation()
0x192: Pop(0)
0x193: Return(); Pop(0)

0x194: GOTO 0x16d

0x195: Return(); Pop(0)

0x196: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x197: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x198: PushEmpty(bool, object, float)
0x199: Stack[-2] = Stack[-12]
0x19a: Stack[-1] = (float) 130.0
0x19b: Call2 0x1191

0x19c: Pop(2)
0x19d: Pop(1); Push((bool) Stack[-1] == 0)
0x19e: IF (Stack[-1] == 0) GOTO 0x1a1; Pop(1)

0x19f: Stack[-10] = (int) -2
0x1a0: Return(); Pop(8)

0x1a1: @ CreateDialog(Stack[-4])
0x1a2: Pop(0)
0x1a3: PushEmpty(int)
0x1a4: Call2 0x134f

0x1a5: Pop(0)
0x1a6: @@ SetNPCName(Stack[-1])
0x1a7: Pop(1)
0x1a8: PushEmpty(int)
0x1a9: Call2 0x134d

0x1aa: Pop(0)
0x1ab: @@ SetNPCDescription(Stack[-1])
0x1ac: Pop(1)
0x1ad: PushEmpty(string)
0x1ae: Call2 0x1351

0x1af: Pop(0)
0x1b0: @@ SetPhoto(Stack[-1])
0x1b1: Pop(1)
0x1b2: PushEmpty(string)
0x1b3: Call2 0x1353

0x1b4: Pop(0)
0x1b5: @@ SetPhoto2(Stack[-1])
0x1b6: Pop(1)
0x1b7: PushEmpty(int)
0x1b8: Call2 0x1667

0x1b9: Pop(0)
0x1ba: @@ SetPlayerName(Stack[-1])
0x1bb: Pop(1)
0x1bc: Stack[-2] = (int) -1
0x1bd: @ IsOverrideActive(Stack[-3])
0x1be: Pop(0)
0x1bf: Push(Stack[-3])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c1: Stack[-10] = (int) -2
0x1c2: Return(); Pop(8)

0x1c3: @ DoDialog(Stack[-4])
0x1c4: Pop(0)
0x1c5: PushEmpty(bool, object)
0x1c6: PushEmpty(object)
0x1c7: Call2 0x12a5

0x1c8: Stack[-2] = Stack[-1]
0x1c9: Pop(1)
0x1ca: Call2 0x11e6

0x1cb: Pop(2)
0x1cc: PushEmpty(object, object)
0x1cd: Stack[-2] = Stack[-11]
0x1ce: Stack[-1] = Stack[-6]
0x1cf: Push(-2, 4); TaskCall(5)
0x1d0: Call2 0x1e7

0x1d1: Pop(-2, 4); TaskReturn
0x1d2: Pop(2)
0x1d3: @@ IsDialogEnd(Stack[-1])
0x1d4: Pop(0)
0x1d5: Pop(0); Push((bool) Stack[-1] == 0)
0x1d6: IF (Stack[-1] == 0) GOTO 0x1dc; Pop(1)

0x1d7: @ sync()
0x1d8: Pop(0)
0x1d9: @@ IsDialogEnd(Stack[-1])
0x1da: Pop(0)
0x1db: GOTO 0x1d5

0x1dc: PushEmpty(object)
0x1dd: Stack[-1] = Stack[-10]
0x1de: Call2 0x11d5

0x1df: Pop(1)
0x1e0: @ StopDialog(Stack[-4])
0x1e1: Pop(0)
0x1e2: @@ GetReturnValue(Stack[-2])
0x1e3: Pop(0)
0x1e4: Stack[-10] = Stack[-2]
0x1e5: Return(); Pop(8)

0x1e6: Stack[-4] = 0
0x1e7: PushEmpty()
0x1e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1e9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1eb: Push((int) 1)
0x1ec: IF (Stack[-1] == 0) GOTO 0x203; Pop(1)

0x1ed: PushEmpty(string)
0x1ee: Stack[-1] = "Neutral"
0x1ef: Call2 0x221

0x1f0: Pop(1)
0x1f1: Push((int) 529938)
0x1f2: @@ SetMessage(Stack[-1])
0x1f3: Pop(1)
0x1f4: @@ ClearReplies()
0x1f5: Pop(0)
0x1f6: Push((int) 529939)
0x1f7: Push((int) -1)
0x1f8: Push((int) 31322)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Push((int) 529940)
0x1fc: Push((int) -1)
0x1fd: Push((int) 31323)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: GOTO 0x203

0x201: Return(); Pop(0)

0x202: GOTO 0x1eb

0x203: PushEmpty(bool)
0x204: Call2 0x1355

0x205: Pop(0)
0x206: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x207: @ lshWaitForAnimEnd()
0x208: Pop(0)
0x209: Push( Stack[3 + Tasks[-1].StackPointer] )
0x20a: IF (Stack[-1] == 0) GOTO 0x20c; Pop(1)

0x20b: GOTO 0x211

0x20c: PushEmpty(string)
0x20d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x20e: Call2 0x1270

0x20f: Pop(1)
0x210: GOTO 0x207

0x211: GOTO 0x220

0x212: Push("all")
0x213: Push("idle")
0x214: @ PlayAnimation(Stack[-2], Stack[-1])
0x215: Pop(2)
0x216: @ WaitForAnimEnd()
0x217: Pop(0)
0x218: Push( Stack[3 + Tasks[-1].StackPointer] )
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: GOTO 0x220

0x21b: Push("all")
0x21c: Push("idle")
0x21d: @ PlayAnimation(Stack[-2], Stack[-1])
0x21e: Pop(2)
0x21f: GOTO 0x216

0x220: Return(); Pop(0)

0x221: PushEmpty()
0x222: PushEmpty(bool)
0x223: Call2 0x1355

0x224: Pop(0)
0x225: Pop(1); Push((bool) Stack[-1] == 0)
0x226: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x227: Return(); Pop(0)

0x228: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x229: IF (Stack[-1] == 0) GOTO 0x22b; Pop(1)

0x22a: Return(); Pop(0)

0x22b: PushEmpty(string, bool)
0x22c: Stack[-2] = Stack[-3]
0x22d: Push("")
0x22e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x22f: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x230: Stack[-1] = (bool) 0
0x231: GOTO 0x233

0x232: Stack[-1] = (bool) 1
0x233: Call2 0x1280

0x234: Pop(2)
0x235: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x236: Return(); Pop(0)

0x237: PushEmpty()
0x238: Push((int) 1)
0x239: IF (Stack[-1] == 0) GOTO 0x260; Pop(1)

0x23a: PushEmpty()
0x23b: Call2 0x129e

0x23c: Pop(0)
0x23d: Push((int) 31321)
0x23e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x240: PushEmpty(string)
0x241: Stack[-1] = "Neutral"
0x242: Call2 0x221

0x243: Pop(1)
0x244: Push((int) 529938)
0x245: @@ SetMessage(Stack[-1])
0x246: Pop(1)
0x247: @@ ClearReplies()
0x248: Pop(0)
0x249: Push((int) 529939)
0x24a: Push((int) -1)
0x24b: Push((int) 31322)
0x24c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24d: Pop(3)
0x24e: Push((int) 529940)
0x24f: Push((int) -1)
0x250: Push((int) 31323)
0x251: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x252: Pop(3)
0x253: Return(); Pop(0)

0x254: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x255: PushEmpty(bool)
0x256: Call2 0x1355

0x257: Pop(0)
0x258: IF (Stack[-1] == 0) GOTO 0x25c; Pop(1)

0x259: @ lshStopAnimation()
0x25a: Pop(0)
0x25b: GOTO 0x25e

0x25c: @ StopAnimation()
0x25d: Pop(0)
0x25e: Return(); Pop(0)

0x25f: GOTO 0x238

0x260: Return(); Pop(0)

0x261: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x262: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x263: PushEmpty(bool, object, float)
0x264: Stack[-2] = Stack[-12]
0x265: Stack[-1] = (float) 130.0
0x266: Call2 0x1191

0x267: Pop(2)
0x268: Pop(1); Push((bool) Stack[-1] == 0)
0x269: IF (Stack[-1] == 0) GOTO 0x26c; Pop(1)

0x26a: Stack[-10] = (int) -2
0x26b: Return(); Pop(8)

0x26c: @ CreateDialog(Stack[-4])
0x26d: Pop(0)
0x26e: PushEmpty(int)
0x26f: Call2 0x134f

0x270: Pop(0)
0x271: @@ SetNPCName(Stack[-1])
0x272: Pop(1)
0x273: PushEmpty(int)
0x274: Call2 0x134d

0x275: Pop(0)
0x276: @@ SetNPCDescription(Stack[-1])
0x277: Pop(1)
0x278: PushEmpty(string)
0x279: Call2 0x1351

0x27a: Pop(0)
0x27b: @@ SetPhoto(Stack[-1])
0x27c: Pop(1)
0x27d: PushEmpty(string)
0x27e: Call2 0x1353

0x27f: Pop(0)
0x280: @@ SetPhoto2(Stack[-1])
0x281: Pop(1)
0x282: PushEmpty(int)
0x283: Call2 0x1667

0x284: Pop(0)
0x285: @@ SetPlayerName(Stack[-1])
0x286: Pop(1)
0x287: Stack[-2] = (int) -1
0x288: @ IsOverrideActive(Stack[-3])
0x289: Pop(0)
0x28a: Push(Stack[-3])
0x28b: IF (Stack[-1] == 0) GOTO 0x28e; Pop(1)

0x28c: Stack[-10] = (int) -2
0x28d: Return(); Pop(8)

0x28e: @ DoDialog(Stack[-4])
0x28f: Pop(0)
0x290: PushEmpty(bool, object)
0x291: PushEmpty(object)
0x292: Call2 0x12a5

0x293: Stack[-2] = Stack[-1]
0x294: Pop(1)
0x295: Call2 0x11e6

0x296: Pop(2)
0x297: PushEmpty(object, object)
0x298: Stack[-2] = Stack[-11]
0x299: Stack[-1] = Stack[-6]
0x29a: Push(-2, 4); TaskCall(7)
0x29b: Call2 0x2b2

0x29c: Pop(-2, 4); TaskReturn
0x29d: Pop(2)
0x29e: @@ IsDialogEnd(Stack[-1])
0x29f: Pop(0)
0x2a0: Pop(0); Push((bool) Stack[-1] == 0)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a2: @ sync()
0x2a3: Pop(0)
0x2a4: @@ IsDialogEnd(Stack[-1])
0x2a5: Pop(0)
0x2a6: GOTO 0x2a0

0x2a7: PushEmpty(object)
0x2a8: Stack[-1] = Stack[-10]
0x2a9: Call2 0x11d5

0x2aa: Pop(1)
0x2ab: @ StopDialog(Stack[-4])
0x2ac: Pop(0)
0x2ad: @@ GetReturnValue(Stack[-2])
0x2ae: Pop(0)
0x2af: Stack[-10] = Stack[-2]
0x2b0: Return(); Pop(8)

0x2b1: Stack[-4] = 0
0x2b2: PushEmpty()
0x2b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2b5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2b6: Push((int) 1)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2b8: PushEmpty(bool, object)
0x2b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ba: Call2 0x1553

0x2bb: Pop(1)
0x2bc: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2bd: PushEmpty(string)
0x2be: Stack[-1] = "Oracle"
0x2bf: Call2 0x305

0x2c0: Pop(1)
0x2c1: Push((int) 521017)
0x2c2: @@ SetMessage(Stack[-1])
0x2c3: Pop(1)
0x2c4: @@ ClearReplies()
0x2c5: Pop(0)
0x2c6: Push((int) 528565)
0x2c7: Push((int) 29962)
0x2c8: Push((int) 29961)
0x2c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ca: Pop(3)
0x2cb: Push((int) 528573)
0x2cc: Push((int) 29966)
0x2cd: Push((int) 29969)
0x2ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cf: Pop(3)
0x2d0: GOTO 0x2e7

0x2d1: PushEmpty(string)
0x2d2: Stack[-1] = "Neutral"
0x2d3: Call2 0x305

0x2d4: Pop(1)
0x2d5: Push((int) 521041)
0x2d6: @@ SetMessage(Stack[-1])
0x2d7: Pop(1)
0x2d8: @@ ClearReplies()
0x2d9: Pop(0)
0x2da: Push((int) 528593)
0x2db: Push((int) 29994)
0x2dc: Push((int) 29993)
0x2dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2de: Pop(3)
0x2df: Push((int) 521042)
0x2e0: Push((int) -1)
0x2e1: Push((int) 22238)
0x2e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e3: Pop(3)
0x2e4: GOTO 0x2e7

0x2e5: Return(); Pop(0)

0x2e6: GOTO 0x2b6

0x2e7: PushEmpty(bool)
0x2e8: Call2 0x1355

0x2e9: Pop(0)
0x2ea: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2eb: @ lshWaitForAnimEnd()
0x2ec: Pop(0)
0x2ed: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f0; Pop(1)

0x2ef: GOTO 0x2f5

0x2f0: PushEmpty(string)
0x2f1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2f2: Call2 0x1270

0x2f3: Pop(1)
0x2f4: GOTO 0x2eb

0x2f5: GOTO 0x304

0x2f6: Push("all")
0x2f7: Push("idle")
0x2f8: @ PlayAnimation(Stack[-2], Stack[-1])
0x2f9: Pop(2)
0x2fa: @ WaitForAnimEnd()
0x2fb: Pop(0)
0x2fc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2fd: IF (Stack[-1] == 0) GOTO 0x2ff; Pop(1)

0x2fe: GOTO 0x304

0x2ff: Push("all")
0x300: Push("idle")
0x301: @ PlayAnimation(Stack[-2], Stack[-1])
0x302: Pop(2)
0x303: GOTO 0x2fa

0x304: Return(); Pop(0)

0x305: PushEmpty()
0x306: PushEmpty(bool)
0x307: Call2 0x1355

0x308: Pop(0)
0x309: Pop(1); Push((bool) Stack[-1] == 0)
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: Return(); Pop(0)

0x30c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x30d: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30e: Return(); Pop(0)

0x30f: PushEmpty(string, bool)
0x310: Stack[-2] = Stack[-3]
0x311: Push("")
0x312: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x313: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x314: Stack[-1] = (bool) 0
0x315: GOTO 0x317

0x316: Stack[-1] = (bool) 1
0x317: Call2 0x1280

0x318: Pop(2)
0x319: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x31a: Return(); Pop(0)

0x31b: PushEmpty()
0x31c: Push((int) 1)
0x31d: IF (Stack[-1] == 0) GOTO 0x460; Pop(1)

0x31e: PushEmpty()
0x31f: Call2 0x129e

0x320: Pop(0)
0x321: Push((int) 22231)
0x322: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x323: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x324: PushEmpty(object, object)
0x325: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x326: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x327: Call2 0x135e

0x328: Pop(2)
0x329: PushEmpty(object, object)
0x32a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x32b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x32c: Call2 0x1401

0x32d: Pop(2)
0x32e: PushEmpty(object, object)
0x32f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x330: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x331: Call2 0x1367

0x332: Pop(2)
0x333: Push((int) 22230)
0x334: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x363; Pop(1)

0x336: PushEmpty(bool, object)
0x337: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x338: Call2 0x1553

0x339: Pop(1)
0x33a: IF (Stack[-1] == 0) GOTO 0x34f; Pop(1)

0x33b: PushEmpty(string)
0x33c: Stack[-1] = "Oracle"
0x33d: Call2 0x305

0x33e: Pop(1)
0x33f: Push((int) 521017)
0x340: @@ SetMessage(Stack[-1])
0x341: Pop(1)
0x342: @@ ClearReplies()
0x343: Pop(0)
0x344: Push((int) 528565)
0x345: Push((int) 29962)
0x346: Push((int) 29961)
0x347: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x348: Pop(3)
0x349: Push((int) 528573)
0x34a: Push((int) 29966)
0x34b: Push((int) 29969)
0x34c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34d: Pop(3)
0x34e: Return(); Pop(0)

0x34f: PushEmpty(string)
0x350: Stack[-1] = "Neutral"
0x351: Call2 0x305

0x352: Pop(1)
0x353: Push((int) 521041)
0x354: @@ SetMessage(Stack[-1])
0x355: Pop(1)
0x356: @@ ClearReplies()
0x357: Pop(0)
0x358: Push((int) 528593)
0x359: Push((int) 29994)
0x35a: Push((int) 29993)
0x35b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35c: Pop(3)
0x35d: Push((int) 521042)
0x35e: Push((int) -1)
0x35f: Push((int) 22238)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Return(); Pop(0)

0x363: Push((int) 29994)
0x364: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x365: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral"
0x368: Call2 0x305

0x369: Pop(1)
0x36a: Push((int) 528594)
0x36b: @@ SetMessage(Stack[-1])
0x36c: Pop(1)
0x36d: @@ ClearReplies()
0x36e: Pop(0)
0x36f: Push((int) 528595)
0x370: Push((int) -1)
0x371: Push((int) 29995)
0x372: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x373: Pop(3)
0x374: Return(); Pop(0)

0x375: Push((int) 29962)
0x376: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x377: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x378: PushEmpty(string)
0x379: Stack[-1] = "Oracle"
0x37a: Call2 0x305

0x37b: Pop(1)
0x37c: Push((int) 528566)
0x37d: @@ SetMessage(Stack[-1])
0x37e: Pop(1)
0x37f: @@ ClearReplies()
0x380: Pop(0)
0x381: Push((int) 528567)
0x382: Push((int) 29964)
0x383: Push((int) 29963)
0x384: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x385: Pop(3)
0x386: Push((int) 528574)
0x387: Push((int) 29964)
0x388: Push((int) 29970)
0x389: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x38a: Pop(3)
0x38b: Return(); Pop(0)

0x38c: Push((int) 29964)
0x38d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x3a3; Pop(1)

0x38f: PushEmpty(string)
0x390: Stack[-1] = "Smile"
0x391: Call2 0x305

0x392: Pop(1)
0x393: Push((int) 528568)
0x394: @@ SetMessage(Stack[-1])
0x395: Pop(1)
0x396: @@ ClearReplies()
0x397: Pop(0)
0x398: Push((int) 528569)
0x399: Push((int) 29987)
0x39a: Push((int) 29965)
0x39b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x39c: Pop(3)
0x39d: Push((int) 528575)
0x39e: Push((int) 29973)
0x39f: Push((int) 29972)
0x3a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a1: Pop(3)
0x3a2: Return(); Pop(0)

0x3a3: Push((int) 29973)
0x3a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3a5: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3a6: PushEmpty(string)
0x3a7: Stack[-1] = "Neutral"
0x3a8: Call2 0x305

0x3a9: Pop(1)
0x3aa: Push((int) 528576)
0x3ab: @@ SetMessage(Stack[-1])
0x3ac: Pop(1)
0x3ad: @@ ClearReplies()
0x3ae: Pop(0)
0x3af: Push((int) 528577)
0x3b0: Push((int) -1)
0x3b1: Push((int) 29974)
0x3b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b3: Pop(3)
0x3b4: Return(); Pop(0)

0x3b5: Push((int) 29987)
0x3b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b7: IF (Stack[-1] == 0) GOTO 0x3cc; Pop(1)

0x3b8: PushEmpty(string)
0x3b9: Stack[-1] = "Neutral"
0x3ba: Call2 0x305

0x3bb: Pop(1)
0x3bc: Push((int) 528588)
0x3bd: @@ SetMessage(Stack[-1])
0x3be: Pop(1)
0x3bf: @@ ClearReplies()
0x3c0: Pop(0)
0x3c1: Push((int) 528589)
0x3c2: Push((int) 29966)
0x3c3: Push((int) 29988)
0x3c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c5: Pop(3)
0x3c6: Push((int) 528590)
0x3c7: Push((int) 29966)
0x3c8: Push((int) 29989)
0x3c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ca: Pop(3)
0x3cb: Return(); Pop(0)

0x3cc: Push((int) 29966)
0x3cd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ce: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3cf: PushEmpty(string)
0x3d0: Stack[-1] = "Neutral"
0x3d1: Call2 0x305

0x3d2: Pop(1)
0x3d3: Push((int) 528570)
0x3d4: @@ SetMessage(Stack[-1])
0x3d5: Pop(1)
0x3d6: @@ ClearReplies()
0x3d7: Pop(0)
0x3d8: Push((int) 528571)
0x3d9: Push((int) 29968)
0x3da: Push((int) 29967)
0x3db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dc: Pop(3)
0x3dd: Return(); Pop(0)

0x3de: Push((int) 29968)
0x3df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3e0: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3e1: PushEmpty(string)
0x3e2: Stack[-1] = "Neutral"
0x3e3: Call2 0x305

0x3e4: Pop(1)
0x3e5: Push((int) 528572)
0x3e6: @@ SetMessage(Stack[-1])
0x3e7: Pop(1)
0x3e8: @@ ClearReplies()
0x3e9: Pop(0)
0x3ea: Push((int) 528578)
0x3eb: Push((int) 29976)
0x3ec: Push((int) 29975)
0x3ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ee: Pop(3)
0x3ef: Push((int) 528584)
0x3f0: Push((int) 29976)
0x3f1: Push((int) 29981)
0x3f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f3: Pop(3)
0x3f4: Return(); Pop(0)

0x3f5: Push((int) 29976)
0x3f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x3f8: PushEmpty(string)
0x3f9: Stack[-1] = "Oracle"
0x3fa: Call2 0x305

0x3fb: Pop(1)
0x3fc: Push((int) 528579)
0x3fd: @@ SetMessage(Stack[-1])
0x3fe: Pop(1)
0x3ff: @@ ClearReplies()
0x400: Pop(0)
0x401: Push((int) 528585)
0x402: Push((int) 29984)
0x403: Push((int) 29983)
0x404: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x405: Pop(3)
0x406: Push((int) 528587)
0x407: Push((int) 29984)
0x408: Push((int) 29985)
0x409: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x40a: Pop(3)
0x40b: Return(); Pop(0)

0x40c: Push((int) 29984)
0x40d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x40e: IF (Stack[-1] == 0) GOTO 0x41e; Pop(1)

0x40f: PushEmpty(string)
0x410: Stack[-1] = "Refusal"
0x411: Call2 0x305

0x412: Pop(1)
0x413: Push((int) 528586)
0x414: @@ SetMessage(Stack[-1])
0x415: Pop(1)
0x416: @@ ClearReplies()
0x417: Pop(0)
0x418: Push((int) 528580)
0x419: Push((int) 29978)
0x41a: Push((int) 29977)
0x41b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x41c: Pop(3)
0x41d: Return(); Pop(0)

0x41e: Push((int) 29978)
0x41f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x421: PushEmpty(string)
0x422: Stack[-1] = "Neutral"
0x423: Call2 0x305

0x424: Pop(1)
0x425: Push((int) 528581)
0x426: @@ SetMessage(Stack[-1])
0x427: Pop(1)
0x428: @@ ClearReplies()
0x429: Pop(0)
0x42a: Push((int) 528582)
0x42b: Push((int) 29980)
0x42c: Push((int) 29979)
0x42d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42e: Pop(3)
0x42f: Return(); Pop(0)

0x430: Push((int) 29980)
0x431: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x432: IF (Stack[-1] == 0) GOTO 0x442; Pop(1)

0x433: PushEmpty(string)
0x434: Stack[-1] = "Neutral"
0x435: Call2 0x305

0x436: Pop(1)
0x437: Push((int) 528583)
0x438: @@ SetMessage(Stack[-1])
0x439: Pop(1)
0x43a: @@ ClearReplies()
0x43b: Pop(0)
0x43c: Push((int) 528591)
0x43d: Push((int) 29992)
0x43e: Push((int) 29991)
0x43f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x440: Pop(3)
0x441: Return(); Pop(0)

0x442: Push((int) 29992)
0x443: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x444: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x445: PushEmpty(string)
0x446: Stack[-1] = "Refusal"
0x447: Call2 0x305

0x448: Pop(1)
0x449: Push((int) 528592)
0x44a: @@ SetMessage(Stack[-1])
0x44b: Pop(1)
0x44c: @@ ClearReplies()
0x44d: Pop(0)
0x44e: Push((int) 521018)
0x44f: Push((int) -1)
0x450: Push((int) 22231)
0x451: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x452: Pop(3)
0x453: Return(); Pop(0)

0x454: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x455: PushEmpty(bool)
0x456: Call2 0x1355

0x457: Pop(0)
0x458: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x459: @ lshStopAnimation()
0x45a: Pop(0)
0x45b: GOTO 0x45e

0x45c: @ StopAnimation()
0x45d: Pop(0)
0x45e: Return(); Pop(0)

0x45f: GOTO 0x31c

0x460: Return(); Pop(0)

0x461: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x462: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x463: PushEmpty(bool, object, float)
0x464: Stack[-2] = Stack[-12]
0x465: Stack[-1] = (float) 130.0
0x466: Call2 0x1191

0x467: Pop(2)
0x468: Pop(1); Push((bool) Stack[-1] == 0)
0x469: IF (Stack[-1] == 0) GOTO 0x46c; Pop(1)

0x46a: Stack[-10] = (int) -2
0x46b: Return(); Pop(8)

0x46c: @ CreateDialog(Stack[-4])
0x46d: Pop(0)
0x46e: PushEmpty(int)
0x46f: Call2 0x134f

0x470: Pop(0)
0x471: @@ SetNPCName(Stack[-1])
0x472: Pop(1)
0x473: PushEmpty(int)
0x474: Call2 0x134d

0x475: Pop(0)
0x476: @@ SetNPCDescription(Stack[-1])
0x477: Pop(1)
0x478: PushEmpty(string)
0x479: Call2 0x1351

0x47a: Pop(0)
0x47b: @@ SetPhoto(Stack[-1])
0x47c: Pop(1)
0x47d: PushEmpty(string)
0x47e: Call2 0x1353

0x47f: Pop(0)
0x480: @@ SetPhoto2(Stack[-1])
0x481: Pop(1)
0x482: PushEmpty(int)
0x483: Call2 0x1667

0x484: Pop(0)
0x485: @@ SetPlayerName(Stack[-1])
0x486: Pop(1)
0x487: Stack[-2] = (int) -1
0x488: @ IsOverrideActive(Stack[-3])
0x489: Pop(0)
0x48a: Push(Stack[-3])
0x48b: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x48c: Stack[-10] = (int) -2
0x48d: Return(); Pop(8)

0x48e: @ DoDialog(Stack[-4])
0x48f: Pop(0)
0x490: PushEmpty(bool, object)
0x491: PushEmpty(object)
0x492: Call2 0x12a5

0x493: Stack[-2] = Stack[-1]
0x494: Pop(1)
0x495: Call2 0x11e6

0x496: Pop(2)
0x497: PushEmpty(object, object)
0x498: Stack[-2] = Stack[-11]
0x499: Stack[-1] = Stack[-6]
0x49a: Push(-2, 4); TaskCall(9)
0x49b: Call2 0x4b2

0x49c: Pop(-2, 4); TaskReturn
0x49d: Pop(2)
0x49e: @@ IsDialogEnd(Stack[-1])
0x49f: Pop(0)
0x4a0: Pop(0); Push((bool) Stack[-1] == 0)
0x4a1: IF (Stack[-1] == 0) GOTO 0x4a7; Pop(1)

0x4a2: @ sync()
0x4a3: Pop(0)
0x4a4: @@ IsDialogEnd(Stack[-1])
0x4a5: Pop(0)
0x4a6: GOTO 0x4a0

0x4a7: PushEmpty(object)
0x4a8: Stack[-1] = Stack[-10]
0x4a9: Call2 0x11d5

0x4aa: Pop(1)
0x4ab: @ StopDialog(Stack[-4])
0x4ac: Pop(0)
0x4ad: @@ GetReturnValue(Stack[-2])
0x4ae: Pop(0)
0x4af: Stack[-10] = Stack[-2]
0x4b0: Return(); Pop(8)

0x4b1: Stack[-4] = 0
0x4b2: PushEmpty()
0x4b3: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4b4: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4b5: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4b6: Push((int) 1)
0x4b7: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4b8: PushEmpty(bool, object)
0x4b9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ba: Call2 0x1489

0x4bb: Pop(1)
0x4bc: IF (Stack[-1] == 0) GOTO 0x4cc; Pop(1)

0x4bd: PushEmpty(string)
0x4be: Stack[-1] = "Refusal"
0x4bf: Call2 0x50e

0x4c0: Pop(1)
0x4c1: Push((int) 521418)
0x4c2: @@ SetMessage(Stack[-1])
0x4c3: Pop(1)
0x4c4: @@ ClearReplies()
0x4c5: Pop(0)
0x4c6: Push((int) 521419)
0x4c7: Push((int) 24983)
0x4c8: Push((int) 22597)
0x4c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ca: Pop(3)
0x4cb: GOTO 0x4f0

0x4cc: PushEmpty(string)
0x4cd: Stack[-1] = "Neutral"
0x4ce: Call2 0x50e

0x4cf: Pop(1)
0x4d0: Push((int) 521423)
0x4d1: @@ SetMessage(Stack[-1])
0x4d2: Pop(1)
0x4d3: @@ ClearReplies()
0x4d4: Pop(0)
0x4d5: PushEmpty(bool)
0x4d6: Stack[-1] = (bool) 0
0x4d7: PushEmpty(bool, object)
0x4d8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d9: Call2 0x147d

0x4da: Pop(1)
0x4db: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4dc: PushEmpty(bool, object)
0x4dd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4de: Call2 0x153c

0x4df: Pop(1)
0x4e0: IF (Stack[-1] == 0) GOTO 0x4e2; Pop(1)

0x4e1: Stack[-1] = (bool) 1
0x4e2: IF (Stack[-1] == 0) GOTO 0x4e8; Pop(1)

0x4e3: Push((int) 521425)
0x4e4: Push((int) 22604)
0x4e5: Push((int) 22603)
0x4e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e7: Pop(3)
0x4e8: Push((int) 521424)
0x4e9: Push((int) -1)
0x4ea: Push((int) 22602)
0x4eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ec: Pop(3)
0x4ed: GOTO 0x4f0

0x4ee: Return(); Pop(0)

0x4ef: GOTO 0x4b6

0x4f0: PushEmpty(bool)
0x4f1: Call2 0x1355

0x4f2: Pop(0)
0x4f3: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4f4: @ lshWaitForAnimEnd()
0x4f5: Pop(0)
0x4f6: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4f7: IF (Stack[-1] == 0) GOTO 0x4f9; Pop(1)

0x4f8: GOTO 0x4fe

0x4f9: PushEmpty(string)
0x4fa: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x4fb: Call2 0x1270

0x4fc: Pop(1)
0x4fd: GOTO 0x4f4

0x4fe: GOTO 0x50d

0x4ff: Push("all")
0x500: Push("idle")
0x501: @ PlayAnimation(Stack[-2], Stack[-1])
0x502: Pop(2)
0x503: @ WaitForAnimEnd()
0x504: Pop(0)
0x505: Push( Stack[3 + Tasks[-1].StackPointer] )
0x506: IF (Stack[-1] == 0) GOTO 0x508; Pop(1)

0x507: GOTO 0x50d

0x508: Push("all")
0x509: Push("idle")
0x50a: @ PlayAnimation(Stack[-2], Stack[-1])
0x50b: Pop(2)
0x50c: GOTO 0x503

0x50d: Return(); Pop(0)

0x50e: PushEmpty()
0x50f: PushEmpty(bool)
0x510: Call2 0x1355

0x511: Pop(0)
0x512: Pop(1); Push((bool) Stack[-1] == 0)
0x513: IF (Stack[-1] == 0) GOTO 0x515; Pop(1)

0x514: Return(); Pop(0)

0x515: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x516: IF (Stack[-1] == 0) GOTO 0x518; Pop(1)

0x517: Return(); Pop(0)

0x518: PushEmpty(string, bool)
0x519: Stack[-2] = Stack[-3]
0x51a: Push("")
0x51b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51d: Stack[-1] = (bool) 0
0x51e: GOTO 0x520

0x51f: Stack[-1] = (bool) 1
0x520: Call2 0x1280

0x521: Pop(2)
0x522: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x523: Return(); Pop(0)

0x524: PushEmpty()
0x525: Push((int) 1)
0x526: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x527: PushEmpty()
0x528: Call2 0x129e

0x529: Pop(0)
0x52a: Push((int) 22599)
0x52b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x52c: IF (Stack[-1] == 0) GOTO 0x532; Pop(1)

0x52d: PushEmpty(object, object)
0x52e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x52f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x530: Call2 0x1372

0x531: Pop(2)
0x532: Push((int) 22607)
0x533: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x534: IF (Stack[-1] == 0) GOTO 0x549; Pop(1)

0x535: PushEmpty(object, object)
0x536: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x537: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x538: Call2 0x137b

0x539: Pop(2)
0x53a: PushEmpty(object, object)
0x53b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x53c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x53d: Call2 0x1407

0x53e: Pop(2)
0x53f: PushEmpty(object, object)
0x540: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x541: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x542: Call2 0x144b

0x543: Pop(2)
0x544: PushEmpty(object, object)
0x545: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x546: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x547: Call2 0x146d

0x548: Pop(2)
0x549: Push((int) 22596)
0x54a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x54b: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x54c: PushEmpty(bool, object)
0x54d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x54e: Call2 0x1489

0x54f: Pop(1)
0x550: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x551: PushEmpty(string)
0x552: Stack[-1] = "Refusal"
0x553: Call2 0x50e

0x554: Pop(1)
0x555: Push((int) 521418)
0x556: @@ SetMessage(Stack[-1])
0x557: Pop(1)
0x558: @@ ClearReplies()
0x559: Pop(0)
0x55a: Push((int) 521419)
0x55b: Push((int) 24983)
0x55c: Push((int) 22597)
0x55d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x55e: Pop(3)
0x55f: Return(); Pop(0)

0x560: PushEmpty(string)
0x561: Stack[-1] = "Neutral"
0x562: Call2 0x50e

0x563: Pop(1)
0x564: Push((int) 521423)
0x565: @@ SetMessage(Stack[-1])
0x566: Pop(1)
0x567: @@ ClearReplies()
0x568: Pop(0)
0x569: PushEmpty(bool)
0x56a: Stack[-1] = (bool) 0
0x56b: PushEmpty(bool, object)
0x56c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x56d: Call2 0x147d

0x56e: Pop(1)
0x56f: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x570: PushEmpty(bool, object)
0x571: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x572: Call2 0x153c

0x573: Pop(1)
0x574: IF (Stack[-1] == 0) GOTO 0x576; Pop(1)

0x575: Stack[-1] = (bool) 1
0x576: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x577: Push((int) 521425)
0x578: Push((int) 22604)
0x579: Push((int) 22603)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Push((int) 521424)
0x57d: Push((int) -1)
0x57e: Push((int) 22602)
0x57f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x580: Pop(3)
0x581: Return(); Pop(0)

0x582: Push((int) 22604)
0x583: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x584: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x585: PushEmpty(string)
0x586: Stack[-1] = "Oracle"
0x587: Call2 0x50e

0x588: Pop(1)
0x589: Push((int) 521426)
0x58a: @@ SetMessage(Stack[-1])
0x58b: Pop(1)
0x58c: @@ ClearReplies()
0x58d: Pop(0)
0x58e: Push((int) 521427)
0x58f: Push((int) 22606)
0x590: Push((int) 22605)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Return(); Pop(0)

0x594: Push((int) 22606)
0x595: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Oracle"
0x599: Call2 0x50e

0x59a: Pop(1)
0x59b: Push((int) 521428)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 523745)
0x5a1: Push((int) 25009)
0x5a2: Push((int) 25008)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Return(); Pop(0)

0x5a6: Push((int) 25009)
0x5a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5b8; Pop(1)

0x5a9: PushEmpty(string)
0x5aa: Stack[-1] = "Oracle"
0x5ab: Call2 0x50e

0x5ac: Pop(1)
0x5ad: Push((int) 523746)
0x5ae: @@ SetMessage(Stack[-1])
0x5af: Pop(1)
0x5b0: @@ ClearReplies()
0x5b1: Pop(0)
0x5b2: Push((int) 523747)
0x5b3: Push((int) 25011)
0x5b4: Push((int) 25010)
0x5b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(3)
0x5b7: Return(); Pop(0)

0x5b8: Push((int) 25011)
0x5b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5ba: IF (Stack[-1] == 0) GOTO 0x5ca; Pop(1)

0x5bb: PushEmpty(string)
0x5bc: Stack[-1] = "Oracle"
0x5bd: Call2 0x50e

0x5be: Pop(1)
0x5bf: Push((int) 523748)
0x5c0: @@ SetMessage(Stack[-1])
0x5c1: Pop(1)
0x5c2: @@ ClearReplies()
0x5c3: Pop(0)
0x5c4: Push((int) 523749)
0x5c5: Push((int) 25013)
0x5c6: Push((int) 25012)
0x5c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c8: Pop(3)
0x5c9: Return(); Pop(0)

0x5ca: Push((int) 25013)
0x5cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5cc: IF (Stack[-1] == 0) GOTO 0x5dc; Pop(1)

0x5cd: PushEmpty(string)
0x5ce: Stack[-1] = "Neutral"
0x5cf: Call2 0x50e

0x5d0: Pop(1)
0x5d1: Push((int) 523750)
0x5d2: @@ SetMessage(Stack[-1])
0x5d3: Pop(1)
0x5d4: @@ ClearReplies()
0x5d5: Pop(0)
0x5d6: Push((int) 523751)
0x5d7: Push((int) 25015)
0x5d8: Push((int) 25014)
0x5d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5da: Pop(3)
0x5db: Return(); Pop(0)

0x5dc: Push((int) 25015)
0x5dd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5de: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5df: PushEmpty(string)
0x5e0: Stack[-1] = "Refusal"
0x5e1: Call2 0x50e

0x5e2: Pop(1)
0x5e3: Push((int) 523752)
0x5e4: @@ SetMessage(Stack[-1])
0x5e5: Pop(1)
0x5e6: @@ ClearReplies()
0x5e7: Pop(0)
0x5e8: Push((int) 523753)
0x5e9: Push((int) 25017)
0x5ea: Push((int) 25016)
0x5eb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5ec: Pop(3)
0x5ed: Return(); Pop(0)

0x5ee: Push((int) 25017)
0x5ef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f0: IF (Stack[-1] == 0) GOTO 0x600; Pop(1)

0x5f1: PushEmpty(string)
0x5f2: Stack[-1] = "Refusal"
0x5f3: Call2 0x50e

0x5f4: Pop(1)
0x5f5: Push((int) 523754)
0x5f6: @@ SetMessage(Stack[-1])
0x5f7: Pop(1)
0x5f8: @@ ClearReplies()
0x5f9: Pop(0)
0x5fa: Push((int) 523755)
0x5fb: Push((int) 25019)
0x5fc: Push((int) 25018)
0x5fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5fe: Pop(3)
0x5ff: Return(); Pop(0)

0x600: Push((int) 25019)
0x601: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x602: IF (Stack[-1] == 0) GOTO 0x612; Pop(1)

0x603: PushEmpty(string)
0x604: Stack[-1] = "Refusal"
0x605: Call2 0x50e

0x606: Pop(1)
0x607: Push((int) 523756)
0x608: @@ SetMessage(Stack[-1])
0x609: Pop(1)
0x60a: @@ ClearReplies()
0x60b: Pop(0)
0x60c: Push((int) 521429)
0x60d: Push((int) -1)
0x60e: Push((int) 22607)
0x60f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x610: Pop(3)
0x611: Return(); Pop(0)

0x612: Push((int) 24983)
0x613: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x614: IF (Stack[-1] == 0) GOTO 0x624; Pop(1)

0x615: PushEmpty(string)
0x616: Stack[-1] = "Refusal"
0x617: Call2 0x50e

0x618: Pop(1)
0x619: Push((int) 523725)
0x61a: @@ SetMessage(Stack[-1])
0x61b: Pop(1)
0x61c: @@ ClearReplies()
0x61d: Pop(0)
0x61e: Push((int) 523726)
0x61f: Push((int) 24985)
0x620: Push((int) 24984)
0x621: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x622: Pop(3)
0x623: Return(); Pop(0)

0x624: Push((int) 24985)
0x625: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x626: IF (Stack[-1] == 0) GOTO 0x63b; Pop(1)

0x627: PushEmpty(string)
0x628: Stack[-1] = "Neutral"
0x629: Call2 0x50e

0x62a: Pop(1)
0x62b: Push((int) 523727)
0x62c: @@ SetMessage(Stack[-1])
0x62d: Pop(1)
0x62e: @@ ClearReplies()
0x62f: Pop(0)
0x630: Push((int) 523728)
0x631: Push((int) 24987)
0x632: Push((int) 24986)
0x633: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x634: Pop(3)
0x635: Push((int) 523740)
0x636: Push((int) 24994)
0x637: Push((int) 25000)
0x638: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x639: Pop(3)
0x63a: Return(); Pop(0)

0x63b: Push((int) 24987)
0x63c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63d: IF (Stack[-1] == 0) GOTO 0x652; Pop(1)

0x63e: PushEmpty(string)
0x63f: Stack[-1] = "Neutral"
0x640: Call2 0x50e

0x641: Pop(1)
0x642: Push((int) 523729)
0x643: @@ SetMessage(Stack[-1])
0x644: Pop(1)
0x645: @@ ClearReplies()
0x646: Pop(0)
0x647: Push((int) 523730)
0x648: Push((int) 24989)
0x649: Push((int) 24988)
0x64a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64b: Pop(3)
0x64c: Push((int) 523737)
0x64d: Push((int) 24994)
0x64e: Push((int) 24995)
0x64f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x650: Pop(3)
0x651: Return(); Pop(0)

0x652: Push((int) 24989)
0x653: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x654: IF (Stack[-1] == 0) GOTO 0x669; Pop(1)

0x655: PushEmpty(string)
0x656: Stack[-1] = "Neutral"
0x657: Call2 0x50e

0x658: Pop(1)
0x659: Push((int) 523731)
0x65a: @@ SetMessage(Stack[-1])
0x65b: Pop(1)
0x65c: @@ ClearReplies()
0x65d: Pop(0)
0x65e: Push((int) 523732)
0x65f: Push((int) 24991)
0x660: Push((int) 24990)
0x661: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x662: Pop(3)
0x663: Push((int) 523739)
0x664: Push((int) 24994)
0x665: Push((int) 24998)
0x666: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x667: Pop(3)
0x668: Return(); Pop(0)

0x669: Push((int) 24991)
0x66a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x66b: IF (Stack[-1] == 0) GOTO 0x680; Pop(1)

0x66c: PushEmpty(string)
0x66d: Stack[-1] = "Neutral"
0x66e: Call2 0x50e

0x66f: Pop(1)
0x670: Push((int) 523733)
0x671: @@ SetMessage(Stack[-1])
0x672: Pop(1)
0x673: @@ ClearReplies()
0x674: Pop(0)
0x675: Push((int) 523734)
0x676: Push((int) 25002)
0x677: Push((int) 24992)
0x678: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x679: Pop(3)
0x67a: Push((int) 523735)
0x67b: Push((int) 24994)
0x67c: Push((int) 24993)
0x67d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67e: Pop(3)
0x67f: Return(); Pop(0)

0x680: Push((int) 24994)
0x681: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x682: IF (Stack[-1] == 0) GOTO 0x692; Pop(1)

0x683: PushEmpty(string)
0x684: Stack[-1] = "Neutral"
0x685: Call2 0x50e

0x686: Pop(1)
0x687: Push((int) 523736)
0x688: @@ SetMessage(Stack[-1])
0x689: Pop(1)
0x68a: @@ ClearReplies()
0x68b: Pop(0)
0x68c: Push((int) 523738)
0x68d: Push((int) 25005)
0x68e: Push((int) 24996)
0x68f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x690: Pop(3)
0x691: Return(); Pop(0)

0x692: Push((int) 25002)
0x693: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x694: IF (Stack[-1] == 0) GOTO 0x6a9; Pop(1)

0x695: PushEmpty(string)
0x696: Stack[-1] = "Oracle"
0x697: Call2 0x50e

0x698: Pop(1)
0x699: Push((int) 523741)
0x69a: @@ SetMessage(Stack[-1])
0x69b: Pop(1)
0x69c: @@ ClearReplies()
0x69d: Pop(0)
0x69e: Push((int) 523742)
0x69f: Push((int) 25005)
0x6a0: Push((int) 25003)
0x6a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a2: Pop(3)
0x6a3: Push((int) 523743)
0x6a4: Push((int) 25005)
0x6a5: Push((int) 25004)
0x6a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a7: Pop(3)
0x6a8: Return(); Pop(0)

0x6a9: Push((int) 25005)
0x6aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6ab: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6ac: PushEmpty(string)
0x6ad: Stack[-1] = "Oracle"
0x6ae: Call2 0x50e

0x6af: Pop(1)
0x6b0: Push((int) 523744)
0x6b1: @@ SetMessage(Stack[-1])
0x6b2: Pop(1)
0x6b3: @@ ClearReplies()
0x6b4: Pop(0)
0x6b5: Push((int) 521421)
0x6b6: Push((int) -1)
0x6b7: Push((int) 22599)
0x6b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6b9: Pop(3)
0x6ba: Return(); Pop(0)

0x6bb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6bc: PushEmpty(bool)
0x6bd: Call2 0x1355

0x6be: Pop(0)
0x6bf: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c0: @ lshStopAnimation()
0x6c1: Pop(0)
0x6c2: GOTO 0x6c5

0x6c3: @ StopAnimation()
0x6c4: Pop(0)
0x6c5: Return(); Pop(0)

0x6c6: GOTO 0x525

0x6c7: Return(); Pop(0)

0x6c8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6c9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6ca: PushEmpty(bool, object, float)
0x6cb: Stack[-2] = Stack[-12]
0x6cc: Stack[-1] = (float) 130.0
0x6cd: Call2 0x1191

0x6ce: Pop(2)
0x6cf: Pop(1); Push((bool) Stack[-1] == 0)
0x6d0: IF (Stack[-1] == 0) GOTO 0x6d3; Pop(1)

0x6d1: Stack[-10] = (int) -2
0x6d2: Return(); Pop(8)

0x6d3: @ CreateDialog(Stack[-4])
0x6d4: Pop(0)
0x6d5: PushEmpty(int)
0x6d6: Call2 0x134f

0x6d7: Pop(0)
0x6d8: @@ SetNPCName(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(int)
0x6db: Call2 0x134d

0x6dc: Pop(0)
0x6dd: @@ SetNPCDescription(Stack[-1])
0x6de: Pop(1)
0x6df: PushEmpty(string)
0x6e0: Call2 0x1351

0x6e1: Pop(0)
0x6e2: @@ SetPhoto(Stack[-1])
0x6e3: Pop(1)
0x6e4: PushEmpty(string)
0x6e5: Call2 0x1353

0x6e6: Pop(0)
0x6e7: @@ SetPhoto2(Stack[-1])
0x6e8: Pop(1)
0x6e9: PushEmpty(int)
0x6ea: Call2 0x1667

0x6eb: Pop(0)
0x6ec: @@ SetPlayerName(Stack[-1])
0x6ed: Pop(1)
0x6ee: Stack[-2] = (int) -1
0x6ef: @ IsOverrideActive(Stack[-3])
0x6f0: Pop(0)
0x6f1: Push(Stack[-3])
0x6f2: IF (Stack[-1] == 0) GOTO 0x6f5; Pop(1)

0x6f3: Stack[-10] = (int) -2
0x6f4: Return(); Pop(8)

0x6f5: @ DoDialog(Stack[-4])
0x6f6: Pop(0)
0x6f7: PushEmpty(bool, object)
0x6f8: PushEmpty(object)
0x6f9: Call2 0x12a5

0x6fa: Stack[-2] = Stack[-1]
0x6fb: Pop(1)
0x6fc: Call2 0x11e6

0x6fd: Pop(2)
0x6fe: PushEmpty(object, object)
0x6ff: Stack[-2] = Stack[-11]
0x700: Stack[-1] = Stack[-6]
0x701: Push(-2, 4); TaskCall(11)
0x702: Call2 0x719

0x703: Pop(-2, 4); TaskReturn
0x704: Pop(2)
0x705: @@ IsDialogEnd(Stack[-1])
0x706: Pop(0)
0x707: Pop(0); Push((bool) Stack[-1] == 0)
0x708: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x709: @ sync()
0x70a: Pop(0)
0x70b: @@ IsDialogEnd(Stack[-1])
0x70c: Pop(0)
0x70d: GOTO 0x707

0x70e: PushEmpty(object)
0x70f: Stack[-1] = Stack[-10]
0x710: Call2 0x11d5

0x711: Pop(1)
0x712: @ StopDialog(Stack[-4])
0x713: Pop(0)
0x714: @@ GetReturnValue(Stack[-2])
0x715: Pop(0)
0x716: Stack[-10] = Stack[-2]
0x717: Return(); Pop(8)

0x718: Stack[-4] = 0
0x719: PushEmpty()
0x71a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x71b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x71c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x71d: Push((int) 1)
0x71e: IF (Stack[-1] == 0) GOTO 0x767; Pop(1)

0x71f: PushEmpty(bool, object)
0x720: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x721: Call2 0x14a1

0x722: Pop(1)
0x723: IF (Stack[-1] == 0) GOTO 0x738; Pop(1)

0x724: PushEmpty(object, object)
0x725: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x726: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x727: Call2 0x13a9

0x728: Pop(2)
0x729: PushEmpty(string)
0x72a: Stack[-1] = "Neutral"
0x72b: Call2 0x785

0x72c: Pop(1)
0x72d: Push((int) 521539)
0x72e: @@ SetMessage(Stack[-1])
0x72f: Pop(1)
0x730: @@ ClearReplies()
0x731: Pop(0)
0x732: Push((int) 522390)
0x733: Push((int) 23556)
0x734: Push((int) 23555)
0x735: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x736: Pop(3)
0x737: GOTO 0x767

0x738: PushEmpty(string)
0x739: Stack[-1] = "Neutral"
0x73a: Call2 0x785

0x73b: Pop(1)
0x73c: Push((int) 521544)
0x73d: @@ SetMessage(Stack[-1])
0x73e: Pop(1)
0x73f: @@ ClearReplies()
0x740: Pop(0)
0x741: PushEmpty(bool, object)
0x742: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x743: Call2 0x1495

0x744: Pop(1)
0x745: IF (Stack[-1] == 0) GOTO 0x74b; Pop(1)

0x746: Push((int) 521545)
0x747: Push((int) 22710)
0x748: Push((int) 22706)
0x749: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x74a: Pop(3)
0x74b: PushEmpty(bool, object)
0x74c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x74d: Call2 0x14ad

0x74e: Pop(1)
0x74f: IF (Stack[-1] == 0) GOTO 0x755; Pop(1)

0x750: Push((int) 521587)
0x751: Push((int) 22749)
0x752: Push((int) 22748)
0x753: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x754: Pop(3)
0x755: PushEmpty(bool, object)
0x756: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x757: Call2 0x14b9

0x758: Pop(1)
0x759: IF (Stack[-1] == 0) GOTO 0x75f; Pop(1)

0x75a: Push((int) 522411)
0x75b: Push((int) 23579)
0x75c: Push((int) 23578)
0x75d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x75e: Pop(3)
0x75f: Push((int) 521546)
0x760: Push((int) -1)
0x761: Push((int) 22707)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: GOTO 0x767

0x765: Return(); Pop(0)

0x766: GOTO 0x71d

0x767: PushEmpty(bool)
0x768: Call2 0x1355

0x769: Pop(0)
0x76a: IF (Stack[-1] == 0) GOTO 0x776; Pop(1)

0x76b: @ lshWaitForAnimEnd()
0x76c: Pop(0)
0x76d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x76e: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76f: GOTO 0x775

0x770: PushEmpty(string)
0x771: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x772: Call2 0x1270

0x773: Pop(1)
0x774: GOTO 0x76b

0x775: GOTO 0x784

0x776: Push("all")
0x777: Push("idle")
0x778: @ PlayAnimation(Stack[-2], Stack[-1])
0x779: Pop(2)
0x77a: @ WaitForAnimEnd()
0x77b: Pop(0)
0x77c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77d: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77e: GOTO 0x784

0x77f: Push("all")
0x780: Push("idle")
0x781: @ PlayAnimation(Stack[-2], Stack[-1])
0x782: Pop(2)
0x783: GOTO 0x77a

0x784: Return(); Pop(0)

0x785: PushEmpty()
0x786: PushEmpty(bool)
0x787: Call2 0x1355

0x788: Pop(0)
0x789: Pop(1); Push((bool) Stack[-1] == 0)
0x78a: IF (Stack[-1] == 0) GOTO 0x78c; Pop(1)

0x78b: Return(); Pop(0)

0x78c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x78d: IF (Stack[-1] == 0) GOTO 0x78f; Pop(1)

0x78e: Return(); Pop(0)

0x78f: PushEmpty(string, bool)
0x790: Stack[-2] = Stack[-3]
0x791: Push("")
0x792: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x794: Stack[-1] = (bool) 0
0x795: GOTO 0x797

0x796: Stack[-1] = (bool) 1
0x797: Call2 0x1280

0x798: Pop(2)
0x799: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x79a: Return(); Pop(0)

0x79b: PushEmpty()
0x79c: Push((int) 1)
0x79d: IF (Stack[-1] == 0) GOTO 0x968; Pop(1)

0x79e: PushEmpty()
0x79f: Call2 0x129e

0x7a0: Pop(0)
0x7a1: Push((int) 22709)
0x7a2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7a3: IF (Stack[-1] == 0) GOTO 0x7ae; Pop(1)

0x7a4: PushEmpty(object, object)
0x7a5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7a6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7a7: Call2 0x1388

0x7a8: Pop(2)
0x7a9: PushEmpty(object, object)
0x7aa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7ab: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7ac: Call2 0x1357

0x7ad: Pop(2)
0x7ae: Push((int) 22711)
0x7af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b0: IF (Stack[-1] == 0) GOTO 0x7b6; Pop(1)

0x7b1: PushEmpty(object, object)
0x7b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7b4: Call2 0x1388

0x7b5: Pop(2)
0x7b6: Push((int) 22772)
0x7b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7b8: IF (Stack[-1] == 0) GOTO 0x7be; Pop(1)

0x7b9: PushEmpty(object, object)
0x7ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7bc: Call2 0x139c

0x7bd: Pop(2)
0x7be: Push((int) 23578)
0x7bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c6; Pop(1)

0x7c1: PushEmpty(object, object)
0x7c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7c4: Call2 0x13af

0x7c5: Pop(2)
0x7c6: Push((int) 22700)
0x7c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7c8: IF (Stack[-1] == 0) GOTO 0x80f; Pop(1)

0x7c9: PushEmpty(bool, object)
0x7ca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7cb: Call2 0x14a1

0x7cc: Pop(1)
0x7cd: IF (Stack[-1] == 0) GOTO 0x7e2; Pop(1)

0x7ce: PushEmpty(object, object)
0x7cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x7d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x7d1: Call2 0x13a9

0x7d2: Pop(2)
0x7d3: PushEmpty(string)
0x7d4: Stack[-1] = "Neutral"
0x7d5: Call2 0x785

0x7d6: Pop(1)
0x7d7: Push((int) 521539)
0x7d8: @@ SetMessage(Stack[-1])
0x7d9: Pop(1)
0x7da: @@ ClearReplies()
0x7db: Pop(0)
0x7dc: Push((int) 522390)
0x7dd: Push((int) 23556)
0x7de: Push((int) 23555)
0x7df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e0: Pop(3)
0x7e1: Return(); Pop(0)

0x7e2: PushEmpty(string)
0x7e3: Stack[-1] = "Neutral"
0x7e4: Call2 0x785

0x7e5: Pop(1)
0x7e6: Push((int) 521544)
0x7e7: @@ SetMessage(Stack[-1])
0x7e8: Pop(1)
0x7e9: @@ ClearReplies()
0x7ea: Pop(0)
0x7eb: PushEmpty(bool, object)
0x7ec: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7ed: Call2 0x1495

0x7ee: Pop(1)
0x7ef: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7f0: Push((int) 521545)
0x7f1: Push((int) 22710)
0x7f2: Push((int) 22706)
0x7f3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f4: Pop(3)
0x7f5: PushEmpty(bool, object)
0x7f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7f7: Call2 0x14ad

0x7f8: Pop(1)
0x7f9: IF (Stack[-1] == 0) GOTO 0x7ff; Pop(1)

0x7fa: Push((int) 521587)
0x7fb: Push((int) 22749)
0x7fc: Push((int) 22748)
0x7fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7fe: Pop(3)
0x7ff: PushEmpty(bool, object)
0x800: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x801: Call2 0x14b9

0x802: Pop(1)
0x803: IF (Stack[-1] == 0) GOTO 0x809; Pop(1)

0x804: Push((int) 522411)
0x805: Push((int) 23579)
0x806: Push((int) 23578)
0x807: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x808: Pop(3)
0x809: Push((int) 521546)
0x80a: Push((int) -1)
0x80b: Push((int) 22707)
0x80c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x80d: Pop(3)
0x80e: Return(); Pop(0)

0x80f: Push((int) 23579)
0x810: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x811: IF (Stack[-1] == 0) GOTO 0x826; Pop(1)

0x812: PushEmpty(string)
0x813: Stack[-1] = "Neutral"
0x814: Call2 0x785

0x815: Pop(1)
0x816: Push((int) 522412)
0x817: @@ SetMessage(Stack[-1])
0x818: Pop(1)
0x819: @@ ClearReplies()
0x81a: Pop(0)
0x81b: Push((int) 522414)
0x81c: Push((int) 23582)
0x81d: Push((int) 23581)
0x81e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81f: Pop(3)
0x820: Push((int) 522413)
0x821: Push((int) -1)
0x822: Push((int) 23580)
0x823: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x824: Pop(3)
0x825: Return(); Pop(0)

0x826: Push((int) 23582)
0x827: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x828: IF (Stack[-1] == 0) GOTO 0x838; Pop(1)

0x829: PushEmpty(string)
0x82a: Stack[-1] = "Neutral"
0x82b: Call2 0x785

0x82c: Pop(1)
0x82d: Push((int) 522415)
0x82e: @@ SetMessage(Stack[-1])
0x82f: Pop(1)
0x830: @@ ClearReplies()
0x831: Pop(0)
0x832: Push((int) 522416)
0x833: Push((int) -1)
0x834: Push((int) 23583)
0x835: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x836: Pop(3)
0x837: Return(); Pop(0)

0x838: Push((int) 22749)
0x839: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83a: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x83b: PushEmpty(string)
0x83c: Stack[-1] = "Neutral"
0x83d: Call2 0x785

0x83e: Pop(1)
0x83f: Push((int) 521588)
0x840: @@ SetMessage(Stack[-1])
0x841: Pop(1)
0x842: @@ ClearReplies()
0x843: Pop(0)
0x844: Push((int) 521589)
0x845: Push((int) 22751)
0x846: Push((int) 22750)
0x847: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x848: Pop(3)
0x849: Return(); Pop(0)

0x84a: Push((int) 22751)
0x84b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x85c; Pop(1)

0x84d: PushEmpty(string)
0x84e: Stack[-1] = "Neutral"
0x84f: Call2 0x785

0x850: Pop(1)
0x851: Push((int) 521590)
0x852: @@ SetMessage(Stack[-1])
0x853: Pop(1)
0x854: @@ ClearReplies()
0x855: Pop(0)
0x856: Push((int) 521592)
0x857: Push((int) 22768)
0x858: Push((int) 22755)
0x859: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85a: Pop(3)
0x85b: Return(); Pop(0)

0x85c: Push((int) 22768)
0x85d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x85e: IF (Stack[-1] == 0) GOTO 0x86e; Pop(1)

0x85f: PushEmpty(string)
0x860: Stack[-1] = "Neutral"
0x861: Call2 0x785

0x862: Pop(1)
0x863: Push((int) 521603)
0x864: @@ SetMessage(Stack[-1])
0x865: Pop(1)
0x866: @@ ClearReplies()
0x867: Pop(0)
0x868: Push((int) 522468)
0x869: Push((int) 23642)
0x86a: Push((int) 23641)
0x86b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86c: Pop(3)
0x86d: Return(); Pop(0)

0x86e: Push((int) 23642)
0x86f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x870: IF (Stack[-1] == 0) GOTO 0x880; Pop(1)

0x871: PushEmpty(string)
0x872: Stack[-1] = "Neutral"
0x873: Call2 0x785

0x874: Pop(1)
0x875: Push((int) 522469)
0x876: @@ SetMessage(Stack[-1])
0x877: Pop(1)
0x878: @@ ClearReplies()
0x879: Pop(0)
0x87a: Push((int) 521593)
0x87b: Push((int) 22771)
0x87c: Push((int) 22756)
0x87d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87e: Pop(3)
0x87f: Return(); Pop(0)

0x880: Push((int) 22771)
0x881: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x892; Pop(1)

0x883: PushEmpty(string)
0x884: Stack[-1] = "Neutral"
0x885: Call2 0x785

0x886: Pop(1)
0x887: Push((int) 521605)
0x888: @@ SetMessage(Stack[-1])
0x889: Pop(1)
0x88a: @@ ClearReplies()
0x88b: Pop(0)
0x88c: Push((int) 521606)
0x88d: Push((int) -1)
0x88e: Push((int) 22772)
0x88f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x890: Pop(3)
0x891: Return(); Pop(0)

0x892: Push((int) 22710)
0x893: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x894: IF (Stack[-1] == 0) GOTO 0x8a4; Pop(1)

0x895: PushEmpty(string)
0x896: Stack[-1] = "Neutral"
0x897: Call2 0x785

0x898: Pop(1)
0x899: Push((int) 521549)
0x89a: @@ SetMessage(Stack[-1])
0x89b: Pop(1)
0x89c: @@ ClearReplies()
0x89d: Pop(0)
0x89e: Push((int) 521550)
0x89f: Push((int) -1)
0x8a0: Push((int) 22711)
0x8a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a2: Pop(3)
0x8a3: Return(); Pop(0)

0x8a4: Push((int) 23556)
0x8a5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8a6: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8a7: PushEmpty(string)
0x8a8: Stack[-1] = "Neutral"
0x8a9: Call2 0x785

0x8aa: Pop(1)
0x8ab: Push((int) 522391)
0x8ac: @@ SetMessage(Stack[-1])
0x8ad: Pop(1)
0x8ae: @@ ClearReplies()
0x8af: Pop(0)
0x8b0: Push((int) 522393)
0x8b1: Push((int) 23559)
0x8b2: Push((int) 23558)
0x8b3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b4: Pop(3)
0x8b5: Push((int) 522392)
0x8b6: Push((int) -1)
0x8b7: Push((int) 23557)
0x8b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b9: Pop(3)
0x8ba: Return(); Pop(0)

0x8bb: Push((int) 23559)
0x8bc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8bd: IF (Stack[-1] == 0) GOTO 0x8d7; Pop(1)

0x8be: PushEmpty(string)
0x8bf: Stack[-1] = "Neutral"
0x8c0: Call2 0x785

0x8c1: Pop(1)
0x8c2: Push((int) 522394)
0x8c3: @@ SetMessage(Stack[-1])
0x8c4: Pop(1)
0x8c5: @@ ClearReplies()
0x8c6: Pop(0)
0x8c7: Push((int) 521540)
0x8c8: Push((int) 22702)
0x8c9: Push((int) 22701)
0x8ca: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8cb: Pop(3)
0x8cc: Push((int) 522396)
0x8cd: Push((int) 23562)
0x8ce: Push((int) 23561)
0x8cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d0: Pop(3)
0x8d1: Push((int) 522395)
0x8d2: Push((int) 23570)
0x8d3: Push((int) 23560)
0x8d4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d5: Pop(3)
0x8d6: Return(); Pop(0)

0x8d7: Push((int) 23570)
0x8d8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d9: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8da: PushEmpty(string)
0x8db: Stack[-1] = "Smile"
0x8dc: Call2 0x785

0x8dd: Pop(1)
0x8de: Push((int) 522404)
0x8df: @@ SetMessage(Stack[-1])
0x8e0: Pop(1)
0x8e1: @@ ClearReplies()
0x8e2: Pop(0)
0x8e3: Push((int) 522405)
0x8e4: Push((int) 23572)
0x8e5: Push((int) 23571)
0x8e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e7: Pop(3)
0x8e8: Return(); Pop(0)

0x8e9: Push((int) 23572)
0x8ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8eb: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8ec: PushEmpty(string)
0x8ed: Stack[-1] = "Smile"
0x8ee: Call2 0x785

0x8ef: Pop(1)
0x8f0: Push((int) 522406)
0x8f1: @@ SetMessage(Stack[-1])
0x8f2: Pop(1)
0x8f3: @@ ClearReplies()
0x8f4: Pop(0)
0x8f5: Push((int) 522407)
0x8f6: Push((int) 23564)
0x8f7: Push((int) 23573)
0x8f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f9: Pop(3)
0x8fa: Push((int) 522408)
0x8fb: Push((int) -1)
0x8fc: Push((int) 23574)
0x8fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8fe: Pop(3)
0x8ff: Return(); Pop(0)

0x900: Push((int) 23562)
0x901: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x902: IF (Stack[-1] == 0) GOTO 0x91c; Pop(1)

0x903: PushEmpty(string)
0x904: Stack[-1] = "Neutral"
0x905: Call2 0x785

0x906: Pop(1)
0x907: Push((int) 522397)
0x908: @@ SetMessage(Stack[-1])
0x909: Pop(1)
0x90a: @@ ClearReplies()
0x90b: Pop(0)
0x90c: Push((int) 522398)
0x90d: Push((int) 23564)
0x90e: Push((int) 23563)
0x90f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x910: Pop(3)
0x911: Push((int) 522401)
0x912: Push((int) 23564)
0x913: Push((int) 23566)
0x914: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x915: Pop(3)
0x916: Push((int) 522403)
0x917: Push((int) -1)
0x918: Push((int) 23569)
0x919: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91a: Pop(3)
0x91b: Return(); Pop(0)

0x91c: Push((int) 23564)
0x91d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x91e: IF (Stack[-1] == 0) GOTO 0x933; Pop(1)

0x91f: PushEmpty(string)
0x920: Stack[-1] = "Neutral"
0x921: Call2 0x785

0x922: Pop(1)
0x923: Push((int) 522399)
0x924: @@ SetMessage(Stack[-1])
0x925: Pop(1)
0x926: @@ ClearReplies()
0x927: Pop(0)
0x928: Push((int) 522400)
0x929: Push((int) -1)
0x92a: Push((int) 23565)
0x92b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92c: Pop(3)
0x92d: Push((int) 522402)
0x92e: Push((int) -1)
0x92f: Push((int) 23567)
0x930: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x931: Pop(3)
0x932: Return(); Pop(0)

0x933: Push((int) 22702)
0x934: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x935: IF (Stack[-1] == 0) GOTO 0x94a; Pop(1)

0x936: PushEmpty(string)
0x937: Stack[-1] = "Refusal"
0x938: Call2 0x785

0x939: Pop(1)
0x93a: Push((int) 521541)
0x93b: @@ SetMessage(Stack[-1])
0x93c: Pop(1)
0x93d: @@ ClearReplies()
0x93e: Pop(0)
0x93f: Push((int) 521542)
0x940: Push((int) 22708)
0x941: Push((int) 22703)
0x942: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x943: Pop(3)
0x944: Push((int) 521543)
0x945: Push((int) -1)
0x946: Push((int) 22704)
0x947: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x948: Pop(3)
0x949: Return(); Pop(0)

0x94a: Push((int) 22708)
0x94b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x94c: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x94d: PushEmpty(string)
0x94e: Stack[-1] = "Neutral"
0x94f: Call2 0x785

0x950: Pop(1)
0x951: Push((int) 521547)
0x952: @@ SetMessage(Stack[-1])
0x953: Pop(1)
0x954: @@ ClearReplies()
0x955: Pop(0)
0x956: Push((int) 521548)
0x957: Push((int) -1)
0x958: Push((int) 22709)
0x959: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95a: Pop(3)
0x95b: Return(); Pop(0)

0x95c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x95d: PushEmpty(bool)
0x95e: Call2 0x1355

0x95f: Pop(0)
0x960: IF (Stack[-1] == 0) GOTO 0x964; Pop(1)

0x961: @ lshStopAnimation()
0x962: Pop(0)
0x963: GOTO 0x966

0x964: @ StopAnimation()
0x965: Pop(0)
0x966: Return(); Pop(0)

0x967: GOTO 0x79c

0x968: Return(); Pop(0)

0x969: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x96a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x96b: PushEmpty(bool, object, float)
0x96c: Stack[-2] = Stack[-12]
0x96d: Stack[-1] = (float) 130.0
0x96e: Call2 0x1191

0x96f: Pop(2)
0x970: Pop(1); Push((bool) Stack[-1] == 0)
0x971: IF (Stack[-1] == 0) GOTO 0x974; Pop(1)

0x972: Stack[-10] = (int) -2
0x973: Return(); Pop(8)

0x974: @ CreateDialog(Stack[-4])
0x975: Pop(0)
0x976: PushEmpty(int)
0x977: Call2 0x134f

0x978: Pop(0)
0x979: @@ SetNPCName(Stack[-1])
0x97a: Pop(1)
0x97b: PushEmpty(int)
0x97c: Call2 0x134d

0x97d: Pop(0)
0x97e: @@ SetNPCDescription(Stack[-1])
0x97f: Pop(1)
0x980: PushEmpty(string)
0x981: Call2 0x1351

0x982: Pop(0)
0x983: @@ SetPhoto(Stack[-1])
0x984: Pop(1)
0x985: PushEmpty(string)
0x986: Call2 0x1353

0x987: Pop(0)
0x988: @@ SetPhoto2(Stack[-1])
0x989: Pop(1)
0x98a: PushEmpty(int)
0x98b: Call2 0x1667

0x98c: Pop(0)
0x98d: @@ SetPlayerName(Stack[-1])
0x98e: Pop(1)
0x98f: Stack[-2] = (int) -1
0x990: @ IsOverrideActive(Stack[-3])
0x991: Pop(0)
0x992: Push(Stack[-3])
0x993: IF (Stack[-1] == 0) GOTO 0x996; Pop(1)

0x994: Stack[-10] = (int) -2
0x995: Return(); Pop(8)

0x996: @ DoDialog(Stack[-4])
0x997: Pop(0)
0x998: PushEmpty(bool, object)
0x999: PushEmpty(object)
0x99a: Call2 0x12a5

0x99b: Stack[-2] = Stack[-1]
0x99c: Pop(1)
0x99d: Call2 0x11e6

0x99e: Pop(2)
0x99f: PushEmpty(object, object)
0x9a0: Stack[-2] = Stack[-11]
0x9a1: Stack[-1] = Stack[-6]
0x9a2: Push(-2, 4); TaskCall(13)
0x9a3: Call2 0x9ba

0x9a4: Pop(-2, 4); TaskReturn
0x9a5: Pop(2)
0x9a6: @@ IsDialogEnd(Stack[-1])
0x9a7: Pop(0)
0x9a8: Pop(0); Push((bool) Stack[-1] == 0)
0x9a9: IF (Stack[-1] == 0) GOTO 0x9af; Pop(1)

0x9aa: @ sync()
0x9ab: Pop(0)
0x9ac: @@ IsDialogEnd(Stack[-1])
0x9ad: Pop(0)
0x9ae: GOTO 0x9a8

0x9af: PushEmpty(object)
0x9b0: Stack[-1] = Stack[-10]
0x9b1: Call2 0x11d5

0x9b2: Pop(1)
0x9b3: @ StopDialog(Stack[-4])
0x9b4: Pop(0)
0x9b5: @@ GetReturnValue(Stack[-2])
0x9b6: Pop(0)
0x9b7: Stack[-10] = Stack[-2]
0x9b8: Return(); Pop(8)

0x9b9: Stack[-4] = 0
0x9ba: PushEmpty()
0x9bb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x9bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x9bd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x9be: Push((int) 1)
0x9bf: IF (Stack[-1] == 0) GOTO 0xa24; Pop(1)

0x9c0: PushEmpty(bool)
0x9c1: Stack[-1] = (bool) 0
0x9c2: PushEmpty(bool, object)
0x9c3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c4: Call2 0x14c5

0x9c5: Pop(1)
0x9c6: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9c7: PushEmpty(bool, object)
0x9c8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9c9: Call2 0x14f4

0x9ca: Pop(1)
0x9cb: IF (Stack[-1] == 0) GOTO 0x9cd; Pop(1)

0x9cc: Stack[-1] = (bool) 1
0x9cd: IF (Stack[-1] == 0) GOTO 0x9ec; Pop(1)

0x9ce: PushEmpty(object, object)
0x9cf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9d0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9d1: Call2 0x13b5

0x9d2: Pop(2)
0x9d3: PushEmpty(string)
0x9d4: Stack[-1] = "Smile"
0x9d5: Call2 0xa42

0x9d6: Pop(1)
0x9d7: Push((int) 521870)
0x9d8: @@ SetMessage(Stack[-1])
0x9d9: Pop(1)
0x9da: @@ ClearReplies()
0x9db: Pop(0)
0x9dc: Push((int) 522575)
0x9dd: Push((int) 23755)
0x9de: Push((int) 23754)
0x9df: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e0: Pop(3)
0x9e1: Push((int) 522581)
0x9e2: Push((int) 23755)
0x9e3: Push((int) 23760)
0x9e4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9e5: Pop(3)
0x9e6: Push((int) 522586)
0x9e7: Push((int) 23047)
0x9e8: Push((int) 23767)
0x9e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ea: Pop(3)
0x9eb: GOTO 0xa24

0x9ec: PushEmpty(string)
0x9ed: Stack[-1] = "Neutral"
0x9ee: Call2 0xa42

0x9ef: Pop(1)
0x9f0: Push((int) 521873)
0x9f1: @@ SetMessage(Stack[-1])
0x9f2: Pop(1)
0x9f3: @@ ClearReplies()
0x9f4: Pop(0)
0x9f5: PushEmpty(bool, object)
0x9f6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9f7: Call2 0x14f4

0x9f8: Pop(1)
0x9f9: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fa: Push((int) 521874)
0x9fb: Push((int) 23049)
0x9fc: Push((int) 23046)
0x9fd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9fe: Pop(3)
0x9ff: PushEmpty(bool, object)
0xa00: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa01: Call2 0x14dd

0xa02: Pop(1)
0xa03: IF (Stack[-1] == 0) GOTO 0xa09; Pop(1)

0xa04: Push((int) 521886)
0xa05: Push((int) 23059)
0xa06: Push((int) 23058)
0xa07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa08: Pop(3)
0xa09: PushEmpty(bool)
0xa0a: Stack[-1] = (bool) 0
0xa0b: PushEmpty(bool, object)
0xa0c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa0d: Call2 0x14d1

0xa0e: Pop(1)
0xa0f: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa10: PushEmpty(bool, object)
0xa11: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa12: Call2 0x1530

0xa13: Pop(1)
0xa14: IF (Stack[-1] == 0) GOTO 0xa16; Pop(1)

0xa15: Stack[-1] = (bool) 1
0xa16: IF (Stack[-1] == 0) GOTO 0xa1c; Pop(1)

0xa17: Push((int) 521883)
0xa18: Push((int) 23744)
0xa19: Push((int) 23055)
0xa1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1b: Pop(3)
0xa1c: Push((int) 521879)
0xa1d: Push((int) -1)
0xa1e: Push((int) 23051)
0xa1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa20: Pop(3)
0xa21: GOTO 0xa24

0xa22: Return(); Pop(0)

0xa23: GOTO 0x9be

0xa24: PushEmpty(bool)
0xa25: Call2 0x1355

0xa26: Pop(0)
0xa27: IF (Stack[-1] == 0) GOTO 0xa33; Pop(1)

0xa28: @ lshWaitForAnimEnd()
0xa29: Pop(0)
0xa2a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa2b: IF (Stack[-1] == 0) GOTO 0xa2d; Pop(1)

0xa2c: GOTO 0xa32

0xa2d: PushEmpty(string)
0xa2e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa2f: Call2 0x1270

0xa30: Pop(1)
0xa31: GOTO 0xa28

0xa32: GOTO 0xa41

0xa33: Push("all")
0xa34: Push("idle")
0xa35: @ PlayAnimation(Stack[-2], Stack[-1])
0xa36: Pop(2)
0xa37: @ WaitForAnimEnd()
0xa38: Pop(0)
0xa39: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa3b: GOTO 0xa41

0xa3c: Push("all")
0xa3d: Push("idle")
0xa3e: @ PlayAnimation(Stack[-2], Stack[-1])
0xa3f: Pop(2)
0xa40: GOTO 0xa37

0xa41: Return(); Pop(0)

0xa42: PushEmpty()
0xa43: PushEmpty(bool)
0xa44: Call2 0x1355

0xa45: Pop(0)
0xa46: Pop(1); Push((bool) Stack[-1] == 0)
0xa47: IF (Stack[-1] == 0) GOTO 0xa49; Pop(1)

0xa48: Return(); Pop(0)

0xa49: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa4a: IF (Stack[-1] == 0) GOTO 0xa4c; Pop(1)

0xa4b: Return(); Pop(0)

0xa4c: PushEmpty(string, bool)
0xa4d: Stack[-2] = Stack[-3]
0xa4e: Push("")
0xa4f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xa50: IF (Stack[-1] == 0) GOTO 0xa53; Pop(1)

0xa51: Stack[-1] = (bool) 0
0xa52: GOTO 0xa54

0xa53: Stack[-1] = (bool) 1
0xa54: Call2 0x1280

0xa55: Pop(2)
0xa56: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa57: Return(); Pop(0)

0xa58: PushEmpty()
0xa59: Push((int) 1)
0xa5a: IF (Stack[-1] == 0) GOTO 0xc77; Pop(1)

0xa5b: PushEmpty()
0xa5c: Call2 0x129e

0xa5d: Pop(0)
0xa5e: Push((int) 23048)
0xa5f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa60: IF (Stack[-1] == 0) GOTO 0xa6b; Pop(1)

0xa61: PushEmpty(object, object)
0xa62: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa63: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa64: Call2 0x13bb

0xa65: Pop(2)
0xa66: PushEmpty(object, object)
0xa67: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa68: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa69: Call2 0x143b

0xa6a: Pop(2)
0xa6b: Push((int) 23050)
0xa6c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa6d: IF (Stack[-1] == 0) GOTO 0xa78; Pop(1)

0xa6e: PushEmpty(object, object)
0xa6f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa70: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa71: Call2 0x13bb

0xa72: Pop(2)
0xa73: PushEmpty(object, object)
0xa74: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa75: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa76: Call2 0x143b

0xa77: Pop(2)
0xa78: Push((int) 23057)
0xa79: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa7a: IF (Stack[-1] == 0) GOTO 0xa80; Pop(1)

0xa7b: PushEmpty(object, object)
0xa7c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa7d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa7e: Call2 0x13da

0xa7f: Pop(2)
0xa80: Push((int) 23752)
0xa81: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa82: IF (Stack[-1] == 0) GOTO 0xa88; Pop(1)

0xa83: PushEmpty(object, object)
0xa84: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa85: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa86: Call2 0x13da

0xa87: Pop(2)
0xa88: Push((int) 23042)
0xa89: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8a: IF (Stack[-1] == 0) GOTO 0xaed; Pop(1)

0xa8b: PushEmpty(bool)
0xa8c: Stack[-1] = (bool) 0
0xa8d: PushEmpty(bool, object)
0xa8e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa8f: Call2 0x14c5

0xa90: Pop(1)
0xa91: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa92: PushEmpty(bool, object)
0xa93: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa94: Call2 0x14f4

0xa95: Pop(1)
0xa96: IF (Stack[-1] == 0) GOTO 0xa98; Pop(1)

0xa97: Stack[-1] = (bool) 1
0xa98: IF (Stack[-1] == 0) GOTO 0xab7; Pop(1)

0xa99: PushEmpty(object, object)
0xa9a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa9b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa9c: Call2 0x13b5

0xa9d: Pop(2)
0xa9e: PushEmpty(string)
0xa9f: Stack[-1] = "Smile"
0xaa0: Call2 0xa42

0xaa1: Pop(1)
0xaa2: Push((int) 521870)
0xaa3: @@ SetMessage(Stack[-1])
0xaa4: Pop(1)
0xaa5: @@ ClearReplies()
0xaa6: Pop(0)
0xaa7: Push((int) 522575)
0xaa8: Push((int) 23755)
0xaa9: Push((int) 23754)
0xaaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaab: Pop(3)
0xaac: Push((int) 522581)
0xaad: Push((int) 23755)
0xaae: Push((int) 23760)
0xaaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab0: Pop(3)
0xab1: Push((int) 522586)
0xab2: Push((int) 23047)
0xab3: Push((int) 23767)
0xab4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab5: Pop(3)
0xab6: Return(); Pop(0)

0xab7: PushEmpty(string)
0xab8: Stack[-1] = "Neutral"
0xab9: Call2 0xa42

0xaba: Pop(1)
0xabb: Push((int) 521873)
0xabc: @@ SetMessage(Stack[-1])
0xabd: Pop(1)
0xabe: @@ ClearReplies()
0xabf: Pop(0)
0xac0: PushEmpty(bool, object)
0xac1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xac2: Call2 0x14f4

0xac3: Pop(1)
0xac4: IF (Stack[-1] == 0) GOTO 0xaca; Pop(1)

0xac5: Push((int) 521874)
0xac6: Push((int) 23049)
0xac7: Push((int) 23046)
0xac8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac9: Pop(3)
0xaca: PushEmpty(bool, object)
0xacb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xacc: Call2 0x14dd

0xacd: Pop(1)
0xace: IF (Stack[-1] == 0) GOTO 0xad4; Pop(1)

0xacf: Push((int) 521886)
0xad0: Push((int) 23059)
0xad1: Push((int) 23058)
0xad2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xad3: Pop(3)
0xad4: PushEmpty(bool)
0xad5: Stack[-1] = (bool) 0
0xad6: PushEmpty(bool, object)
0xad7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xad8: Call2 0x14d1

0xad9: Pop(1)
0xada: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xadb: PushEmpty(bool, object)
0xadc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xadd: Call2 0x1530

0xade: Pop(1)
0xadf: IF (Stack[-1] == 0) GOTO 0xae1; Pop(1)

0xae0: Stack[-1] = (bool) 1
0xae1: IF (Stack[-1] == 0) GOTO 0xae7; Pop(1)

0xae2: Push((int) 521883)
0xae3: Push((int) 23744)
0xae4: Push((int) 23055)
0xae5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae6: Pop(3)
0xae7: Push((int) 521879)
0xae8: Push((int) -1)
0xae9: Push((int) 23051)
0xaea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaeb: Pop(3)
0xaec: Return(); Pop(0)

0xaed: Push((int) 23744)
0xaee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaef: IF (Stack[-1] == 0) GOTO 0xaff; Pop(1)

0xaf0: PushEmpty(string)
0xaf1: Stack[-1] = "Neutral"
0xaf2: Call2 0xa42

0xaf3: Pop(1)
0xaf4: Push((int) 522565)
0xaf5: @@ SetMessage(Stack[-1])
0xaf6: Pop(1)
0xaf7: @@ ClearReplies()
0xaf8: Pop(0)
0xaf9: Push((int) 522566)
0xafa: Push((int) 23635)
0xafb: Push((int) 23745)
0xafc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xafd: Pop(3)
0xafe: Return(); Pop(0)

0xaff: Push((int) 23635)
0xb00: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb01: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb02: PushEmpty(string)
0xb03: Stack[-1] = "Oracle"
0xb04: Call2 0xa42

0xb05: Pop(1)
0xb06: Push((int) 522462)
0xb07: @@ SetMessage(Stack[-1])
0xb08: Pop(1)
0xb09: @@ ClearReplies()
0xb0a: Pop(0)
0xb0b: Push((int) 522463)
0xb0c: Push((int) 23637)
0xb0d: Push((int) 23636)
0xb0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0f: Pop(3)
0xb10: Return(); Pop(0)

0xb11: Push((int) 23637)
0xb12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb13: IF (Stack[-1] == 0) GOTO 0xb23; Pop(1)

0xb14: PushEmpty(string)
0xb15: Stack[-1] = "Oracle"
0xb16: Call2 0xa42

0xb17: Pop(1)
0xb18: Push((int) 522464)
0xb19: @@ SetMessage(Stack[-1])
0xb1a: Pop(1)
0xb1b: @@ ClearReplies()
0xb1c: Pop(0)
0xb1d: Push((int) 522567)
0xb1e: Push((int) 23747)
0xb1f: Push((int) 23746)
0xb20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb21: Pop(3)
0xb22: Return(); Pop(0)

0xb23: Push((int) 23747)
0xb24: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb25: IF (Stack[-1] == 0) GOTO 0xb3a; Pop(1)

0xb26: PushEmpty(string)
0xb27: Stack[-1] = "Smile"
0xb28: Call2 0xa42

0xb29: Pop(1)
0xb2a: Push((int) 522568)
0xb2b: @@ SetMessage(Stack[-1])
0xb2c: Pop(1)
0xb2d: @@ ClearReplies()
0xb2e: Pop(0)
0xb2f: Push((int) 522465)
0xb30: Push((int) 23639)
0xb31: Push((int) 23638)
0xb32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb33: Pop(3)
0xb34: Push((int) 522569)
0xb35: Push((int) 23749)
0xb36: Push((int) 23748)
0xb37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb38: Pop(3)
0xb39: Return(); Pop(0)

0xb3a: Push((int) 23749)
0xb3b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb3c: IF (Stack[-1] == 0) GOTO 0xb4c; Pop(1)

0xb3d: PushEmpty(string)
0xb3e: Stack[-1] = "Smile"
0xb3f: Call2 0xa42

0xb40: Pop(1)
0xb41: Push((int) 522570)
0xb42: @@ SetMessage(Stack[-1])
0xb43: Pop(1)
0xb44: @@ ClearReplies()
0xb45: Pop(0)
0xb46: Push((int) 522571)
0xb47: Push((int) 23751)
0xb48: Push((int) 23750)
0xb49: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb4a: Pop(3)
0xb4b: Return(); Pop(0)

0xb4c: Push((int) 23751)
0xb4d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4e: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb4f: PushEmpty(string)
0xb50: Stack[-1] = "Neutral"
0xb51: Call2 0xa42

0xb52: Pop(1)
0xb53: Push((int) 522572)
0xb54: @@ SetMessage(Stack[-1])
0xb55: Pop(1)
0xb56: @@ ClearReplies()
0xb57: Pop(0)
0xb58: Push((int) 522573)
0xb59: Push((int) -1)
0xb5a: Push((int) 23752)
0xb5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5c: Pop(3)
0xb5d: Return(); Pop(0)

0xb5e: Push((int) 23639)
0xb5f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb60: IF (Stack[-1] == 0) GOTO 0xb70; Pop(1)

0xb61: PushEmpty(string)
0xb62: Stack[-1] = "Neutral"
0xb63: Call2 0xa42

0xb64: Pop(1)
0xb65: Push((int) 522466)
0xb66: @@ SetMessage(Stack[-1])
0xb67: Pop(1)
0xb68: @@ ClearReplies()
0xb69: Pop(0)
0xb6a: Push((int) 521885)
0xb6b: Push((int) -1)
0xb6c: Push((int) 23057)
0xb6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb6e: Pop(3)
0xb6f: Return(); Pop(0)

0xb70: Push((int) 23059)
0xb71: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb72: IF (Stack[-1] == 0) GOTO 0xb87; Pop(1)

0xb73: PushEmpty(string)
0xb74: Stack[-1] = "Smile"
0xb75: Call2 0xa42

0xb76: Pop(1)
0xb77: Push((int) 521887)
0xb78: @@ SetMessage(Stack[-1])
0xb79: Pop(1)
0xb7a: @@ ClearReplies()
0xb7b: Pop(0)
0xb7c: Push((int) 521888)
0xb7d: Push((int) -1)
0xb7e: Push((int) 23060)
0xb7f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb80: Pop(3)
0xb81: Push((int) 522560)
0xb82: Push((int) 23740)
0xb83: Push((int) 23739)
0xb84: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb85: Pop(3)
0xb86: Return(); Pop(0)

0xb87: Push((int) 23740)
0xb88: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb89: IF (Stack[-1] == 0) GOTO 0xb99; Pop(1)

0xb8a: PushEmpty(string)
0xb8b: Stack[-1] = "Smile"
0xb8c: Call2 0xa42

0xb8d: Pop(1)
0xb8e: Push((int) 522561)
0xb8f: @@ SetMessage(Stack[-1])
0xb90: Pop(1)
0xb91: @@ ClearReplies()
0xb92: Pop(0)
0xb93: Push((int) 522562)
0xb94: Push((int) 23742)
0xb95: Push((int) 23741)
0xb96: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb97: Pop(3)
0xb98: Return(); Pop(0)

0xb99: Push((int) 23742)
0xb9a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb9b: IF (Stack[-1] == 0) GOTO 0xbab; Pop(1)

0xb9c: PushEmpty(string)
0xb9d: Stack[-1] = "Smile"
0xb9e: Call2 0xa42

0xb9f: Pop(1)
0xba0: Push((int) 522563)
0xba1: @@ SetMessage(Stack[-1])
0xba2: Pop(1)
0xba3: @@ ClearReplies()
0xba4: Pop(0)
0xba5: Push((int) 522564)
0xba6: Push((int) -1)
0xba7: Push((int) 23743)
0xba8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba9: Pop(3)
0xbaa: Return(); Pop(0)

0xbab: Push((int) 23049)
0xbac: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbad: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbae: PushEmpty(string)
0xbaf: Stack[-1] = "Neutral"
0xbb0: Call2 0xa42

0xbb1: Pop(1)
0xbb2: Push((int) 521877)
0xbb3: @@ SetMessage(Stack[-1])
0xbb4: Pop(1)
0xbb5: @@ ClearReplies()
0xbb6: Pop(0)
0xbb7: Push((int) 521878)
0xbb8: Push((int) -1)
0xbb9: Push((int) 23050)
0xbba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbbb: Pop(3)
0xbbc: Return(); Pop(0)

0xbbd: Push((int) 23755)
0xbbe: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbf: IF (Stack[-1] == 0) GOTO 0xbcf; Pop(1)

0xbc0: PushEmpty(string)
0xbc1: Stack[-1] = "Smile"
0xbc2: Call2 0xa42

0xbc3: Pop(1)
0xbc4: Push((int) 522576)
0xbc5: @@ SetMessage(Stack[-1])
0xbc6: Pop(1)
0xbc7: @@ ClearReplies()
0xbc8: Pop(0)
0xbc9: Push((int) 522577)
0xbca: Push((int) 23757)
0xbcb: Push((int) 23756)
0xbcc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbcd: Pop(3)
0xbce: Return(); Pop(0)

0xbcf: Push((int) 23757)
0xbd0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbd1: IF (Stack[-1] == 0) GOTO 0xbe6; Pop(1)

0xbd2: PushEmpty(string)
0xbd3: Stack[-1] = "Smile"
0xbd4: Call2 0xa42

0xbd5: Pop(1)
0xbd6: Push((int) 522578)
0xbd7: @@ SetMessage(Stack[-1])
0xbd8: Pop(1)
0xbd9: @@ ClearReplies()
0xbda: Pop(0)
0xbdb: Push((int) 521871)
0xbdc: Push((int) 23047)
0xbdd: Push((int) 23043)
0xbde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdf: Pop(3)
0xbe0: Push((int) 522584)
0xbe1: Push((int) 23047)
0xbe2: Push((int) 23765)
0xbe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe4: Pop(3)
0xbe5: Return(); Pop(0)

0xbe6: Push((int) 23047)
0xbe7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe8: IF (Stack[-1] == 0) GOTO 0xc02; Pop(1)

0xbe9: PushEmpty(string)
0xbea: Stack[-1] = "Refusal"
0xbeb: Call2 0xa42

0xbec: Pop(1)
0xbed: Push((int) 521875)
0xbee: @@ SetMessage(Stack[-1])
0xbef: Pop(1)
0xbf0: @@ ClearReplies()
0xbf1: Pop(0)
0xbf2: Push((int) 522579)
0xbf3: Push((int) 23759)
0xbf4: Push((int) 23758)
0xbf5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf6: Pop(3)
0xbf7: Push((int) 521872)
0xbf8: Push((int) 23771)
0xbf9: Push((int) 23044)
0xbfa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfb: Pop(3)
0xbfc: Push((int) 522591)
0xbfd: Push((int) 23777)
0xbfe: Push((int) 23776)
0xbff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc00: Pop(3)
0xc01: Return(); Pop(0)

0xc02: Push((int) 23777)
0xc03: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc04: IF (Stack[-1] == 0) GOTO 0xc14; Pop(1)

0xc05: PushEmpty(string)
0xc06: Stack[-1] = "Refusal"
0xc07: Call2 0xa42

0xc08: Pop(1)
0xc09: Push((int) 522592)
0xc0a: @@ SetMessage(Stack[-1])
0xc0b: Pop(1)
0xc0c: @@ ClearReplies()
0xc0d: Pop(0)
0xc0e: Push((int) 522593)
0xc0f: Push((int) 23759)
0xc10: Push((int) 23778)
0xc11: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc12: Pop(3)
0xc13: Return(); Pop(0)

0xc14: Push((int) 23771)
0xc15: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc16: IF (Stack[-1] == 0) GOTO 0xc2b; Pop(1)

0xc17: PushEmpty(string)
0xc18: Stack[-1] = "Refusal"
0xc19: Call2 0xa42

0xc1a: Pop(1)
0xc1b: Push((int) 522587)
0xc1c: @@ SetMessage(Stack[-1])
0xc1d: Pop(1)
0xc1e: @@ ClearReplies()
0xc1f: Pop(0)
0xc20: Push((int) 522588)
0xc21: Push((int) 23773)
0xc22: Push((int) 23772)
0xc23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc24: Pop(3)
0xc25: Push((int) 522590)
0xc26: Push((int) 23759)
0xc27: Push((int) 23774)
0xc28: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc29: Pop(3)
0xc2a: Return(); Pop(0)

0xc2b: Push((int) 23773)
0xc2c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc2d: IF (Stack[-1] == 0) GOTO 0xc3d; Pop(1)

0xc2e: PushEmpty(string)
0xc2f: Stack[-1] = "Refusal"
0xc30: Call2 0xa42

0xc31: Pop(1)
0xc32: Push((int) 522589)
0xc33: @@ SetMessage(Stack[-1])
0xc34: Pop(1)
0xc35: @@ ClearReplies()
0xc36: Pop(0)
0xc37: Push((int) 532185)
0xc38: Push((int) 23759)
0xc39: Push((int) 33601)
0xc3a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc3b: Pop(3)
0xc3c: Return(); Pop(0)

0xc3d: Push((int) 23759)
0xc3e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc3f: IF (Stack[-1] == 0) GOTO 0xc54; Pop(1)

0xc40: PushEmpty(string)
0xc41: Stack[-1] = "Refusal"
0xc42: Call2 0xa42

0xc43: Pop(1)
0xc44: Push((int) 522580)
0xc45: @@ SetMessage(Stack[-1])
0xc46: Pop(1)
0xc47: @@ ClearReplies()
0xc48: Pop(0)
0xc49: Push((int) 522594)
0xc4a: Push((int) 23781)
0xc4b: Push((int) 23780)
0xc4c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc4d: Pop(3)
0xc4e: Push((int) 522582)
0xc4f: Push((int) -1)
0xc50: Push((int) 23763)
0xc51: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc52: Pop(3)
0xc53: Return(); Pop(0)

0xc54: Push((int) 23781)
0xc55: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc56: IF (Stack[-1] == 0) GOTO 0xc6b; Pop(1)

0xc57: PushEmpty(string)
0xc58: Stack[-1] = "Refusal"
0xc59: Call2 0xa42

0xc5a: Pop(1)
0xc5b: Push((int) 522595)
0xc5c: @@ SetMessage(Stack[-1])
0xc5d: Pop(1)
0xc5e: @@ ClearReplies()
0xc5f: Pop(0)
0xc60: Push((int) 521876)
0xc61: Push((int) -1)
0xc62: Push((int) 23048)
0xc63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc64: Pop(3)
0xc65: Push((int) 522596)
0xc66: Push((int) -1)
0xc67: Push((int) 23782)
0xc68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc69: Pop(3)
0xc6a: Return(); Pop(0)

0xc6b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc6c: PushEmpty(bool)
0xc6d: Call2 0x1355

0xc6e: Pop(0)
0xc6f: IF (Stack[-1] == 0) GOTO 0xc73; Pop(1)

0xc70: @ lshStopAnimation()
0xc71: Pop(0)
0xc72: GOTO 0xc75

0xc73: @ StopAnimation()
0xc74: Pop(0)
0xc75: Return(); Pop(0)

0xc76: GOTO 0xa59

0xc77: Return(); Pop(0)

0xc78: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc79: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc7a: PushEmpty(bool, object, float)
0xc7b: Stack[-2] = Stack[-12]
0xc7c: Stack[-1] = (float) 130.0
0xc7d: Call2 0x1191

0xc7e: Pop(2)
0xc7f: Pop(1); Push((bool) Stack[-1] == 0)
0xc80: IF (Stack[-1] == 0) GOTO 0xc83; Pop(1)

0xc81: Stack[-10] = (int) -2
0xc82: Return(); Pop(8)

0xc83: @ CreateDialog(Stack[-4])
0xc84: Pop(0)
0xc85: PushEmpty(int)
0xc86: Call2 0x134f

0xc87: Pop(0)
0xc88: @@ SetNPCName(Stack[-1])
0xc89: Pop(1)
0xc8a: PushEmpty(int)
0xc8b: Call2 0x134d

0xc8c: Pop(0)
0xc8d: @@ SetNPCDescription(Stack[-1])
0xc8e: Pop(1)
0xc8f: PushEmpty(string)
0xc90: Call2 0x1351

0xc91: Pop(0)
0xc92: @@ SetPhoto(Stack[-1])
0xc93: Pop(1)
0xc94: PushEmpty(string)
0xc95: Call2 0x1353

0xc96: Pop(0)
0xc97: @@ SetPhoto2(Stack[-1])
0xc98: Pop(1)
0xc99: PushEmpty(int)
0xc9a: Call2 0x1667

0xc9b: Pop(0)
0xc9c: @@ SetPlayerName(Stack[-1])
0xc9d: Pop(1)
0xc9e: Stack[-2] = (int) -1
0xc9f: @ IsOverrideActive(Stack[-3])
0xca0: Pop(0)
0xca1: Push(Stack[-3])
0xca2: IF (Stack[-1] == 0) GOTO 0xca5; Pop(1)

0xca3: Stack[-10] = (int) -2
0xca4: Return(); Pop(8)

0xca5: @ DoDialog(Stack[-4])
0xca6: Pop(0)
0xca7: PushEmpty(bool, object)
0xca8: PushEmpty(object)
0xca9: Call2 0x12a5

0xcaa: Stack[-2] = Stack[-1]
0xcab: Pop(1)
0xcac: Call2 0x11e6

0xcad: Pop(2)
0xcae: PushEmpty(object, object)
0xcaf: Stack[-2] = Stack[-11]
0xcb0: Stack[-1] = Stack[-6]
0xcb1: Push(-2, 4); TaskCall(15)
0xcb2: Call2 0xcc9

0xcb3: Pop(-2, 4); TaskReturn
0xcb4: Pop(2)
0xcb5: @@ IsDialogEnd(Stack[-1])
0xcb6: Pop(0)
0xcb7: Pop(0); Push((bool) Stack[-1] == 0)
0xcb8: IF (Stack[-1] == 0) GOTO 0xcbe; Pop(1)

0xcb9: @ sync()
0xcba: Pop(0)
0xcbb: @@ IsDialogEnd(Stack[-1])
0xcbc: Pop(0)
0xcbd: GOTO 0xcb7

0xcbe: PushEmpty(object)
0xcbf: Stack[-1] = Stack[-10]
0xcc0: Call2 0x11d5

0xcc1: Pop(1)
0xcc2: @ StopDialog(Stack[-4])
0xcc3: Pop(0)
0xcc4: @@ GetReturnValue(Stack[-2])
0xcc5: Pop(0)
0xcc6: Stack[-10] = Stack[-2]
0xcc7: Return(); Pop(8)

0xcc8: Stack[-4] = 0
0xcc9: PushEmpty()
0xcca: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xccb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xccc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xccd: Push((int) 1)
0xcce: IF (Stack[-1] == 0) GOTO 0xd35; Pop(1)

0xccf: PushEmpty(bool, object)
0xcd0: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcd1: Call2 0x1500

0xcd2: Pop(1)
0xcd3: IF (Stack[-1] == 0) GOTO 0xcf2; Pop(1)

0xcd4: PushEmpty(object, object)
0xcd5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xcd6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcd7: Call2 0x13e3

0xcd8: Pop(2)
0xcd9: PushEmpty(string)
0xcda: Stack[-1] = "Neutral"
0xcdb: Call2 0xd53

0xcdc: Pop(1)
0xcdd: Push((int) 521993)
0xcde: @@ SetMessage(Stack[-1])
0xcdf: Pop(1)
0xce0: @@ ClearReplies()
0xce1: Pop(0)
0xce2: Push((int) 521994)
0xce3: Push((int) 23168)
0xce4: Push((int) 23164)
0xce5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce6: Pop(3)
0xce7: PushEmpty(bool, object)
0xce8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce9: Call2 0x1547

0xcea: Pop(1)
0xceb: IF (Stack[-1] == 0) GOTO 0xcf1; Pop(1)

0xcec: Push((int) 521996)
0xced: Push((int) 23168)
0xcee: Push((int) 23166)
0xcef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcf0: Pop(3)
0xcf1: GOTO 0xd35

0xcf2: PushEmpty(bool, object)
0xcf3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcf4: Call2 0x1524

0xcf5: Pop(1)
0xcf6: IF (Stack[-1] == 0) GOTO 0xd10; Pop(1)

0xcf7: PushEmpty(string)
0xcf8: Stack[-1] = "Smile"
0xcf9: Call2 0xd53

0xcfa: Pop(1)
0xcfb: Push((int) 522051)
0xcfc: @@ SetMessage(Stack[-1])
0xcfd: Pop(1)
0xcfe: @@ ClearReplies()
0xcff: Pop(0)
0xd00: Push((int) 523621)
0xd01: Push((int) 24861)
0xd02: Push((int) 24860)
0xd03: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd04: Pop(3)
0xd05: Push((int) 523612)
0xd06: Push((int) 24851)
0xd07: Push((int) 24849)
0xd08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd09: Pop(3)
0xd0a: Push((int) 523613)
0xd0b: Push((int) 24851)
0xd0c: Push((int) 24850)
0xd0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd0e: Pop(3)
0xd0f: GOTO 0xd35

0xd10: PushEmpty(string)
0xd11: Stack[-1] = "Neutral"
0xd12: Call2 0xd53

0xd13: Pop(1)
0xd14: Push((int) 521997)
0xd15: @@ SetMessage(Stack[-1])
0xd16: Pop(1)
0xd17: @@ ClearReplies()
0xd18: Pop(0)
0xd19: PushEmpty(bool, object)
0xd1a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd1b: Call2 0x150c

0xd1c: Pop(1)
0xd1d: IF (Stack[-1] == 0) GOTO 0xd23; Pop(1)

0xd1e: Push((int) 522000)
0xd1f: Push((int) 24859)
0xd20: Push((int) 23170)
0xd21: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd22: Pop(3)
0xd23: PushEmpty(bool, object)
0xd24: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xd25: Call2 0x1518

0xd26: Pop(1)
0xd27: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd28: Push((int) 522003)
0xd29: Push((int) 23226)
0xd2a: Push((int) 23173)
0xd2b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2c: Pop(3)
0xd2d: Push((int) 522004)
0xd2e: Push((int) -1)
0xd2f: Push((int) 23174)
0xd30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd31: Pop(3)
0xd32: GOTO 0xd35

0xd33: Return(); Pop(0)

0xd34: GOTO 0xccd

0xd35: PushEmpty(bool)
0xd36: Call2 0x1355

0xd37: Pop(0)
0xd38: IF (Stack[-1] == 0) GOTO 0xd44; Pop(1)

0xd39: @ lshWaitForAnimEnd()
0xd3a: Pop(0)
0xd3b: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd3c: IF (Stack[-1] == 0) GOTO 0xd3e; Pop(1)

0xd3d: GOTO 0xd43

0xd3e: PushEmpty(string)
0xd3f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xd40: Call2 0x1270

0xd41: Pop(1)
0xd42: GOTO 0xd39

0xd43: GOTO 0xd52

0xd44: Push("all")
0xd45: Push("idle")
0xd46: @ PlayAnimation(Stack[-2], Stack[-1])
0xd47: Pop(2)
0xd48: @ WaitForAnimEnd()
0xd49: Pop(0)
0xd4a: Push( Stack[3 + Tasks[-1].StackPointer] )
0xd4b: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd4c: GOTO 0xd52

0xd4d: Push("all")
0xd4e: Push("idle")
0xd4f: @ PlayAnimation(Stack[-2], Stack[-1])
0xd50: Pop(2)
0xd51: GOTO 0xd48

0xd52: Return(); Pop(0)

0xd53: PushEmpty()
0xd54: PushEmpty(bool)
0xd55: Call2 0x1355

0xd56: Pop(0)
0xd57: Pop(1); Push((bool) Stack[-1] == 0)
0xd58: IF (Stack[-1] == 0) GOTO 0xd5a; Pop(1)

0xd59: Return(); Pop(0)

0xd5a: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xd5b: IF (Stack[-1] == 0) GOTO 0xd5d; Pop(1)

0xd5c: Return(); Pop(0)

0xd5d: PushEmpty(string, bool)
0xd5e: Stack[-2] = Stack[-3]
0xd5f: Push("")
0xd60: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xd61: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd62: Stack[-1] = (bool) 0
0xd63: GOTO 0xd65

0xd64: Stack[-1] = (bool) 1
0xd65: Call2 0x1280

0xd66: Pop(2)
0xd67: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd68: Return(); Pop(0)

0xd69: PushEmpty()
0xd6a: Push((int) 1)
0xd6b: IF (Stack[-1] == 0) GOTO 0xfa9; Pop(1)

0xd6c: PushEmpty()
0xd6d: Call2 0x129e

0xd6e: Pop(0)
0xd6f: Push((int) 23169)
0xd70: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd71: IF (Stack[-1] == 0) GOTO 0xd81; Pop(1)

0xd72: PushEmpty(object, object)
0xd73: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd74: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd75: Call2 0x13e9

0xd76: Pop(2)
0xd77: PushEmpty(object, object)
0xd78: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd79: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7a: Call2 0x145c

0xd7b: Pop(2)
0xd7c: PushEmpty(object, object)
0xd7d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd7e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd7f: Call2 0x146d

0xd80: Pop(2)
0xd81: Push((int) 24875)
0xd82: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd83: IF (Stack[-1] == 0) GOTO 0xd93; Pop(1)

0xd84: PushEmpty(object, object)
0xd85: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd86: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd87: Call2 0x13e9

0xd88: Pop(2)
0xd89: PushEmpty(object, object)
0xd8a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd8c: Call2 0x145c

0xd8d: Pop(2)
0xd8e: PushEmpty(object, object)
0xd8f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd90: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd91: Call2 0x146d

0xd92: Pop(2)
0xd93: Push((int) 23225)
0xd94: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd95: IF (Stack[-1] == 0) GOTO 0xd9b; Pop(1)

0xd96: PushEmpty(object, object)
0xd97: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd98: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd99: Call2 0x13fa

0xd9a: Pop(2)
0xd9b: Push((int) 24857)
0xd9c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd9d: IF (Stack[-1] == 0) GOTO 0xda3; Pop(1)

0xd9e: PushEmpty(object, object)
0xd9f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda1: Call2 0x13fa

0xda2: Pop(2)
0xda3: Push((int) 24858)
0xda4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda5: IF (Stack[-1] == 0) GOTO 0xdab; Pop(1)

0xda6: PushEmpty(object, object)
0xda7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xda8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda9: Call2 0x13fa

0xdaa: Pop(2)
0xdab: Push((int) 24882)
0xdac: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdad: IF (Stack[-1] == 0) GOTO 0xdb3; Pop(1)

0xdae: PushEmpty(object, object)
0xdaf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb1: Call2 0x13e9

0xdb2: Pop(2)
0xdb3: Push((int) 24885)
0xdb4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdb5: IF (Stack[-1] == 0) GOTO 0xdbb; Pop(1)

0xdb6: PushEmpty(object, object)
0xdb7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdb8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdb9: Call2 0x13e9

0xdba: Pop(2)
0xdbb: Push((int) 23227)
0xdbc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdbd: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdbe: PushEmpty(object, object)
0xdbf: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc1: Call2 0x13fa

0xdc2: Pop(2)
0xdc3: PushEmpty(object, object)
0xdc4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdc5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdc6: Call2 0x141f

0xdc7: Pop(2)
0xdc8: Push((int) 24844)
0xdc9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdca: IF (Stack[-1] == 0) GOTO 0xdd5; Pop(1)

0xdcb: PushEmpty(object, object)
0xdcc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdcd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdce: Call2 0x13fa

0xdcf: Pop(2)
0xdd0: PushEmpty(object, object)
0xdd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdd3: Call2 0x141f

0xdd4: Pop(2)
0xdd5: Push((int) 24846)
0xdd6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xdd7: IF (Stack[-1] == 0) GOTO 0xde2; Pop(1)

0xdd8: PushEmpty(object, object)
0xdd9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdda: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xddb: Call2 0x13fa

0xddc: Pop(2)
0xddd: PushEmpty(object, object)
0xdde: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xddf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde0: Call2 0x141f

0xde1: Pop(2)
0xde2: Push((int) 23163)
0xde3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xde4: IF (Stack[-1] == 0) GOTO 0xe49; Pop(1)

0xde5: PushEmpty(bool, object)
0xde6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xde7: Call2 0x1500

0xde8: Pop(1)
0xde9: IF (Stack[-1] == 0) GOTO 0xe08; Pop(1)

0xdea: PushEmpty(object, object)
0xdeb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdec: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xded: Call2 0x13e3

0xdee: Pop(2)
0xdef: PushEmpty(string)
0xdf0: Stack[-1] = "Neutral"
0xdf1: Call2 0xd53

0xdf2: Pop(1)
0xdf3: Push((int) 521993)
0xdf4: @@ SetMessage(Stack[-1])
0xdf5: Pop(1)
0xdf6: @@ ClearReplies()
0xdf7: Pop(0)
0xdf8: Push((int) 521994)
0xdf9: Push((int) 23168)
0xdfa: Push((int) 23164)
0xdfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdfc: Pop(3)
0xdfd: PushEmpty(bool, object)
0xdfe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdff: Call2 0x1547

0xe00: Pop(1)
0xe01: IF (Stack[-1] == 0) GOTO 0xe07; Pop(1)

0xe02: Push((int) 521996)
0xe03: Push((int) 23168)
0xe04: Push((int) 23166)
0xe05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe06: Pop(3)
0xe07: Return(); Pop(0)

0xe08: PushEmpty(bool, object)
0xe09: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0a: Call2 0x1524

0xe0b: Pop(1)
0xe0c: IF (Stack[-1] == 0) GOTO 0xe26; Pop(1)

0xe0d: PushEmpty(string)
0xe0e: Stack[-1] = "Smile"
0xe0f: Call2 0xd53

0xe10: Pop(1)
0xe11: Push((int) 522051)
0xe12: @@ SetMessage(Stack[-1])
0xe13: Pop(1)
0xe14: @@ ClearReplies()
0xe15: Pop(0)
0xe16: Push((int) 523621)
0xe17: Push((int) 24861)
0xe18: Push((int) 24860)
0xe19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1a: Pop(3)
0xe1b: Push((int) 523612)
0xe1c: Push((int) 24851)
0xe1d: Push((int) 24849)
0xe1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe1f: Pop(3)
0xe20: Push((int) 523613)
0xe21: Push((int) 24851)
0xe22: Push((int) 24850)
0xe23: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe24: Pop(3)
0xe25: Return(); Pop(0)

0xe26: PushEmpty(string)
0xe27: Stack[-1] = "Neutral"
0xe28: Call2 0xd53

0xe29: Pop(1)
0xe2a: Push((int) 521997)
0xe2b: @@ SetMessage(Stack[-1])
0xe2c: Pop(1)
0xe2d: @@ ClearReplies()
0xe2e: Pop(0)
0xe2f: PushEmpty(bool, object)
0xe30: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe31: Call2 0x150c

0xe32: Pop(1)
0xe33: IF (Stack[-1] == 0) GOTO 0xe39; Pop(1)

0xe34: Push((int) 522000)
0xe35: Push((int) 24859)
0xe36: Push((int) 23170)
0xe37: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe38: Pop(3)
0xe39: PushEmpty(bool, object)
0xe3a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe3b: Call2 0x1518

0xe3c: Pop(1)
0xe3d: IF (Stack[-1] == 0) GOTO 0xe43; Pop(1)

0xe3e: Push((int) 522003)
0xe3f: Push((int) 23226)
0xe40: Push((int) 23173)
0xe41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe42: Pop(3)
0xe43: Push((int) 522004)
0xe44: Push((int) -1)
0xe45: Push((int) 23174)
0xe46: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe47: Pop(3)
0xe48: Return(); Pop(0)

0xe49: Push((int) 23226)
0xe4a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe4b: IF (Stack[-1] == 0) GOTO 0xe65; Pop(1)

0xe4c: PushEmpty(string)
0xe4d: Stack[-1] = "Smile"
0xe4e: Call2 0xd53

0xe4f: Pop(1)
0xe50: Push((int) 522053)
0xe51: @@ SetMessage(Stack[-1])
0xe52: Pop(1)
0xe53: @@ ClearReplies()
0xe54: Pop(0)
0xe55: Push((int) 522054)
0xe56: Push((int) -1)
0xe57: Push((int) 23227)
0xe58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe59: Pop(3)
0xe5a: Push((int) 523600)
0xe5b: Push((int) 24837)
0xe5c: Push((int) 24835)
0xe5d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5e: Pop(3)
0xe5f: Push((int) 523603)
0xe60: Push((int) 24839)
0xe61: Push((int) 24838)
0xe62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe63: Pop(3)
0xe64: Return(); Pop(0)

0xe65: Push((int) 24839)
0xe66: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe67: IF (Stack[-1] == 0) GOTO 0xe7c; Pop(1)

0xe68: PushEmpty(string)
0xe69: Stack[-1] = "Smile"
0xe6a: Call2 0xd53

0xe6b: Pop(1)
0xe6c: Push((int) 523604)
0xe6d: @@ SetMessage(Stack[-1])
0xe6e: Pop(1)
0xe6f: @@ ClearReplies()
0xe70: Pop(0)
0xe71: Push((int) 523605)
0xe72: Push((int) 24837)
0xe73: Push((int) 24840)
0xe74: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe75: Pop(3)
0xe76: Push((int) 523606)
0xe77: Push((int) 24842)
0xe78: Push((int) 24841)
0xe79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe7a: Pop(3)
0xe7b: Return(); Pop(0)

0xe7c: Push((int) 24842)
0xe7d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe7e: IF (Stack[-1] == 0) GOTO 0xe93; Pop(1)

0xe7f: PushEmpty(string)
0xe80: Stack[-1] = "Smile"
0xe81: Call2 0xd53

0xe82: Pop(1)
0xe83: Push((int) 523607)
0xe84: @@ SetMessage(Stack[-1])
0xe85: Pop(1)
0xe86: @@ ClearReplies()
0xe87: Pop(0)
0xe88: Push((int) 523610)
0xe89: Push((int) -1)
0xe8a: Push((int) 24846)
0xe8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8c: Pop(3)
0xe8d: Push((int) 523611)
0xe8e: Push((int) 24837)
0xe8f: Push((int) 24847)
0xe90: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe91: Pop(3)
0xe92: Return(); Pop(0)

0xe93: Push((int) 24837)
0xe94: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe95: IF (Stack[-1] == 0) GOTO 0xeaa; Pop(1)

0xe96: PushEmpty(string)
0xe97: Stack[-1] = "Smile"
0xe98: Call2 0xd53

0xe99: Pop(1)
0xe9a: Push((int) 523602)
0xe9b: @@ SetMessage(Stack[-1])
0xe9c: Pop(1)
0xe9d: @@ ClearReplies()
0xe9e: Pop(0)
0xe9f: Push((int) 523608)
0xea0: Push((int) -1)
0xea1: Push((int) 24844)
0xea2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea3: Pop(3)
0xea4: Push((int) 523609)
0xea5: Push((int) -1)
0xea6: Push((int) 24845)
0xea7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea8: Pop(3)
0xea9: Return(); Pop(0)

0xeaa: Push((int) 24859)
0xeab: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xeac: IF (Stack[-1] == 0) GOTO 0xebc; Pop(1)

0xead: PushEmpty(string)
0xeae: Stack[-1] = "Oracle"
0xeaf: Call2 0xd53

0xeb0: Pop(1)
0xeb1: Push((int) 523620)
0xeb2: @@ SetMessage(Stack[-1])
0xeb3: Pop(1)
0xeb4: @@ ClearReplies()
0xeb5: Pop(0)
0xeb6: Push((int) 523637)
0xeb7: Push((int) 24881)
0xeb8: Push((int) 24880)
0xeb9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xeba: Pop(3)
0xebb: Return(); Pop(0)

0xebc: Push((int) 24881)
0xebd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xebe: IF (Stack[-1] == 0) GOTO 0xed3; Pop(1)

0xebf: PushEmpty(string)
0xec0: Stack[-1] = "Neutral"
0xec1: Call2 0xd53

0xec2: Pop(1)
0xec3: Push((int) 523638)
0xec4: @@ SetMessage(Stack[-1])
0xec5: Pop(1)
0xec6: @@ ClearReplies()
0xec7: Pop(0)
0xec8: Push((int) 523639)
0xec9: Push((int) -1)
0xeca: Push((int) 24882)
0xecb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xecc: Pop(3)
0xecd: Push((int) 523640)
0xece: Push((int) 24884)
0xecf: Push((int) 24883)
0xed0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xed1: Pop(3)
0xed2: Return(); Pop(0)

0xed3: Push((int) 24884)
0xed4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xed5: IF (Stack[-1] == 0) GOTO 0xee5; Pop(1)

0xed6: PushEmpty(string)
0xed7: Stack[-1] = "Neutral"
0xed8: Call2 0xd53

0xed9: Pop(1)
0xeda: Push((int) 523641)
0xedb: @@ SetMessage(Stack[-1])
0xedc: Pop(1)
0xedd: @@ ClearReplies()
0xede: Pop(0)
0xedf: Push((int) 523642)
0xee0: Push((int) -1)
0xee1: Push((int) 24885)
0xee2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xee3: Pop(3)
0xee4: Return(); Pop(0)

0xee5: Push((int) 24851)
0xee6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xee7: IF (Stack[-1] == 0) GOTO 0xefc; Pop(1)

0xee8: PushEmpty(string)
0xee9: Stack[-1] = "Refusal"
0xeea: Call2 0xd53

0xeeb: Pop(1)
0xeec: Push((int) 523614)
0xeed: @@ SetMessage(Stack[-1])
0xeee: Pop(1)
0xeef: @@ ClearReplies()
0xef0: Pop(0)
0xef1: Push((int) 523615)
0xef2: Push((int) 24855)
0xef3: Push((int) 24853)
0xef4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xef5: Pop(3)
0xef6: Push((int) 523616)
0xef7: Push((int) 24855)
0xef8: Push((int) 24854)
0xef9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xefa: Pop(3)
0xefb: Return(); Pop(0)

0xefc: Push((int) 24855)
0xefd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xefe: IF (Stack[-1] == 0) GOTO 0xf18; Pop(1)

0xeff: PushEmpty(string)
0xf00: Stack[-1] = "Refusal"
0xf01: Call2 0xd53

0xf02: Pop(1)
0xf03: Push((int) 523617)
0xf04: @@ SetMessage(Stack[-1])
0xf05: Pop(1)
0xf06: @@ ClearReplies()
0xf07: Pop(0)
0xf08: Push((int) 522052)
0xf09: Push((int) -1)
0xf0a: Push((int) 23225)
0xf0b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf0c: Pop(3)
0xf0d: Push((int) 523618)
0xf0e: Push((int) -1)
0xf0f: Push((int) 24857)
0xf10: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf11: Pop(3)
0xf12: Push((int) 523619)
0xf13: Push((int) -1)
0xf14: Push((int) 24858)
0xf15: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf16: Pop(3)
0xf17: Return(); Pop(0)

0xf18: Push((int) 24861)
0xf19: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf1a: IF (Stack[-1] == 0) GOTO 0xf2f; Pop(1)

0xf1b: PushEmpty(string)
0xf1c: Stack[-1] = "Smile"
0xf1d: Call2 0xd53

0xf1e: Pop(1)
0xf1f: Push((int) 523622)
0xf20: @@ SetMessage(Stack[-1])
0xf21: Pop(1)
0xf22: @@ ClearReplies()
0xf23: Pop(0)
0xf24: Push((int) 523623)
0xf25: Push((int) 24851)
0xf26: Push((int) 24862)
0xf27: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf28: Pop(3)
0xf29: Push((int) 523624)
0xf2a: Push((int) 24851)
0xf2b: Push((int) 24864)
0xf2c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf2d: Pop(3)
0xf2e: Return(); Pop(0)

0xf2f: Push((int) 23168)
0xf30: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf31: IF (Stack[-1] == 0) GOTO 0xf46; Pop(1)

0xf32: PushEmpty(string)
0xf33: Stack[-1] = "Oracle"
0xf34: Call2 0xd53

0xf35: Pop(1)
0xf36: Push((int) 521998)
0xf37: @@ SetMessage(Stack[-1])
0xf38: Pop(1)
0xf39: @@ ClearReplies()
0xf3a: Pop(0)
0xf3b: Push((int) 523625)
0xf3c: Push((int) 24867)
0xf3d: Push((int) 24866)
0xf3e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3f: Pop(3)
0xf40: Push((int) 523627)
0xf41: Push((int) 24869)
0xf42: Push((int) 24868)
0xf43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf44: Pop(3)
0xf45: Return(); Pop(0)

0xf46: Push((int) 24867)
0xf47: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf48: IF (Stack[-1] == 0) GOTO 0xf5d; Pop(1)

0xf49: PushEmpty(string)
0xf4a: Stack[-1] = "Oracle"
0xf4b: Call2 0xd53

0xf4c: Pop(1)
0xf4d: Push((int) 523626)
0xf4e: @@ SetMessage(Stack[-1])
0xf4f: Pop(1)
0xf50: @@ ClearReplies()
0xf51: Pop(0)
0xf52: Push((int) 523629)
0xf53: Push((int) 24869)
0xf54: Push((int) 24870)
0xf55: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf56: Pop(3)
0xf57: Push((int) 523634)
0xf58: Push((int) 24877)
0xf59: Push((int) 24876)
0xf5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5b: Pop(3)
0xf5c: Return(); Pop(0)

0xf5d: Push((int) 24877)
0xf5e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5f: IF (Stack[-1] == 0) GOTO 0xf6f; Pop(1)

0xf60: PushEmpty(string)
0xf61: Stack[-1] = "Neutral"
0xf62: Call2 0xd53

0xf63: Pop(1)
0xf64: Push((int) 523635)
0xf65: @@ SetMessage(Stack[-1])
0xf66: Pop(1)
0xf67: @@ ClearReplies()
0xf68: Pop(0)
0xf69: Push((int) 523636)
0xf6a: Push((int) 24869)
0xf6b: Push((int) 24878)
0xf6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf6d: Pop(3)
0xf6e: Return(); Pop(0)

0xf6f: Push((int) 24869)
0xf70: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf71: IF (Stack[-1] == 0) GOTO 0xf86; Pop(1)

0xf72: PushEmpty(string)
0xf73: Stack[-1] = "Neutral"
0xf74: Call2 0xd53

0xf75: Pop(1)
0xf76: Push((int) 523628)
0xf77: @@ SetMessage(Stack[-1])
0xf78: Pop(1)
0xf79: @@ ClearReplies()
0xf7a: Pop(0)
0xf7b: Push((int) 521999)
0xf7c: Push((int) -1)
0xf7d: Push((int) 23169)
0xf7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7f: Pop(3)
0xf80: Push((int) 523631)
0xf81: Push((int) 24874)
0xf82: Push((int) 24873)
0xf83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf84: Pop(3)
0xf85: Return(); Pop(0)

0xf86: Push((int) 24874)
0xf87: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf88: IF (Stack[-1] == 0) GOTO 0xf9d; Pop(1)

0xf89: PushEmpty(string)
0xf8a: Stack[-1] = "Neutral"
0xf8b: Call2 0xd53

0xf8c: Pop(1)
0xf8d: Push((int) 523632)
0xf8e: @@ SetMessage(Stack[-1])
0xf8f: Pop(1)
0xf90: @@ ClearReplies()
0xf91: Pop(0)
0xf92: Push((int) 523633)
0xf93: Push((int) -1)
0xf94: Push((int) 24875)
0xf95: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf96: Pop(3)
0xf97: Push((int) 523630)
0xf98: Push((int) -1)
0xf99: Push((int) 24871)
0xf9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9b: Pop(3)
0xf9c: Return(); Pop(0)

0xf9d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xf9e: PushEmpty(bool)
0xf9f: Call2 0x1355

0xfa0: Pop(0)
0xfa1: IF (Stack[-1] == 0) GOTO 0xfa5; Pop(1)

0xfa2: @ lshStopAnimation()
0xfa3: Pop(0)
0xfa4: GOTO 0xfa7

0xfa5: @ StopAnimation()
0xfa6: Pop(0)
0xfa7: Return(); Pop(0)

0xfa8: GOTO 0xd6a

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
0xfb8: Call2 0x134f

0xfb9: Pop(0)
0xfba: @@ SetNPCName(Stack[-1])
0xfbb: Pop(1)
0xfbc: PushEmpty(int)
0xfbd: Call2 0x134d

0xfbe: Pop(0)
0xfbf: @@ SetNPCDescription(Stack[-1])
0xfc0: Pop(1)
0xfc1: PushEmpty(string)
0xfc2: Call2 0x1351

0xfc3: Pop(0)
0xfc4: @@ SetPhoto(Stack[-1])
0xfc5: Pop(1)
0xfc6: PushEmpty(string)
0xfc7: Call2 0x1353

0xfc8: Pop(0)
0xfc9: @@ SetPhoto2(Stack[-1])
0xfca: Pop(1)
0xfcb: PushEmpty(int)
0xfcc: Call2 0x1667

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
0xfdb: Call2 0x12a5

0xfdc: Stack[-2] = Stack[-1]
0xfdd: Pop(1)
0xfde: Call2 0x11e6

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
0xff2: Call2 0x11d5

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
0x1018: Call2 0x1355

0x1019: Pop(0)
0x101a: IF (Stack[-1] == 0) GOTO 0x1026; Pop(1)

0x101b: @ lshWaitForAnimEnd()
0x101c: Pop(0)
0x101d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x101e: IF (Stack[-1] == 0) GOTO 0x1020; Pop(1)

0x101f: GOTO 0x1025

0x1020: PushEmpty(string)
0x1021: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1022: Call2 0x1270

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
0x1037: Call2 0x1355

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
0x1047: Call2 0x1280

0x1048: Pop(2)
0x1049: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x104a: Return(); Pop(0)

0x104b: PushEmpty()
0x104c: Push((int) 1)
0x104d: IF (Stack[-1] == 0) GOTO 0x1074; Pop(1)

0x104e: PushEmpty()
0x104f: Call2 0x129e

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
0x106a: Call2 0x1355

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
0x10d3: Call2 0x12a5

0x10d4: Stack[-2] = Stack[-1]
0x10d5: Pop(1)
0x10d6: Call2 0x1220

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
0x10f6: Call2 0x1270

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
0x1105: Call2 0x1270

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
0x1118: Call2 0x1678

0x1119: Pop(1)
0x111a: PushEmpty(string)
0x111b: Stack[-1] = "Neutral"
0x111c: Call2 0x1270

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
0x112f: Call2 0x133c

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
0x1153: Call2 0x1335

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
0x11ac: Call2 0x12ab

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
0x11bc: @ CameraTransit(Stack[-3], Stack[-5])
0x11bd: Pop(0)
0x11be: Push(CvectorIndex(Stack[-4], 0))
0x11bf: Push(CvectorIndex(Stack[-5], 2))
0x11c0: @ Rotate(Stack[-2], Stack[-1])
0x11c1: Pop(2)
0x11c2: PushEmpty(bool)
0x11c3: Call2 0x1355

0x11c4: Pop(0)
0x11c5: IF (Stack[-1] == 0) GOTO 0x11c7; Pop(1)

0x11c6: GOTO 0x11cf

0x11c7: Push("head")
0x11c8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11c9: Pop(1)
0x11ca: Push(Stack[-1])
0x11cb: IF (Stack[-1] == 0) GOTO 0x11cf; Pop(1)

0x11cc: Push("head")
0x11cd: @ LookAsyncCamera(Stack[-1])
0x11ce: Pop(1)
0x11cf: @ CameraWaitForPlayFinish()
0x11d0: Pop(0)
0x11d1: @ ResumeWorld()
0x11d2: Pop(0)
0x11d3: Stack[-21] = (bool) 1
0x11d4: Return(); Pop(18)

0x11d5: PushEmpty(bool, bool)
0x11d6: @ CameraSwitchToNormal()
0x11d7: Pop(0)
0x11d8: PushEmpty(bool)
0x11d9: Call2 0x1355

0x11da: Pop(0)
0x11db: IF (Stack[-1] == 0) GOTO 0x11dd; Pop(1)

0x11dc: GOTO 0x11e5

0x11dd: Push("head")
0x11de: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x11df: Pop(1)
0x11e0: Push(Stack[-1])
0x11e1: IF (Stack[-1] == 0) GOTO 0x11e5; Pop(1)

0x11e2: Push("head")
0x11e3: @ UnlookAsync(Stack[-1])
0x11e4: Pop(1)
0x11e5: Return(); Pop(2)

0x11e6: PushEmpty(int, int, int, int)
0x11e7: Push("voice_common")
0x11e8: @ GetVariable(Stack[-1], Stack[-3])
0x11e9: Pop(1)
0x11ea: Push(Stack[-2])
0x11eb: IF (Stack[-1] == 0) GOTO 0x120c; Pop(1)

0x11ec: PushEmpty(bool, object)
0x11ed: Stack[-1] = Stack[-7]
0x11ee: Call2 0x1220

0x11ef: Pop(1)
0x11f0: Pop(1); Push((bool) Stack[-1] == 0)
0x11f1: IF (Stack[-1] == 0) GOTO 0x11fa; Pop(1)

0x11f2: PushEmpty(bool, object)
0x11f3: Stack[-1] = Stack[-7]
0x11f4: Call2 0x1245

0x11f5: Pop(1)
0x11f6: Pop(1); Push((bool) Stack[-1] == 0)
0x11f7: IF (Stack[-1] == 0) GOTO 0x11fa; Pop(1)

0x11f8: Stack[-6] = (bool) 0
0x11f9: Return(); Pop(4)

0x11fa: Push((int) 2)
0x11fb: @ irand(Stack[-2], Stack[-1])
0x11fc: Pop(1)
0x11fd: Push(Stack[-1])
0x11fe: IF (Stack[-1] == 0) GOTO 0x1207; Pop(1)

0x11ff: Push("voice_common")
0x1200: Push((int) 1)
0x1201: Pop(1); Push(Stack[-4] + Stack[-1]);
0x1202: Push((int) 3)
0x1203: Pop(2); Push(Stack[-2] % Stack[-1]);
0x1204: @ SetVariable(Stack[-2], Stack[-1])
0x1205: Pop(2)
0x1206: GOTO 0x120b

0x1207: Push("voice_common")
0x1208: Push((int) 0)
0x1209: @ SetVariable(Stack[-2], Stack[-1])
0x120a: Pop(2)
0x120b: GOTO 0x121e

0x120c: PushEmpty(bool, object)
0x120d: Stack[-1] = Stack[-7]
0x120e: Call2 0x1245

0x120f: Pop(1)
0x1210: Pop(1); Push((bool) Stack[-1] == 0)
0x1211: IF (Stack[-1] == 0) GOTO 0x121a; Pop(1)

0x1212: PushEmpty(bool, object)
0x1213: Stack[-1] = Stack[-7]
0x1214: Call2 0x1220

0x1215: Pop(1)
0x1216: Pop(1); Push((bool) Stack[-1] == 0)
0x1217: IF (Stack[-1] == 0) GOTO 0x121a; Pop(1)

0x1218: Stack[-6] = (bool) 0
0x1219: Return(); Pop(4)

0x121a: Push("voice_common")
0x121b: Push((int) 1)
0x121c: @ SetVariable(Stack[-2], Stack[-1])
0x121d: Pop(2)
0x121e: Stack[-6] = (bool) 1
0x121f: Return(); Pop(4)

0x1220: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1221: Stack[-5] = "c"
0x1222: Stack[-4] = (int) 0
0x1223: Push((int) 1)
0x1224: IF (Stack[-1] == 0) GOTO 0x1230; Pop(1)

0x1225: Push((int) 1)
0x1226: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1227: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1228: @@ HasProperty(Stack[-1], Stack[-4])
0x1229: Pop(1)
0x122a: Pop(0); Push((bool) Stack[-3] == 0)
0x122b: IF (Stack[-1] == 0) GOTO 0x122d; Pop(1)

0x122c: GOTO 0x1230

0x122d: Push((int) 1)
0x122e: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x122f: GOTO 0x1223

0x1230: Pop(0); Push((bool) Stack[-4] == 0)
0x1231: IF (Stack[-1] == 0) GOTO 0x1234; Pop(1)

0x1232: Stack[-12] = (bool) 0
0x1233: Return(); Pop(10)

0x1234: Stack[-2] = (int) 0
0x1235: Push((int) 1)
0x1236: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1237: IF (Stack[-1] == 0) GOTO 0x123a; Pop(1)

0x1238: @ irand(Stack[-2], Stack[-4])
0x1239: Pop(0)
0x123a: Push((int) 1)
0x123b: Pop(1); Push(Stack[-3] + Stack[-1]);
0x123c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x123d: @@ GetProperty(Stack[-1], Stack[-2])
0x123e: Pop(1)
0x123f: PushEmpty(bool, string)
0x1240: Stack[-1] = Stack[-3]
0x1241: Call2 0x128f

0x1242: Stack[-14] = Stack[-2]
0x1243: Pop(2)
0x1244: Return(); Pop(10)

0x1245: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x1246: Push("d")
0x1247: PushEmpty(int)
0x1248: Call2 0x1313

0x1249: Pop(0)
0x124a: Pop(2); Push(Stack[-2] + Stack[-1]);
0x124b: Push("m")
0x124c: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x124d: Stack[-4] = (int) 0
0x124e: Push((int) 1)
0x124f: IF (Stack[-1] == 0) GOTO 0x125b; Pop(1)

0x1250: Push((int) 1)
0x1251: Pop(1); Push(Stack[-5] + Stack[-1]);
0x1252: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1253: @@ HasProperty(Stack[-1], Stack[-4])
0x1254: Pop(1)
0x1255: Pop(0); Push((bool) Stack[-3] == 0)
0x1256: IF (Stack[-1] == 0) GOTO 0x1258; Pop(1)

0x1257: GOTO 0x125b

0x1258: Push((int) 1)
0x1259: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x125a: GOTO 0x124e

0x125b: Pop(0); Push((bool) Stack[-4] == 0)
0x125c: IF (Stack[-1] == 0) GOTO 0x125f; Pop(1)

0x125d: Stack[-12] = (bool) 0
0x125e: Return(); Pop(10)

0x125f: Stack[-2] = (int) 0
0x1260: Push((int) 1)
0x1261: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x1262: IF (Stack[-1] == 0) GOTO 0x1265; Pop(1)

0x1263: @ irand(Stack[-2], Stack[-4])
0x1264: Pop(0)
0x1265: Push((int) 1)
0x1266: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1267: Pop(1); Push(Stack[-6] + Stack[-1]);
0x1268: @@ GetProperty(Stack[-1], Stack[-2])
0x1269: Pop(1)
0x126a: PushEmpty(bool, string)
0x126b: Stack[-1] = Stack[-3]
0x126c: Call2 0x128f

0x126d: Stack[-14] = Stack[-2]
0x126e: Pop(2)
0x126f: Return(); Pop(10)

0x1270: PushEmpty(bool, float, float, bool, float, float)
0x1271: @ lshHasAnimation(Stack[-3], Stack[-7])
0x1272: Pop(0)
0x1273: Push(Stack[-3])
0x1274: IF (Stack[-1] == 0) GOTO 0x127b; Pop(1)

0x1275: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x1276: Pop(0)
0x1277: Push((bool) 0)
0x1278: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1279: Pop(1)
0x127a: GOTO 0x127f

0x127b: Push("Can't find lsh animation : ")
0x127c: Pop(1); Push(Stack[-1] + Stack[-8]);
0x127d: @ Trace(Stack[-1])
0x127e: Pop(1)
0x127f: Return(); Pop(6)

0x1280: PushEmpty(bool, float, float, bool, float, float)
0x1281: @ lshHasAnimation(Stack[-3], Stack[-8])
0x1282: Pop(0)
0x1283: Push(Stack[-3])
0x1284: IF (Stack[-1] == 0) GOTO 0x128a; Pop(1)

0x1285: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x1286: Pop(0)
0x1287: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x1288: Pop(0)
0x1289: GOTO 0x128e

0x128a: Push("Can't find lsh animation : ")
0x128b: Pop(1); Push(Stack[-1] + Stack[-9]);
0x128c: @ Trace(Stack[-1])
0x128d: Pop(1)
0x128e: Return(); Pop(6)

0x128f: PushEmpty(bool, bool)
0x1290: PushEmpty(bool)
0x1291: Call2 0x1355

0x1292: Pop(0)
0x1293: IF (Stack[-1] == 0) GOTO 0x129c; Pop(1)

0x1294: @ lshHasSpeech(Stack[-1], Stack[-3])
0x1295: Pop(0)
0x1296: Push(Stack[-1])
0x1297: IF (Stack[-1] == 0) GOTO 0x129c; Pop(1)

0x1298: @ lshPlaySpeech(Stack[-3])
0x1299: Pop(0)
0x129a: Stack[-4] = (bool) 1
0x129b: Return(); Pop(2)

0x129c: Stack[-4] = (bool) 0
0x129d: Return(); Pop(2)

0x129e: PushEmpty(bool)
0x129f: Call2 0x1355

0x12a0: Pop(0)
0x12a1: IF (Stack[-1] == 0) GOTO 0x12a4; Pop(1)

0x12a2: @ lshStopSpeech()
0x12a3: Pop(0)
0x12a4: Return(); Pop(0)

0x12a5: PushEmpty(object, object)
0x12a6: @ self(Stack[-1])
0x12a7: Pop(0)
0x12a8: Stack[-3] = Stack[-1]
0x12a9: Return(); Pop(2)

0x12aa: Stack[-1] = 0
0x12ab: PushEmpty(float, float)
0x12ac: Pop(0); Push(Stack[-3] | Stack[-3]);
0x12ad: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x12ae: Push((float)0.0)
0x12af: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x12b0: IF (Stack[-1] == 0) GOTO 0x12b3; Pop(1)

0x12b1: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x12b2: Return(); Pop(2)

0x12b3: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x12b4: Return(); Pop(2)

0x12b5: PushEmpty(int, int)
0x12b6: @ GetVariable(Stack[-3], Stack[-1])
0x12b7: Pop(0)
0x12b8: Stack[-4] = Stack[-1]
0x12b9: Return(); Pop(2)

0x12ba: PushEmpty(object, object)
0x12bb: @ FindActor(Stack[-1], Stack[-4])
0x12bc: Pop(0)
0x12bd: Pop(0); Push((bool) Stack[-1] == 0)
0x12be: IF (Stack[-1] == 0) GOTO 0x12c6; Pop(1)

0x12bf: Push("Door ")
0x12c0: Pop(1); Push(Stack[-1] + Stack[-5]);
0x12c1: Push(" not found")
0x12c2: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12c3: @ Trace(Stack[-1])
0x12c4: Pop(1)
0x12c5: GOTO 0x12cd

0x12c6: Push(Stack[-3])
0x12c7: IF (Stack[-1] == 0) GOTO 0x12ca; Pop(1)

0x12c8: @@ Close()
0x12c9: Pop(0)
0x12ca: Push("locked")
0x12cb: @@ SetProperty(Stack[-1], Stack[-4])
0x12cc: Pop(1)
0x12cd: Return(); Pop(2)

0x12ce: Stack[-1] = 0
0x12cf: PushEmpty(object, object)
0x12d0: @ CreateIntVector(Stack[-1])
0x12d1: Pop(0)
0x12d2: @@ add(Stack[-4])
0x12d3: Pop(0)
0x12d4: @@ add(Stack[-3])
0x12d5: Pop(0)
0x12d6: Push((int) 3)
0x12d7: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x12d8: Pop(1)
0x12d9: Return(); Pop(2)

0x12da: Stack[-1] = 0
0x12db: PushEmpty(int, int, bool, int, int, bool)
0x12dc: @@ GetItemID(Stack[-3])
0x12dd: Pop(0)
0x12de: Push("Category")
0x12df: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x12e0: Pop(1)
0x12e1: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x12e2: Pop(0)
0x12e3: Pop(0); Push((bool) Stack[-1] == 0)
0x12e4: IF (Stack[-1] == 0) GOTO 0x12e8; Pop(1)

0x12e5: @@ DropItems(Stack[-8], Stack[-7])
0x12e6: Pop(0)
0x12e7: GOTO 0x12ed

0x12e8: PushEmpty(int, int)
0x12e9: Stack[-2] = Stack[-5]
0x12ea: Stack[-1] = Stack[-9]
0x12eb: Call2 0x12cf

0x12ec: Pop(2)
0x12ed: Return(); Pop(6)

0x12ee: PushEmpty(object, object)
0x12ef: @ CreateInvItem(Stack[-1])
0x12f0: Pop(0)
0x12f1: @@ SetItemName(Stack[-4])
0x12f2: Pop(0)
0x12f3: PushEmpty(object, object, int)
0x12f4: Stack[-3] = Stack[-8]
0x12f5: Stack[-2] = Stack[-4]
0x12f6: Stack[-1] = Stack[-6]
0x12f7: Call2 0x12db

0x12f8: Pop(3)
0x12f9: Return(); Pop(2)

0x12fa: Stack[-1] = 0
0x12fb: PushEmpty(int, bool, int, bool)
0x12fc: @ GetInvItemByName(Stack[-2], Stack[-5])
0x12fd: Pop(0)
0x12fe: @@ HasItem(Stack[-2], Stack[-1])
0x12ff: Pop(0)
0x1300: Stack[-7] = Stack[-1]
0x1301: Return(); Pop(4)

0x1302: PushEmpty(object, object)
0x1303: @ FindActor(Stack[-1], Stack[-4])
0x1304: Pop(0)
0x1305: Pop(0); Push((bool) Stack[-1] == 0)
0x1306: IF (Stack[-1] == 0) GOTO 0x1309; Pop(1)

0x1307: Stack[-5] = (bool) 0
0x1308: Return(); Pop(2)

0x1309: @ Trigger(Stack[-1], Stack[-3])
0x130a: Pop(0)
0x130b: Stack[-5] = (bool) 1
0x130c: Return(); Pop(2)

0x130d: Stack[-1] = 0
0x130e: PushEmpty(float, float)
0x130f: @ GetGameTime(Stack[-1])
0x1310: Pop(0)
0x1311: Stack[-3] = Stack[-1]
0x1312: Return(); Pop(2)

0x1313: PushEmpty(float, float)
0x1314: @ GetGameTime(Stack[-1])
0x1315: Pop(0)
0x1316: Push((int) 1)
0x1317: PushEmpty(int)
0x1318: Push((int) 24)
0x1319: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x131a: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x131b: Return(); Pop(2)

0x131c: PushEmpty()
0x131d: PushEmpty(int)
0x131e: Call2 0x1313

0x131f: Pop(0)
0x1320: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1321: Return(); Pop(0)

0x1322: PushEmpty(float, int, int, float, int, int)
0x1323: @ GetGameTime(Stack[-3])
0x1324: Pop(0)
0x1325: Push((int) 1)
0x1326: PushEmpty(int)
0x1327: Push((int) 24)
0x1328: Stack[-2] = Stack[-6] / Stack[-1]; Pop(1);
0x1329: Stack[-4] = Stack[-2] + Stack[-1]; Pop(2);
0x132a: Pop(0); Push((bool) Stack[-2] != Stack[-7])
0x132b: IF (Stack[-1] == 0) GOTO 0x132e; Pop(1)

0x132c: Stack[-8] = (bool) 0
0x132d: Return(); Pop(6)

0x132e: PushEmpty(int)
0x132f: Stack[-1] = Stack[-4]
0x1330: Push((int) 24)
0x1331: Stack[-3] = Stack[-2] % Stack[-1]; Pop(2);
0x1332: Push((int) 7)
0x1333: Stack[-9] = Stack[-2] < Stack[-1]; Pop(1);
0x1334: Return(); Pop(6)

0x1335: PushEmpty(string, string)
0x1336: Stack[-1] = "idle"
0x1337: Push(Stack[-3])
0x1338: IF (Stack[-1] == 0) GOTO 0x133a; Pop(1)

0x1339: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x133a: Stack[-4] = Stack[-1]
0x133b: Return(); Pop(2)

0x133c: PushEmpty(int, bool, int, bool)
0x133d: Stack[-2] = (int) 0
0x133e: Push("all")
0x133f: PushEmpty(string, int)
0x1340: Stack[-1] = Stack[-5]
0x1341: Call2 0x1335

0x1342: Pop(1)
0x1343: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1344: Pop(2)
0x1345: Pop(0); Push((bool) Stack[-1] == 0)
0x1346: IF (Stack[-1] == 0) GOTO 0x1348; Pop(1)

0x1347: GOTO 0x134b

0x1348: Push((int) 1)
0x1349: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x134a: GOTO 0x133e

0x134b: Stack[-5] = Stack[-2]
0x134c: Return(); Pop(4)

0x134d: Stack[-1] = (int) 515553
0x134e: Return(); Pop(0)

0x134f: Stack[-1] = (int) 502878
0x1350: Return(); Pop(0)

0x1351: Stack[-1] = "ui/NPC_Starshina.png"
0x1352: Return(); Pop(0)

0x1353: Stack[-1] = "ui/NPC_Starshina_b.png"
0x1354: Return(); Pop(0)

0x1355: Stack[-1] = (bool) 1
0x1356: Return(); Pop(0)

0x1357: PushEmpty()
0x1358: PushEmpty(string, bool)
0x1359: Stack[-2] = "icot_eva_door"
0x135a: Stack[-1] = (bool) 1
0x135b: Call2 0x12ba

0x135c: Pop(2)
0x135d: Return(); Pop(0)

0x135e: PushEmpty()
0x135f: Push("b7q01")
0x1360: Push((int) 8)
0x1361: @ SetVariable(Stack[-2], Stack[-1])
0x1362: Pop(2)
0x1363: PushEmpty()
0x1364: Call2 0x15ad

0x1365: Pop(0)
0x1366: Return(); Pop(0)

0x1367: PushEmpty()
0x1368: Push("avroks blood is given")
0x1369: @ Trace(Stack[-1])
0x136a: Pop(1)
0x136b: PushEmpty(object, string, int)
0x136c: Stack[-3] = Stack[-5]
0x136d: Stack[-2] = "avroks_blood"
0x136e: Stack[-1] = (int) 1
0x136f: Call2 0x12ee

0x1370: Pop(3)
0x1371: Return(); Pop(0)

0x1372: PushEmpty()
0x1373: Push("b8q01")
0x1374: Push((int) 5)
0x1375: @ SetVariable(Stack[-2], Stack[-1])
0x1376: Pop(2)
0x1377: PushEmpty()
0x1378: Call2 0x15c7

0x1379: Pop(0)
0x137a: Return(); Pop(0)

0x137b: PushEmpty()
0x137c: Push("b8q01")
0x137d: Push((int) 7)
0x137e: @ SetVariable(Stack[-2], Stack[-1])
0x137f: Pop(2)
0x1380: Push("b8q01KnowSgustki")
0x1381: Push((int) 1)
0x1382: @ SetVariable(Stack[-2], Stack[-1])
0x1383: Pop(2)
0x1384: PushEmpty()
0x1385: Call2 0x15ba

0x1386: Pop(0)
0x1387: Return(); Pop(0)

0x1388: PushEmpty()
0x1389: Push("b9q01")
0x138a: Push((int) 1)
0x138b: @ SetVariable(Stack[-2], Stack[-1])
0x138c: Pop(2)
0x138d: PushEmpty()
0x138e: Call2 0x15d4

0x138f: Pop(0)
0x1390: PushEmpty()
0x1391: Call2 0x15ee

0x1392: Pop(0)
0x1393: Push("quest_b9_01_effect.bin")
0x1394: @@ ApplyEffect(Stack[-1])
0x1395: Pop(1)
0x1396: PushEmpty(bool, string, string)
0x1397: Stack[-2] = "quest_b9_01"
0x1398: Stack[-1] = "remove_danko"
0x1399: Call2 0x1302

0x139a: Pop(3)
0x139b: Return(); Pop(0)

0x139c: PushEmpty()
0x139d: PushEmpty()
0x139e: Call2 0x15e1

0x139f: Pop(0)
0x13a0: PushEmpty(bool, string, string)
0x13a1: Stack[-2] = "quest_b9_01"
0x13a2: Stack[-1] = "completed"
0x13a3: Call2 0x1302

0x13a4: Pop(3)
0x13a5: Push("b9q01_stop")
0x13a6: @ Trigger(Stack[-3], Stack[-1])
0x13a7: Pop(1)
0x13a8: Return(); Pop(0)

0x13a9: PushEmpty()
0x13aa: Push("oob9Starshina1")
0x13ab: Push((int) 1)
0x13ac: @ SetVariable(Stack[-2], Stack[-1])
0x13ad: Pop(2)
0x13ae: Return(); Pop(0)

0x13af: PushEmpty()
0x13b0: Push("oob9Starshina2")
0x13b1: Push((int) 1)
0x13b2: @ SetVariable(Stack[-2], Stack[-1])
0x13b3: Pop(2)
0x13b4: Return(); Pop(0)

0x13b5: PushEmpty()
0x13b6: Push("oob10Starshina1")
0x13b7: Push((int) 1)
0x13b8: @ SetVariable(Stack[-2], Stack[-1])
0x13b9: Pop(2)
0x13ba: Return(); Pop(0)

0x13bb: PushEmpty(object, object)
0x13bc: Push("b10q01")
0x13bd: Push((int) 2)
0x13be: @ SetVariable(Stack[-2], Stack[-1])
0x13bf: Pop(2)
0x13c0: PushEmpty(object)
0x13c1: Call2 0x1635

0x13c2: Stack[-2] = Stack[-1]
0x13c3: Pop(1)
0x13c4: Push("b10q01StarshinaGotoKurgan")
0x13c5: Push("pt_map_kurgan")
0x13c6: Push((int) 1)
0x13c7: Push((int) 531553)
0x13c8: PushEmpty(float)
0x13c9: Call2 0x130e

0x13ca: Pop(0)
0x13cb: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x13cc: Pop(5)
0x13cd: PushEmpty()
0x13ce: Call2 0x1586

0x13cf: Pop(0)
0x13d0: PushEmpty(bool, string, string)
0x13d1: Stack[-2] = "quest_b10_01"
0x13d2: Stack[-1] = "usable_stone"
0x13d3: Call2 0x1302

0x13d4: Pop(3)
0x13d5: Push("quest_b10_01_effect.bin")
0x13d6: @@ ApplyEffect(Stack[-1])
0x13d7: Pop(1)
0x13d8: Return(); Pop(2)

0x13d9: Stack[-1] = 0
0x13da: PushEmpty()
0x13db: Push("b10q01")
0x13dc: Push((int) 3)
0x13dd: @ SetVariable(Stack[-2], Stack[-1])
0x13de: Pop(2)
0x13df: PushEmpty()
0x13e0: Call2 0x1579

0x13e1: Pop(0)
0x13e2: Return(); Pop(0)

0x13e3: PushEmpty()
0x13e4: Push("oob11Starshina1")
0x13e5: Push((int) 1)
0x13e6: @ SetVariable(Stack[-2], Stack[-1])
0x13e7: Pop(2)
0x13e8: Return(); Pop(0)

0x13e9: PushEmpty()
0x13ea: Push("b11q01")
0x13eb: Push((int) 1)
0x13ec: @ SetVariable(Stack[-2], Stack[-1])
0x13ed: Pop(2)
0x13ee: PushEmpty()
0x13ef: Call2 0x1593

0x13f0: Pop(0)
0x13f1: PushEmpty()
0x13f2: Call2 0x15a0

0x13f3: Pop(0)
0x13f4: PushEmpty(bool, string, string)
0x13f5: Stack[-2] = "quest_b11_01"
0x13f6: Stack[-1] = "open_shaft"
0x13f7: Call2 0x1302

0x13f8: Pop(3)
0x13f9: Return(); Pop(0)

0x13fa: PushEmpty()
0x13fb: PushEmpty(bool, string, string)
0x13fc: Stack[-2] = "quest_b11_01"
0x13fd: Stack[-1] = "starshina_fight"
0x13fe: Call2 0x1302

0x13ff: Pop(3)
0x1400: Return(); Pop(0)

0x1401: PushEmpty()
0x1402: Push("playsound")
0x1403: Push("giveitem")
0x1404: @ TriggerWorld(Stack[-2], Stack[-1])
0x1405: Pop(2)
0x1406: Return(); Pop(0)

0x1407: PushEmpty()
0x1408: PushEmpty(int, string)
0x1409: Stack[-1] = "B_Mission3"
0x140a: Call2 0x12b5

0x140b: Pop(1)
0x140c: Push((int) 0)
0x140d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x140e: IF (Stack[-1] == 0) GOTO 0x141e; Pop(1)

0x140f: Push("B_Mission3")
0x1410: Push((int) 1)
0x1411: @ SetVariable(Stack[-2], Stack[-1])
0x1412: Pop(2)
0x1413: PushEmpty()
0x1414: Call2 0x155f

0x1415: Pop(0)
0x1416: PushEmpty(bool, int)
0x1417: Stack[-1] = (int) 562
0x1418: Call2 0x1624

0x1419: Pop(2)
0x141a: PushEmpty(bool, int)
0x141b: Stack[-1] = (int) 563
0x141c: Call2 0x1624

0x141d: Pop(2)
0x141e: Return(); Pop(0)

0x141f: PushEmpty()
0x1420: PushEmpty(int, string)
0x1421: Stack[-1] = "B_Mission4"
0x1422: Call2 0x12b5

0x1423: Pop(1)
0x1424: Push((int) 0)
0x1425: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1426: IF (Stack[-1] == 0) GOTO 0x143a; Pop(1)

0x1427: Push("B_Mission4")
0x1428: Push((int) 1)
0x1429: @ SetVariable(Stack[-2], Stack[-1])
0x142a: Pop(2)
0x142b: PushEmpty()
0x142c: Call2 0x156c

0x142d: Pop(0)
0x142e: PushEmpty(bool, int)
0x142f: Stack[-1] = (int) 562
0x1430: Call2 0x1624

0x1431: Pop(2)
0x1432: PushEmpty(bool, int)
0x1433: Stack[-1] = (int) 563
0x1434: Call2 0x1624

0x1435: Pop(2)
0x1436: PushEmpty(bool, int)
0x1437: Stack[-1] = (int) 564
0x1438: Call2 0x1624

0x1439: Pop(2)
0x143a: Return(); Pop(0)

0x143b: PushEmpty()
0x143c: PushEmpty(object, string, float)
0x143d: PushEmpty(object)
0x143e: Call2 0x1635

0x143f: Stack[-4] = Stack[-1]
0x1440: Pop(1)
0x1441: Stack[-2] = "pt_map_kurgan"
0x1442: Stack[-1] = (int) 2
0x1443: Call2 0x1646

0x1444: Pop(3)
0x1445: PushEmpty(object)
0x1446: Call2 0x1635

0x1447: Pop(0)
0x1448: @@ ShowMap(Stack[-1])
0x1449: Pop(1)
0x144a: Return(); Pop(0)

0x144b: PushEmpty()
0x144c: PushEmpty(int, string)
0x144d: Stack[-1] = "map_chertez_state"
0x144e: Call2 0x12b5

0x144f: Pop(1)
0x1450: Push((int) 3)
0x1451: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1452: IF (Stack[-1] == 0) GOTO 0x145b; Pop(1)

0x1453: Push("map_chertez_state")
0x1454: Push((int) 3)
0x1455: @ SetVariable(Stack[-2], Stack[-1])
0x1456: Pop(2)
0x1457: Push("map_chertez_force")
0x1458: Push((int) 1)
0x1459: @ SetVariable(Stack[-2], Stack[-1])
0x145a: Pop(2)
0x145b: Return(); Pop(0)

0x145c: PushEmpty()
0x145d: PushEmpty(int, string)
0x145e: Stack[-1] = "map_chertez_state"
0x145f: Call2 0x12b5

0x1460: Pop(1)
0x1461: Push((int) 6)
0x1462: Pop(2); Push((bool) Stack[-2] <= Stack[-1])
0x1463: IF (Stack[-1] == 0) GOTO 0x146c; Pop(1)

0x1464: Push("map_chertez_state")
0x1465: Push((int) 6)
0x1466: @ SetVariable(Stack[-2], Stack[-1])
0x1467: Pop(2)
0x1468: Push("map_chertez_force")
0x1469: Push((int) 1)
0x146a: @ SetVariable(Stack[-2], Stack[-1])
0x146b: Pop(2)
0x146c: Return(); Pop(0)

0x146d: PushEmpty()
0x146e: PushEmpty(object, string, float)
0x146f: PushEmpty(object)
0x1470: Call2 0x1635

0x1471: Stack[-4] = Stack[-1]
0x1472: Pop(1)
0x1473: Stack[-2] = "pt_map_aglaja"
0x1474: Stack[-1] = (int) -1
0x1475: Call2 0x1646

0x1476: Pop(3)
0x1477: PushEmpty(object)
0x1478: Call2 0x1635

0x1479: Pop(0)
0x147a: @@ ShowMap(Stack[-1])
0x147b: Pop(1)
0x147c: Return(); Pop(0)

0x147d: PushEmpty()
0x147e: PushEmpty(int, string)
0x147f: Stack[-1] = "b8q01"
0x1480: Call2 0x12b5

0x1481: Pop(1)
0x1482: Push((int) 6)
0x1483: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1484: IF (Stack[-1] == 0) GOTO 0x1487; Pop(1)

0x1485: Stack[-2] = (bool) 1
0x1486: Return(); Pop(0)

0x1487: Stack[-2] = (bool) 0
0x1488: Return(); Pop(0)

0x1489: PushEmpty()
0x148a: PushEmpty(int, string)
0x148b: Stack[-1] = "b8q01"
0x148c: Call2 0x12b5

0x148d: Pop(1)
0x148e: Push((int) 4)
0x148f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1490: IF (Stack[-1] == 0) GOTO 0x1493; Pop(1)

0x1491: Stack[-2] = (bool) 1
0x1492: Return(); Pop(0)

0x1493: Stack[-2] = (bool) 0
0x1494: Return(); Pop(0)

0x1495: PushEmpty()
0x1496: PushEmpty(int, string)
0x1497: Stack[-1] = "b9q01"
0x1498: Call2 0x12b5

0x1499: Pop(1)
0x149a: Push((int) 0)
0x149b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x149c: IF (Stack[-1] == 0) GOTO 0x149f; Pop(1)

0x149d: Stack[-2] = (bool) 1
0x149e: Return(); Pop(0)

0x149f: Stack[-2] = (bool) 0
0x14a0: Return(); Pop(0)

0x14a1: PushEmpty()
0x14a2: PushEmpty(int, string)
0x14a3: Stack[-1] = "oob9Starshina1"
0x14a4: Call2 0x12b5

0x14a5: Pop(1)
0x14a6: Push((int) 0)
0x14a7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14a8: IF (Stack[-1] == 0) GOTO 0x14ab; Pop(1)

0x14a9: Stack[-2] = (bool) 1
0x14aa: Return(); Pop(0)

0x14ab: Stack[-2] = (bool) 0
0x14ac: Return(); Pop(0)

0x14ad: PushEmpty()
0x14ae: PushEmpty(int, string)
0x14af: Stack[-1] = "b9q01"
0x14b0: Call2 0x12b5

0x14b1: Pop(1)
0x14b2: Push((int) 3)
0x14b3: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14b4: IF (Stack[-1] == 0) GOTO 0x14b7; Pop(1)

0x14b5: Stack[-2] = (bool) 1
0x14b6: Return(); Pop(0)

0x14b7: Stack[-2] = (bool) 0
0x14b8: Return(); Pop(0)

0x14b9: PushEmpty()
0x14ba: PushEmpty(int, string)
0x14bb: Stack[-1] = "oob9Starshina2"
0x14bc: Call2 0x12b5

0x14bd: Pop(1)
0x14be: Push((int) 0)
0x14bf: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14c0: IF (Stack[-1] == 0) GOTO 0x14c3; Pop(1)

0x14c1: Stack[-2] = (bool) 1
0x14c2: Return(); Pop(0)

0x14c3: Stack[-2] = (bool) 0
0x14c4: Return(); Pop(0)

0x14c5: PushEmpty()
0x14c6: PushEmpty(int, string)
0x14c7: Stack[-1] = "oob10Starshina1"
0x14c8: Call2 0x12b5

0x14c9: Pop(1)
0x14ca: Push((int) 0)
0x14cb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14cc: IF (Stack[-1] == 0) GOTO 0x14cf; Pop(1)

0x14cd: Stack[-2] = (bool) 1
0x14ce: Return(); Pop(0)

0x14cf: Stack[-2] = (bool) 0
0x14d0: Return(); Pop(0)

0x14d1: PushEmpty()
0x14d2: PushEmpty(int, string)
0x14d3: Stack[-1] = "b10q01Butchers"
0x14d4: Call2 0x12b5

0x14d5: Pop(1)
0x14d6: Push((int) 3)
0x14d7: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14d8: IF (Stack[-1] == 0) GOTO 0x14db; Pop(1)

0x14d9: Stack[-2] = (bool) 1
0x14da: Return(); Pop(0)

0x14db: Stack[-2] = (bool) 0
0x14dc: Return(); Pop(0)

0x14dd: PushEmpty()
0x14de: PushEmpty(bool)
0x14df: Stack[-1] = (bool) 1
0x14e0: PushEmpty(int, string)
0x14e1: Stack[-1] = "b10q01Butchers"
0x14e2: Call2 0x12b5

0x14e3: Pop(1)
0x14e4: Push((int) 1)
0x14e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14e6: IF (Stack[-1] == 0) GOTO 0x14ef; Pop(1)

0x14e7: PushEmpty(int, string)
0x14e8: Stack[-1] = "b10q01Butchers"
0x14e9: Call2 0x12b5

0x14ea: Pop(1)
0x14eb: Push((int) 2)
0x14ec: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14ed: IF (Stack[-1] == 0) GOTO 0x14ef; Pop(1)

0x14ee: Stack[-1] = (bool) 0
0x14ef: IF (Stack[-1] == 0) GOTO 0x14f2; Pop(1)

0x14f0: Stack[-2] = (bool) 1
0x14f1: Return(); Pop(0)

0x14f2: Stack[-2] = (bool) 0
0x14f3: Return(); Pop(0)

0x14f4: PushEmpty()
0x14f5: PushEmpty(int, string)
0x14f6: Stack[-1] = "b10q01"
0x14f7: Call2 0x12b5

0x14f8: Pop(1)
0x14f9: Push((int) 1)
0x14fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x14fb: IF (Stack[-1] == 0) GOTO 0x14fe; Pop(1)

0x14fc: Stack[-2] = (bool) 1
0x14fd: Return(); Pop(0)

0x14fe: Stack[-2] = (bool) 0
0x14ff: Return(); Pop(0)

0x1500: PushEmpty()
0x1501: PushEmpty(int, string)
0x1502: Stack[-1] = "oob11Starshina1"
0x1503: Call2 0x12b5

0x1504: Pop(1)
0x1505: Push((int) 0)
0x1506: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1507: IF (Stack[-1] == 0) GOTO 0x150a; Pop(1)

0x1508: Stack[-2] = (bool) 1
0x1509: Return(); Pop(0)

0x150a: Stack[-2] = (bool) 0
0x150b: Return(); Pop(0)

0x150c: PushEmpty()
0x150d: PushEmpty(int, string)
0x150e: Stack[-1] = "b11q01"
0x150f: Call2 0x12b5

0x1510: Pop(1)
0x1511: Push((int) 0)
0x1512: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1513: IF (Stack[-1] == 0) GOTO 0x1516; Pop(1)

0x1514: Stack[-2] = (bool) 1
0x1515: Return(); Pop(0)

0x1516: Stack[-2] = (bool) 0
0x1517: Return(); Pop(0)

0x1518: PushEmpty()
0x1519: PushEmpty(int, string)
0x151a: Stack[-1] = "b11q01KnowWhoKilled"
0x151b: Call2 0x12b5

0x151c: Pop(1)
0x151d: Push((int) 1)
0x151e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x151f: IF (Stack[-1] == 0) GOTO 0x1522; Pop(1)

0x1520: Stack[-2] = (bool) 1
0x1521: Return(); Pop(0)

0x1522: Stack[-2] = (bool) 0
0x1523: Return(); Pop(0)

0x1524: PushEmpty()
0x1525: PushEmpty(int, string)
0x1526: Stack[-1] = "b11q01"
0x1527: Call2 0x12b5

0x1528: Pop(1)
0x1529: Push((int) 2)
0x152a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x152b: IF (Stack[-1] == 0) GOTO 0x152e; Pop(1)

0x152c: Stack[-2] = (bool) 1
0x152d: Return(); Pop(0)

0x152e: Stack[-2] = (bool) 0
0x152f: Return(); Pop(0)

0x1530: PushEmpty()
0x1531: PushEmpty(int, string)
0x1532: Stack[-1] = "b10q01"
0x1533: Call2 0x12b5

0x1534: Pop(1)
0x1535: Push((int) 2)
0x1536: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1537: IF (Stack[-1] == 0) GOTO 0x153a; Pop(1)

0x1538: Stack[-2] = (bool) 1
0x1539: Return(); Pop(0)

0x153a: Stack[-2] = (bool) 0
0x153b: Return(); Pop(0)

0x153c: PushEmpty()
0x153d: PushEmpty(bool, object, string)
0x153e: Stack[-2] = Stack[-4]
0x153f: Stack[-1] = "b8q01_bone"
0x1540: Call2 0x12fb

0x1541: Pop(2)
0x1542: IF (Stack[-1] == 0) GOTO 0x1545; Pop(1)

0x1543: Stack[-2] = (bool) 1
0x1544: Return(); Pop(0)

0x1545: Stack[-2] = (bool) 0
0x1546: Return(); Pop(0)

0x1547: PushEmpty()
0x1548: PushEmpty(int, string)
0x1549: Stack[-1] = "b10q03"
0x154a: Call2 0x12b5

0x154b: Pop(1)
0x154c: Push((int) 1000)
0x154d: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x154e: IF (Stack[-1] == 0) GOTO 0x1551; Pop(1)

0x154f: Stack[-2] = (bool) 1
0x1550: Return(); Pop(0)

0x1551: Stack[-2] = (bool) 0
0x1552: Return(); Pop(0)

0x1553: PushEmpty()
0x1554: PushEmpty(int, string)
0x1555: Stack[-1] = "b7q01"
0x1556: Call2 0x12b5

0x1557: Pop(1)
0x1558: Push((int) 7)
0x1559: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x155a: IF (Stack[-1] == 0) GOTO 0x155d; Pop(1)

0x155b: Stack[-2] = (bool) 1
0x155c: Return(); Pop(0)

0x155d: Stack[-2] = (bool) 0
0x155e: Return(); Pop(0)

0x155f: PushEmpty(object, object)
0x1560: Push((int) 564)
0x1561: Push((int) 0)
0x1562: Push((int) 530578)
0x1563: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1564: Pop(3)
0x1565: PushEmpty(bool, object, int)
0x1566: Stack[-2] = Stack[-4]
0x1567: Stack[-1] = (int) -1
0x1568: Call2 0x1608

0x1569: Pop(3)
0x156a: Return(); Pop(2)

0x156b: Stack[-1] = 0
0x156c: PushEmpty(object, object)
0x156d: Push((int) 565)
0x156e: Push((int) 0)
0x156f: Push((int) 530579)
0x1570: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1571: Pop(3)
0x1572: PushEmpty(bool, object, int)
0x1573: Stack[-2] = Stack[-4]
0x1574: Stack[-1] = (int) -1
0x1575: Call2 0x1608

0x1576: Pop(3)
0x1577: Return(); Pop(2)

0x1578: Stack[-1] = 0
0x1579: PushEmpty(object, object)
0x157a: Push((int) 309)
0x157b: Push((int) 1)
0x157c: Push((int) 521960)
0x157d: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x157e: Pop(3)
0x157f: PushEmpty(bool, object, int)
0x1580: Stack[-2] = Stack[-4]
0x1581: Stack[-1] = (int) 305
0x1582: Call2 0x1608

0x1583: Pop(3)
0x1584: Return(); Pop(2)

0x1585: Stack[-1] = 0
0x1586: PushEmpty(object, object)
0x1587: Push((int) 307)
0x1588: Push((int) 1)
0x1589: Push((int) 521958)
0x158a: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x158b: Pop(3)
0x158c: PushEmpty(bool, object, int)
0x158d: Stack[-2] = Stack[-4]
0x158e: Stack[-1] = (int) 305
0x158f: Call2 0x1608

0x1590: Pop(3)
0x1591: Return(); Pop(2)

0x1592: Stack[-1] = 0
0x1593: PushEmpty(object, object)
0x1594: Push((int) 313)
0x1595: Push((int) 1)
0x1596: Push((int) 522055)
0x1597: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1598: Pop(3)
0x1599: PushEmpty(bool, object, int)
0x159a: Stack[-2] = Stack[-4]
0x159b: Stack[-1] = (int) -1
0x159c: Call2 0x1608

0x159d: Pop(3)
0x159e: Return(); Pop(2)

0x159f: Stack[-1] = 0
0x15a0: PushEmpty(object, object)
0x15a1: Push((int) 314)
0x15a2: Push((int) 1)
0x15a3: Push((int) 522056)
0x15a4: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15a5: Pop(3)
0x15a6: PushEmpty(bool, object, int)
0x15a7: Stack[-2] = Stack[-4]
0x15a8: Stack[-1] = (int) 313
0x15a9: Call2 0x1608

0x15aa: Pop(3)
0x15ab: Return(); Pop(2)

0x15ac: Stack[-1] = 0
0x15ad: PushEmpty(object, object)
0x15ae: Push((int) 260)
0x15af: Push((int) 1)
0x15b0: Push((int) 521032)
0x15b1: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15b2: Pop(3)
0x15b3: PushEmpty(bool, object, int)
0x15b4: Stack[-2] = Stack[-4]
0x15b5: Stack[-1] = (int) 253
0x15b6: Call2 0x1608

0x15b7: Pop(3)
0x15b8: Return(); Pop(2)

0x15b9: Stack[-1] = 0
0x15ba: PushEmpty(object, object)
0x15bb: Push((int) 291)
0x15bc: Push((int) 1)
0x15bd: Push((int) 521462)
0x15be: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15bf: Pop(3)
0x15c0: PushEmpty(bool, object, int)
0x15c1: Stack[-2] = Stack[-4]
0x15c2: Stack[-1] = (int) 284
0x15c3: Call2 0x1608

0x15c4: Pop(3)
0x15c5: Return(); Pop(2)

0x15c6: Stack[-1] = 0
0x15c7: PushEmpty(object, object)
0x15c8: Push((int) 289)
0x15c9: Push((int) 1)
0x15ca: Push((int) 521460)
0x15cb: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15cc: Pop(3)
0x15cd: PushEmpty(bool, object, int)
0x15ce: Stack[-2] = Stack[-4]
0x15cf: Stack[-1] = (int) 284
0x15d0: Call2 0x1608

0x15d1: Pop(3)
0x15d2: Return(); Pop(2)

0x15d3: Stack[-1] = 0
0x15d4: PushEmpty(object, object)
0x15d5: Push((int) 297)
0x15d6: Push((int) 1)
0x15d7: Push((int) 521612)
0x15d8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15d9: Pop(3)
0x15da: PushEmpty(bool, object, int)
0x15db: Stack[-2] = Stack[-4]
0x15dc: Stack[-1] = (int) -1
0x15dd: Call2 0x1608

0x15de: Pop(3)
0x15df: Return(); Pop(2)

0x15e0: Stack[-1] = 0
0x15e1: PushEmpty(object, object)
0x15e2: Push((int) 304)
0x15e3: Push((int) 1)
0x15e4: Push((int) 521619)
0x15e5: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15e6: Pop(3)
0x15e7: PushEmpty(bool, object, int)
0x15e8: Stack[-2] = Stack[-4]
0x15e9: Stack[-1] = (int) 297
0x15ea: Call2 0x1608

0x15eb: Pop(3)
0x15ec: Return(); Pop(2)

0x15ed: Stack[-1] = 0
0x15ee: PushEmpty(object, object)
0x15ef: Push((int) 298)
0x15f0: Push((int) 1)
0x15f1: Push((int) 521613)
0x15f2: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x15f3: Pop(3)
0x15f4: PushEmpty(bool, object, int)
0x15f5: Stack[-2] = Stack[-4]
0x15f6: Stack[-1] = (int) 297
0x15f7: Call2 0x1608

0x15f8: Pop(3)
0x15f9: Return(); Pop(2)

0x15fa: Stack[-1] = 0
0x15fb: PushEmpty(object, object)
0x15fc: @ GetDiaryRoot(Stack[-1])
0x15fd: Pop(0)
0x15fe: Pop(0); Push((bool) Stack[-1] == 0)
0x15ff: IF (Stack[-1] == 0) GOTO 0x1605; Pop(1)

0x1600: Push("Can't retrieve diary root")
0x1601: @ Trace(Stack[-1])
0x1602: Pop(1)
0x1603: Stack[-3] = (bool) 0
0x1604: Return(); Pop(2)

0x1605: Stack[-3] = Stack[-1]
0x1606: Return(); Pop(2)

0x1607: Stack[-1] = 0
0x1608: PushEmpty(object, object, int, object, object, int)
0x1609: PushEmpty(object)
0x160a: Call2 0x15fb

0x160b: Stack[-4] = Stack[-1]
0x160c: Pop(1)
0x160d: @@ Find(Stack[-7], Stack[-2])
0x160e: Pop(0)
0x160f: Pop(0); Push((bool) Stack[-2] == 0)
0x1610: IF (Stack[-1] == 0) GOTO 0x1617; Pop(1)

0x1611: Push("Can't find diary parent with id: ")
0x1612: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1613: @ Trace(Stack[-1])
0x1614: Pop(1)
0x1615: Stack[-9] = (bool) 0
0x1616: Return(); Pop(6)

0x1617: @@ AddChild(Stack[-8])
0x1618: Pop(0)
0x1619: Push((int) 7)
0x161a: @ SendWorldWndMessage(Stack[-1])
0x161b: Pop(1)
0x161c: @@ GetCategory(Stack[-1])
0x161d: Pop(0)
0x161e: @ SetDiarySection(Stack[-1])
0x161f: Pop(0)
0x1620: Stack[-9] = (bool) 0
0x1621: Return(); Pop(6)

0x1622: Stack[-2] = 0
0x1623: Stack[-3] = 0
0x1624: PushEmpty(object, object, object, object)
0x1625: PushEmpty(object)
0x1626: Call2 0x15fb

0x1627: Stack[-3] = Stack[-1]
0x1628: Pop(1)
0x1629: @@ Find(Stack[-5], Stack[-1])
0x162a: Pop(0)
0x162b: Pop(0); Push((bool) Stack[-1] == 0)
0x162c: IF (Stack[-1] == 0) GOTO 0x162f; Pop(1)

0x162d: Stack[-6] = (bool) 0
0x162e: Return(); Pop(4)

0x162f: @@ Remove()
0x1630: Pop(0)
0x1631: Stack[-6] = (bool) 1
0x1632: Return(); Pop(4)

0x1633: Stack[-1] = 0
0x1634: Stack[-2] = 0
0x1635: PushEmpty(object, object, object, object)
0x1636: @ GetMainOutdoorScene(Stack[-2])
0x1637: Pop(0)
0x1638: Pop(0); Push((bool) Stack[-2] == 0)
0x1639: IF (Stack[-1] == 0) GOTO 0x1640; Pop(1)

0x163a: Push("Can't find main outdoor scene")
0x163b: @ Trace(Stack[-1])
0x163c: Pop(1)
0x163d: Stack[-1] = 0
0x163e: Stack[-5] = Stack[-1]
0x163f: Return(); Pop(4)

0x1640: @@ GetMap(Stack[-1])
0x1641: Pop(0)
0x1642: Stack[-5] = Stack[-1]
0x1643: Return(); Pop(4)

0x1644: Stack[-1] = 0
0x1645: Stack[-2] = 0
0x1646: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x1647: @ GetMainOutdoorScene(Stack[-2])
0x1648: Pop(0)
0x1649: Pop(0); Push((bool) Stack[-2] == 0)
0x164a: IF (Stack[-1] == 0) GOTO 0x164f; Pop(1)

0x164b: Push("Can't find main outdoor scene")
0x164c: @ Trace(Stack[-1])
0x164d: Pop(1)
0x164e: Return(); Pop(8)

0x164f: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x1650: Pop(0)
0x1651: Pop(0); Push((bool) Stack[-1] == 0)
0x1652: IF (Stack[-1] == 0) GOTO 0x1659; Pop(1)

0x1653: Push("Warning: outdoor scene locator ")
0x1654: Pop(1); Push(Stack[-1] + Stack[-11]);
0x1655: Push(" doesnt exist")
0x1656: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1657: @ Trace(Stack[-1])
0x1658: Pop(1)
0x1659: @@ GetMap(Stack[-11])
0x165a: Pop(0)
0x165b: Pop(0); Push((bool) Stack[-11] == 0)
0x165c: IF (Stack[-1] == 0) GOTO 0x1661; Pop(1)

0x165d: Push("Can't find map")
0x165e: @ Trace(Stack[-1])
0x165f: Pop(1)
0x1660: Return(); Pop(8)

0x1661: Push(CvectorIndex(Stack[-4], 0))
0x1662: Push(CvectorIndex(Stack[-5], 2))
0x1663: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1664: Pop(2)
0x1665: Return(); Pop(8)

0x1666: Stack[-2] = 0
0x1667: PushEmpty(int, int)
0x1668: Push("branch")
0x1669: @ GetVariable(Stack[-1], Stack[-2])
0x166a: Pop(1)
0x166b: Push((int) 0)
0x166c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x166d: IF (Stack[-1] == 0) GOTO 0x1671; Pop(1)

0x166e: Stack[-3] = (int) 1
0x166f: Return(); Pop(2)

0x1670: GOTO 0x1676

0x1671: Push((int) 1)
0x1672: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1673: IF (Stack[-1] == 0) GOTO 0x1676; Pop(1)

0x1674: Stack[-3] = (int) 2
0x1675: Return(); Pop(2)

0x1676: Stack[-3] = (int) 3
0x1677: Return(); Pop(2)

0x1678: PushEmpty()
0x1679: PushEmpty(bool, int)
0x167a: Stack[-1] = (int) 9
0x167b: Call2 0x1322

0x167c: Pop(1)
0x167d: IF (Stack[-1] == 0) GOTO 0x1685; Pop(1)

0x167e: PushEmpty(int, object)
0x167f: Stack[-1] = Stack[-3]
0x1680: Push(-2, 1); TaskCall(0)
0x1681: Call2 0x0

0x1682: Pop(-2, 1); TaskReturn
0x1683: Pop(2)
0x1684: Return(); Pop(0)

0x1685: PushEmpty(bool, int)
0x1686: Stack[-1] = (int) 10
0x1687: Call2 0x1322

0x1688: Pop(1)
0x1689: IF (Stack[-1] == 0) GOTO 0x1691; Pop(1)

0x168a: PushEmpty(int, object)
0x168b: Stack[-1] = Stack[-3]
0x168c: Push(-2, 1); TaskCall(2)
0x168d: Call2 0xcb

0x168e: Pop(-2, 1); TaskReturn
0x168f: Pop(2)
0x1690: Return(); Pop(0)

0x1691: PushEmpty(bool, int)
0x1692: Stack[-1] = (int) 11
0x1693: Call2 0x1322

0x1694: Pop(1)
0x1695: IF (Stack[-1] == 0) GOTO 0x169d; Pop(1)

0x1696: PushEmpty(int, object)
0x1697: Stack[-1] = Stack[-3]
0x1698: Push(-2, 1); TaskCall(4)
0x1699: Call2 0x196

0x169a: Pop(-2, 1); TaskReturn
0x169b: Pop(2)
0x169c: Return(); Pop(0)

0x169d: PushEmpty(bool, int)
0x169e: Stack[-1] = (int) 7
0x169f: Call2 0x131c

0x16a0: Pop(1)
0x16a1: IF (Stack[-1] == 0) GOTO 0x16a9; Pop(1)

0x16a2: PushEmpty(int, object)
0x16a3: Stack[-1] = Stack[-3]
0x16a4: Push(-2, 1); TaskCall(6)
0x16a5: Call2 0x261

0x16a6: Pop(-2, 1); TaskReturn
0x16a7: Pop(2)
0x16a8: Return(); Pop(0)

0x16a9: PushEmpty(bool, int)
0x16aa: Stack[-1] = (int) 8
0x16ab: Call2 0x131c

0x16ac: Pop(1)
0x16ad: IF (Stack[-1] == 0) GOTO 0x16b5; Pop(1)

0x16ae: PushEmpty(int, object)
0x16af: Stack[-1] = Stack[-3]
0x16b0: Push(-2, 1); TaskCall(8)
0x16b1: Call2 0x461

0x16b2: Pop(-2, 1); TaskReturn
0x16b3: Pop(2)
0x16b4: Return(); Pop(0)

0x16b5: PushEmpty(bool, int)
0x16b6: Stack[-1] = (int) 9
0x16b7: Call2 0x131c

0x16b8: Pop(1)
0x16b9: IF (Stack[-1] == 0) GOTO 0x16c1; Pop(1)

0x16ba: PushEmpty(int, object)
0x16bb: Stack[-1] = Stack[-3]
0x16bc: Push(-2, 1); TaskCall(10)
0x16bd: Call2 0x6c8

0x16be: Pop(-2, 1); TaskReturn
0x16bf: Pop(2)
0x16c0: Return(); Pop(0)

0x16c1: PushEmpty(bool, int)
0x16c2: Stack[-1] = (int) 10
0x16c3: Call2 0x131c

0x16c4: Pop(1)
0x16c5: IF (Stack[-1] == 0) GOTO 0x16cd; Pop(1)

0x16c6: PushEmpty(int, object)
0x16c7: Stack[-1] = Stack[-3]
0x16c8: Push(-2, 1); TaskCall(12)
0x16c9: Call2 0x969

0x16ca: Pop(-2, 1); TaskReturn
0x16cb: Pop(2)
0x16cc: Return(); Pop(0)

0x16cd: PushEmpty(bool, int)
0x16ce: Stack[-1] = (int) 11
0x16cf: Call2 0x131c

0x16d0: Pop(1)
0x16d1: IF (Stack[-1] == 0) GOTO 0x16d9; Pop(1)

0x16d2: PushEmpty(int, object)
0x16d3: Stack[-1] = Stack[-3]
0x16d4: Push(-2, 1); TaskCall(14)
0x16d5: Call2 0xc78

0x16d6: Pop(-2, 1); TaskReturn
0x16d7: Pop(2)
0x16d8: Return(); Pop(0)

0x16d9: PushEmpty(int, object)
0x16da: Stack[-1] = Stack[-3]
0x16db: Push(-2, 1); TaskCall(16)
0x16dc: Call2 0xfaa

0x16dd: Pop(-2, 1); TaskReturn
0x16de: Pop(2)
0x16df: Return(); Pop(0)

