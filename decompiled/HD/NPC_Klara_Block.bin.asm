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
	Untrust
	Doubt
	Agression
	player
	GetPosition
	HasProperty
	HasProperty
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	m
	Can't find lsh animation : 
	add
	money
	Money
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Block.png
	ui/NPC_Block_b.png
	k10q01
	quest_k10_01
	remove_soldiers
	init_prison
	free_prisoner
	k11q01
	quest_k11_01
	init_kabak
	init_gun
	k11q01SoulCount
	completed
	quest_k9_01
	playsound
	giveitem
	ook11Block1
	ook11Block2
	ook11Block3
	ook9Block1
	ook12Block1
	money 5000 is given
	delta_pills is given
	delta_pills
	k9q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	k2system_danko_day
	k2system_danko_state
	mt_block

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
	GetInvItemByName (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)

RunOp = 0xaf7
RunTask = 12

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbf Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2c8 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x654 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x778 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x968 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xacd Vars = (int, int)
	GTASK_12 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xb40 Vars = (int)
		EVENT_6 Op = 0xb66 Vars = ()
		EVENT_5 Op = 0xb75 Vars = ()
		EVENT_45 Op = 0xb82 Vars = (bool)
		EVENT_0 Op = 0xb8e Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xc40

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xe1f

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xe1d

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xe21

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xe23

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x102f

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
0x31: Call2 0xd56

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xc97

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
0x48: Call2 0xc85

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
0x56: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0xecb

0x5a: Pop(1)
0x5b: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x5c: PushEmpty(string)
0x5d: Stack[-1] = "Neutral"
0x5e: Call2 0xa9

0x5f: Pop(1)
0x60: Push((int) 526965)
0x61: @@ SetMessage(Stack[-1])
0x62: Pop(1)
0x63: @@ ClearReplies()
0x64: Pop(0)
0x65: Push((int) 528076)
0x66: Push((int) 29419)
0x67: Push((int) 29418)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x8b

0x6b: PushEmpty(string)
0x6c: Stack[-1] = "Neutral"
0x6d: Call2 0xa9

0x6e: Pop(1)
0x6f: Push((int) 526969)
0x70: @@ SetMessage(Stack[-1])
0x71: Pop(1)
0x72: @@ ClearReplies()
0x73: Pop(0)
0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0xed7

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x79: Push((int) 526978)
0x7a: Push((int) 29424)
0x7b: Push((int) 28270)
0x7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7d: Pop(3)
0x7e: Push((int) 526970)
0x7f: Push((int) -1)
0x80: Push((int) 28262)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 528088)
0x84: Push((int) -1)
0x85: Push((int) 29431)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: GOTO 0x8b

0x89: Return(); Pop(0)

0x8a: GOTO 0x55

0x8b: PushEmpty(bool)
0x8c: Call2 0xe25

0x8d: Pop(0)
0x8e: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x8f: @ lshWaitForAnimEnd()
0x90: Pop(0)
0x91: Push( Stack[3 + Tasks[-1].StackPointer] )
0x92: IF (Stack[-1] == 0) GOTO 0x94; Pop(1)

0x93: GOTO 0x99

0x94: PushEmpty(string)
0x95: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x96: Call2 0xd21

0x97: Pop(1)
0x98: GOTO 0x8f

0x99: GOTO 0xa8

0x9a: Push("all")
0x9b: Push("idle")
0x9c: @ PlayAnimation(Stack[-2], Stack[-1])
0x9d: Pop(2)
0x9e: @ WaitForAnimEnd()
0x9f: Pop(0)
0xa0: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa1: IF (Stack[-1] == 0) GOTO 0xa3; Pop(1)

0xa2: GOTO 0xa8

0xa3: Push("all")
0xa4: Push("idle")
0xa5: @ PlayAnimation(Stack[-2], Stack[-1])
0xa6: Pop(2)
0xa7: GOTO 0x9e

0xa8: Return(); Pop(0)

0xa9: PushEmpty()
0xaa: PushEmpty(bool)
0xab: Call2 0xe25

0xac: Pop(0)
0xad: Pop(1); Push((bool) Stack[-1] == 0)
0xae: IF (Stack[-1] == 0) GOTO 0xb0; Pop(1)

0xaf: Return(); Pop(0)

0xb0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb1: IF (Stack[-1] == 0) GOTO 0xb3; Pop(1)

0xb2: Return(); Pop(0)

0xb3: PushEmpty(string, bool)
0xb4: Stack[-2] = Stack[-3]
0xb5: Push("")
0xb6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb7: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb8: Stack[-1] = (bool) 0
0xb9: GOTO 0xbb

0xba: Stack[-1] = (bool) 1
0xbb: Call2 0xd31

0xbc: Pop(2)
0xbd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe: Return(); Pop(0)

0xbf: PushEmpty()
0xc0: Push((int) 1)
0xc1: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0xc2: PushEmpty()
0xc3: Call2 0xd4f

0xc4: Pop(0)
0xc5: Push((int) 28260)
0xc6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc7: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xc8: PushEmpty(object, object)
0xc9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xca: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcb: Call2 0xe2e

0xcc: Pop(2)
0xcd: Push((int) 28272)
0xce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcf: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xd0: PushEmpty(object, object)
0xd1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd3: Call2 0xe41

0xd4: Pop(2)
0xd5: Push((int) 28257)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0xd8: PushEmpty(bool, object)
0xd9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xda: Call2 0xecb

0xdb: Pop(1)
0xdc: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xdd: PushEmpty(string)
0xde: Stack[-1] = "Neutral"
0xdf: Call2 0xa9

0xe0: Pop(1)
0xe1: Push((int) 526965)
0xe2: @@ SetMessage(Stack[-1])
0xe3: Pop(1)
0xe4: @@ ClearReplies()
0xe5: Pop(0)
0xe6: Push((int) 528076)
0xe7: Push((int) 29419)
0xe8: Push((int) 29418)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: PushEmpty(string)
0xed: Stack[-1] = "Neutral"
0xee: Call2 0xa9

0xef: Pop(1)
0xf0: Push((int) 526969)
0xf1: @@ SetMessage(Stack[-1])
0xf2: Pop(1)
0xf3: @@ ClearReplies()
0xf4: Pop(0)
0xf5: PushEmpty(bool, object)
0xf6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Call2 0xed7

0xf8: Pop(1)
0xf9: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfa: Push((int) 526978)
0xfb: Push((int) 29424)
0xfc: Push((int) 28270)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: Push((int) 526970)
0x100: Push((int) -1)
0x101: Push((int) 28262)
0x102: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x103: Pop(3)
0x104: Push((int) 528088)
0x105: Push((int) -1)
0x106: Push((int) 29431)
0x107: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x108: Pop(3)
0x109: Return(); Pop(0)

0x10a: Push((int) 29424)
0x10b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x11c; Pop(1)

0x10d: PushEmpty(string)
0x10e: Stack[-1] = "Untrust"
0x10f: Call2 0xa9

0x110: Pop(1)
0x111: Push((int) 528082)
0x112: @@ SetMessage(Stack[-1])
0x113: Pop(1)
0x114: @@ ClearReplies()
0x115: Pop(0)
0x116: Push((int) 528083)
0x117: Push((int) 29426)
0x118: Push((int) 29425)
0x119: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11a: Pop(3)
0x11b: Return(); Pop(0)

0x11c: Push((int) 29426)
0x11d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11e: IF (Stack[-1] == 0) GOTO 0x133; Pop(1)

0x11f: PushEmpty(string)
0x120: Stack[-1] = "Untrust"
0x121: Call2 0xa9

0x122: Pop(1)
0x123: Push((int) 528084)
0x124: @@ SetMessage(Stack[-1])
0x125: Pop(1)
0x126: @@ ClearReplies()
0x127: Pop(0)
0x128: Push((int) 528085)
0x129: Push((int) 28271)
0x12a: Push((int) 29427)
0x12b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12c: Pop(3)
0x12d: Push((int) 528086)
0x12e: Push((int) 28271)
0x12f: Push((int) 29428)
0x130: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x131: Pop(3)
0x132: Return(); Pop(0)

0x133: Push((int) 28271)
0x134: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x135: IF (Stack[-1] == 0) GOTO 0x145; Pop(1)

0x136: PushEmpty(string)
0x137: Stack[-1] = "Neutral"
0x138: Call2 0xa9

0x139: Pop(1)
0x13a: Push((int) 526979)
0x13b: @@ SetMessage(Stack[-1])
0x13c: Pop(1)
0x13d: @@ ClearReplies()
0x13e: Pop(0)
0x13f: Push((int) 528089)
0x140: Push((int) 29433)
0x141: Push((int) 29432)
0x142: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x143: Pop(3)
0x144: Return(); Pop(0)

0x145: Push((int) 29433)
0x146: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x147: IF (Stack[-1] == 0) GOTO 0x157; Pop(1)

0x148: PushEmpty(string)
0x149: Stack[-1] = "Neutral"
0x14a: Call2 0xa9

0x14b: Pop(1)
0x14c: Push((int) 528090)
0x14d: @@ SetMessage(Stack[-1])
0x14e: Pop(1)
0x14f: @@ ClearReplies()
0x150: Pop(0)
0x151: Push((int) 526980)
0x152: Push((int) -1)
0x153: Push((int) 28272)
0x154: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x155: Pop(3)
0x156: Return(); Pop(0)

0x157: Push((int) 29419)
0x158: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x159: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x15a: PushEmpty(string)
0x15b: Stack[-1] = "Untrust"
0x15c: Call2 0xa9

0x15d: Pop(1)
0x15e: Push((int) 528077)
0x15f: @@ SetMessage(Stack[-1])
0x160: Pop(1)
0x161: @@ ClearReplies()
0x162: Pop(0)
0x163: Push((int) 528078)
0x164: Push((int) 29421)
0x165: Push((int) 29420)
0x166: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x167: Pop(3)
0x168: Push((int) 528109)
0x169: Push((int) 29456)
0x16a: Push((int) 29454)
0x16b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16c: Pop(3)
0x16d: Return(); Pop(0)

0x16e: Push((int) 29456)
0x16f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x171: PushEmpty(string)
0x172: Stack[-1] = "Doubt"
0x173: Call2 0xa9

0x174: Pop(1)
0x175: Push((int) 528110)
0x176: @@ SetMessage(Stack[-1])
0x177: Pop(1)
0x178: @@ ClearReplies()
0x179: Pop(0)
0x17a: Push((int) 528111)
0x17b: Push((int) 29421)
0x17c: Push((int) 29457)
0x17d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17e: Pop(3)
0x17f: Return(); Pop(0)

0x180: Push((int) 29421)
0x181: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x182: IF (Stack[-1] == 0) GOTO 0x192; Pop(1)

0x183: PushEmpty(string)
0x184: Stack[-1] = "Agression"
0x185: Call2 0xa9

0x186: Pop(1)
0x187: Push((int) 528079)
0x188: @@ SetMessage(Stack[-1])
0x189: Pop(1)
0x18a: @@ ClearReplies()
0x18b: Pop(0)
0x18c: Push((int) 528080)
0x18d: Push((int) 29423)
0x18e: Push((int) 29422)
0x18f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x190: Pop(3)
0x191: Return(); Pop(0)

0x192: Push((int) 29423)
0x193: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x194: IF (Stack[-1] == 0) GOTO 0x1a4; Pop(1)

0x195: PushEmpty(string)
0x196: Stack[-1] = "Neutral"
0x197: Call2 0xa9

0x198: Pop(1)
0x199: Push((int) 528081)
0x19a: @@ SetMessage(Stack[-1])
0x19b: Pop(1)
0x19c: @@ ClearReplies()
0x19d: Pop(0)
0x19e: Push((int) 526968)
0x19f: Push((int) -1)
0x1a0: Push((int) 28260)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Return(); Pop(0)

0x1a4: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a5: PushEmpty(bool)
0x1a6: Call2 0xe25

0x1a7: Pop(0)
0x1a8: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x1a9: @ lshStopAnimation()
0x1aa: Pop(0)
0x1ab: GOTO 0x1ae

0x1ac: @ StopAnimation()
0x1ad: Pop(0)
0x1ae: Return(); Pop(0)

0x1af: GOTO 0xc0

0x1b0: Return(); Pop(0)

0x1b1: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1b2: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1b3: PushEmpty(bool, object, float)
0x1b4: Stack[-2] = Stack[-12]
0x1b5: Stack[-1] = (float) 70.0
0x1b6: Call2 0xc40

0x1b7: Pop(2)
0x1b8: Pop(1); Push((bool) Stack[-1] == 0)
0x1b9: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1ba: Stack[-10] = (int) -2
0x1bb: Return(); Pop(8)

0x1bc: @ CreateDialog(Stack[-4])
0x1bd: Pop(0)
0x1be: PushEmpty(int)
0x1bf: Call2 0xe1f

0x1c0: Pop(0)
0x1c1: @@ SetNPCName(Stack[-1])
0x1c2: Pop(1)
0x1c3: PushEmpty(int)
0x1c4: Call2 0xe1d

0x1c5: Pop(0)
0x1c6: @@ SetNPCDescription(Stack[-1])
0x1c7: Pop(1)
0x1c8: PushEmpty(string)
0x1c9: Call2 0xe21

0x1ca: Pop(0)
0x1cb: @@ SetPhoto(Stack[-1])
0x1cc: Pop(1)
0x1cd: PushEmpty(string)
0x1ce: Call2 0xe23

0x1cf: Pop(0)
0x1d0: @@ SetPhoto2(Stack[-1])
0x1d1: Pop(1)
0x1d2: PushEmpty(int)
0x1d3: Call2 0x102f

0x1d4: Pop(0)
0x1d5: @@ SetPlayerName(Stack[-1])
0x1d6: Pop(1)
0x1d7: Stack[-2] = (int) -1
0x1d8: @ IsOverrideActive(Stack[-3])
0x1d9: Pop(0)
0x1da: Push(Stack[-3])
0x1db: IF (Stack[-1] == 0) GOTO 0x1de; Pop(1)

0x1dc: Stack[-10] = (int) -2
0x1dd: Return(); Pop(8)

0x1de: @ DoDialog(Stack[-4])
0x1df: Pop(0)
0x1e0: PushEmpty(bool, object)
0x1e1: PushEmpty(object)
0x1e2: Call2 0xd56

0x1e3: Stack[-2] = Stack[-1]
0x1e4: Pop(1)
0x1e5: Call2 0xc97

0x1e6: Pop(2)
0x1e7: PushEmpty(object, object)
0x1e8: Stack[-2] = Stack[-11]
0x1e9: Stack[-1] = Stack[-6]
0x1ea: Push(-2, 4); TaskCall(3)
0x1eb: Call2 0x202

0x1ec: Pop(-2, 4); TaskReturn
0x1ed: Pop(2)
0x1ee: @@ IsDialogEnd(Stack[-1])
0x1ef: Pop(0)
0x1f0: Pop(0); Push((bool) Stack[-1] == 0)
0x1f1: IF (Stack[-1] == 0) GOTO 0x1f7; Pop(1)

0x1f2: @ sync()
0x1f3: Pop(0)
0x1f4: @@ IsDialogEnd(Stack[-1])
0x1f5: Pop(0)
0x1f6: GOTO 0x1f0

0x1f7: PushEmpty(object)
0x1f8: Stack[-1] = Stack[-10]
0x1f9: Call2 0xc85

0x1fa: Pop(1)
0x1fb: @ StopDialog(Stack[-4])
0x1fc: Pop(0)
0x1fd: @@ GetReturnValue(Stack[-2])
0x1fe: Pop(0)
0x1ff: Stack[-10] = Stack[-2]
0x200: Return(); Pop(8)

0x201: Stack[-4] = 0
0x202: PushEmpty()
0x203: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x204: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x205: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x206: Push((int) 1)
0x207: IF (Stack[-1] == 0) GOTO 0x294; Pop(1)

0x208: PushEmpty(string)
0x209: Stack[-1] = "Neutral"
0x20a: Call2 0x2b2

0x20b: Pop(1)
0x20c: Push((int) 527190)
0x20d: @@ SetMessage(Stack[-1])
0x20e: Pop(1)
0x20f: @@ ClearReplies()
0x210: Pop(0)
0x211: PushEmpty(bool, object)
0x212: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x213: Call2 0xee3

0x214: Pop(1)
0x215: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x216: Push((int) 527191)
0x217: Push((int) 28604)
0x218: Push((int) 28499)
0x219: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21a: Pop(3)
0x21b: PushEmpty(bool, object)
0x21c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21d: Call2 0xeef

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x220: Push((int) 527234)
0x221: Push((int) 28615)
0x222: Push((int) 28542)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: PushEmpty(bool)
0x226: Stack[-1] = (bool) 0
0x227: PushEmpty(bool, object)
0x228: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x229: Call2 0xf07

0x22a: Pop(1)
0x22b: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x22c: PushEmpty(bool, object)
0x22d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22e: Call2 0xefb

0x22f: Pop(1)
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Stack[-1] = (bool) 1
0x232: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x233: Push((int) 527310)
0x234: Push((int) 28628)
0x235: Push((int) 28627)
0x236: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x237: Pop(3)
0x238: PushEmpty(bool)
0x239: Stack[-1] = (bool) 0
0x23a: PushEmpty(bool)
0x23b: Stack[-1] = (bool) 0
0x23c: PushEmpty(bool, object)
0x23d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x23e: Call2 0xf1d

0x23f: Pop(1)
0x240: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x241: PushEmpty(bool, object)
0x242: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x243: Call2 0xf27

0x244: Pop(1)
0x245: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x246: Stack[-1] = (bool) 1
0x247: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x248: PushEmpty(bool, object)
0x249: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x24a: Call2 0xf45

0x24b: Pop(1)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: Stack[-1] = (bool) 1
0x24e: IF (Stack[-1] == 0) GOTO 0x254; Pop(1)

0x24f: Push((int) 539861)
0x250: Push((int) 41814)
0x251: Push((int) 41813)
0x252: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x253: Pop(3)
0x254: PushEmpty(bool)
0x255: Stack[-1] = (bool) 0
0x256: PushEmpty(bool)
0x257: Stack[-1] = (bool) 0
0x258: PushEmpty(bool, object)
0x259: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25a: Call2 0xf1d

0x25b: Pop(1)
0x25c: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x25d: PushEmpty(bool, object)
0x25e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x25f: Call2 0xf31

0x260: Pop(1)
0x261: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x262: Stack[-1] = (bool) 1
0x263: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x264: PushEmpty(bool, object)
0x265: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x266: Call2 0xf51

0x267: Pop(1)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: Stack[-1] = (bool) 1
0x26a: IF (Stack[-1] == 0) GOTO 0x270; Pop(1)

0x26b: Push((int) 539864)
0x26c: Push((int) 41817)
0x26d: Push((int) 41816)
0x26e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26f: Pop(3)
0x270: PushEmpty(bool)
0x271: Stack[-1] = (bool) 0
0x272: PushEmpty(bool)
0x273: Stack[-1] = (bool) 0
0x274: PushEmpty(bool, object)
0x275: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x276: Call2 0xf1d

0x277: Pop(1)
0x278: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x279: PushEmpty(bool, object)
0x27a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x27b: Call2 0xf3b

0x27c: Pop(1)
0x27d: IF (Stack[-1] == 0) GOTO 0x27f; Pop(1)

0x27e: Stack[-1] = (bool) 1
0x27f: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x280: PushEmpty(bool, object)
0x281: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x282: Call2 0xf5d

0x283: Pop(1)
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: Stack[-1] = (bool) 1
0x286: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x287: Push((int) 539867)
0x288: Push((int) 41820)
0x289: Push((int) 41819)
0x28a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x28b: Pop(3)
0x28c: Push((int) 527196)
0x28d: Push((int) -1)
0x28e: Push((int) 28504)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: GOTO 0x294

0x292: Return(); Pop(0)

0x293: GOTO 0x206

0x294: PushEmpty(bool)
0x295: Call2 0xe25

0x296: Pop(0)
0x297: IF (Stack[-1] == 0) GOTO 0x2a3; Pop(1)

0x298: @ lshWaitForAnimEnd()
0x299: Pop(0)
0x29a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x29b: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29c: GOTO 0x2a2

0x29d: PushEmpty(string)
0x29e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x29f: Call2 0xd21

0x2a0: Pop(1)
0x2a1: GOTO 0x298

0x2a2: GOTO 0x2b1

0x2a3: Push("all")
0x2a4: Push("idle")
0x2a5: @ PlayAnimation(Stack[-2], Stack[-1])
0x2a6: Pop(2)
0x2a7: @ WaitForAnimEnd()
0x2a8: Pop(0)
0x2a9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2aa: IF (Stack[-1] == 0) GOTO 0x2ac; Pop(1)

0x2ab: GOTO 0x2b1

0x2ac: Push("all")
0x2ad: Push("idle")
0x2ae: @ PlayAnimation(Stack[-2], Stack[-1])
0x2af: Pop(2)
0x2b0: GOTO 0x2a7

0x2b1: Return(); Pop(0)

0x2b2: PushEmpty()
0x2b3: PushEmpty(bool)
0x2b4: Call2 0xe25

0x2b5: Pop(0)
0x2b6: Pop(1); Push((bool) Stack[-1] == 0)
0x2b7: IF (Stack[-1] == 0) GOTO 0x2b9; Pop(1)

0x2b8: Return(); Pop(0)

0x2b9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2bc; Pop(1)

0x2bb: Return(); Pop(0)

0x2bc: PushEmpty(string, bool)
0x2bd: Stack[-2] = Stack[-3]
0x2be: Push("")
0x2bf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2c0: IF (Stack[-1] == 0) GOTO 0x2c3; Pop(1)

0x2c1: Stack[-1] = (bool) 0
0x2c2: GOTO 0x2c4

0x2c3: Stack[-1] = (bool) 1
0x2c4: Call2 0xd31

0x2c5: Pop(2)
0x2c6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2c7: Return(); Pop(0)

0x2c8: PushEmpty()
0x2c9: Push((int) 1)
0x2ca: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x2cb: PushEmpty()
0x2cc: Call2 0xd4f

0x2cd: Pop(0)
0x2ce: Push((int) 28503)
0x2cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d6; Pop(1)

0x2d1: PushEmpty(object, object)
0x2d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2d4: Call2 0xe4f

0x2d5: Pop(2)
0x2d6: Push((int) 28614)
0x2d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d8: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2d9: PushEmpty(object, object)
0x2da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2dc: Call2 0xe4f

0x2dd: Pop(2)
0x2de: Push((int) 28691)
0x2df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e0: IF (Stack[-1] == 0) GOTO 0x2e6; Pop(1)

0x2e1: PushEmpty(object, object)
0x2e2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2e3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2e4: Call2 0xe62

0x2e5: Pop(2)
0x2e6: Push((int) 28692)
0x2e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e8: IF (Stack[-1] == 0) GOTO 0x2ee; Pop(1)

0x2e9: PushEmpty(object, object)
0x2ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ec: Call2 0xe62

0x2ed: Pop(2)
0x2ee: Push((int) 28639)
0x2ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f1: PushEmpty(object, object)
0x2f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2f4: Call2 0xe6f

0x2f5: Pop(2)
0x2f6: Push((int) 41813)
0x2f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2f9: PushEmpty(object, object)
0x2fa: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2fb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2fc: Call2 0xe8e

0x2fd: Pop(2)
0x2fe: Push((int) 41816)
0x2ff: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x300: IF (Stack[-1] == 0) GOTO 0x306; Pop(1)

0x301: PushEmpty(object, object)
0x302: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x303: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x304: Call2 0xe94

0x305: Pop(2)
0x306: Push((int) 41818)
0x307: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x322; Pop(1)

0x309: PushEmpty(object, object)
0x30a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x30b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x30c: Call2 0xe89

0x30d: Pop(2)
0x30e: PushEmpty(object, object)
0x30f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x310: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x311: Call2 0xeac

0x312: Pop(2)
0x313: PushEmpty(object, object)
0x314: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x315: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x316: Call2 0xe83

0x317: Pop(2)
0x318: PushEmpty(object, object)
0x319: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x31b: Call2 0xe27

0x31c: Pop(2)
0x31d: PushEmpty(object, object)
0x31e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x31f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x320: Call2 0xeb6

0x321: Pop(2)
0x322: Push((int) 41819)
0x323: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x324: IF (Stack[-1] == 0) GOTO 0x32a; Pop(1)

0x325: PushEmpty(object, object)
0x326: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x327: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x328: Call2 0xe9a

0x329: Pop(2)
0x32a: Push((int) 28498)
0x32b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x32c: IF (Stack[-1] == 0) GOTO 0x3b7; Pop(1)

0x32d: PushEmpty(string)
0x32e: Stack[-1] = "Neutral"
0x32f: Call2 0x2b2

0x330: Pop(1)
0x331: Push((int) 527190)
0x332: @@ SetMessage(Stack[-1])
0x333: Pop(1)
0x334: @@ ClearReplies()
0x335: Pop(0)
0x336: PushEmpty(bool, object)
0x337: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x338: Call2 0xee3

0x339: Pop(1)
0x33a: IF (Stack[-1] == 0) GOTO 0x340; Pop(1)

0x33b: Push((int) 527191)
0x33c: Push((int) 28604)
0x33d: Push((int) 28499)
0x33e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x33f: Pop(3)
0x340: PushEmpty(bool, object)
0x341: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x342: Call2 0xeef

0x343: Pop(1)
0x344: IF (Stack[-1] == 0) GOTO 0x34a; Pop(1)

0x345: Push((int) 527234)
0x346: Push((int) 28615)
0x347: Push((int) 28542)
0x348: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x349: Pop(3)
0x34a: PushEmpty(bool)
0x34b: Stack[-1] = (bool) 0
0x34c: PushEmpty(bool, object)
0x34d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34e: Call2 0xf07

0x34f: Pop(1)
0x350: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x351: PushEmpty(bool, object)
0x352: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x353: Call2 0xefb

0x354: Pop(1)
0x355: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x356: Stack[-1] = (bool) 1
0x357: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x358: Push((int) 527310)
0x359: Push((int) 28628)
0x35a: Push((int) 28627)
0x35b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35c: Pop(3)
0x35d: PushEmpty(bool)
0x35e: Stack[-1] = (bool) 0
0x35f: PushEmpty(bool)
0x360: Stack[-1] = (bool) 0
0x361: PushEmpty(bool, object)
0x362: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x363: Call2 0xf1d

0x364: Pop(1)
0x365: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x366: PushEmpty(bool, object)
0x367: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x368: Call2 0xf27

0x369: Pop(1)
0x36a: IF (Stack[-1] == 0) GOTO 0x36c; Pop(1)

0x36b: Stack[-1] = (bool) 1
0x36c: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x36d: PushEmpty(bool, object)
0x36e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x36f: Call2 0xf45

0x370: Pop(1)
0x371: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x372: Stack[-1] = (bool) 1
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: Push((int) 539861)
0x375: Push((int) 41814)
0x376: Push((int) 41813)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: PushEmpty(bool)
0x37a: Stack[-1] = (bool) 0
0x37b: PushEmpty(bool)
0x37c: Stack[-1] = (bool) 0
0x37d: PushEmpty(bool, object)
0x37e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x37f: Call2 0xf1d

0x380: Pop(1)
0x381: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x382: PushEmpty(bool, object)
0x383: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x384: Call2 0xf31

0x385: Pop(1)
0x386: IF (Stack[-1] == 0) GOTO 0x388; Pop(1)

0x387: Stack[-1] = (bool) 1
0x388: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x389: PushEmpty(bool, object)
0x38a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x38b: Call2 0xf51

0x38c: Pop(1)
0x38d: IF (Stack[-1] == 0) GOTO 0x38f; Pop(1)

0x38e: Stack[-1] = (bool) 1
0x38f: IF (Stack[-1] == 0) GOTO 0x395; Pop(1)

0x390: Push((int) 539864)
0x391: Push((int) 41817)
0x392: Push((int) 41816)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: PushEmpty(bool)
0x396: Stack[-1] = (bool) 0
0x397: PushEmpty(bool)
0x398: Stack[-1] = (bool) 0
0x399: PushEmpty(bool, object)
0x39a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39b: Call2 0xf1d

0x39c: Pop(1)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39e: PushEmpty(bool, object)
0x39f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a0: Call2 0xf3b

0x3a1: Pop(1)
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: Stack[-1] = (bool) 1
0x3a4: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3a5: PushEmpty(bool, object)
0x3a6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3a7: Call2 0xf5d

0x3a8: Pop(1)
0x3a9: IF (Stack[-1] == 0) GOTO 0x3ab; Pop(1)

0x3aa: Stack[-1] = (bool) 1
0x3ab: IF (Stack[-1] == 0) GOTO 0x3b1; Pop(1)

0x3ac: Push((int) 539867)
0x3ad: Push((int) 41820)
0x3ae: Push((int) 41819)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Push((int) 527196)
0x3b2: Push((int) -1)
0x3b3: Push((int) 28504)
0x3b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b5: Pop(3)
0x3b6: Return(); Pop(0)

0x3b7: Push((int) 41820)
0x3b8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b9: IF (Stack[-1] == 0) GOTO 0x3c9; Pop(1)

0x3ba: PushEmpty(string)
0x3bb: Stack[-1] = "Doubt"
0x3bc: Call2 0x2b2

0x3bd: Pop(1)
0x3be: Push((int) 539868)
0x3bf: @@ SetMessage(Stack[-1])
0x3c0: Pop(1)
0x3c1: @@ ClearReplies()
0x3c2: Pop(0)
0x3c3: Push((int) 539869)
0x3c4: Push((int) -1)
0x3c5: Push((int) 41821)
0x3c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c7: Pop(3)
0x3c8: Return(); Pop(0)

0x3c9: Push((int) 41817)
0x3ca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3cb: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3cc: PushEmpty(string)
0x3cd: Stack[-1] = "Neutral"
0x3ce: Call2 0x2b2

0x3cf: Pop(1)
0x3d0: Push((int) 539865)
0x3d1: @@ SetMessage(Stack[-1])
0x3d2: Pop(1)
0x3d3: @@ ClearReplies()
0x3d4: Pop(0)
0x3d5: Push((int) 539866)
0x3d6: Push((int) -1)
0x3d7: Push((int) 41818)
0x3d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d9: Pop(3)
0x3da: Return(); Pop(0)

0x3db: Push((int) 41814)
0x3dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3de: PushEmpty(string)
0x3df: Stack[-1] = "Agression"
0x3e0: Call2 0x2b2

0x3e1: Pop(1)
0x3e2: Push((int) 539862)
0x3e3: @@ SetMessage(Stack[-1])
0x3e4: Pop(1)
0x3e5: @@ ClearReplies()
0x3e6: Pop(0)
0x3e7: Push((int) 539863)
0x3e8: Push((int) -1)
0x3e9: Push((int) 41815)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Return(); Pop(0)

0x3ed: Push((int) 28628)
0x3ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = "Untrust"
0x3f2: Call2 0x2b2

0x3f3: Pop(1)
0x3f4: Push((int) 527311)
0x3f5: @@ SetMessage(Stack[-1])
0x3f6: Pop(1)
0x3f7: @@ ClearReplies()
0x3f8: Pop(0)
0x3f9: Push((int) 527312)
0x3fa: Push((int) 28632)
0x3fb: Push((int) 28629)
0x3fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(3)
0x3fe: Push((int) 527357)
0x3ff: Push((int) 28632)
0x400: Push((int) 28676)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Push((int) 28632)
0x405: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x407: PushEmpty(string)
0x408: Stack[-1] = "Agression"
0x409: Call2 0x2b2

0x40a: Pop(1)
0x40b: Push((int) 527315)
0x40c: @@ SetMessage(Stack[-1])
0x40d: Pop(1)
0x40e: @@ ClearReplies()
0x40f: Pop(0)
0x410: Push((int) 527316)
0x411: Push((int) 28634)
0x412: Push((int) 28633)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: Push((int) 527358)
0x416: Push((int) 28634)
0x417: Push((int) 28678)
0x418: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(3)
0x41a: Return(); Pop(0)

0x41b: Push((int) 28634)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x432; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Neutral"
0x420: Call2 0x2b2

0x421: Pop(1)
0x422: Push((int) 527317)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 527318)
0x428: Push((int) 28636)
0x429: Push((int) 28635)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Push((int) 527359)
0x42d: Push((int) 28638)
0x42e: Push((int) 28680)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: Return(); Pop(0)

0x432: Push((int) 28636)
0x433: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x434: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x435: PushEmpty(string)
0x436: Stack[-1] = "Neutral"
0x437: Call2 0x2b2

0x438: Pop(1)
0x439: Push((int) 527319)
0x43a: @@ SetMessage(Stack[-1])
0x43b: Pop(1)
0x43c: @@ ClearReplies()
0x43d: Pop(0)
0x43e: Push((int) 527320)
0x43f: Push((int) 28638)
0x440: Push((int) 28637)
0x441: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x442: Pop(3)
0x443: Return(); Pop(0)

0x444: Push((int) 28638)
0x445: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x456; Pop(1)

0x447: PushEmpty(string)
0x448: Stack[-1] = "Neutral"
0x449: Call2 0x2b2

0x44a: Pop(1)
0x44b: Push((int) 527321)
0x44c: @@ SetMessage(Stack[-1])
0x44d: Pop(1)
0x44e: @@ ClearReplies()
0x44f: Pop(0)
0x450: Push((int) 527322)
0x451: Push((int) -1)
0x452: Push((int) 28639)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: Return(); Pop(0)

0x456: Push((int) 28615)
0x457: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x468; Pop(1)

0x459: PushEmpty(string)
0x45a: Stack[-1] = "Agression"
0x45b: Call2 0x2b2

0x45c: Pop(1)
0x45d: Push((int) 527299)
0x45e: @@ SetMessage(Stack[-1])
0x45f: Pop(1)
0x460: @@ ClearReplies()
0x461: Pop(0)
0x462: Push((int) 527300)
0x463: Push((int) 28617)
0x464: Push((int) 28616)
0x465: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x466: Pop(3)
0x467: Return(); Pop(0)

0x468: Push((int) 28617)
0x469: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x46a: IF (Stack[-1] == 0) GOTO 0x47a; Pop(1)

0x46b: PushEmpty(string)
0x46c: Stack[-1] = "Neutral"
0x46d: Call2 0x2b2

0x46e: Pop(1)
0x46f: Push((int) 527301)
0x470: @@ SetMessage(Stack[-1])
0x471: Pop(1)
0x472: @@ ClearReplies()
0x473: Pop(0)
0x474: Push((int) 527302)
0x475: Push((int) 28619)
0x476: Push((int) 28618)
0x477: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x478: Pop(3)
0x479: Return(); Pop(0)

0x47a: Push((int) 28619)
0x47b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47c: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x47d: PushEmpty(string)
0x47e: Stack[-1] = "Untrust"
0x47f: Call2 0x2b2

0x480: Pop(1)
0x481: Push((int) 527303)
0x482: @@ SetMessage(Stack[-1])
0x483: Pop(1)
0x484: @@ ClearReplies()
0x485: Pop(0)
0x486: Push((int) 527304)
0x487: Push((int) 28543)
0x488: Push((int) 28620)
0x489: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48a: Pop(3)
0x48b: Return(); Pop(0)

0x48c: Push((int) 28543)
0x48d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x48e: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x48f: PushEmpty(string)
0x490: Stack[-1] = "Doubt"
0x491: Call2 0x2b2

0x492: Pop(1)
0x493: Push((int) 527235)
0x494: @@ SetMessage(Stack[-1])
0x495: Pop(1)
0x496: @@ ClearReplies()
0x497: Pop(0)
0x498: Push((int) 527236)
0x499: Push((int) 28621)
0x49a: Push((int) 28544)
0x49b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49c: Pop(3)
0x49d: Return(); Pop(0)

0x49e: Push((int) 28621)
0x49f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4b0; Pop(1)

0x4a1: PushEmpty(string)
0x4a2: Stack[-1] = "Neutral"
0x4a3: Call2 0x2b2

0x4a4: Pop(1)
0x4a5: Push((int) 527305)
0x4a6: @@ SetMessage(Stack[-1])
0x4a7: Pop(1)
0x4a8: @@ ClearReplies()
0x4a9: Pop(0)
0x4aa: Push((int) 527306)
0x4ab: Push((int) 28623)
0x4ac: Push((int) 28622)
0x4ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: Return(); Pop(0)

0x4b0: Push((int) 28623)
0x4b1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4b3: PushEmpty(string)
0x4b4: Stack[-1] = "Doubt"
0x4b5: Call2 0x2b2

0x4b6: Pop(1)
0x4b7: Push((int) 527307)
0x4b8: @@ SetMessage(Stack[-1])
0x4b9: Pop(1)
0x4ba: @@ ClearReplies()
0x4bb: Pop(0)
0x4bc: Push((int) 527308)
0x4bd: Push((int) 28545)
0x4be: Push((int) 28624)
0x4bf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c0: Pop(3)
0x4c1: Push((int) 527309)
0x4c2: Push((int) 28545)
0x4c3: Push((int) 28625)
0x4c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c5: Pop(3)
0x4c6: Return(); Pop(0)

0x4c7: Push((int) 28545)
0x4c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4ca: PushEmpty(string)
0x4cb: Stack[-1] = "Neutral"
0x4cc: Call2 0x2b2

0x4cd: Pop(1)
0x4ce: Push((int) 527237)
0x4cf: @@ SetMessage(Stack[-1])
0x4d0: Pop(1)
0x4d1: @@ ClearReplies()
0x4d2: Pop(0)
0x4d3: Push((int) 527360)
0x4d4: Push((int) 28683)
0x4d5: Push((int) 28682)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Push((int) 527238)
0x4d9: Push((int) 28630)
0x4da: Push((int) 28546)
0x4db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(3)
0x4dd: Return(); Pop(0)

0x4de: Push((int) 28630)
0x4df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Doubt"
0x4e3: Call2 0x2b2

0x4e4: Pop(1)
0x4e5: Push((int) 527313)
0x4e6: @@ SetMessage(Stack[-1])
0x4e7: Pop(1)
0x4e8: @@ ClearReplies()
0x4e9: Pop(0)
0x4ea: Push((int) 527314)
0x4eb: Push((int) 28685)
0x4ec: Push((int) 28631)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Return(); Pop(0)

0x4f0: Push((int) 28683)
0x4f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4f3: PushEmpty(string)
0x4f4: Stack[-1] = "Untrust"
0x4f5: Call2 0x2b2

0x4f6: Pop(1)
0x4f7: Push((int) 527361)
0x4f8: @@ SetMessage(Stack[-1])
0x4f9: Pop(1)
0x4fa: @@ ClearReplies()
0x4fb: Pop(0)
0x4fc: Push((int) 527362)
0x4fd: Push((int) 28685)
0x4fe: Push((int) 28684)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Return(); Pop(0)

0x502: Push((int) 28685)
0x503: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x505: PushEmpty(string)
0x506: Stack[-1] = "Untrust"
0x507: Call2 0x2b2

0x508: Pop(1)
0x509: Push((int) 527363)
0x50a: @@ SetMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ ClearReplies()
0x50d: Pop(0)
0x50e: Push((int) 527364)
0x50f: Push((int) 28687)
0x510: Push((int) 28686)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Return(); Pop(0)

0x514: Push((int) 28687)
0x515: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x517: PushEmpty(string)
0x518: Stack[-1] = "Untrust"
0x519: Call2 0x2b2

0x51a: Pop(1)
0x51b: Push((int) 527365)
0x51c: @@ SetMessage(Stack[-1])
0x51d: Pop(1)
0x51e: @@ ClearReplies()
0x51f: Pop(0)
0x520: Push((int) 527366)
0x521: Push((int) 28689)
0x522: Push((int) 28688)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: Return(); Pop(0)

0x526: Push((int) 28689)
0x527: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x528: IF (Stack[-1] == 0) GOTO 0x53d; Pop(1)

0x529: PushEmpty(string)
0x52a: Stack[-1] = "Untrust"
0x52b: Call2 0x2b2

0x52c: Pop(1)
0x52d: Push((int) 527367)
0x52e: @@ SetMessage(Stack[-1])
0x52f: Pop(1)
0x530: @@ ClearReplies()
0x531: Pop(0)
0x532: Push((int) 527368)
0x533: Push((int) -1)
0x534: Push((int) 28691)
0x535: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x536: Pop(3)
0x537: Push((int) 527369)
0x538: Push((int) -1)
0x539: Push((int) 28692)
0x53a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53b: Pop(3)
0x53c: Return(); Pop(0)

0x53d: Push((int) 28604)
0x53e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x53f: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x540: PushEmpty(string)
0x541: Stack[-1] = "Doubt"
0x542: Call2 0x2b2

0x543: Pop(1)
0x544: Push((int) 527290)
0x545: @@ SetMessage(Stack[-1])
0x546: Pop(1)
0x547: @@ ClearReplies()
0x548: Pop(0)
0x549: Push((int) 527291)
0x54a: Push((int) 28500)
0x54b: Push((int) 28605)
0x54c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x54d: Pop(3)
0x54e: Push((int) 527296)
0x54f: Push((int) 28609)
0x550: Push((int) 28610)
0x551: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x552: Pop(3)
0x553: Return(); Pop(0)

0x554: Push((int) 28500)
0x555: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x556: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x557: PushEmpty(string)
0x558: Stack[-1] = "Doubt"
0x559: Call2 0x2b2

0x55a: Pop(1)
0x55b: Push((int) 527192)
0x55c: @@ SetMessage(Stack[-1])
0x55d: Pop(1)
0x55e: @@ ClearReplies()
0x55f: Pop(0)
0x560: Push((int) 527294)
0x561: Push((int) 28609)
0x562: Push((int) 28608)
0x563: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x564: Pop(3)
0x565: Push((int) 527297)
0x566: Push((int) 28609)
0x567: Push((int) 28612)
0x568: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x569: Pop(3)
0x56a: Return(); Pop(0)

0x56b: Push((int) 28609)
0x56c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x56e: PushEmpty(string)
0x56f: Stack[-1] = "Agression"
0x570: Call2 0x2b2

0x571: Pop(1)
0x572: Push((int) 527295)
0x573: @@ SetMessage(Stack[-1])
0x574: Pop(1)
0x575: @@ ClearReplies()
0x576: Pop(0)
0x577: Push((int) 527292)
0x578: Push((int) 28607)
0x579: Push((int) 28606)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Push((int) 527298)
0x57d: Push((int) -1)
0x57e: Push((int) 28614)
0x57f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x580: Pop(3)
0x581: Return(); Pop(0)

0x582: Push((int) 28607)
0x583: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x584: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x585: PushEmpty(string)
0x586: Stack[-1] = "Agression"
0x587: Call2 0x2b2

0x588: Pop(1)
0x589: Push((int) 527293)
0x58a: @@ SetMessage(Stack[-1])
0x58b: Pop(1)
0x58c: @@ ClearReplies()
0x58d: Pop(0)
0x58e: Push((int) 527193)
0x58f: Push((int) 28502)
0x590: Push((int) 28501)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Return(); Pop(0)

0x594: Push((int) 28502)
0x595: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Neutral"
0x599: Call2 0x2b2

0x59a: Pop(1)
0x59b: Push((int) 527194)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 527195)
0x5a1: Push((int) -1)
0x5a2: Push((int) 28503)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Return(); Pop(0)

0x5a6: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x5a7: PushEmpty(bool)
0x5a8: Call2 0xe25

0x5a9: Pop(0)
0x5aa: IF (Stack[-1] == 0) GOTO 0x5ae; Pop(1)

0x5ab: @ lshStopAnimation()
0x5ac: Pop(0)
0x5ad: GOTO 0x5b0

0x5ae: @ StopAnimation()
0x5af: Pop(0)
0x5b0: Return(); Pop(0)

0x5b1: GOTO 0x2c9

0x5b2: Return(); Pop(0)

0x5b3: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x5b4: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x5b5: PushEmpty(bool, object, float)
0x5b6: Stack[-2] = Stack[-12]
0x5b7: Stack[-1] = (float) 70.0
0x5b8: Call2 0xc40

0x5b9: Pop(2)
0x5ba: Pop(1); Push((bool) Stack[-1] == 0)
0x5bb: IF (Stack[-1] == 0) GOTO 0x5be; Pop(1)

0x5bc: Stack[-10] = (int) -2
0x5bd: Return(); Pop(8)

0x5be: @ CreateDialog(Stack[-4])
0x5bf: Pop(0)
0x5c0: PushEmpty(int)
0x5c1: Call2 0xe1f

0x5c2: Pop(0)
0x5c3: @@ SetNPCName(Stack[-1])
0x5c4: Pop(1)
0x5c5: PushEmpty(int)
0x5c6: Call2 0xe1d

0x5c7: Pop(0)
0x5c8: @@ SetNPCDescription(Stack[-1])
0x5c9: Pop(1)
0x5ca: PushEmpty(string)
0x5cb: Call2 0xe21

0x5cc: Pop(0)
0x5cd: @@ SetPhoto(Stack[-1])
0x5ce: Pop(1)
0x5cf: PushEmpty(string)
0x5d0: Call2 0xe23

0x5d1: Pop(0)
0x5d2: @@ SetPhoto2(Stack[-1])
0x5d3: Pop(1)
0x5d4: PushEmpty(int)
0x5d5: Call2 0x102f

0x5d6: Pop(0)
0x5d7: @@ SetPlayerName(Stack[-1])
0x5d8: Pop(1)
0x5d9: Stack[-2] = (int) -1
0x5da: @ IsOverrideActive(Stack[-3])
0x5db: Pop(0)
0x5dc: Push(Stack[-3])
0x5dd: IF (Stack[-1] == 0) GOTO 0x5e0; Pop(1)

0x5de: Stack[-10] = (int) -2
0x5df: Return(); Pop(8)

0x5e0: @ DoDialog(Stack[-4])
0x5e1: Pop(0)
0x5e2: PushEmpty(bool, object)
0x5e3: PushEmpty(object)
0x5e4: Call2 0xd56

0x5e5: Stack[-2] = Stack[-1]
0x5e6: Pop(1)
0x5e7: Call2 0xc97

0x5e8: Pop(2)
0x5e9: PushEmpty(object, object)
0x5ea: Stack[-2] = Stack[-11]
0x5eb: Stack[-1] = Stack[-6]
0x5ec: Push(-2, 4); TaskCall(5)
0x5ed: Call2 0x604

0x5ee: Pop(-2, 4); TaskReturn
0x5ef: Pop(2)
0x5f0: @@ IsDialogEnd(Stack[-1])
0x5f1: Pop(0)
0x5f2: Pop(0); Push((bool) Stack[-1] == 0)
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f9; Pop(1)

0x5f4: @ sync()
0x5f5: Pop(0)
0x5f6: @@ IsDialogEnd(Stack[-1])
0x5f7: Pop(0)
0x5f8: GOTO 0x5f2

0x5f9: PushEmpty(object)
0x5fa: Stack[-1] = Stack[-10]
0x5fb: Call2 0xc85

0x5fc: Pop(1)
0x5fd: @ StopDialog(Stack[-4])
0x5fe: Pop(0)
0x5ff: @@ GetReturnValue(Stack[-2])
0x600: Pop(0)
0x601: Stack[-10] = Stack[-2]
0x602: Return(); Pop(8)

0x603: Stack[-4] = 0
0x604: PushEmpty()
0x605: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x606: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x607: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x608: Push((int) 1)
0x609: IF (Stack[-1] == 0) GOTO 0x620; Pop(1)

0x60a: PushEmpty(string)
0x60b: Stack[-1] = "Neutral"
0x60c: Call2 0x63e

0x60d: Pop(1)
0x60e: Push((int) 528095)
0x60f: @@ SetMessage(Stack[-1])
0x610: Pop(1)
0x611: @@ ClearReplies()
0x612: Pop(0)
0x613: Push((int) 528096)
0x614: Push((int) 29441)
0x615: Push((int) 29440)
0x616: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x617: Pop(3)
0x618: Push((int) 528105)
0x619: Push((int) 29450)
0x61a: Push((int) 29449)
0x61b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61c: Pop(3)
0x61d: GOTO 0x620

0x61e: Return(); Pop(0)

0x61f: GOTO 0x608

0x620: PushEmpty(bool)
0x621: Call2 0xe25

0x622: Pop(0)
0x623: IF (Stack[-1] == 0) GOTO 0x62f; Pop(1)

0x624: @ lshWaitForAnimEnd()
0x625: Pop(0)
0x626: Push( Stack[3 + Tasks[-1].StackPointer] )
0x627: IF (Stack[-1] == 0) GOTO 0x629; Pop(1)

0x628: GOTO 0x62e

0x629: PushEmpty(string)
0x62a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x62b: Call2 0xd21

0x62c: Pop(1)
0x62d: GOTO 0x624

0x62e: GOTO 0x63d

0x62f: Push("all")
0x630: Push("idle")
0x631: @ PlayAnimation(Stack[-2], Stack[-1])
0x632: Pop(2)
0x633: @ WaitForAnimEnd()
0x634: Pop(0)
0x635: Push( Stack[3 + Tasks[-1].StackPointer] )
0x636: IF (Stack[-1] == 0) GOTO 0x638; Pop(1)

0x637: GOTO 0x63d

0x638: Push("all")
0x639: Push("idle")
0x63a: @ PlayAnimation(Stack[-2], Stack[-1])
0x63b: Pop(2)
0x63c: GOTO 0x633

0x63d: Return(); Pop(0)

0x63e: PushEmpty()
0x63f: PushEmpty(bool)
0x640: Call2 0xe25

0x641: Pop(0)
0x642: Pop(1); Push((bool) Stack[-1] == 0)
0x643: IF (Stack[-1] == 0) GOTO 0x645; Pop(1)

0x644: Return(); Pop(0)

0x645: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x646: IF (Stack[-1] == 0) GOTO 0x648; Pop(1)

0x647: Return(); Pop(0)

0x648: PushEmpty(string, bool)
0x649: Stack[-2] = Stack[-3]
0x64a: Push("")
0x64b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x64c: IF (Stack[-1] == 0) GOTO 0x64f; Pop(1)

0x64d: Stack[-1] = (bool) 0
0x64e: GOTO 0x650

0x64f: Stack[-1] = (bool) 1
0x650: Call2 0xd31

0x651: Pop(2)
0x652: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x653: Return(); Pop(0)

0x654: PushEmpty()
0x655: Push((int) 1)
0x656: IF (Stack[-1] == 0) GOTO 0x6b8; Pop(1)

0x657: PushEmpty()
0x658: Call2 0xd4f

0x659: Pop(0)
0x65a: Push((int) 29439)
0x65b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x65c: IF (Stack[-1] == 0) GOTO 0x671; Pop(1)

0x65d: PushEmpty(string)
0x65e: Stack[-1] = "Neutral"
0x65f: Call2 0x63e

0x660: Pop(1)
0x661: Push((int) 528095)
0x662: @@ SetMessage(Stack[-1])
0x663: Pop(1)
0x664: @@ ClearReplies()
0x665: Pop(0)
0x666: Push((int) 528096)
0x667: Push((int) 29441)
0x668: Push((int) 29440)
0x669: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66a: Pop(3)
0x66b: Push((int) 528105)
0x66c: Push((int) 29450)
0x66d: Push((int) 29449)
0x66e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x66f: Pop(3)
0x670: Return(); Pop(0)

0x671: Push((int) 29450)
0x672: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x673: IF (Stack[-1] == 0) GOTO 0x683; Pop(1)

0x674: PushEmpty(string)
0x675: Stack[-1] = "Neutral"
0x676: Call2 0x63e

0x677: Pop(1)
0x678: Push((int) 528106)
0x679: @@ SetMessage(Stack[-1])
0x67a: Pop(1)
0x67b: @@ ClearReplies()
0x67c: Pop(0)
0x67d: Push((int) 528107)
0x67e: Push((int) 29441)
0x67f: Push((int) 29451)
0x680: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x681: Pop(3)
0x682: Return(); Pop(0)

0x683: Push((int) 29441)
0x684: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x685: IF (Stack[-1] == 0) GOTO 0x69a; Pop(1)

0x686: PushEmpty(string)
0x687: Stack[-1] = "Neutral"
0x688: Call2 0x63e

0x689: Pop(1)
0x68a: Push((int) 528097)
0x68b: @@ SetMessage(Stack[-1])
0x68c: Pop(1)
0x68d: @@ ClearReplies()
0x68e: Pop(0)
0x68f: Push((int) 528098)
0x690: Push((int) 29443)
0x691: Push((int) 29442)
0x692: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x693: Pop(3)
0x694: Push((int) 528108)
0x695: Push((int) -1)
0x696: Push((int) 29453)
0x697: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x698: Pop(3)
0x699: Return(); Pop(0)

0x69a: Push((int) 29443)
0x69b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x69c: IF (Stack[-1] == 0) GOTO 0x6ac; Pop(1)

0x69d: PushEmpty(string)
0x69e: Stack[-1] = "Neutral"
0x69f: Call2 0x63e

0x6a0: Pop(1)
0x6a1: Push((int) 528099)
0x6a2: @@ SetMessage(Stack[-1])
0x6a3: Pop(1)
0x6a4: @@ ClearReplies()
0x6a5: Pop(0)
0x6a6: Push((int) 528100)
0x6a7: Push((int) -1)
0x6a8: Push((int) 29444)
0x6a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6aa: Pop(3)
0x6ab: Return(); Pop(0)

0x6ac: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x6ad: PushEmpty(bool)
0x6ae: Call2 0xe25

0x6af: Pop(0)
0x6b0: IF (Stack[-1] == 0) GOTO 0x6b4; Pop(1)

0x6b1: @ lshStopAnimation()
0x6b2: Pop(0)
0x6b3: GOTO 0x6b6

0x6b4: @ StopAnimation()
0x6b5: Pop(0)
0x6b6: Return(); Pop(0)

0x6b7: GOTO 0x655

0x6b8: Return(); Pop(0)

0x6b9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x6ba: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x6bb: PushEmpty(bool, object, float)
0x6bc: Stack[-2] = Stack[-12]
0x6bd: Stack[-1] = (float) 70.0
0x6be: Call2 0xc40

0x6bf: Pop(2)
0x6c0: Pop(1); Push((bool) Stack[-1] == 0)
0x6c1: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c2: Stack[-10] = (int) -2
0x6c3: Return(); Pop(8)

0x6c4: @ CreateDialog(Stack[-4])
0x6c5: Pop(0)
0x6c6: PushEmpty(int)
0x6c7: Call2 0xe1f

0x6c8: Pop(0)
0x6c9: @@ SetNPCName(Stack[-1])
0x6ca: Pop(1)
0x6cb: PushEmpty(int)
0x6cc: Call2 0xe1d

0x6cd: Pop(0)
0x6ce: @@ SetNPCDescription(Stack[-1])
0x6cf: Pop(1)
0x6d0: PushEmpty(string)
0x6d1: Call2 0xe21

0x6d2: Pop(0)
0x6d3: @@ SetPhoto(Stack[-1])
0x6d4: Pop(1)
0x6d5: PushEmpty(string)
0x6d6: Call2 0xe23

0x6d7: Pop(0)
0x6d8: @@ SetPhoto2(Stack[-1])
0x6d9: Pop(1)
0x6da: PushEmpty(int)
0x6db: Call2 0x102f

0x6dc: Pop(0)
0x6dd: @@ SetPlayerName(Stack[-1])
0x6de: Pop(1)
0x6df: Stack[-2] = (int) -1
0x6e0: @ IsOverrideActive(Stack[-3])
0x6e1: Pop(0)
0x6e2: Push(Stack[-3])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e6; Pop(1)

0x6e4: Stack[-10] = (int) -2
0x6e5: Return(); Pop(8)

0x6e6: @ DoDialog(Stack[-4])
0x6e7: Pop(0)
0x6e8: PushEmpty(bool, object)
0x6e9: PushEmpty(object)
0x6ea: Call2 0xd56

0x6eb: Stack[-2] = Stack[-1]
0x6ec: Pop(1)
0x6ed: Call2 0xc97

0x6ee: Pop(2)
0x6ef: PushEmpty(object, object)
0x6f0: Stack[-2] = Stack[-11]
0x6f1: Stack[-1] = Stack[-6]
0x6f2: Push(-2, 4); TaskCall(7)
0x6f3: Call2 0x70a

0x6f4: Pop(-2, 4); TaskReturn
0x6f5: Pop(2)
0x6f6: @@ IsDialogEnd(Stack[-1])
0x6f7: Pop(0)
0x6f8: Pop(0); Push((bool) Stack[-1] == 0)
0x6f9: IF (Stack[-1] == 0) GOTO 0x6ff; Pop(1)

0x6fa: @ sync()
0x6fb: Pop(0)
0x6fc: @@ IsDialogEnd(Stack[-1])
0x6fd: Pop(0)
0x6fe: GOTO 0x6f8

0x6ff: PushEmpty(object)
0x700: Stack[-1] = Stack[-10]
0x701: Call2 0xc85

0x702: Pop(1)
0x703: @ StopDialog(Stack[-4])
0x704: Pop(0)
0x705: @@ GetReturnValue(Stack[-2])
0x706: Pop(0)
0x707: Stack[-10] = Stack[-2]
0x708: Return(); Pop(8)

0x709: Stack[-4] = 0
0x70a: PushEmpty()
0x70b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x70c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x70d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x70e: Push((int) 1)
0x70f: IF (Stack[-1] == 0) GOTO 0x744; Pop(1)

0x710: PushEmpty(bool, object)
0x711: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x712: Call2 0xf11

0x713: Pop(1)
0x714: IF (Stack[-1] == 0) GOTO 0x729; Pop(1)

0x715: PushEmpty(string)
0x716: Stack[-1] = "Doubt"
0x717: Call2 0x762

0x718: Pop(1)
0x719: Push((int) 529720)
0x71a: @@ SetMessage(Stack[-1])
0x71b: Pop(1)
0x71c: @@ ClearReplies()
0x71d: Pop(0)
0x71e: Push((int) 529743)
0x71f: Push((int) 31200)
0x720: Push((int) 31198)
0x721: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x722: Pop(3)
0x723: Push((int) 529744)
0x724: Push((int) 31206)
0x725: Push((int) 31199)
0x726: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x727: Pop(3)
0x728: GOTO 0x744

0x729: PushEmpty(string)
0x72a: Stack[-1] = "Agression"
0x72b: Call2 0x762

0x72c: Pop(1)
0x72d: Push((int) 529758)
0x72e: @@ SetMessage(Stack[-1])
0x72f: Pop(1)
0x730: @@ ClearReplies()
0x731: Pop(0)
0x732: PushEmpty(bool, object)
0x733: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x734: Call2 0xf69

0x735: Pop(1)
0x736: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x737: Push((int) 529756)
0x738: Push((int) 31213)
0x739: Push((int) 31212)
0x73a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73b: Pop(3)
0x73c: Push((int) 529759)
0x73d: Push((int) -1)
0x73e: Push((int) 31215)
0x73f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x740: Pop(3)
0x741: GOTO 0x744

0x742: Return(); Pop(0)

0x743: GOTO 0x70e

0x744: PushEmpty(bool)
0x745: Call2 0xe25

0x746: Pop(0)
0x747: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x748: @ lshWaitForAnimEnd()
0x749: Pop(0)
0x74a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74b: IF (Stack[-1] == 0) GOTO 0x74d; Pop(1)

0x74c: GOTO 0x752

0x74d: PushEmpty(string)
0x74e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x74f: Call2 0xd21

0x750: Pop(1)
0x751: GOTO 0x748

0x752: GOTO 0x761

0x753: Push("all")
0x754: Push("idle")
0x755: @ PlayAnimation(Stack[-2], Stack[-1])
0x756: Pop(2)
0x757: @ WaitForAnimEnd()
0x758: Pop(0)
0x759: Push( Stack[3 + Tasks[-1].StackPointer] )
0x75a: IF (Stack[-1] == 0) GOTO 0x75c; Pop(1)

0x75b: GOTO 0x761

0x75c: Push("all")
0x75d: Push("idle")
0x75e: @ PlayAnimation(Stack[-2], Stack[-1])
0x75f: Pop(2)
0x760: GOTO 0x757

0x761: Return(); Pop(0)

0x762: PushEmpty()
0x763: PushEmpty(bool)
0x764: Call2 0xe25

0x765: Pop(0)
0x766: Pop(1); Push((bool) Stack[-1] == 0)
0x767: IF (Stack[-1] == 0) GOTO 0x769; Pop(1)

0x768: Return(); Pop(0)

0x769: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x76a: IF (Stack[-1] == 0) GOTO 0x76c; Pop(1)

0x76b: Return(); Pop(0)

0x76c: PushEmpty(string, bool)
0x76d: Stack[-2] = Stack[-3]
0x76e: Push("")
0x76f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x770: IF (Stack[-1] == 0) GOTO 0x773; Pop(1)

0x771: Stack[-1] = (bool) 0
0x772: GOTO 0x774

0x773: Stack[-1] = (bool) 1
0x774: Call2 0xd31

0x775: Pop(2)
0x776: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x777: Return(); Pop(0)

0x778: PushEmpty()
0x779: Push((int) 1)
0x77a: IF (Stack[-1] == 0) GOTO 0x8a7; Pop(1)

0x77b: PushEmpty()
0x77c: Call2 0xd4f

0x77d: Pop(0)
0x77e: Push((int) 31266)
0x77f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x780: IF (Stack[-1] == 0) GOTO 0x786; Pop(1)

0x781: PushEmpty(object, object)
0x782: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x783: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x784: Call2 0xe79

0x785: Pop(2)
0x786: Push((int) 31267)
0x787: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x788: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x789: PushEmpty(object, object)
0x78a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x78b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x78c: Call2 0xe79

0x78d: Pop(2)
0x78e: Push((int) 31212)
0x78f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x796; Pop(1)

0x791: PushEmpty(object, object)
0x792: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x793: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x794: Call2 0xea0

0x795: Pop(2)
0x796: Push((int) 31174)
0x797: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x798: IF (Stack[-1] == 0) GOTO 0x7cb; Pop(1)

0x799: PushEmpty(bool, object)
0x79a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x79b: Call2 0xf11

0x79c: Pop(1)
0x79d: IF (Stack[-1] == 0) GOTO 0x7b2; Pop(1)

0x79e: PushEmpty(string)
0x79f: Stack[-1] = "Doubt"
0x7a0: Call2 0x762

0x7a1: Pop(1)
0x7a2: Push((int) 529720)
0x7a3: @@ SetMessage(Stack[-1])
0x7a4: Pop(1)
0x7a5: @@ ClearReplies()
0x7a6: Pop(0)
0x7a7: Push((int) 529743)
0x7a8: Push((int) 31200)
0x7a9: Push((int) 31198)
0x7aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ab: Pop(3)
0x7ac: Push((int) 529744)
0x7ad: Push((int) 31206)
0x7ae: Push((int) 31199)
0x7af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b0: Pop(3)
0x7b1: Return(); Pop(0)

0x7b2: PushEmpty(string)
0x7b3: Stack[-1] = "Agression"
0x7b4: Call2 0x762

0x7b5: Pop(1)
0x7b6: Push((int) 529758)
0x7b7: @@ SetMessage(Stack[-1])
0x7b8: Pop(1)
0x7b9: @@ ClearReplies()
0x7ba: Pop(0)
0x7bb: PushEmpty(bool, object)
0x7bc: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7bd: Call2 0xf69

0x7be: Pop(1)
0x7bf: IF (Stack[-1] == 0) GOTO 0x7c5; Pop(1)

0x7c0: Push((int) 529756)
0x7c1: Push((int) 31213)
0x7c2: Push((int) 31212)
0x7c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c4: Pop(3)
0x7c5: Push((int) 529759)
0x7c6: Push((int) -1)
0x7c7: Push((int) 31215)
0x7c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c9: Pop(3)
0x7ca: Return(); Pop(0)

0x7cb: Push((int) 31213)
0x7cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cd: IF (Stack[-1] == 0) GOTO 0x7dd; Pop(1)

0x7ce: PushEmpty(string)
0x7cf: Stack[-1] = "Agression"
0x7d0: Call2 0x762

0x7d1: Pop(1)
0x7d2: Push((int) 529757)
0x7d3: @@ SetMessage(Stack[-1])
0x7d4: Pop(1)
0x7d5: @@ ClearReplies()
0x7d6: Pop(0)
0x7d7: Push((int) 529760)
0x7d8: Push((int) 31217)
0x7d9: Push((int) 31216)
0x7da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7db: Pop(3)
0x7dc: Return(); Pop(0)

0x7dd: Push((int) 31217)
0x7de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7df: IF (Stack[-1] == 0) GOTO 0x7ef; Pop(1)

0x7e0: PushEmpty(string)
0x7e1: Stack[-1] = "Neutral"
0x7e2: Call2 0x762

0x7e3: Pop(1)
0x7e4: Push((int) 529761)
0x7e5: @@ SetMessage(Stack[-1])
0x7e6: Pop(1)
0x7e7: @@ ClearReplies()
0x7e8: Pop(0)
0x7e9: Push((int) 529762)
0x7ea: Push((int) 31219)
0x7eb: Push((int) 31218)
0x7ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ed: Pop(3)
0x7ee: Return(); Pop(0)

0x7ef: Push((int) 31219)
0x7f0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f1: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x7f2: PushEmpty(string)
0x7f3: Stack[-1] = "Untrust"
0x7f4: Call2 0x762

0x7f5: Pop(1)
0x7f6: Push((int) 529763)
0x7f7: @@ SetMessage(Stack[-1])
0x7f8: Pop(1)
0x7f9: @@ ClearReplies()
0x7fa: Pop(0)
0x7fb: Push((int) 529764)
0x7fc: Push((int) 31221)
0x7fd: Push((int) 31220)
0x7fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ff: Pop(3)
0x800: Return(); Pop(0)

0x801: Push((int) 31221)
0x802: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x803: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x804: PushEmpty(string)
0x805: Stack[-1] = "Neutral"
0x806: Call2 0x762

0x807: Pop(1)
0x808: Push((int) 529765)
0x809: @@ SetMessage(Stack[-1])
0x80a: Pop(1)
0x80b: @@ ClearReplies()
0x80c: Pop(0)
0x80d: Push((int) 529766)
0x80e: Push((int) -1)
0x80f: Push((int) 31222)
0x810: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x811: Pop(3)
0x812: Push((int) 529767)
0x813: Push((int) -1)
0x814: Push((int) 31223)
0x815: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x816: Pop(3)
0x817: Return(); Pop(0)

0x818: Push((int) 31200)
0x819: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x81a: IF (Stack[-1] == 0) GOTO 0x82a; Pop(1)

0x81b: PushEmpty(string)
0x81c: Stack[-1] = "Neutral"
0x81d: Call2 0x762

0x81e: Pop(1)
0x81f: Push((int) 529745)
0x820: @@ SetMessage(Stack[-1])
0x821: Pop(1)
0x822: @@ ClearReplies()
0x823: Pop(0)
0x824: Push((int) 529749)
0x825: Push((int) 31205)
0x826: Push((int) 31204)
0x827: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x828: Pop(3)
0x829: Return(); Pop(0)

0x82a: Push((int) 31205)
0x82b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x82c: IF (Stack[-1] == 0) GOTO 0x83c; Pop(1)

0x82d: PushEmpty(string)
0x82e: Stack[-1] = "Neutral"
0x82f: Call2 0x762

0x830: Pop(1)
0x831: Push((int) 529750)
0x832: @@ SetMessage(Stack[-1])
0x833: Pop(1)
0x834: @@ ClearReplies()
0x835: Pop(0)
0x836: Push((int) 529746)
0x837: Push((int) 31202)
0x838: Push((int) 31201)
0x839: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83a: Pop(3)
0x83b: Return(); Pop(0)

0x83c: Push((int) 31202)
0x83d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x83e: IF (Stack[-1] == 0) GOTO 0x84e; Pop(1)

0x83f: PushEmpty(string)
0x840: Stack[-1] = "Neutral"
0x841: Call2 0x762

0x842: Pop(1)
0x843: Push((int) 529747)
0x844: @@ SetMessage(Stack[-1])
0x845: Pop(1)
0x846: @@ ClearReplies()
0x847: Pop(0)
0x848: Push((int) 529748)
0x849: Push((int) 31206)
0x84a: Push((int) 31203)
0x84b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x84c: Pop(3)
0x84d: Return(); Pop(0)

0x84e: Push((int) 31206)
0x84f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x850: IF (Stack[-1] == 0) GOTO 0x860; Pop(1)

0x851: PushEmpty(string)
0x852: Stack[-1] = "Doubt"
0x853: Call2 0x762

0x854: Pop(1)
0x855: Push((int) 529751)
0x856: @@ SetMessage(Stack[-1])
0x857: Pop(1)
0x858: @@ ClearReplies()
0x859: Pop(0)
0x85a: Push((int) 529752)
0x85b: Push((int) 31209)
0x85c: Push((int) 31208)
0x85d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85e: Pop(3)
0x85f: Return(); Pop(0)

0x860: Push((int) 31209)
0x861: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x862: IF (Stack[-1] == 0) GOTO 0x872; Pop(1)

0x863: PushEmpty(string)
0x864: Stack[-1] = "Doubt"
0x865: Call2 0x762

0x866: Pop(1)
0x867: Push((int) 529753)
0x868: @@ SetMessage(Stack[-1])
0x869: Pop(1)
0x86a: @@ ClearReplies()
0x86b: Pop(0)
0x86c: Push((int) 541110)
0x86d: Push((int) 43225)
0x86e: Push((int) 43224)
0x86f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: Return(); Pop(0)

0x872: Push((int) 43225)
0x873: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x874: IF (Stack[-1] == 0) GOTO 0x884; Pop(1)

0x875: PushEmpty(string)
0x876: Stack[-1] = "Doubt"
0x877: Call2 0x762

0x878: Pop(1)
0x879: Push((int) 541111)
0x87a: @@ SetMessage(Stack[-1])
0x87b: Pop(1)
0x87c: @@ ClearReplies()
0x87d: Pop(0)
0x87e: Push((int) 529754)
0x87f: Push((int) 31211)
0x880: Push((int) 31210)
0x881: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: Return(); Pop(0)

0x884: Push((int) 31211)
0x885: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x886: IF (Stack[-1] == 0) GOTO 0x89b; Pop(1)

0x887: PushEmpty(string)
0x888: Stack[-1] = "Neutral"
0x889: Call2 0x762

0x88a: Pop(1)
0x88b: Push((int) 529755)
0x88c: @@ SetMessage(Stack[-1])
0x88d: Pop(1)
0x88e: @@ ClearReplies()
0x88f: Pop(0)
0x890: Push((int) 529807)
0x891: Push((int) -1)
0x892: Push((int) 31266)
0x893: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x894: Pop(3)
0x895: Push((int) 529808)
0x896: Push((int) -1)
0x897: Push((int) 31267)
0x898: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x899: Pop(3)
0x89a: Return(); Pop(0)

0x89b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x89c: PushEmpty(bool)
0x89d: Call2 0xe25

0x89e: Pop(0)
0x89f: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a0: @ lshStopAnimation()
0x8a1: Pop(0)
0x8a2: GOTO 0x8a5

0x8a3: @ StopAnimation()
0x8a4: Pop(0)
0x8a5: Return(); Pop(0)

0x8a6: GOTO 0x779

0x8a7: Return(); Pop(0)

0x8a8: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x8a9: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x8aa: PushEmpty(bool, object, float)
0x8ab: Stack[-2] = Stack[-12]
0x8ac: Stack[-1] = (float) 70.0
0x8ad: Call2 0xc40

0x8ae: Pop(2)
0x8af: Pop(1); Push((bool) Stack[-1] == 0)
0x8b0: IF (Stack[-1] == 0) GOTO 0x8b3; Pop(1)

0x8b1: Stack[-10] = (int) -2
0x8b2: Return(); Pop(8)

0x8b3: @ CreateDialog(Stack[-4])
0x8b4: Pop(0)
0x8b5: PushEmpty(int)
0x8b6: Call2 0xe1f

0x8b7: Pop(0)
0x8b8: @@ SetNPCName(Stack[-1])
0x8b9: Pop(1)
0x8ba: PushEmpty(int)
0x8bb: Call2 0xe1d

0x8bc: Pop(0)
0x8bd: @@ SetNPCDescription(Stack[-1])
0x8be: Pop(1)
0x8bf: PushEmpty(string)
0x8c0: Call2 0xe21

0x8c1: Pop(0)
0x8c2: @@ SetPhoto(Stack[-1])
0x8c3: Pop(1)
0x8c4: PushEmpty(string)
0x8c5: Call2 0xe23

0x8c6: Pop(0)
0x8c7: @@ SetPhoto2(Stack[-1])
0x8c8: Pop(1)
0x8c9: PushEmpty(int)
0x8ca: Call2 0x102f

0x8cb: Pop(0)
0x8cc: @@ SetPlayerName(Stack[-1])
0x8cd: Pop(1)
0x8ce: Stack[-2] = (int) -1
0x8cf: @ IsOverrideActive(Stack[-3])
0x8d0: Pop(0)
0x8d1: Push(Stack[-3])
0x8d2: IF (Stack[-1] == 0) GOTO 0x8d5; Pop(1)

0x8d3: Stack[-10] = (int) -2
0x8d4: Return(); Pop(8)

0x8d5: @ DoDialog(Stack[-4])
0x8d6: Pop(0)
0x8d7: PushEmpty(bool, object)
0x8d8: PushEmpty(object)
0x8d9: Call2 0xd56

0x8da: Stack[-2] = Stack[-1]
0x8db: Pop(1)
0x8dc: Call2 0xc97

0x8dd: Pop(2)
0x8de: PushEmpty(object, object)
0x8df: Stack[-2] = Stack[-11]
0x8e0: Stack[-1] = Stack[-6]
0x8e1: Push(-2, 4); TaskCall(9)
0x8e2: Call2 0x8f9

0x8e3: Pop(-2, 4); TaskReturn
0x8e4: Pop(2)
0x8e5: @@ IsDialogEnd(Stack[-1])
0x8e6: Pop(0)
0x8e7: Pop(0); Push((bool) Stack[-1] == 0)
0x8e8: IF (Stack[-1] == 0) GOTO 0x8ee; Pop(1)

0x8e9: @ sync()
0x8ea: Pop(0)
0x8eb: @@ IsDialogEnd(Stack[-1])
0x8ec: Pop(0)
0x8ed: GOTO 0x8e7

0x8ee: PushEmpty(object)
0x8ef: Stack[-1] = Stack[-10]
0x8f0: Call2 0xc85

0x8f1: Pop(1)
0x8f2: @ StopDialog(Stack[-4])
0x8f3: Pop(0)
0x8f4: @@ GetReturnValue(Stack[-2])
0x8f5: Pop(0)
0x8f6: Stack[-10] = Stack[-2]
0x8f7: Return(); Pop(8)

0x8f8: Stack[-4] = 0
0x8f9: PushEmpty()
0x8fa: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x8fb: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x8fc: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x8fd: Push((int) 1)
0x8fe: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x8ff: PushEmpty(bool, object)
0x900: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x901: Call2 0xec1

0x902: Pop(1)
0x903: Pop(1); Push((bool) Stack[-1] == 0)
0x904: IF (Stack[-1] == 0) GOTO 0x91e; Pop(1)

0x905: PushEmpty(string)
0x906: Stack[-1] = "Neutral"
0x907: Call2 0x952

0x908: Pop(1)
0x909: Push((int) 539248)
0x90a: @@ SetMessage(Stack[-1])
0x90b: Pop(1)
0x90c: @@ ClearReplies()
0x90d: Pop(0)
0x90e: PushEmpty(bool, object)
0x90f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x910: Call2 0xf75

0x911: Pop(1)
0x912: IF (Stack[-1] == 0) GOTO 0x918; Pop(1)

0x913: Push((int) 542928)
0x914: Push((int) 45365)
0x915: Push((int) 45364)
0x916: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x917: Pop(3)
0x918: Push((int) 539249)
0x919: Push((int) -1)
0x91a: Push((int) 41192)
0x91b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91c: Pop(3)
0x91d: GOTO 0x934

0x91e: PushEmpty(string)
0x91f: Stack[-1] = "Neutral"
0x920: Call2 0x952

0x921: Pop(1)
0x922: Push((int) 539250)
0x923: @@ SetMessage(Stack[-1])
0x924: Pop(1)
0x925: @@ ClearReplies()
0x926: Pop(0)
0x927: Push((int) 539251)
0x928: Push((int) -1)
0x929: Push((int) 41194)
0x92a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92b: Pop(3)
0x92c: Push((int) 541515)
0x92d: Push((int) -1)
0x92e: Push((int) 43678)
0x92f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x930: Pop(3)
0x931: GOTO 0x934

0x932: Return(); Pop(0)

0x933: GOTO 0x8fd

0x934: PushEmpty(bool)
0x935: Call2 0xe25

0x936: Pop(0)
0x937: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x938: @ lshWaitForAnimEnd()
0x939: Pop(0)
0x93a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x93b: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x93c: GOTO 0x942

0x93d: PushEmpty(string)
0x93e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x93f: Call2 0xd21

0x940: Pop(1)
0x941: GOTO 0x938

0x942: GOTO 0x951

0x943: Push("all")
0x944: Push("idle")
0x945: @ PlayAnimation(Stack[-2], Stack[-1])
0x946: Pop(2)
0x947: @ WaitForAnimEnd()
0x948: Pop(0)
0x949: Push( Stack[3 + Tasks[-1].StackPointer] )
0x94a: IF (Stack[-1] == 0) GOTO 0x94c; Pop(1)

0x94b: GOTO 0x951

0x94c: Push("all")
0x94d: Push("idle")
0x94e: @ PlayAnimation(Stack[-2], Stack[-1])
0x94f: Pop(2)
0x950: GOTO 0x947

0x951: Return(); Pop(0)

0x952: PushEmpty()
0x953: PushEmpty(bool)
0x954: Call2 0xe25

0x955: Pop(0)
0x956: Pop(1); Push((bool) Stack[-1] == 0)
0x957: IF (Stack[-1] == 0) GOTO 0x959; Pop(1)

0x958: Return(); Pop(0)

0x959: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x95a: IF (Stack[-1] == 0) GOTO 0x95c; Pop(1)

0x95b: Return(); Pop(0)

0x95c: PushEmpty(string, bool)
0x95d: Stack[-2] = Stack[-3]
0x95e: Push("")
0x95f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x960: IF (Stack[-1] == 0) GOTO 0x963; Pop(1)

0x961: Stack[-1] = (bool) 0
0x962: GOTO 0x964

0x963: Stack[-1] = (bool) 1
0x964: Call2 0xd31

0x965: Pop(2)
0x966: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x967: Return(); Pop(0)

0x968: PushEmpty()
0x969: Push((int) 1)
0x96a: IF (Stack[-1] == 0) GOTO 0xa2b; Pop(1)

0x96b: PushEmpty()
0x96c: Call2 0xd4f

0x96d: Pop(0)
0x96e: Push((int) 45364)
0x96f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x970: IF (Stack[-1] == 0) GOTO 0x976; Pop(1)

0x971: PushEmpty(object, object)
0x972: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x973: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x974: Call2 0xea6

0x975: Pop(2)
0x976: Push((int) 41191)
0x977: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x978: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x979: PushEmpty(bool, object)
0x97a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x97b: Call2 0xec1

0x97c: Pop(1)
0x97d: Pop(1); Push((bool) Stack[-1] == 0)
0x97e: IF (Stack[-1] == 0) GOTO 0x998; Pop(1)

0x97f: PushEmpty(string)
0x980: Stack[-1] = "Neutral"
0x981: Call2 0x952

0x982: Pop(1)
0x983: Push((int) 539248)
0x984: @@ SetMessage(Stack[-1])
0x985: Pop(1)
0x986: @@ ClearReplies()
0x987: Pop(0)
0x988: PushEmpty(bool, object)
0x989: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98a: Call2 0xf75

0x98b: Pop(1)
0x98c: IF (Stack[-1] == 0) GOTO 0x992; Pop(1)

0x98d: Push((int) 542928)
0x98e: Push((int) 45365)
0x98f: Push((int) 45364)
0x990: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x991: Pop(3)
0x992: Push((int) 539249)
0x993: Push((int) -1)
0x994: Push((int) 41192)
0x995: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x996: Pop(3)
0x997: Return(); Pop(0)

0x998: PushEmpty(string)
0x999: Stack[-1] = "Neutral"
0x99a: Call2 0x952

0x99b: Pop(1)
0x99c: Push((int) 539250)
0x99d: @@ SetMessage(Stack[-1])
0x99e: Pop(1)
0x99f: @@ ClearReplies()
0x9a0: Pop(0)
0x9a1: Push((int) 539251)
0x9a2: Push((int) -1)
0x9a3: Push((int) 41194)
0x9a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a5: Pop(3)
0x9a6: Push((int) 541515)
0x9a7: Push((int) -1)
0x9a8: Push((int) 43678)
0x9a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9aa: Pop(3)
0x9ab: Return(); Pop(0)

0x9ac: Push((int) 45365)
0x9ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9ae: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9af: PushEmpty(string)
0x9b0: Stack[-1] = "Untrust"
0x9b1: Call2 0x952

0x9b2: Pop(1)
0x9b3: Push((int) 542929)
0x9b4: @@ SetMessage(Stack[-1])
0x9b5: Pop(1)
0x9b6: @@ ClearReplies()
0x9b7: Pop(0)
0x9b8: Push((int) 542930)
0x9b9: Push((int) 45368)
0x9ba: Push((int) 45366)
0x9bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9bc: Pop(3)
0x9bd: Push((int) 542931)
0x9be: Push((int) 45369)
0x9bf: Push((int) 45367)
0x9c0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c1: Pop(3)
0x9c2: Return(); Pop(0)

0x9c3: Push((int) 45369)
0x9c4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9c5: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9c6: PushEmpty(string)
0x9c7: Stack[-1] = "Doubt"
0x9c8: Call2 0x952

0x9c9: Pop(1)
0x9ca: Push((int) 542933)
0x9cb: @@ SetMessage(Stack[-1])
0x9cc: Pop(1)
0x9cd: @@ ClearReplies()
0x9ce: Pop(0)
0x9cf: Push((int) 542934)
0x9d0: Push((int) 45371)
0x9d1: Push((int) 45370)
0x9d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d3: Pop(3)
0x9d4: Push((int) 542937)
0x9d5: Push((int) 45368)
0x9d6: Push((int) 45373)
0x9d7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9d8: Pop(3)
0x9d9: Return(); Pop(0)

0x9da: Push((int) 45371)
0x9db: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9dc: IF (Stack[-1] == 0) GOTO 0x9f1; Pop(1)

0x9dd: PushEmpty(string)
0x9de: Stack[-1] = "Doubt"
0x9df: Call2 0x952

0x9e0: Pop(1)
0x9e1: Push((int) 542935)
0x9e2: @@ SetMessage(Stack[-1])
0x9e3: Pop(1)
0x9e4: @@ ClearReplies()
0x9e5: Pop(0)
0x9e6: Push((int) 542936)
0x9e7: Push((int) 45375)
0x9e8: Push((int) 45372)
0x9e9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ea: Pop(3)
0x9eb: Push((int) 542941)
0x9ec: Push((int) 45368)
0x9ed: Push((int) 45378)
0x9ee: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9ef: Pop(3)
0x9f0: Return(); Pop(0)

0x9f1: Push((int) 45375)
0x9f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x9f3: IF (Stack[-1] == 0) GOTO 0xa08; Pop(1)

0x9f4: PushEmpty(string)
0x9f5: Stack[-1] = "Neutral"
0x9f6: Call2 0x952

0x9f7: Pop(1)
0x9f8: Push((int) 542938)
0x9f9: @@ SetMessage(Stack[-1])
0x9fa: Pop(1)
0x9fb: @@ ClearReplies()
0x9fc: Pop(0)
0x9fd: Push((int) 542939)
0x9fe: Push((int) -1)
0x9ff: Push((int) 45376)
0xa00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa01: Pop(3)
0xa02: Push((int) 542942)
0xa03: Push((int) 45368)
0xa04: Push((int) 45380)
0xa05: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa06: Pop(3)
0xa07: Return(); Pop(0)

0xa08: Push((int) 45368)
0xa09: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0a: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa0b: PushEmpty(string)
0xa0c: Stack[-1] = "Untrust"
0xa0d: Call2 0x952

0xa0e: Pop(1)
0xa0f: Push((int) 542932)
0xa10: @@ SetMessage(Stack[-1])
0xa11: Pop(1)
0xa12: @@ ClearReplies()
0xa13: Pop(0)
0xa14: Push((int) 542940)
0xa15: Push((int) -1)
0xa16: Push((int) 45377)
0xa17: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa18: Pop(3)
0xa19: Push((int) 542943)
0xa1a: Push((int) -1)
0xa1b: Push((int) 45382)
0xa1c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa1d: Pop(3)
0xa1e: Return(); Pop(0)

0xa1f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xa20: PushEmpty(bool)
0xa21: Call2 0xe25

0xa22: Pop(0)
0xa23: IF (Stack[-1] == 0) GOTO 0xa27; Pop(1)

0xa24: @ lshStopAnimation()
0xa25: Pop(0)
0xa26: GOTO 0xa29

0xa27: @ StopAnimation()
0xa28: Pop(0)
0xa29: Return(); Pop(0)

0xa2a: GOTO 0x969

0xa2b: Return(); Pop(0)

0xa2c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xa2d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xa2e: PushEmpty(bool, object, float)
0xa2f: Stack[-2] = Stack[-12]
0xa30: Stack[-1] = (float) 70.0
0xa31: Call2 0xc40

0xa32: Pop(2)
0xa33: Pop(1); Push((bool) Stack[-1] == 0)
0xa34: IF (Stack[-1] == 0) GOTO 0xa37; Pop(1)

0xa35: Stack[-10] = (int) -2
0xa36: Return(); Pop(8)

0xa37: @ CreateDialog(Stack[-4])
0xa38: Pop(0)
0xa39: PushEmpty(int)
0xa3a: Call2 0xe1f

0xa3b: Pop(0)
0xa3c: @@ SetNPCName(Stack[-1])
0xa3d: Pop(1)
0xa3e: PushEmpty(int)
0xa3f: Call2 0xe1d

0xa40: Pop(0)
0xa41: @@ SetNPCDescription(Stack[-1])
0xa42: Pop(1)
0xa43: PushEmpty(string)
0xa44: Call2 0xe21

0xa45: Pop(0)
0xa46: @@ SetPhoto(Stack[-1])
0xa47: Pop(1)
0xa48: PushEmpty(string)
0xa49: Call2 0xe23

0xa4a: Pop(0)
0xa4b: @@ SetPhoto2(Stack[-1])
0xa4c: Pop(1)
0xa4d: PushEmpty(int)
0xa4e: Call2 0x102f

0xa4f: Pop(0)
0xa50: @@ SetPlayerName(Stack[-1])
0xa51: Pop(1)
0xa52: Stack[-2] = (int) -1
0xa53: @ IsOverrideActive(Stack[-3])
0xa54: Pop(0)
0xa55: Push(Stack[-3])
0xa56: IF (Stack[-1] == 0) GOTO 0xa59; Pop(1)

0xa57: Stack[-10] = (int) -2
0xa58: Return(); Pop(8)

0xa59: @ DoDialog(Stack[-4])
0xa5a: Pop(0)
0xa5b: PushEmpty(bool, object)
0xa5c: PushEmpty(object)
0xa5d: Call2 0xd56

0xa5e: Stack[-2] = Stack[-1]
0xa5f: Pop(1)
0xa60: Call2 0xc97

0xa61: Pop(2)
0xa62: PushEmpty(object, object)
0xa63: Stack[-2] = Stack[-11]
0xa64: Stack[-1] = Stack[-6]
0xa65: Push(-2, 4); TaskCall(11)
0xa66: Call2 0xa7d

0xa67: Pop(-2, 4); TaskReturn
0xa68: Pop(2)
0xa69: @@ IsDialogEnd(Stack[-1])
0xa6a: Pop(0)
0xa6b: Pop(0); Push((bool) Stack[-1] == 0)
0xa6c: IF (Stack[-1] == 0) GOTO 0xa72; Pop(1)

0xa6d: @ sync()
0xa6e: Pop(0)
0xa6f: @@ IsDialogEnd(Stack[-1])
0xa70: Pop(0)
0xa71: GOTO 0xa6b

0xa72: PushEmpty(object)
0xa73: Stack[-1] = Stack[-10]
0xa74: Call2 0xc85

0xa75: Pop(1)
0xa76: @ StopDialog(Stack[-4])
0xa77: Pop(0)
0xa78: @@ GetReturnValue(Stack[-2])
0xa79: Pop(0)
0xa7a: Stack[-10] = Stack[-2]
0xa7b: Return(); Pop(8)

0xa7c: Stack[-4] = 0
0xa7d: PushEmpty()
0xa7e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xa7f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xa80: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xa81: Push((int) 1)
0xa82: IF (Stack[-1] == 0) GOTO 0xa99; Pop(1)

0xa83: PushEmpty(string)
0xa84: Stack[-1] = "Neutral"
0xa85: Call2 0xab7

0xa86: Pop(1)
0xa87: Push((int) 540545)
0xa88: @@ SetMessage(Stack[-1])
0xa89: Pop(1)
0xa8a: @@ ClearReplies()
0xa8b: Pop(0)
0xa8c: Push((int) 540546)
0xa8d: Push((int) -1)
0xa8e: Push((int) 42555)
0xa8f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa90: Pop(3)
0xa91: Push((int) 540798)
0xa92: Push((int) -1)
0xa93: Push((int) 42847)
0xa94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa95: Pop(3)
0xa96: GOTO 0xa99

0xa97: Return(); Pop(0)

0xa98: GOTO 0xa81

0xa99: PushEmpty(bool)
0xa9a: Call2 0xe25

0xa9b: Pop(0)
0xa9c: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xa9d: @ lshWaitForAnimEnd()
0xa9e: Pop(0)
0xa9f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaa0: IF (Stack[-1] == 0) GOTO 0xaa2; Pop(1)

0xaa1: GOTO 0xaa7

0xaa2: PushEmpty(string)
0xaa3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xaa4: Call2 0xd21

0xaa5: Pop(1)
0xaa6: GOTO 0xa9d

0xaa7: GOTO 0xab6

0xaa8: Push("all")
0xaa9: Push("idle")
0xaaa: @ PlayAnimation(Stack[-2], Stack[-1])
0xaab: Pop(2)
0xaac: @ WaitForAnimEnd()
0xaad: Pop(0)
0xaae: Push( Stack[3 + Tasks[-1].StackPointer] )
0xaaf: IF (Stack[-1] == 0) GOTO 0xab1; Pop(1)

0xab0: GOTO 0xab6

0xab1: Push("all")
0xab2: Push("idle")
0xab3: @ PlayAnimation(Stack[-2], Stack[-1])
0xab4: Pop(2)
0xab5: GOTO 0xaac

0xab6: Return(); Pop(0)

0xab7: PushEmpty()
0xab8: PushEmpty(bool)
0xab9: Call2 0xe25

0xaba: Pop(0)
0xabb: Pop(1); Push((bool) Stack[-1] == 0)
0xabc: IF (Stack[-1] == 0) GOTO 0xabe; Pop(1)

0xabd: Return(); Pop(0)

0xabe: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xabf: IF (Stack[-1] == 0) GOTO 0xac1; Pop(1)

0xac0: Return(); Pop(0)

0xac1: PushEmpty(string, bool)
0xac2: Stack[-2] = Stack[-3]
0xac3: Push("")
0xac4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xac5: IF (Stack[-1] == 0) GOTO 0xac8; Pop(1)

0xac6: Stack[-1] = (bool) 0
0xac7: GOTO 0xac9

0xac8: Stack[-1] = (bool) 1
0xac9: Call2 0xd31

0xaca: Pop(2)
0xacb: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xacc: Return(); Pop(0)

0xacd: PushEmpty()
0xace: Push((int) 1)
0xacf: IF (Stack[-1] == 0) GOTO 0xaf6; Pop(1)

0xad0: PushEmpty()
0xad1: Call2 0xd4f

0xad2: Pop(0)
0xad3: Push((int) 42554)
0xad4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad5: IF (Stack[-1] == 0) GOTO 0xaea; Pop(1)

0xad6: PushEmpty(string)
0xad7: Stack[-1] = "Neutral"
0xad8: Call2 0xab7

0xad9: Pop(1)
0xada: Push((int) 540545)
0xadb: @@ SetMessage(Stack[-1])
0xadc: Pop(1)
0xadd: @@ ClearReplies()
0xade: Pop(0)
0xadf: Push((int) 540546)
0xae0: Push((int) -1)
0xae1: Push((int) 42555)
0xae2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae3: Pop(3)
0xae4: Push((int) 540798)
0xae5: Push((int) -1)
0xae6: Push((int) 42847)
0xae7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae8: Pop(3)
0xae9: Return(); Pop(0)

0xaea: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xaeb: PushEmpty(bool)
0xaec: Call2 0xe25

0xaed: Pop(0)
0xaee: IF (Stack[-1] == 0) GOTO 0xaf2; Pop(1)

0xaef: @ lshStopAnimation()
0xaf0: Pop(0)
0xaf1: GOTO 0xaf4

0xaf2: @ StopAnimation()
0xaf3: Pop(0)
0xaf4: Return(); Pop(0)

0xaf5: GOTO 0xace

0xaf6: Return(); Pop(0)

0xaf7: PushEmpty()
0xaf8: Call2 0xafb

0xaf9: Pop(0)
0xafa: Return(); Pop(0)

0xafb: PushEmpty(bool)
0xafc: Call2 0xc3b

0xafd: Pop(0)
0xafe: Pop(1); Push((bool) Stack[-1] == 0)
0xaff: IF (Stack[-1] == 0) GOTO 0xb02; Pop(1)

0xb00: @ Hold()
0xb01: Pop(0)
0xb02: @ GetDirection(Stack[-0])
0xb03: Pop(0)
0xb04: PushEmpty()
0xb05: Call2 0xbab

0xb06: Pop(0)
0xb07: GOTO 0xb04

0xb08: Return(); Pop(0)

0xb09: PushEmpty(object, object)
0xb0a: Push("player")
0xb0b: @ FindActor(Stack[-2], Stack[-1])
0xb0c: Pop(1)
0xb0d: Pop(0); Push((bool) Stack[-1] == 0)
0xb0e: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xb0f: Stack[-3] = (bool) 0
0xb10: Return(); Pop(2)

0xb11: PushEmpty(bool, object)
0xb12: Stack[-1] = Stack[-3]
0xb13: Call2 0xc32

0xb14: Stack[-5] = Stack[-2]
0xb15: Pop(2)
0xb16: Return(); Pop(2)

0xb17: Stack[-1] = 0
0xb18: Push(CvectorIndex(Stack[-0], 0))
0xb19: Push(CvectorIndex(Stack[-0], 2))
0xb1a: @ RotateAsync(Stack[-2], Stack[-1])
0xb1b: Pop(2)
0xb1c: Return(); Pop(0)

0xb1d: PushEmpty(object, bool, object, bool)
0xb1e: Push("player")
0xb1f: @ FindActor(Stack[-3], Stack[-1])
0xb20: Pop(1)
0xb21: Pop(0); Push((bool) Stack[-2] == 0)
0xb22: IF (Stack[-1] == 0) GOTO 0xb25; Pop(1)

0xb23: Stack[-5] = (bool) 0
0xb24: Return(); Pop(4)

0xb25: PushEmpty(float, object)
0xb26: Stack[-1] = Stack[-4]
0xb27: Call2 0xbf7

0xb28: Pop(1)
0xb29: Push((float)90000.0)
0xb2a: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xb2b: IF (Stack[-1] == 0) GOTO 0xb2e; Pop(1)

0xb2c: Stack[-5] = (bool) 0
0xb2d: Return(); Pop(4)

0xb2e: @ CanSee(Stack[-1], Stack[-2])
0xb2f: Pop(0)
0xb30: Stack[-5] = Stack[-1]
0xb31: Return(); Pop(4)

0xb32: Stack[-2] = 0
0xb33: PushEmpty(float, float)
0xb34: Push((int) 8)
0xb35: Push((int) 16)
0xb36: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb37: Pop(2)
0xb38: Push((int) 10)
0xb39: @ SetTimer(Stack[-1], Stack[-2])
0xb3a: Pop(1)
0xb3b: Return(); Pop(2)

0xb3c: Push((int) 10)
0xb3d: @ KillTimer(Stack[-1])
0xb3e: Pop(1)
0xb3f: Return(); Pop(0)

0xb40: PushEmpty()
0xb41: Push((int) 10)
0xb42: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb43: IF (Stack[-1] == 0) GOTO 0xb65; Pop(1)

0xb44: PushEmpty()
0xb45: Call2 0xb3c

0xb46: Pop(0)
0xb47: PushEmpty(bool)
0xb48: Stack[-1] = (bool) 0
0xb49: PushEmpty(bool)
0xb4a: Call2 0xc3b

0xb4b: Pop(0)
0xb4c: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb4d: PushEmpty(bool)
0xb4e: Call2 0xb1d

0xb4f: Pop(0)
0xb50: IF (Stack[-1] == 0) GOTO 0xb52; Pop(1)

0xb51: Stack[-1] = (bool) 1
0xb52: IF (Stack[-1] == 0) GOTO 0xb5f; Pop(1)

0xb53: PushEmpty(bool)
0xb54: Call2 0xb09

0xb55: Pop(0)
0xb56: IF (Stack[-1] == 0) GOTO 0xb5e; Pop(1)

0xb57: PushEmpty(bool, object)
0xb58: PushEmpty(object)
0xb59: Call2 0xd56

0xb5a: Stack[-2] = Stack[-1]
0xb5b: Pop(1)
0xb5c: Call2 0xcd1

0xb5d: Pop(2)
0xb5e: GOTO 0xb65

0xb5f: PushEmpty()
0xb60: Call2 0xb18

0xb61: Pop(0)
0xb62: PushEmpty()
0xb63: Call2 0xb33

0xb64: Pop(0)
0xb65: Return(); Pop(0)

0xb66: PushEmpty()
0xb67: Call2 0xbf2

0xb68: Pop(0)
0xb69: PushEmpty()
0xb6a: Call2 0xb3c

0xb6b: Pop(0)
0xb6c: @ lshStopSpeech()
0xb6d: Pop(0)
0xb6e: @ lshStopAnimation()
0xb6f: Pop(0)
0xb70: @ StopAsync()
0xb71: Pop(0)
0xb72: @ Hold()
0xb73: Pop(0)
0xb74: Return(); Pop(0)

0xb75: @ StopGroup0()
0xb76: Pop(0)
0xb77: PushEmpty()
0xb78: Call2 0xb3c

0xb79: Pop(0)
0xb7a: PushEmpty(string)
0xb7b: Stack[-1] = "Neutral"
0xb7c: Call2 0xd21

0xb7d: Pop(1)
0xb7e: PushEmpty()
0xb7f: Call2 0xb33

0xb80: Pop(0)
0xb81: Return(); Pop(0)

0xb82: PushEmpty()
0xb83: Push(Stack[-1])
0xb84: IF (Stack[-1] == 0) GOTO 0xb89; Pop(1)

0xb85: PushEmpty()
0xb86: Call2 0xb33

0xb87: Pop(0)
0xb88: GOTO 0xb8d

0xb89: PushEmpty(string)
0xb8a: Stack[-1] = "Neutral"
0xb8b: Call2 0xd21

0xb8c: Pop(1)
0xb8d: Return(); Pop(0)

0xb8e: PushEmpty(bool, bool)
0xb8f: @ IsOverrideActive(Stack[-1])
0xb90: Pop(0)
0xb91: Pop(0); Push((bool) Stack[-1] == 0)
0xb92: IF (Stack[-1] == 0) GOTO 0xbaa; Pop(1)

0xb93: EventDisable(0)
0xb94: PushEmpty()
0xb95: Call2 0xbf2

0xb96: Pop(0)
0xb97: PushEmpty(bool, object)
0xb98: Stack[-1] = Stack[-5]
0xb99: Call2 0xc32

0xb9a: Pop(2)
0xb9b: EventEnable(0)
0xb9c: PushEmpty(object)
0xb9d: Stack[-1] = Stack[-4]
0xb9e: Call2 0x106b

0xb9f: Pop(1)
0xba0: PushEmpty(string)
0xba1: Stack[-1] = "Neutral"
0xba2: Call2 0xd21

0xba3: Pop(1)
0xba4: PushEmpty()
0xba5: Call2 0xb3c

0xba6: Pop(0)
0xba7: PushEmpty()
0xba8: Call2 0xb33

0xba9: Pop(0)
0xbaa: Return(); Pop(2)

0xbab: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xbac: @ WaitForAnimEnd()
0xbad: Pop(0)
0xbae: PushEmpty(bool)
0xbaf: Call2 0xc3b

0xbb0: Pop(0)
0xbb1: Pop(1); Push((bool) Stack[-1] == 0)
0xbb2: IF (Stack[-1] == 0) GOTO 0xbb4; Pop(1)

0xbb3: Return(); Pop(12)

0xbb4: PushEmpty(int)
0xbb5: Call2 0xe0c

0xbb6: Stack[-7] = Stack[-1]
0xbb7: Pop(1)
0xbb8: Stack[-5] = (int) 0
0xbb9: PushEmpty(bool)
0xbba: Stack[-1] = (bool) 0
0xbbb: Push((int) 5)
0xbbc: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xbbd: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbbe: PushEmpty(bool)
0xbbf: Call2 0xc3b

0xbc0: Pop(0)
0xbc1: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbc2: Stack[-1] = (bool) 1
0xbc3: IF (Stack[-1] == 0) GOTO 0xbed; Pop(1)

0xbc4: Pop(0); Push((bool) Stack[-6] == 0)
0xbc5: IF (Stack[-1] == 0) GOTO 0xbcd; Pop(1)

0xbc6: Push((int) 3)
0xbc7: @ Sleep(Stack[-1], Stack[-5])
0xbc8: Pop(1)
0xbc9: Pop(0); Push((bool) Stack[-4] == 0)
0xbca: IF (Stack[-1] == 0) GOTO 0xbcc; Pop(1)

0xbcb: GOTO 0xbed

0xbcc: GOTO 0xbe2

0xbcd: @ irand(Stack[-3], Stack[-6])
0xbce: Pop(0)
0xbcf: Push((int) 5)
0xbd0: @ irand(Stack[-3], Stack[-1])
0xbd1: Pop(1)
0xbd2: Push((int) 0)
0xbd3: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xbd4: IF (Stack[-1] == 0) GOTO 0xbd6; Pop(1)

0xbd5: Stack[-3] = (int) 0
0xbd6: Push("all")
0xbd7: PushEmpty(string, int)
0xbd8: Stack[-1] = Stack[-6]
0xbd9: Call2 0xe05

0xbda: Pop(1)
0xbdb: @ PlayAnimation(Stack[-2], Stack[-1])
0xbdc: Pop(2)
0xbdd: @ WaitForAnimEnd(Stack[-1])
0xbde: Pop(0)
0xbdf: Pop(0); Push((bool) Stack[-1] == 0)
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbe1: GOTO 0xbed

0xbe2: PushEmpty(bool)
0xbe3: Call2 0xbf0

0xbe4: Pop(0)
0xbe5: Pop(1); Push((bool) Stack[-1] == 0)
0xbe6: IF (Stack[-1] == 0) GOTO 0xbe8; Pop(1)

0xbe7: GOTO 0xbed

0xbe8: @ ResetAAS()
0xbe9: Pop(0)
0xbea: Push((int) 1)
0xbeb: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xbec: GOTO 0xbb9

0xbed: @ ResetAAS()
0xbee: Pop(0)
0xbef: Return(); Pop(12)

0xbf0: Stack[-1] = (bool) 1
0xbf1: Return(); Pop(0)

0xbf2: @ StopAnimation()
0xbf3: Pop(0)
0xbf4: @ StopGroup0()
0xbf5: Pop(0)
0xbf6: Return(); Pop(0)

0xbf7: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xbf8: @ GetPosition(Stack[-3])
0xbf9: Pop(0)
0xbfa: @@ GetPosition(Stack[-2])
0xbfb: Pop(0)
0xbfc: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xbfd: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xbfe: Return(); Pop(6)

0xbff: PushEmpty(bool, bool)
0xc00: Push("HasProperty")
0xc01: Push((int) 2)
0xc02: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xc03: Pop(1); Push((bool) Stack[-1] == 0)
0xc04: IF (Stack[-1] == 0) GOTO 0xc07; Pop(1)

0xc05: Stack[-5] = (bool) 0
0xc06: Return(); Pop(2)

0xc07: @@ HasProperty(Stack[-3], Stack[-1])
0xc08: Pop(0)
0xc09: Stack[-5] = Stack[-1]
0xc0a: Return(); Pop(2)

0xc0b: PushEmpty(float, float)
0xc0c: PushEmpty(bool, object, string)
0xc0d: Stack[-2] = Stack[-10]
0xc0e: Stack[-1] = Stack[-9]
0xc0f: Call2 0xbff

0xc10: Pop(2)
0xc11: Pop(1); Push((bool) Stack[-1] == 0)
0xc12: IF (Stack[-1] == 0) GOTO 0xc15; Pop(1)

0xc13: Stack[-8] = (bool) 0
0xc14: Return(); Pop(2)

0xc15: @@ GetProperty(Stack[-6], Stack[-1])
0xc16: Pop(0)
0xc17: PushEmpty(float, float, float, float)
0xc18: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xc19: Stack[-2] = Stack[-8]
0xc1a: Stack[-1] = Stack[-7]
0xc1b: Call2 0xd66

0xc1c: Pop(3)
0xc1d: @@ SetProperty(Stack[-7], Stack[-1])
0xc1e: Pop(1)
0xc1f: Stack[-8] = (bool) 1
0xc20: Return(); Pop(2)

0xc21: PushEmpty(int, int)
0xc22: @@ GetProperty(Stack[-4], Stack[-1])
0xc23: Pop(0)
0xc24: Pop(0); Push(Stack[-1] + Stack[-3]);
0xc25: @@ SetProperty(Stack[-5], Stack[-1])
0xc26: Pop(1)
0xc27: Return(); Pop(2)

0xc28: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xc29: @ GetPosition(Stack[-3])
0xc2a: Pop(0)
0xc2b: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xc2c: Push(CvectorIndex(Stack[-2], 0))
0xc2d: Push(CvectorIndex(Stack[-3], 2))
0xc2e: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xc2f: Pop(2)
0xc30: Stack[-8] = Stack[-1]
0xc31: Return(); Pop(6)

0xc32: PushEmpty(cvector, cvector)
0xc33: @@ GetPosition(Stack[-1])
0xc34: Pop(0)
0xc35: PushEmpty(bool, cvector)
0xc36: Stack[-1] = Stack[-3]
0xc37: Call2 0xc28

0xc38: Stack[-6] = Stack[-2]
0xc39: Pop(2)
0xc3a: Return(); Pop(2)

0xc3b: PushEmpty(bool, bool)
0xc3c: @ IsLoaded(Stack[-1])
0xc3d: Pop(0)
0xc3e: Stack[-3] = Stack[-1]
0xc3f: Return(); Pop(2)

0xc40: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xc41: @@ GetPosition(Stack[-8])
0xc42: Pop(0)
0xc43: @@ GetEyesHeight(Stack[-9])
0xc44: Pop(0)
0xc45: Push(CvectorIndex(Stack[-8], 1))
0xc46: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc47: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xc48: @ GetPosition(Stack[-7])
0xc49: Pop(0)
0xc4a: @ GetEyesHeight(Stack[-9])
0xc4b: Pop(0)
0xc4c: Push(CvectorIndex(Stack[-7], 1))
0xc4d: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xc4e: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xc4f: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xc50: Push(CvectorIndex(Stack[-6], 1))
0xc51: Stack[-1] = (int) 0
0xc52: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xc53: Pop(0); Push(Stack[-6] | Stack[-6]);
0xc54: Pop(1); Push(Sqrt(Stack[-1]))
0xc55: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xc56: Stack[-5] = -Stack[-6]; Pop(0);
0xc57: Pop(0); Push(Stack[-6] * Stack[-19]);
0xc58: PushEmpty(cvector, cvector)
0xc59: Push(CVector(0.0, 1.0, 0.0))
0xc5a: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xc5b: Call2 0xd5c

0xc5c: Pop(1)
0xc5d: Push((int) 25)
0xc5e: Pop(2); Push(Stack[-2] * Stack[-1]);
0xc5f: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc60: Push(CVector(0.0, 10.0, 0.0))
0xc61: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xc62: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xc63: @ IsOverrideActive(Stack[-2])
0xc64: Pop(0)
0xc65: Push(Stack[-2])
0xc66: IF (Stack[-1] == 0) GOTO 0xc69; Pop(1)

0xc67: Stack[-21] = (bool) 0
0xc68: Return(); Pop(18)

0xc69: @ StopWorld()
0xc6a: Pop(0)
0xc6b: Push((bool) 1)
0xc6c: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xc6d: Pop(1)
0xc6e: Push(CvectorIndex(Stack[-4], 0))
0xc6f: Push(CvectorIndex(Stack[-5], 2))
0xc70: @ Rotate(Stack[-2], Stack[-1])
0xc71: Pop(2)
0xc72: PushEmpty(bool)
0xc73: Call2 0xe25

0xc74: Pop(0)
0xc75: IF (Stack[-1] == 0) GOTO 0xc77; Pop(1)

0xc76: GOTO 0xc7f

0xc77: Push("head")
0xc78: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc79: Pop(1)
0xc7a: Push(Stack[-1])
0xc7b: IF (Stack[-1] == 0) GOTO 0xc7f; Pop(1)

0xc7c: Push("head")
0xc7d: @ LookAsyncCamera(Stack[-1])
0xc7e: Pop(1)
0xc7f: @ CameraWaitForPlayFinish()
0xc80: Pop(0)
0xc81: @ ResumeWorld()
0xc82: Pop(0)
0xc83: Stack[-21] = (bool) 1
0xc84: Return(); Pop(18)

0xc85: PushEmpty(bool, bool)
0xc86: Push((bool) 1)
0xc87: @ CameraSwitchToNormal(Stack[-1])
0xc88: Pop(1)
0xc89: PushEmpty(bool)
0xc8a: Call2 0xe25

0xc8b: Pop(0)
0xc8c: IF (Stack[-1] == 0) GOTO 0xc8e; Pop(1)

0xc8d: GOTO 0xc96

0xc8e: Push("head")
0xc8f: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xc90: Pop(1)
0xc91: Push(Stack[-1])
0xc92: IF (Stack[-1] == 0) GOTO 0xc96; Pop(1)

0xc93: Push("head")
0xc94: @ UnlookAsync(Stack[-1])
0xc95: Pop(1)
0xc96: Return(); Pop(2)

0xc97: PushEmpty(int, int, int, int)
0xc98: Push("voice_common")
0xc99: @ GetVariable(Stack[-1], Stack[-3])
0xc9a: Pop(1)
0xc9b: Push(Stack[-2])
0xc9c: IF (Stack[-1] == 0) GOTO 0xcbd; Pop(1)

0xc9d: PushEmpty(bool, object)
0xc9e: Stack[-1] = Stack[-7]
0xc9f: Call2 0xcd1

0xca0: Pop(1)
0xca1: Pop(1); Push((bool) Stack[-1] == 0)
0xca2: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xca3: PushEmpty(bool, object)
0xca4: Stack[-1] = Stack[-7]
0xca5: Call2 0xcf6

0xca6: Pop(1)
0xca7: Pop(1); Push((bool) Stack[-1] == 0)
0xca8: IF (Stack[-1] == 0) GOTO 0xcab; Pop(1)

0xca9: Stack[-6] = (bool) 0
0xcaa: Return(); Pop(4)

0xcab: Push((int) 2)
0xcac: @ irand(Stack[-2], Stack[-1])
0xcad: Pop(1)
0xcae: Push(Stack[-1])
0xcaf: IF (Stack[-1] == 0) GOTO 0xcb8; Pop(1)

0xcb0: Push("voice_common")
0xcb1: Push((int) 1)
0xcb2: Pop(1); Push(Stack[-4] + Stack[-1]);
0xcb3: Push((int) 3)
0xcb4: Pop(2); Push(Stack[-2] % Stack[-1]);
0xcb5: @ SetVariable(Stack[-2], Stack[-1])
0xcb6: Pop(2)
0xcb7: GOTO 0xcbc

0xcb8: Push("voice_common")
0xcb9: Push((int) 0)
0xcba: @ SetVariable(Stack[-2], Stack[-1])
0xcbb: Pop(2)
0xcbc: GOTO 0xccf

0xcbd: PushEmpty(bool, object)
0xcbe: Stack[-1] = Stack[-7]
0xcbf: Call2 0xcf6

0xcc0: Pop(1)
0xcc1: Pop(1); Push((bool) Stack[-1] == 0)
0xcc2: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcc3: PushEmpty(bool, object)
0xcc4: Stack[-1] = Stack[-7]
0xcc5: Call2 0xcd1

0xcc6: Pop(1)
0xcc7: Pop(1); Push((bool) Stack[-1] == 0)
0xcc8: IF (Stack[-1] == 0) GOTO 0xccb; Pop(1)

0xcc9: Stack[-6] = (bool) 0
0xcca: Return(); Pop(4)

0xccb: Push("voice_common")
0xccc: Push((int) 1)
0xccd: @ SetVariable(Stack[-2], Stack[-1])
0xcce: Pop(2)
0xccf: Stack[-6] = (bool) 1
0xcd0: Return(); Pop(4)

0xcd1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcd2: Stack[-5] = "c"
0xcd3: Stack[-4] = (int) 0
0xcd4: Push((int) 1)
0xcd5: IF (Stack[-1] == 0) GOTO 0xce1; Pop(1)

0xcd6: Push((int) 1)
0xcd7: Pop(1); Push(Stack[-5] + Stack[-1]);
0xcd8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcd9: @@ HasProperty(Stack[-1], Stack[-4])
0xcda: Pop(1)
0xcdb: Pop(0); Push((bool) Stack[-3] == 0)
0xcdc: IF (Stack[-1] == 0) GOTO 0xcde; Pop(1)

0xcdd: GOTO 0xce1

0xcde: Push((int) 1)
0xcdf: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xce0: GOTO 0xcd4

0xce1: Pop(0); Push((bool) Stack[-4] == 0)
0xce2: IF (Stack[-1] == 0) GOTO 0xce5; Pop(1)

0xce3: Stack[-12] = (bool) 0
0xce4: Return(); Pop(10)

0xce5: Stack[-2] = (int) 0
0xce6: Push((int) 1)
0xce7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xce8: IF (Stack[-1] == 0) GOTO 0xceb; Pop(1)

0xce9: @ irand(Stack[-2], Stack[-4])
0xcea: Pop(0)
0xceb: Push((int) 1)
0xcec: Pop(1); Push(Stack[-3] + Stack[-1]);
0xced: Pop(1); Push(Stack[-6] + Stack[-1]);
0xcee: @@ GetProperty(Stack[-1], Stack[-2])
0xcef: Pop(1)
0xcf0: PushEmpty(bool, string)
0xcf1: Stack[-1] = Stack[-3]
0xcf2: Call2 0xd40

0xcf3: Stack[-14] = Stack[-2]
0xcf4: Pop(2)
0xcf5: Return(); Pop(10)

0xcf6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xcf7: Push("d")
0xcf8: PushEmpty(int)
0xcf9: Call2 0xdee

0xcfa: Pop(0)
0xcfb: Pop(2); Push(Stack[-2] + Stack[-1]);
0xcfc: Push("m")
0xcfd: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xcfe: Stack[-4] = (int) 0
0xcff: Push((int) 1)
0xd00: IF (Stack[-1] == 0) GOTO 0xd0c; Pop(1)

0xd01: Push((int) 1)
0xd02: Pop(1); Push(Stack[-5] + Stack[-1]);
0xd03: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd04: @@ HasProperty(Stack[-1], Stack[-4])
0xd05: Pop(1)
0xd06: Pop(0); Push((bool) Stack[-3] == 0)
0xd07: IF (Stack[-1] == 0) GOTO 0xd09; Pop(1)

0xd08: GOTO 0xd0c

0xd09: Push((int) 1)
0xd0a: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xd0b: GOTO 0xcff

0xd0c: Pop(0); Push((bool) Stack[-4] == 0)
0xd0d: IF (Stack[-1] == 0) GOTO 0xd10; Pop(1)

0xd0e: Stack[-12] = (bool) 0
0xd0f: Return(); Pop(10)

0xd10: Stack[-2] = (int) 0
0xd11: Push((int) 1)
0xd12: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xd13: IF (Stack[-1] == 0) GOTO 0xd16; Pop(1)

0xd14: @ irand(Stack[-2], Stack[-4])
0xd15: Pop(0)
0xd16: Push((int) 1)
0xd17: Pop(1); Push(Stack[-3] + Stack[-1]);
0xd18: Pop(1); Push(Stack[-6] + Stack[-1]);
0xd19: @@ GetProperty(Stack[-1], Stack[-2])
0xd1a: Pop(1)
0xd1b: PushEmpty(bool, string)
0xd1c: Stack[-1] = Stack[-3]
0xd1d: Call2 0xd40

0xd1e: Stack[-14] = Stack[-2]
0xd1f: Pop(2)
0xd20: Return(); Pop(10)

0xd21: PushEmpty(bool, float, float, bool, float, float)
0xd22: @ lshHasAnimation(Stack[-3], Stack[-7])
0xd23: Pop(0)
0xd24: Push(Stack[-3])
0xd25: IF (Stack[-1] == 0) GOTO 0xd2c; Pop(1)

0xd26: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xd27: Pop(0)
0xd28: Push((bool) 0)
0xd29: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xd2a: Pop(1)
0xd2b: GOTO 0xd30

0xd2c: Push("Can't find lsh animation : ")
0xd2d: Pop(1); Push(Stack[-1] + Stack[-8]);
0xd2e: @ Trace(Stack[-1])
0xd2f: Pop(1)
0xd30: Return(); Pop(6)

0xd31: PushEmpty(bool, float, float, bool, float, float)
0xd32: @ lshHasAnimation(Stack[-3], Stack[-8])
0xd33: Pop(0)
0xd34: Push(Stack[-3])
0xd35: IF (Stack[-1] == 0) GOTO 0xd3b; Pop(1)

0xd36: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xd37: Pop(0)
0xd38: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xd39: Pop(0)
0xd3a: GOTO 0xd3f

0xd3b: Push("Can't find lsh animation : ")
0xd3c: Pop(1); Push(Stack[-1] + Stack[-9]);
0xd3d: @ Trace(Stack[-1])
0xd3e: Pop(1)
0xd3f: Return(); Pop(6)

0xd40: PushEmpty(bool, bool)
0xd41: PushEmpty(bool)
0xd42: Call2 0xe25

0xd43: Pop(0)
0xd44: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd45: @ lshHasSpeech(Stack[-1], Stack[-3])
0xd46: Pop(0)
0xd47: Push(Stack[-1])
0xd48: IF (Stack[-1] == 0) GOTO 0xd4d; Pop(1)

0xd49: @ lshPlaySpeech(Stack[-3])
0xd4a: Pop(0)
0xd4b: Stack[-4] = (bool) 1
0xd4c: Return(); Pop(2)

0xd4d: Stack[-4] = (bool) 0
0xd4e: Return(); Pop(2)

0xd4f: PushEmpty(bool)
0xd50: Call2 0xe25

0xd51: Pop(0)
0xd52: IF (Stack[-1] == 0) GOTO 0xd55; Pop(1)

0xd53: @ lshStopSpeech()
0xd54: Pop(0)
0xd55: Return(); Pop(0)

0xd56: PushEmpty(object, object)
0xd57: @ self(Stack[-1])
0xd58: Pop(0)
0xd59: Stack[-3] = Stack[-1]
0xd5a: Return(); Pop(2)

0xd5b: Stack[-1] = 0
0xd5c: PushEmpty(float, float)
0xd5d: Pop(0); Push(Stack[-3] | Stack[-3]);
0xd5e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xd5f: Push((float)0.0)
0xd60: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xd61: IF (Stack[-1] == 0) GOTO 0xd64; Pop(1)

0xd62: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xd63: Return(); Pop(2)

0xd64: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xd65: Return(); Pop(2)

0xd66: PushEmpty()
0xd67: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xd68: IF (Stack[-1] == 0) GOTO 0xd6b; Pop(1)

0xd69: Stack[-4] = Stack[-2]
0xd6a: Return(); Pop(0)

0xd6b: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xd6c: IF (Stack[-1] == 0) GOTO 0xd6f; Pop(1)

0xd6d: Stack[-4] = Stack[-1]
0xd6e: Return(); Pop(0)

0xd6f: Stack[-4] = Stack[-3]
0xd70: Return(); Pop(0)

0xd71: PushEmpty(int, int)
0xd72: @ GetVariable(Stack[-3], Stack[-1])
0xd73: Pop(0)
0xd74: Stack[-4] = Stack[-1]
0xd75: Return(); Pop(2)

0xd76: PushEmpty(object, object)
0xd77: @ CreateIntVector(Stack[-1])
0xd78: Pop(0)
0xd79: @@ add(Stack[-4])
0xd7a: Pop(0)
0xd7b: @@ add(Stack[-3])
0xd7c: Pop(0)
0xd7d: Push((int) 3)
0xd7e: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xd7f: Pop(1)
0xd80: Return(); Pop(2)

0xd81: Stack[-1] = 0
0xd82: PushEmpty(int, int)
0xd83: PushEmpty(object, string, int)
0xd84: Stack[-3] = Stack[-7]
0xd85: Stack[-2] = "money"
0xd86: Stack[-1] = Stack[-6]
0xd87: Call2 0xc21

0xd88: Pop(3)
0xd89: Push((int) 0)
0xd8a: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0xd8b: IF (Stack[-1] == 0) GOTO 0xd94; Pop(1)

0xd8c: Push("Money")
0xd8d: @ GetInvItemByName(Stack[-2], Stack[-1])
0xd8e: Pop(1)
0xd8f: PushEmpty(int, int)
0xd90: Stack[-2] = Stack[-3]
0xd91: Stack[-1] = Stack[-5]
0xd92: Call2 0xd76

0xd93: Pop(2)
0xd94: Return(); Pop(2)

0xd95: PushEmpty(int, int, bool, int, int, bool)
0xd96: @@ GetItemID(Stack[-3])
0xd97: Pop(0)
0xd98: Push("Category")
0xd99: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xd9a: Pop(1)
0xd9b: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xd9c: Pop(0)
0xd9d: Pop(0); Push((bool) Stack[-1] == 0)
0xd9e: IF (Stack[-1] == 0) GOTO 0xda2; Pop(1)

0xd9f: @@ DropItems(Stack[-8], Stack[-7])
0xda0: Pop(0)
0xda1: GOTO 0xda7

0xda2: PushEmpty(int, int)
0xda3: Stack[-2] = Stack[-5]
0xda4: Stack[-1] = Stack[-9]
0xda5: Call2 0xd76

0xda6: Pop(2)
0xda7: Return(); Pop(6)

0xda8: PushEmpty(object, object)
0xda9: @ CreateInvItem(Stack[-1])
0xdaa: Pop(0)
0xdab: @@ SetItemName(Stack[-4])
0xdac: Pop(0)
0xdad: PushEmpty(object, object, int)
0xdae: Stack[-3] = Stack[-8]
0xdaf: Stack[-2] = Stack[-4]
0xdb0: Stack[-1] = Stack[-6]
0xdb1: Call2 0xd95

0xdb2: Pop(3)
0xdb3: Return(); Pop(2)

0xdb4: Stack[-1] = 0
0xdb5: PushEmpty()
0xdb6: Pop(0); Push((bool) Stack[-2] == 0)
0xdb7: IF (Stack[-1] == 0) GOTO 0xdba; Pop(1)

0xdb8: Stack[-3] = (bool) 0
0xdb9: Return(); Pop(0)

0xdba: Push((int) 0)
0xdbb: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xdbc: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdbd: Push((int) 8)
0xdbe: @ SendWorldWndMessage(Stack[-1])
0xdbf: Pop(1)
0xdc0: GOTO 0xdca

0xdc1: Push((int) 0)
0xdc2: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xdc3: IF (Stack[-1] == 0) GOTO 0xdc8; Pop(1)

0xdc4: Push((int) 9)
0xdc5: @ SendWorldWndMessage(Stack[-1])
0xdc6: Pop(1)
0xdc7: GOTO 0xdca

0xdc8: Stack[-3] = (bool) 0
0xdc9: Return(); Pop(0)

0xdca: PushEmpty(float)
0xdcb: Stack[-1] = Stack[-2]
0xdcc: Call2 0xdd8

0xdcd: Pop(1)
0xdce: PushEmpty(bool, object, string, float, float, float)
0xdcf: Stack[-5] = Stack[-8]
0xdd0: Stack[-4] = "reputation"
0xdd1: Stack[-3] = Stack[-7]
0xdd2: Stack[-2] = (int) 0
0xdd3: Stack[-1] = (int) 1
0xdd4: Call2 0xc0b

0xdd5: Pop(6)
0xdd6: Stack[-3] = (bool) 1
0xdd7: Return(); Pop(0)

0xdd8: PushEmpty(object, object)
0xdd9: @ CreateFloatVector(Stack[-1])
0xdda: Pop(0)
0xddb: @@ add(Stack[-3])
0xddc: Pop(0)
0xddd: Push((int) 16)
0xdde: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xddf: Pop(1)
0xde0: Return(); Pop(2)

0xde1: Stack[-1] = 0
0xde2: PushEmpty(object, object)
0xde3: @ FindActor(Stack[-1], Stack[-4])
0xde4: Pop(0)
0xde5: Pop(0); Push((bool) Stack[-1] == 0)
0xde6: IF (Stack[-1] == 0) GOTO 0xde9; Pop(1)

0xde7: Stack[-5] = (bool) 0
0xde8: Return(); Pop(2)

0xde9: @ Trigger(Stack[-1], Stack[-3])
0xdea: Pop(0)
0xdeb: Stack[-5] = (bool) 1
0xdec: Return(); Pop(2)

0xded: Stack[-1] = 0
0xdee: PushEmpty(float, float)
0xdef: @ GetGameTime(Stack[-1])
0xdf0: Pop(0)
0xdf1: Push((int) 1)
0xdf2: PushEmpty(int)
0xdf3: Push((int) 24)
0xdf4: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xdf5: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xdf6: Return(); Pop(2)

0xdf7: PushEmpty(float, float)
0xdf8: @ GetGameTime(Stack[-1])
0xdf9: Pop(0)
0xdfa: PushEmpty(int)
0xdfb: Stack[-1] = Stack[-2]
0xdfc: Push((int) 24)
0xdfd: Stack[-5] = Stack[-2] % Stack[-1]; Pop(2);
0xdfe: Return(); Pop(2)

0xdff: PushEmpty()
0xe00: PushEmpty(int)
0xe01: Call2 0xdee

0xe02: Pop(0)
0xe03: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xe04: Return(); Pop(0)

0xe05: PushEmpty(string, string)
0xe06: Stack[-1] = "idle"
0xe07: Push(Stack[-3])
0xe08: IF (Stack[-1] == 0) GOTO 0xe0a; Pop(1)

0xe09: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xe0a: Stack[-4] = Stack[-1]
0xe0b: Return(); Pop(2)

0xe0c: PushEmpty(int, bool, int, bool)
0xe0d: Stack[-2] = (int) 0
0xe0e: Push("all")
0xe0f: PushEmpty(string, int)
0xe10: Stack[-1] = Stack[-5]
0xe11: Call2 0xe05

0xe12: Pop(1)
0xe13: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xe14: Pop(2)
0xe15: Pop(0); Push((bool) Stack[-1] == 0)
0xe16: IF (Stack[-1] == 0) GOTO 0xe18; Pop(1)

0xe17: GOTO 0xe1b

0xe18: Push((int) 1)
0xe19: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xe1a: GOTO 0xe0e

0xe1b: Stack[-5] = Stack[-2]
0xe1c: Return(); Pop(4)

0xe1d: Stack[-1] = (int) 515532
0xe1e: Return(); Pop(0)

0xe1f: Stack[-1] = (int) 514840
0xe20: Return(); Pop(0)

0xe21: Stack[-1] = "ui/NPC_Block.png"
0xe22: Return(); Pop(0)

0xe23: Stack[-1] = "ui/NPC_Block_b.png"
0xe24: Return(); Pop(0)

0xe25: Stack[-1] = (bool) 1
0xe26: Return(); Pop(0)

0xe27: PushEmpty()
0xe28: PushEmpty(bool, object, float)
0xe29: Stack[-2] = Stack[-5]
0xe2a: Stack[-1] = (float) 0.05
0xe2b: Call2 0xdb5

0xe2c: Pop(3)
0xe2d: Return(); Pop(0)

0xe2e: PushEmpty()
0xe2f: Push("k10q01")
0xe30: Push((int) 3)
0xe31: @ SetVariable(Stack[-2], Stack[-1])
0xe32: Pop(2)
0xe33: PushEmpty()
0xe34: Call2 0xfab

0xe35: Pop(0)
0xe36: PushEmpty(bool, string, string)
0xe37: Stack[-2] = "quest_k10_01"
0xe38: Stack[-1] = "remove_soldiers"
0xe39: Call2 0xde2

0xe3a: Pop(3)
0xe3b: PushEmpty(bool, string, string)
0xe3c: Stack[-2] = "quest_k10_01"
0xe3d: Stack[-1] = "init_prison"
0xe3e: Call2 0xde2

0xe3f: Pop(3)
0xe40: Return(); Pop(0)

0xe41: PushEmpty()
0xe42: Push("k10q01")
0xe43: Push((int) 5)
0xe44: @ SetVariable(Stack[-2], Stack[-1])
0xe45: Pop(2)
0xe46: PushEmpty()
0xe47: Call2 0xfb8

0xe48: Pop(0)
0xe49: PushEmpty(bool, string, string)
0xe4a: Stack[-2] = "quest_k10_01"
0xe4b: Stack[-1] = "free_prisoner"
0xe4c: Call2 0xde2

0xe4d: Pop(3)
0xe4e: Return(); Pop(0)

0xe4f: PushEmpty()
0xe50: Push("k11q01")
0xe51: Push((int) 2)
0xe52: @ SetVariable(Stack[-2], Stack[-1])
0xe53: Pop(2)
0xe54: PushEmpty()
0xe55: Call2 0xfc5

0xe56: Pop(0)
0xe57: PushEmpty(bool, string, string)
0xe58: Stack[-2] = "quest_k11_01"
0xe59: Stack[-1] = "init_kabak"
0xe5a: Call2 0xde2

0xe5b: Pop(3)
0xe5c: PushEmpty(bool, string, string)
0xe5d: Stack[-2] = "quest_k11_01"
0xe5e: Stack[-1] = "init_gun"
0xe5f: Call2 0xde2

0xe60: Pop(3)
0xe61: Return(); Pop(0)

0xe62: PushEmpty()
0xe63: Push("k11q01")
0xe64: Push((int) 9)
0xe65: @ SetVariable(Stack[-2], Stack[-1])
0xe66: Pop(2)
0xe67: Push("k11q01SoulCount")
0xe68: Push((int) 1)
0xe69: @ SetVariable(Stack[-2], Stack[-1])
0xe6a: Pop(2)
0xe6b: PushEmpty()
0xe6c: Call2 0xfd2

0xe6d: Pop(0)
0xe6e: Return(); Pop(0)

0xe6f: PushEmpty()
0xe70: PushEmpty()
0xe71: Call2 0xfdf

0xe72: Pop(0)
0xe73: PushEmpty(bool, string, string)
0xe74: Stack[-2] = "quest_k11_01"
0xe75: Stack[-1] = "completed"
0xe76: Call2 0xde2

0xe77: Pop(3)
0xe78: Return(); Pop(0)

0xe79: PushEmpty()
0xe7a: PushEmpty()
0xe7b: Call2 0xff9

0xe7c: Pop(0)
0xe7d: PushEmpty(bool, string, string)
0xe7e: Stack[-2] = "quest_k9_01"
0xe7f: Stack[-1] = "completed"
0xe80: Call2 0xde2

0xe81: Pop(3)
0xe82: Return(); Pop(0)

0xe83: PushEmpty()
0xe84: Push("playsound")
0xe85: Push("giveitem")
0xe86: @ TriggerWorld(Stack[-2], Stack[-1])
0xe87: Pop(2)
0xe88: Return(); Pop(0)

0xe89: PushEmpty()
0xe8a: PushEmpty()
0xe8b: Call2 0xfec

0xe8c: Pop(0)
0xe8d: Return(); Pop(0)

0xe8e: PushEmpty()
0xe8f: Push("ook11Block1")
0xe90: Push((int) 1)
0xe91: @ SetVariable(Stack[-2], Stack[-1])
0xe92: Pop(2)
0xe93: Return(); Pop(0)

0xe94: PushEmpty()
0xe95: Push("ook11Block2")
0xe96: Push((int) 1)
0xe97: @ SetVariable(Stack[-2], Stack[-1])
0xe98: Pop(2)
0xe99: Return(); Pop(0)

0xe9a: PushEmpty()
0xe9b: Push("ook11Block3")
0xe9c: Push((int) 1)
0xe9d: @ SetVariable(Stack[-2], Stack[-1])
0xe9e: Pop(2)
0xe9f: Return(); Pop(0)

0xea0: PushEmpty()
0xea1: Push("ook9Block1")
0xea2: Push((int) 1)
0xea3: @ SetVariable(Stack[-2], Stack[-1])
0xea4: Pop(2)
0xea5: Return(); Pop(0)

0xea6: PushEmpty()
0xea7: Push("ook12Block1")
0xea8: Push((int) 1)
0xea9: @ SetVariable(Stack[-2], Stack[-1])
0xeaa: Pop(2)
0xeab: Return(); Pop(0)

0xeac: PushEmpty()
0xead: Push("money 5000 is given")
0xeae: @ Trace(Stack[-1])
0xeaf: Pop(1)
0xeb0: PushEmpty(object, int)
0xeb1: Stack[-2] = Stack[-4]
0xeb2: Stack[-1] = (int) 5000
0xeb3: Call2 0xd82

0xeb4: Pop(2)
0xeb5: Return(); Pop(0)

0xeb6: PushEmpty()
0xeb7: Push("delta_pills is given")
0xeb8: @ Trace(Stack[-1])
0xeb9: Pop(1)
0xeba: PushEmpty(object, string, int)
0xebb: Stack[-3] = Stack[-5]
0xebc: Stack[-2] = "delta_pills"
0xebd: Stack[-1] = (int) 1
0xebe: Call2 0xda8

0xebf: Pop(3)
0xec0: Return(); Pop(0)

0xec1: PushEmpty()
0xec2: PushEmpty(bool, object)
0xec3: Stack[-1] = Stack[-3]
0xec4: Call2 0xf81

0xec5: Pop(1)
0xec6: IF (Stack[-1] == 0) GOTO 0xec9; Pop(1)

0xec7: Stack[-2] = (bool) 1
0xec8: Return(); Pop(0)

0xec9: Stack[-2] = (bool) 0
0xeca: Return(); Pop(0)

0xecb: PushEmpty()
0xecc: PushEmpty(int, string)
0xecd: Stack[-1] = "k10q01"
0xece: Call2 0xd71

0xecf: Pop(1)
0xed0: Push((int) 2)
0xed1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xed2: IF (Stack[-1] == 0) GOTO 0xed5; Pop(1)

0xed3: Stack[-2] = (bool) 1
0xed4: Return(); Pop(0)

0xed5: Stack[-2] = (bool) 0
0xed6: Return(); Pop(0)

0xed7: PushEmpty()
0xed8: PushEmpty(int, string)
0xed9: Stack[-1] = "k10q01"
0xeda: Call2 0xd71

0xedb: Pop(1)
0xedc: Push((int) 4)
0xedd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xede: IF (Stack[-1] == 0) GOTO 0xee1; Pop(1)

0xedf: Stack[-2] = (bool) 1
0xee0: Return(); Pop(0)

0xee1: Stack[-2] = (bool) 0
0xee2: Return(); Pop(0)

0xee3: PushEmpty()
0xee4: PushEmpty(int, string)
0xee5: Stack[-1] = "k11q01"
0xee6: Call2 0xd71

0xee7: Pop(1)
0xee8: Push((int) 1)
0xee9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xeea: IF (Stack[-1] == 0) GOTO 0xeed; Pop(1)

0xeeb: Stack[-2] = (bool) 1
0xeec: Return(); Pop(0)

0xeed: Stack[-2] = (bool) 0
0xeee: Return(); Pop(0)

0xeef: PushEmpty()
0xef0: PushEmpty(int, string)
0xef1: Stack[-1] = "k11q01"
0xef2: Call2 0xd71

0xef3: Pop(1)
0xef4: Push((int) 8)
0xef5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xef6: IF (Stack[-1] == 0) GOTO 0xef9; Pop(1)

0xef7: Stack[-2] = (bool) 1
0xef8: Return(); Pop(0)

0xef9: Stack[-2] = (bool) 0
0xefa: Return(); Pop(0)

0xefb: PushEmpty()
0xefc: PushEmpty(int, string)
0xefd: Stack[-1] = "k11q01"
0xefe: Call2 0xd71

0xeff: Pop(1)
0xf00: Push((int) 9)
0xf01: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf02: IF (Stack[-1] == 0) GOTO 0xf05; Pop(1)

0xf03: Stack[-2] = (bool) 1
0xf04: Return(); Pop(0)

0xf05: Stack[-2] = (bool) 0
0xf06: Return(); Pop(0)

0xf07: PushEmpty()
0xf08: PushEmpty(bool, object)
0xf09: Stack[-1] = Stack[-3]
0xf0a: Call2 0xf8c

0xf0b: Pop(1)
0xf0c: IF (Stack[-1] == 0) GOTO 0xf0f; Pop(1)

0xf0d: Stack[-2] = (bool) 1
0xf0e: Return(); Pop(0)

0xf0f: Stack[-2] = (bool) 0
0xf10: Return(); Pop(0)

0xf11: PushEmpty()
0xf12: PushEmpty(int, string)
0xf13: Stack[-1] = "k9q01"
0xf14: Call2 0xd71

0xf15: Pop(1)
0xf16: Push((int) 8)
0xf17: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf18: IF (Stack[-1] == 0) GOTO 0xf1b; Pop(1)

0xf19: Stack[-2] = (bool) 1
0xf1a: Return(); Pop(0)

0xf1b: Stack[-2] = (bool) 0
0xf1c: Return(); Pop(0)

0xf1d: PushEmpty()
0xf1e: PushEmpty(bool, object)
0xf1f: Stack[-1] = Stack[-3]
0xf20: Call2 0xf93

0xf21: Pop(1)
0xf22: IF (Stack[-1] == 0) GOTO 0xf25; Pop(1)

0xf23: Stack[-2] = (bool) 1
0xf24: Return(); Pop(0)

0xf25: Stack[-2] = (bool) 0
0xf26: Return(); Pop(0)

0xf27: PushEmpty()
0xf28: PushEmpty(bool, object)
0xf29: Stack[-1] = Stack[-3]
0xf2a: Call2 0xf99

0xf2b: Pop(1)
0xf2c: IF (Stack[-1] == 0) GOTO 0xf2f; Pop(1)

0xf2d: Stack[-2] = (bool) 1
0xf2e: Return(); Pop(0)

0xf2f: Stack[-2] = (bool) 0
0xf30: Return(); Pop(0)

0xf31: PushEmpty()
0xf32: PushEmpty(bool, object)
0xf33: Stack[-1] = Stack[-3]
0xf34: Call2 0xf9f

0xf35: Pop(1)
0xf36: IF (Stack[-1] == 0) GOTO 0xf39; Pop(1)

0xf37: Stack[-2] = (bool) 1
0xf38: Return(); Pop(0)

0xf39: Stack[-2] = (bool) 0
0xf3a: Return(); Pop(0)

0xf3b: PushEmpty()
0xf3c: PushEmpty(bool, object)
0xf3d: Stack[-1] = Stack[-3]
0xf3e: Call2 0xfa5

0xf3f: Pop(1)
0xf40: IF (Stack[-1] == 0) GOTO 0xf43; Pop(1)

0xf41: Stack[-2] = (bool) 1
0xf42: Return(); Pop(0)

0xf43: Stack[-2] = (bool) 0
0xf44: Return(); Pop(0)

0xf45: PushEmpty()
0xf46: PushEmpty(int, string)
0xf47: Stack[-1] = "ook11Block1"
0xf48: Call2 0xd71

0xf49: Pop(1)
0xf4a: Push((int) 0)
0xf4b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf4c: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4d: Stack[-2] = (bool) 1
0xf4e: Return(); Pop(0)

0xf4f: Stack[-2] = (bool) 0
0xf50: Return(); Pop(0)

0xf51: PushEmpty()
0xf52: PushEmpty(int, string)
0xf53: Stack[-1] = "ook11Block2"
0xf54: Call2 0xd71

0xf55: Pop(1)
0xf56: Push((int) 0)
0xf57: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf58: IF (Stack[-1] == 0) GOTO 0xf5b; Pop(1)

0xf59: Stack[-2] = (bool) 1
0xf5a: Return(); Pop(0)

0xf5b: Stack[-2] = (bool) 0
0xf5c: Return(); Pop(0)

0xf5d: PushEmpty()
0xf5e: PushEmpty(int, string)
0xf5f: Stack[-1] = "ook11Block3"
0xf60: Call2 0xd71

0xf61: Pop(1)
0xf62: Push((int) 0)
0xf63: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf64: IF (Stack[-1] == 0) GOTO 0xf67; Pop(1)

0xf65: Stack[-2] = (bool) 1
0xf66: Return(); Pop(0)

0xf67: Stack[-2] = (bool) 0
0xf68: Return(); Pop(0)

0xf69: PushEmpty()
0xf6a: PushEmpty(int, string)
0xf6b: Stack[-1] = "ook9Block1"
0xf6c: Call2 0xd71

0xf6d: Pop(1)
0xf6e: Push((int) 0)
0xf6f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf70: IF (Stack[-1] == 0) GOTO 0xf73; Pop(1)

0xf71: Stack[-2] = (bool) 1
0xf72: Return(); Pop(0)

0xf73: Stack[-2] = (bool) 0
0xf74: Return(); Pop(0)

0xf75: PushEmpty()
0xf76: PushEmpty(int, string)
0xf77: Stack[-1] = "ook12Block1"
0xf78: Call2 0xd71

0xf79: Pop(1)
0xf7a: Push((int) 0)
0xf7b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0xf7c: IF (Stack[-1] == 0) GOTO 0xf7f; Pop(1)

0xf7d: Stack[-2] = (bool) 1
0xf7e: Return(); Pop(0)

0xf7f: Stack[-2] = (bool) 0
0xf80: Return(); Pop(0)

0xf81: PushEmpty()
0xf82: PushEmpty(int)
0xf83: Call2 0xdf7

0xf84: Pop(0)
0xf85: Push((int) 19)
0xf86: Pop(2); Push((bool) Stack[-2] >= Stack[-1])
0xf87: IF (Stack[-1] == 0) GOTO 0xf8a; Pop(1)

0xf88: Stack[-2] = (bool) 1
0xf89: Return(); Pop(0)

0xf8a: Stack[-2] = (bool) 0
0xf8b: Return(); Pop(0)

0xf8c: PushEmpty(int, int)
0xf8d: Push("k11q01SoulCount")
0xf8e: @ GetVariable(Stack[-1], Stack[-2])
0xf8f: Pop(1)
0xf90: Push((int) 7)
0xf91: Stack[-5] = Stack[-2] >= Stack[-1]; Pop(1);
0xf92: Return(); Pop(2)

0xf93: PushEmpty()
0xf94: PushEmpty(bool)
0xf95: Call2 0x1051

0xf96: Stack[-3] = Stack[-1]
0xf97: Pop(1)
0xf98: Return(); Pop(0)

0xf99: PushEmpty()
0xf9a: PushEmpty(bool)
0xf9b: Call2 0x1065

0xf9c: Stack[-3] = Stack[-1]
0xf9d: Pop(1)
0xf9e: Return(); Pop(0)

0xf9f: PushEmpty()
0xfa0: PushEmpty(bool)
0xfa1: Call2 0x1059

0xfa2: Stack[-3] = Stack[-1]
0xfa3: Pop(1)
0xfa4: Return(); Pop(0)

0xfa5: PushEmpty()
0xfa6: PushEmpty(bool)
0xfa7: Call2 0x105f

0xfa8: Stack[-3] = Stack[-1]
0xfa9: Pop(1)
0xfaa: Return(); Pop(0)

0xfab: PushEmpty(object, object)
0xfac: Push((int) 450)
0xfad: Push((int) 1)
0xfae: Push((int) 527008)
0xfaf: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfb0: Pop(3)
0xfb1: PushEmpty(bool, object, int)
0xfb2: Stack[-2] = Stack[-4]
0xfb3: Stack[-1] = (int) 447
0xfb4: Call2 0x1013

0xfb5: Pop(3)
0xfb6: Return(); Pop(2)

0xfb7: Stack[-1] = 0
0xfb8: PushEmpty(object, object)
0xfb9: Push((int) 452)
0xfba: Push((int) 1)
0xfbb: Push((int) 527010)
0xfbc: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfbd: Pop(3)
0xfbe: PushEmpty(bool, object, int)
0xfbf: Stack[-2] = Stack[-4]
0xfc0: Stack[-1] = (int) 447
0xfc1: Call2 0x1013

0xfc2: Pop(3)
0xfc3: Return(); Pop(2)

0xfc4: Stack[-1] = 0
0xfc5: PushEmpty(object, object)
0xfc6: Push((int) 483)
0xfc7: Push((int) 1)
0xfc8: Push((int) 528050)
0xfc9: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfca: Pop(3)
0xfcb: PushEmpty(bool, object, int)
0xfcc: Stack[-2] = Stack[-4]
0xfcd: Stack[-1] = (int) 480
0xfce: Call2 0x1013

0xfcf: Pop(3)
0xfd0: Return(); Pop(2)

0xfd1: Stack[-1] = 0
0xfd2: PushEmpty(object, object)
0xfd3: Push((int) 492)
0xfd4: Push((int) 1)
0xfd5: Push((int) 528059)
0xfd6: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfd7: Pop(3)
0xfd8: PushEmpty(bool, object, int)
0xfd9: Stack[-2] = Stack[-4]
0xfda: Stack[-1] = (int) 480
0xfdb: Call2 0x1013

0xfdc: Pop(3)
0xfdd: Return(); Pop(2)

0xfde: Stack[-1] = 0
0xfdf: PushEmpty(object, object)
0xfe0: Push((int) 499)
0xfe1: Push((int) 1)
0xfe2: Push((int) 528066)
0xfe3: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xfe4: Pop(3)
0xfe5: PushEmpty(bool, object, int)
0xfe6: Stack[-2] = Stack[-4]
0xfe7: Stack[-1] = (int) 480
0xfe8: Call2 0x1013

0xfe9: Pop(3)
0xfea: Return(); Pop(2)

0xfeb: Stack[-1] = 0
0xfec: PushEmpty(object, object)
0xfed: Push((int) 762)
0xfee: Push((int) 2)
0xfef: Push((int) 539747)
0xff0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xff1: Pop(3)
0xff2: PushEmpty(bool, object, int)
0xff3: Stack[-2] = Stack[-4]
0xff4: Stack[-1] = (int) 757
0xff5: Call2 0x1013

0xff6: Pop(3)
0xff7: Return(); Pop(2)

0xff8: Stack[-1] = 0
0xff9: PushEmpty(object, object)
0xffa: Push((int) 526)
0xffb: Push((int) 1)
0xffc: Push((int) 529818)
0xffd: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xffe: Pop(3)
0xfff: PushEmpty(bool, object, int)
0x1000: Stack[-2] = Stack[-4]
0x1001: Stack[-1] = (int) 517
0x1002: Call2 0x1013

0x1003: Pop(3)
0x1004: Return(); Pop(2)

0x1005: Stack[-1] = 0
0x1006: PushEmpty(object, object)
0x1007: @ GetDiaryRoot(Stack[-1])
0x1008: Pop(0)
0x1009: Pop(0); Push((bool) Stack[-1] == 0)
0x100a: IF (Stack[-1] == 0) GOTO 0x1010; Pop(1)

0x100b: Push("Can't retrieve diary root")
0x100c: @ Trace(Stack[-1])
0x100d: Pop(1)
0x100e: Stack[-3] = (bool) 0
0x100f: Return(); Pop(2)

0x1010: Stack[-3] = Stack[-1]
0x1011: Return(); Pop(2)

0x1012: Stack[-1] = 0
0x1013: PushEmpty(object, object, int, object, object, int)
0x1014: PushEmpty(object)
0x1015: Call2 0x1006

0x1016: Stack[-4] = Stack[-1]
0x1017: Pop(1)
0x1018: @@ Find(Stack[-7], Stack[-2])
0x1019: Pop(0)
0x101a: Pop(0); Push((bool) Stack[-2] == 0)
0x101b: IF (Stack[-1] == 0) GOTO 0x1022; Pop(1)

0x101c: Push("Can't find diary parent with id: ")
0x101d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x101e: @ Trace(Stack[-1])
0x101f: Pop(1)
0x1020: Stack[-9] = (bool) 0
0x1021: Return(); Pop(6)

0x1022: @@ AddChild(Stack[-8])
0x1023: Pop(0)
0x1024: Push((int) 7)
0x1025: @ SendWorldWndMessage(Stack[-1])
0x1026: Pop(1)
0x1027: @@ GetCategory(Stack[-1])
0x1028: Pop(0)
0x1029: @ SetDiarySection(Stack[-1])
0x102a: Pop(0)
0x102b: Stack[-9] = (bool) 0
0x102c: Return(); Pop(6)

0x102d: Stack[-2] = 0
0x102e: Stack[-3] = 0
0x102f: PushEmpty(int, int)
0x1030: Push("branch")
0x1031: @ GetVariable(Stack[-1], Stack[-2])
0x1032: Pop(1)
0x1033: Push((int) 0)
0x1034: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1035: IF (Stack[-1] == 0) GOTO 0x1039; Pop(1)

0x1036: Stack[-3] = (int) 1
0x1037: Return(); Pop(2)

0x1038: GOTO 0x103e

0x1039: Push((int) 1)
0x103a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x103b: IF (Stack[-1] == 0) GOTO 0x103e; Pop(1)

0x103c: Stack[-3] = (int) 2
0x103d: Return(); Pop(2)

0x103e: Stack[-3] = (int) 3
0x103f: Return(); Pop(2)

0x1040: PushEmpty(int, int)
0x1041: Push("k2system_danko_day")
0x1042: @ GetVariable(Stack[-1], Stack[-2])
0x1043: Pop(1)
0x1044: Stack[-3] = Stack[-1]
0x1045: Return(); Pop(2)

0x1046: PushEmpty(int, int, int, int)
0x1047: PushEmpty(int)
0x1048: Call2 0x1040

0x1049: Stack[-3] = Stack[-1]
0x104a: Pop(1)
0x104b: Push("k2system_danko_state")
0x104c: Pop(1); Push(Stack[-1] + Stack[-3]);
0x104d: @ GetVariable(Stack[-1], Stack[-2])
0x104e: Pop(1)
0x104f: Stack[-5] = Stack[-1]
0x1050: Return(); Pop(4)

0x1051: PushEmpty(int)
0x1052: Call2 0xdee

0x1053: Pop(0)
0x1054: PushEmpty(int)
0x1055: Call2 0x1040

0x1056: Pop(0)
0x1057: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x1058: Return(); Pop(0)

0x1059: PushEmpty(int)
0x105a: Call2 0x1046

0x105b: Pop(0)
0x105c: Push((int) 2)
0x105d: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x105e: Return(); Pop(0)

0x105f: PushEmpty(int)
0x1060: Call2 0x1046

0x1061: Pop(0)
0x1062: Push((int) 3)
0x1063: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x1064: Return(); Pop(0)

0x1065: PushEmpty(int)
0x1066: Call2 0x1046

0x1067: Pop(0)
0x1068: Push((int) 0)
0x1069: Stack[-3] = Stack[-2] == Stack[-1]; Pop(2);
0x106a: Return(); Pop(0)

0x106b: PushEmpty(int, int)
0x106c: Push("mt_block")
0x106d: @ GetVariable(Stack[-1], Stack[-2])
0x106e: Pop(1)
0x106f: Pop(0); Push((bool) Stack[-1] == 0)
0x1070: IF (Stack[-1] == 0) GOTO 0x107b; Pop(1)

0x1071: PushEmpty(int, object)
0x1072: Stack[-1] = Stack[-5]
0x1073: Push(-2, 1); TaskCall(4)
0x1074: Call2 0x5b3

0x1075: Pop(-2, 1); TaskReturn
0x1076: Pop(2)
0x1077: Push("mt_block")
0x1078: Push((int) 1)
0x1079: @ SetVariable(Stack[-2], Stack[-1])
0x107a: Pop(2)
0x107b: PushEmpty(bool, int)
0x107c: Stack[-1] = (int) 10
0x107d: Call2 0xdff

0x107e: Pop(1)
0x107f: IF (Stack[-1] == 0) GOTO 0x1087; Pop(1)

0x1080: PushEmpty(int, object)
0x1081: Stack[-1] = Stack[-5]
0x1082: Push(-2, 1); TaskCall(0)
0x1083: Call2 0x0

0x1084: Pop(-2, 1); TaskReturn
0x1085: Pop(2)
0x1086: Return(); Pop(2)

0x1087: PushEmpty(bool, int)
0x1088: Stack[-1] = (int) 9
0x1089: Call2 0xdff

0x108a: Pop(1)
0x108b: IF (Stack[-1] == 0) GOTO 0x1093; Pop(1)

0x108c: PushEmpty(int, object)
0x108d: Stack[-1] = Stack[-5]
0x108e: Push(-2, 1); TaskCall(6)
0x108f: Call2 0x6b9

0x1090: Pop(-2, 1); TaskReturn
0x1091: Pop(2)
0x1092: Return(); Pop(2)

0x1093: PushEmpty(bool, int)
0x1094: Stack[-1] = (int) 11
0x1095: Call2 0xdff

0x1096: Pop(1)
0x1097: IF (Stack[-1] == 0) GOTO 0x109f; Pop(1)

0x1098: PushEmpty(int, object)
0x1099: Stack[-1] = Stack[-5]
0x109a: Push(-2, 1); TaskCall(2)
0x109b: Call2 0x1b1

0x109c: Pop(-2, 1); TaskReturn
0x109d: Pop(2)
0x109e: Return(); Pop(2)

0x109f: PushEmpty(bool, int)
0x10a0: Stack[-1] = (int) 12
0x10a1: Call2 0xdff

0x10a2: Pop(1)
0x10a3: IF (Stack[-1] == 0) GOTO 0x10ab; Pop(1)

0x10a4: PushEmpty(int, object)
0x10a5: Stack[-1] = Stack[-5]
0x10a6: Push(-2, 1); TaskCall(8)
0x10a7: Call2 0x8a8

0x10a8: Pop(-2, 1); TaskReturn
0x10a9: Pop(2)
0x10aa: Return(); Pop(2)

0x10ab: PushEmpty(int, object)
0x10ac: Stack[-1] = Stack[-5]
0x10ad: Push(-2, 1); TaskCall(10)
0x10ae: Call2 0xa2c

0x10af: Pop(-2, 1); TaskReturn
0x10b0: Pop(2)
0x10b1: Return(); Pop(2)

