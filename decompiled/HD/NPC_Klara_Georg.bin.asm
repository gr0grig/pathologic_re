GlobalVarCount = 2
	G_VAR_0 object 
	G_VAR_1 bool 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Anger
	SetMessage
	ClearReplies
	AddReply
	Jeer
	all
	idle
	Distrust
	Neutral
	Grin
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
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	reputation
	ui/NPC_Georg.png
	ui/NPC_Georg_b.png
	k1q02
	k1q02GeorgGotoMaria
	pt_map_maria
	AddMark
	beta_pills 5 is given
	beta_pills
	ook3Georg1
	k5q01
	ook10Georg1
	k9q01
	quest_k9_01
	init_termitnik2
	ook1Georg1
	raincoat_repel is given
	raincoat_repel
	fail
	revolver ammo6 is given
	revolver_ammo
	ShowMap
	k3q03
	k10q01
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xd10
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xd2 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3b9 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x4c0 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5fb Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x74b Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9ff Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbe8 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xce6 Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xd5c Vars = (int)
		EVENT_6 Op = 0xd82 Vars = ()
		EVENT_5 Op = 0xd91 Vars = ()
		EVENT_45 Op = 0xd9e Vars = (bool)
		EVENT_0 Op = 0xdaa Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xe55

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x101e

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x101c

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x1020

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x1022

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x1204

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
0x31: Call2 0xf6b

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xeac

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
0x48: Call2 0xe9a

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
0x56: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x10ca

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x5e: PushEmpty(bool, object)
0x5f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x60: Call2 0x1142

0x61: Pop(1)
0x62: IF (Stack[-1] == 0) GOTO 0x64; Pop(1)

0x63: Stack[-1] = (bool) 1
0x64: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x65: PushEmpty(object, object)
0x66: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x67: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x68: Call2 0x107d

0x69: Pop(2)
0x6a: PushEmpty(string)
0x6b: Stack[-1] = "Anger"
0x6c: Call2 0xbc

0x6d: Pop(1)
0x6e: Push((int) 524754)
0x6f: @@ SetMessage(Stack[-1])
0x70: Pop(1)
0x71: @@ ClearReplies()
0x72: Pop(0)
0x73: Push((int) 526909)
0x74: Push((int) 28202)
0x75: Push((int) 28201)
0x76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77: Pop(3)
0x78: GOTO 0x9e

0x79: PushEmpty(string)
0x7a: Stack[-1] = "Jeer"
0x7b: Call2 0xbc

0x7c: Pop(1)
0x7d: Push((int) 524756)
0x7e: @@ SetMessage(Stack[-1])
0x7f: Pop(1)
0x80: @@ ClearReplies()
0x81: Pop(0)
0x82: PushEmpty(bool, object)
0x83: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x84: Call2 0x10d6

0x85: Pop(1)
0x86: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x87: Push((int) 524763)
0x88: Push((int) 26088)
0x89: Push((int) 26087)
0x8a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b: Pop(3)
0x8c: PushEmpty(bool, object)
0x8d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x8e: Call2 0x10ca

0x8f: Pop(1)
0x90: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x91: Push((int) 530365)
0x92: Push((int) -1)
0x93: Push((int) 31738)
0x94: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x95: Pop(3)
0x96: Push((int) 524757)
0x97: Push((int) -1)
0x98: Push((int) 26081)
0x99: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9a: Pop(3)
0x9b: GOTO 0x9e

0x9c: Return(); Pop(0)

0x9d: GOTO 0x55

0x9e: PushEmpty(bool)
0x9f: Call2 0x1024

0xa0: Pop(0)
0xa1: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa2: @ lshWaitForAnimEnd()
0xa3: Pop(0)
0xa4: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa5: IF (Stack[-1] == 0) GOTO 0xa7; Pop(1)

0xa6: GOTO 0xac

0xa7: PushEmpty(string)
0xa8: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xa9: Call2 0xf36

0xaa: Pop(1)
0xab: GOTO 0xa2

0xac: GOTO 0xbb

0xad: Push("all")
0xae: Push("idle")
0xaf: @ PlayAnimation(Stack[-2], Stack[-1])
0xb0: Pop(2)
0xb1: @ WaitForAnimEnd()
0xb2: Pop(0)
0xb3: Push( Stack[3 + Tasks[-1].StackPointer] )
0xb4: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb5: GOTO 0xbb

0xb6: Push("all")
0xb7: Push("idle")
0xb8: @ PlayAnimation(Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: GOTO 0xb1

0xbb: Return(); Pop(0)

0xbc: PushEmpty()
0xbd: PushEmpty(bool)
0xbe: Call2 0x1024

0xbf: Pop(0)
0xc0: Pop(1); Push((bool) Stack[-1] == 0)
0xc1: IF (Stack[-1] == 0) GOTO 0xc3; Pop(1)

0xc2: Return(); Pop(0)

0xc3: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xc4: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xc5: Return(); Pop(0)

0xc6: PushEmpty(string, bool)
0xc7: Stack[-2] = Stack[-3]
0xc8: Push("")
0xc9: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xca: IF (Stack[-1] == 0) GOTO 0xcd; Pop(1)

0xcb: Stack[-1] = (bool) 0
0xcc: GOTO 0xce

0xcd: Stack[-1] = (bool) 1
0xce: Call2 0xf46

0xcf: Pop(2)
0xd0: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xd1: Return(); Pop(0)

0xd2: PushEmpty()
0xd3: Push((int) 1)
0xd4: IF (Stack[-1] == 0) GOTO 0x317; Pop(1)

0xd5: PushEmpty()
0xd6: Call2 0xf64

0xd7: Pop(0)
0xd8: Push((int) 28456)
0xd9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xda: IF (Stack[-1] == 0) GOTO 0xe5; Pop(1)

0xdb: PushEmpty(object, object)
0xdc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xdd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xde: Call2 0x1026

0xdf: Pop(2)
0xe0: PushEmpty(object, object)
0xe1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe3: Call2 0x10ba

0xe4: Pop(2)
0xe5: Push((int) 26079)
0xe6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xe7: IF (Stack[-1] == 0) GOTO 0xf2; Pop(1)

0xe8: PushEmpty(object, object)
0xe9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xea: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xeb: Call2 0x1026

0xec: Pop(2)
0xed: PushEmpty(object, object)
0xee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf0: Call2 0x10ba

0xf1: Pop(2)
0xf2: Push((int) 26091)
0xf3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: PushEmpty(object, object)
0xf6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf8: Call2 0x103d

0xf9: Pop(2)
0xfa: Push((int) 28475)
0xfb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0xfd: PushEmpty(object, object)
0xfe: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xff: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x100: Call2 0x103d

0x101: Pop(2)
0x102: Push((int) 28220)
0x103: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: PushEmpty(object, object)
0x106: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x107: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x108: Call2 0x1083

0x109: Pop(2)
0x10a: Push((int) 28221)
0x10b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x10c: IF (Stack[-1] == 0) GOTO 0x112; Pop(1)

0x10d: PushEmpty(object, object)
0x10e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x10f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x110: Call2 0x1083

0x111: Pop(2)
0x112: Push((int) 28218)
0x113: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x114: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x115: PushEmpty(object, object)
0x116: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x117: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x118: Call2 0x1083

0x119: Pop(2)
0x11a: Push((int) 31738)
0x11b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x11d: PushEmpty(object, object)
0x11e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x11f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x120: Call2 0x1026

0x121: Pop(2)
0x122: PushEmpty(object, object)
0x123: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x124: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x125: Call2 0x10ba

0x126: Pop(2)
0x127: Push((int) 26078)
0x128: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x129: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x12a: PushEmpty(bool)
0x12b: Stack[-1] = (bool) 0
0x12c: PushEmpty(bool, object)
0x12d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x12e: Call2 0x10ca

0x12f: Pop(1)
0x130: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x131: PushEmpty(bool, object)
0x132: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x133: Call2 0x1142

0x134: Pop(1)
0x135: IF (Stack[-1] == 0) GOTO 0x137; Pop(1)

0x136: Stack[-1] = (bool) 1
0x137: IF (Stack[-1] == 0) GOTO 0x14c; Pop(1)

0x138: PushEmpty(object, object)
0x139: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x13a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x13b: Call2 0x107d

0x13c: Pop(2)
0x13d: PushEmpty(string)
0x13e: Stack[-1] = "Anger"
0x13f: Call2 0xbc

0x140: Pop(1)
0x141: Push((int) 524754)
0x142: @@ SetMessage(Stack[-1])
0x143: Pop(1)
0x144: @@ ClearReplies()
0x145: Pop(0)
0x146: Push((int) 526909)
0x147: Push((int) 28202)
0x148: Push((int) 28201)
0x149: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14a: Pop(3)
0x14b: Return(); Pop(0)

0x14c: PushEmpty(string)
0x14d: Stack[-1] = "Jeer"
0x14e: Call2 0xbc

0x14f: Pop(1)
0x150: Push((int) 524756)
0x151: @@ SetMessage(Stack[-1])
0x152: Pop(1)
0x153: @@ ClearReplies()
0x154: Pop(0)
0x155: PushEmpty(bool, object)
0x156: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x157: Call2 0x10d6

0x158: Pop(1)
0x159: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x15a: Push((int) 524763)
0x15b: Push((int) 26088)
0x15c: Push((int) 26087)
0x15d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15e: Pop(3)
0x15f: PushEmpty(bool, object)
0x160: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x161: Call2 0x10ca

0x162: Pop(1)
0x163: IF (Stack[-1] == 0) GOTO 0x169; Pop(1)

0x164: Push((int) 530365)
0x165: Push((int) -1)
0x166: Push((int) 31738)
0x167: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x168: Pop(3)
0x169: Push((int) 524757)
0x16a: Push((int) -1)
0x16b: Push((int) 26081)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Return(); Pop(0)

0x16f: Push((int) 26088)
0x170: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x171: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x172: PushEmpty(string)
0x173: Stack[-1] = "Distrust"
0x174: Call2 0xbc

0x175: Pop(1)
0x176: Push((int) 524764)
0x177: @@ SetMessage(Stack[-1])
0x178: Pop(1)
0x179: @@ ClearReplies()
0x17a: Pop(0)
0x17b: Push((int) 524765)
0x17c: Push((int) 26090)
0x17d: Push((int) 26089)
0x17e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x17f: Pop(3)
0x180: Push((int) 526923)
0x181: Push((int) 28216)
0x182: Push((int) 28215)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Return(); Pop(0)

0x186: Push((int) 28216)
0x187: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x19d; Pop(1)

0x189: PushEmpty(string)
0x18a: Stack[-1] = "Anger"
0x18b: Call2 0xbc

0x18c: Pop(1)
0x18d: Push((int) 526924)
0x18e: @@ SetMessage(Stack[-1])
0x18f: Pop(1)
0x190: @@ ClearReplies()
0x191: Pop(0)
0x192: Push((int) 526925)
0x193: Push((int) 28219)
0x194: Push((int) 28217)
0x195: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x196: Pop(3)
0x197: Push((int) 526926)
0x198: Push((int) -1)
0x199: Push((int) 28218)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Return(); Pop(0)

0x19d: Push((int) 28219)
0x19e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1a0: PushEmpty(string)
0x1a1: Stack[-1] = "Anger"
0x1a2: Call2 0xbc

0x1a3: Pop(1)
0x1a4: Push((int) 526927)
0x1a5: @@ SetMessage(Stack[-1])
0x1a6: Pop(1)
0x1a7: @@ ClearReplies()
0x1a8: Pop(0)
0x1a9: Push((int) 526928)
0x1aa: Push((int) -1)
0x1ab: Push((int) 28220)
0x1ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ad: Pop(3)
0x1ae: Push((int) 526929)
0x1af: Push((int) -1)
0x1b0: Push((int) 28221)
0x1b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b2: Pop(3)
0x1b3: Return(); Pop(0)

0x1b4: Push((int) 26090)
0x1b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1b6: IF (Stack[-1] == 0) GOTO 0x1cb; Pop(1)

0x1b7: PushEmpty(string)
0x1b8: Stack[-1] = "Neutral"
0x1b9: Call2 0xbc

0x1ba: Pop(1)
0x1bb: Push((int) 524766)
0x1bc: @@ SetMessage(Stack[-1])
0x1bd: Pop(1)
0x1be: @@ ClearReplies()
0x1bf: Pop(0)
0x1c0: Push((int) 526915)
0x1c1: Push((int) 28208)
0x1c2: Push((int) 28207)
0x1c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c4: Pop(3)
0x1c5: Push((int) 526930)
0x1c6: Push((int) 28223)
0x1c7: Push((int) 28222)
0x1c8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1c9: Pop(3)
0x1ca: Return(); Pop(0)

0x1cb: Push((int) 28223)
0x1cc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1cd: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1ce: PushEmpty(string)
0x1cf: Stack[-1] = "Anger"
0x1d0: Call2 0xbc

0x1d1: Pop(1)
0x1d2: Push((int) 526931)
0x1d3: @@ SetMessage(Stack[-1])
0x1d4: Pop(1)
0x1d5: @@ ClearReplies()
0x1d6: Pop(0)
0x1d7: Push((int) 526932)
0x1d8: Push((int) 28208)
0x1d9: Push((int) 28224)
0x1da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1db: Pop(3)
0x1dc: Return(); Pop(0)

0x1dd: Push((int) 28208)
0x1de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1df: IF (Stack[-1] == 0) GOTO 0x1f4; Pop(1)

0x1e0: PushEmpty(string)
0x1e1: Stack[-1] = "Distrust"
0x1e2: Call2 0xbc

0x1e3: Pop(1)
0x1e4: Push((int) 526916)
0x1e5: @@ SetMessage(Stack[-1])
0x1e6: Pop(1)
0x1e7: @@ ClearReplies()
0x1e8: Pop(0)
0x1e9: Push((int) 526917)
0x1ea: Push((int) 28210)
0x1eb: Push((int) 28209)
0x1ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ed: Pop(3)
0x1ee: Push((int) 527156)
0x1ef: Push((int) 28460)
0x1f0: Push((int) 28459)
0x1f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f2: Pop(3)
0x1f3: Return(); Pop(0)

0x1f4: Push((int) 28460)
0x1f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1f6: IF (Stack[-1] == 0) GOTO 0x206; Pop(1)

0x1f7: PushEmpty(string)
0x1f8: Stack[-1] = "Distrust"
0x1f9: Call2 0xbc

0x1fa: Pop(1)
0x1fb: Push((int) 527157)
0x1fc: @@ SetMessage(Stack[-1])
0x1fd: Pop(1)
0x1fe: @@ ClearReplies()
0x1ff: Pop(0)
0x200: Push((int) 527158)
0x201: Push((int) 28210)
0x202: Push((int) 28461)
0x203: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x204: Pop(3)
0x205: Return(); Pop(0)

0x206: Push((int) 28210)
0x207: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x208: IF (Stack[-1] == 0) GOTO 0x21d; Pop(1)

0x209: PushEmpty(string)
0x20a: Stack[-1] = "Distrust"
0x20b: Call2 0xbc

0x20c: Pop(1)
0x20d: Push((int) 526918)
0x20e: @@ SetMessage(Stack[-1])
0x20f: Pop(1)
0x210: @@ ClearReplies()
0x211: Pop(0)
0x212: Push((int) 526919)
0x213: Push((int) 28212)
0x214: Push((int) 28211)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Push((int) 527159)
0x218: Push((int) 28464)
0x219: Push((int) 28463)
0x21a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x21b: Pop(3)
0x21c: Return(); Pop(0)

0x21d: Push((int) 28464)
0x21e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21f: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x220: PushEmpty(string)
0x221: Stack[-1] = "Distrust"
0x222: Call2 0xbc

0x223: Pop(1)
0x224: Push((int) 527160)
0x225: @@ SetMessage(Stack[-1])
0x226: Pop(1)
0x227: @@ ClearReplies()
0x228: Pop(0)
0x229: Push((int) 527161)
0x22a: Push((int) 28214)
0x22b: Push((int) 28465)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Push((int) 28212)
0x230: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x231: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x232: PushEmpty(string)
0x233: Stack[-1] = "Anger"
0x234: Call2 0xbc

0x235: Pop(1)
0x236: Push((int) 526920)
0x237: @@ SetMessage(Stack[-1])
0x238: Pop(1)
0x239: @@ ClearReplies()
0x23a: Pop(0)
0x23b: Push((int) 526921)
0x23c: Push((int) 28214)
0x23d: Push((int) 28213)
0x23e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x23f: Pop(3)
0x240: Push((int) 527166)
0x241: Push((int) 28214)
0x242: Push((int) 28471)
0x243: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x244: Pop(3)
0x245: Return(); Pop(0)

0x246: Push((int) 28214)
0x247: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x248: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x249: PushEmpty(string)
0x24a: Stack[-1] = "Anger"
0x24b: Call2 0xbc

0x24c: Pop(1)
0x24d: Push((int) 526922)
0x24e: @@ SetMessage(Stack[-1])
0x24f: Pop(1)
0x250: @@ ClearReplies()
0x251: Pop(0)
0x252: Push((int) 527162)
0x253: Push((int) 28467)
0x254: Push((int) 28466)
0x255: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x256: Pop(3)
0x257: Push((int) 527167)
0x258: Push((int) 28467)
0x259: Push((int) 28473)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Return(); Pop(0)

0x25d: Push((int) 28467)
0x25e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x25f: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x260: PushEmpty(string)
0x261: Stack[-1] = "Anger"
0x262: Call2 0xbc

0x263: Pop(1)
0x264: Push((int) 527163)
0x265: @@ SetMessage(Stack[-1])
0x266: Pop(1)
0x267: @@ ClearReplies()
0x268: Pop(0)
0x269: Push((int) 527164)
0x26a: Push((int) 28469)
0x26b: Push((int) 28468)
0x26c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x26d: Pop(3)
0x26e: Push((int) 527169)
0x26f: Push((int) 28477)
0x270: Push((int) 28476)
0x271: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x272: Pop(3)
0x273: Return(); Pop(0)

0x274: Push((int) 28477)
0x275: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x276: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x277: PushEmpty(string)
0x278: Stack[-1] = "Neutral"
0x279: Call2 0xbc

0x27a: Pop(1)
0x27b: Push((int) 527170)
0x27c: @@ SetMessage(Stack[-1])
0x27d: Pop(1)
0x27e: @@ ClearReplies()
0x27f: Pop(0)
0x280: Push((int) 527171)
0x281: Push((int) 28469)
0x282: Push((int) 28478)
0x283: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x284: Pop(3)
0x285: Return(); Pop(0)

0x286: Push((int) 28469)
0x287: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x288: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x289: PushEmpty(string)
0x28a: Stack[-1] = "Distrust"
0x28b: Call2 0xbc

0x28c: Pop(1)
0x28d: Push((int) 527165)
0x28e: @@ SetMessage(Stack[-1])
0x28f: Pop(1)
0x290: @@ ClearReplies()
0x291: Pop(0)
0x292: Push((int) 524767)
0x293: Push((int) -1)
0x294: Push((int) 26091)
0x295: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x296: Pop(3)
0x297: Push((int) 527168)
0x298: Push((int) -1)
0x299: Push((int) 28475)
0x29a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29b: Pop(3)
0x29c: Return(); Pop(0)

0x29d: Push((int) 28202)
0x29e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29f: IF (Stack[-1] == 0) GOTO 0x2b4; Pop(1)

0x2a0: PushEmpty(string)
0x2a1: Stack[-1] = "Anger"
0x2a2: Call2 0xbc

0x2a3: Pop(1)
0x2a4: Push((int) 526910)
0x2a5: @@ SetMessage(Stack[-1])
0x2a6: Pop(1)
0x2a7: @@ ClearReplies()
0x2a8: Pop(0)
0x2a9: Push((int) 527148)
0x2aa: Push((int) 28450)
0x2ab: Push((int) 28448)
0x2ac: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ad: Pop(3)
0x2ae: Push((int) 527149)
0x2af: Push((int) 28450)
0x2b0: Push((int) 28449)
0x2b1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b2: Pop(3)
0x2b3: Return(); Pop(0)

0x2b4: Push((int) 28450)
0x2b5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2b6: IF (Stack[-1] == 0) GOTO 0x2c6; Pop(1)

0x2b7: PushEmpty(string)
0x2b8: Stack[-1] = "Neutral"
0x2b9: Call2 0xbc

0x2ba: Pop(1)
0x2bb: Push((int) 527150)
0x2bc: @@ SetMessage(Stack[-1])
0x2bd: Pop(1)
0x2be: @@ ClearReplies()
0x2bf: Pop(0)
0x2c0: Push((int) 526911)
0x2c1: Push((int) 28452)
0x2c2: Push((int) 28203)
0x2c3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c4: Pop(3)
0x2c5: Return(); Pop(0)

0x2c6: Push((int) 28452)
0x2c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2c8: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2c9: PushEmpty(string)
0x2ca: Stack[-1] = "Neutral"
0x2cb: Call2 0xbc

0x2cc: Pop(1)
0x2cd: Push((int) 527151)
0x2ce: @@ SetMessage(Stack[-1])
0x2cf: Pop(1)
0x2d0: @@ ClearReplies()
0x2d1: Pop(0)
0x2d2: Push((int) 527152)
0x2d3: Push((int) 28204)
0x2d4: Push((int) 28453)
0x2d5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d6: Pop(3)
0x2d7: Push((int) 527153)
0x2d8: Push((int) 28204)
0x2d9: Push((int) 28454)
0x2da: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2db: Pop(3)
0x2dc: Return(); Pop(0)

0x2dd: Push((int) 28204)
0x2de: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2f4; Pop(1)

0x2e0: PushEmpty(string)
0x2e1: Stack[-1] = "Jeer"
0x2e2: Call2 0xbc

0x2e3: Pop(1)
0x2e4: Push((int) 526912)
0x2e5: @@ SetMessage(Stack[-1])
0x2e6: Pop(1)
0x2e7: @@ ClearReplies()
0x2e8: Pop(0)
0x2e9: Push((int) 527146)
0x2ea: Push((int) 28447)
0x2eb: Push((int) 28446)
0x2ec: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ed: Pop(3)
0x2ee: Push((int) 524755)
0x2ef: Push((int) -1)
0x2f0: Push((int) 26079)
0x2f1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f2: Pop(3)
0x2f3: Return(); Pop(0)

0x2f4: Push((int) 28447)
0x2f5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x30b; Pop(1)

0x2f7: PushEmpty(string)
0x2f8: Stack[-1] = "Jeer"
0x2f9: Call2 0xbc

0x2fa: Pop(1)
0x2fb: Push((int) 527147)
0x2fc: @@ SetMessage(Stack[-1])
0x2fd: Pop(1)
0x2fe: @@ ClearReplies()
0x2ff: Pop(0)
0x300: Push((int) 527154)
0x301: Push((int) -1)
0x302: Push((int) 28456)
0x303: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x304: Pop(3)
0x305: Push((int) 527155)
0x306: Push((int) -1)
0x307: Push((int) 28457)
0x308: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x309: Pop(3)
0x30a: Return(); Pop(0)

0x30b: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x30c: PushEmpty(bool)
0x30d: Call2 0x1024

0x30e: Pop(0)
0x30f: IF (Stack[-1] == 0) GOTO 0x313; Pop(1)

0x310: @ lshStopAnimation()
0x311: Pop(0)
0x312: GOTO 0x315

0x313: @ StopAnimation()
0x314: Pop(0)
0x315: Return(); Pop(0)

0x316: GOTO 0xd3

0x317: Return(); Pop(0)

0x318: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x319: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x31a: PushEmpty(bool, object, float)
0x31b: Stack[-2] = Stack[-12]
0x31c: Stack[-1] = (float) 70.0
0x31d: Call2 0xe55

0x31e: Pop(2)
0x31f: Pop(1); Push((bool) Stack[-1] == 0)
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-10] = (int) -2
0x322: Return(); Pop(8)

0x323: @ CreateDialog(Stack[-4])
0x324: Pop(0)
0x325: PushEmpty(int)
0x326: Call2 0x101e

0x327: Pop(0)
0x328: @@ SetNPCName(Stack[-1])
0x329: Pop(1)
0x32a: PushEmpty(int)
0x32b: Call2 0x101c

0x32c: Pop(0)
0x32d: @@ SetNPCDescription(Stack[-1])
0x32e: Pop(1)
0x32f: PushEmpty(string)
0x330: Call2 0x1020

0x331: Pop(0)
0x332: @@ SetPhoto(Stack[-1])
0x333: Pop(1)
0x334: PushEmpty(string)
0x335: Call2 0x1022

0x336: Pop(0)
0x337: @@ SetPhoto2(Stack[-1])
0x338: Pop(1)
0x339: PushEmpty(int)
0x33a: Call2 0x1204

0x33b: Pop(0)
0x33c: @@ SetPlayerName(Stack[-1])
0x33d: Pop(1)
0x33e: Stack[-2] = (int) -1
0x33f: @ IsOverrideActive(Stack[-3])
0x340: Pop(0)
0x341: Push(Stack[-3])
0x342: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x343: Stack[-10] = (int) -2
0x344: Return(); Pop(8)

0x345: @ DoDialog(Stack[-4])
0x346: Pop(0)
0x347: PushEmpty(bool, object)
0x348: PushEmpty(object)
0x349: Call2 0xf6b

0x34a: Stack[-2] = Stack[-1]
0x34b: Pop(1)
0x34c: Call2 0xeac

0x34d: Pop(2)
0x34e: PushEmpty(object, object)
0x34f: Stack[-2] = Stack[-11]
0x350: Stack[-1] = Stack[-6]
0x351: Push(-2, 4); TaskCall(3)
0x352: Call2 0x369

0x353: Pop(-2, 4); TaskReturn
0x354: Pop(2)
0x355: @@ IsDialogEnd(Stack[-1])
0x356: Pop(0)
0x357: Pop(0); Push((bool) Stack[-1] == 0)
0x358: IF (Stack[-1] == 0) GOTO 0x35e; Pop(1)

0x359: @ sync()
0x35a: Pop(0)
0x35b: @@ IsDialogEnd(Stack[-1])
0x35c: Pop(0)
0x35d: GOTO 0x357

0x35e: PushEmpty(object)
0x35f: Stack[-1] = Stack[-10]
0x360: Call2 0xe9a

0x361: Pop(1)
0x362: @ StopDialog(Stack[-4])
0x363: Pop(0)
0x364: @@ GetReturnValue(Stack[-2])
0x365: Pop(0)
0x366: Stack[-10] = Stack[-2]
0x367: Return(); Pop(8)

0x368: Stack[-4] = 0
0x369: PushEmpty()
0x36a: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x36b: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x36c: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x36d: Push((int) 1)
0x36e: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x36f: PushEmpty(string)
0x370: Stack[-1] = "Neutral"
0x371: Call2 0x3a3

0x372: Pop(1)
0x373: Push((int) 525480)
0x374: @@ SetMessage(Stack[-1])
0x375: Pop(1)
0x376: @@ ClearReplies()
0x377: Pop(0)
0x378: Push((int) 525481)
0x379: Push((int) 27536)
0x37a: Push((int) 26837)
0x37b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37c: Pop(3)
0x37d: Push((int) 526263)
0x37e: Push((int) 27536)
0x37f: Push((int) 27537)
0x380: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x381: Pop(3)
0x382: GOTO 0x385

0x383: Return(); Pop(0)

0x384: GOTO 0x36d

0x385: PushEmpty(bool)
0x386: Call2 0x1024

0x387: Pop(0)
0x388: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x389: @ lshWaitForAnimEnd()
0x38a: Pop(0)
0x38b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x38c: IF (Stack[-1] == 0) GOTO 0x38e; Pop(1)

0x38d: GOTO 0x393

0x38e: PushEmpty(string)
0x38f: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x390: Call2 0xf36

0x391: Pop(1)
0x392: GOTO 0x389

0x393: GOTO 0x3a2

0x394: Push("all")
0x395: Push("idle")
0x396: @ PlayAnimation(Stack[-2], Stack[-1])
0x397: Pop(2)
0x398: @ WaitForAnimEnd()
0x399: Pop(0)
0x39a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x39b: IF (Stack[-1] == 0) GOTO 0x39d; Pop(1)

0x39c: GOTO 0x3a2

0x39d: Push("all")
0x39e: Push("idle")
0x39f: @ PlayAnimation(Stack[-2], Stack[-1])
0x3a0: Pop(2)
0x3a1: GOTO 0x398

0x3a2: Return(); Pop(0)

0x3a3: PushEmpty()
0x3a4: PushEmpty(bool)
0x3a5: Call2 0x1024

0x3a6: Pop(0)
0x3a7: Pop(1); Push((bool) Stack[-1] == 0)
0x3a8: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a9: Return(); Pop(0)

0x3aa: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x3ac: Return(); Pop(0)

0x3ad: PushEmpty(string, bool)
0x3ae: Stack[-2] = Stack[-3]
0x3af: Push("")
0x3b0: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: Stack[-1] = (bool) 0
0x3b3: GOTO 0x3b5

0x3b4: Stack[-1] = (bool) 1
0x3b5: Call2 0xf46

0x3b6: Pop(2)
0x3b7: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3b8: Return(); Pop(0)

0x3b9: PushEmpty()
0x3ba: Push((int) 1)
0x3bb: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x3bc: PushEmpty()
0x3bd: Call2 0xf64

0x3be: Pop(0)
0x3bf: Push((int) 26836)
0x3c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3d6; Pop(1)

0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = "Neutral"
0x3c4: Call2 0x3a3

0x3c5: Pop(1)
0x3c6: Push((int) 525480)
0x3c7: @@ SetMessage(Stack[-1])
0x3c8: Pop(1)
0x3c9: @@ ClearReplies()
0x3ca: Pop(0)
0x3cb: Push((int) 525481)
0x3cc: Push((int) 27536)
0x3cd: Push((int) 26837)
0x3ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3cf: Pop(3)
0x3d0: Push((int) 526263)
0x3d1: Push((int) 27536)
0x3d2: Push((int) 27537)
0x3d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(3)
0x3d5: Return(); Pop(0)

0x3d6: Push((int) 27536)
0x3d7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3d9: PushEmpty(string)
0x3da: Stack[-1] = "Neutral"
0x3db: Call2 0x3a3

0x3dc: Pop(1)
0x3dd: Push((int) 526262)
0x3de: @@ SetMessage(Stack[-1])
0x3df: Pop(1)
0x3e0: @@ ClearReplies()
0x3e1: Pop(0)
0x3e2: Push((int) 526264)
0x3e3: Push((int) 27540)
0x3e4: Push((int) 27539)
0x3e5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e6: Pop(3)
0x3e7: Push((int) 526266)
0x3e8: Push((int) -1)
0x3e9: Push((int) 27541)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Return(); Pop(0)

0x3ed: Push((int) 27540)
0x3ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = "Neutral"
0x3f2: Call2 0x3a3

0x3f3: Pop(1)
0x3f4: Push((int) 526265)
0x3f5: @@ SetMessage(Stack[-1])
0x3f6: Pop(1)
0x3f7: @@ ClearReplies()
0x3f8: Pop(0)
0x3f9: Push((int) 526267)
0x3fa: Push((int) -1)
0x3fb: Push((int) 27542)
0x3fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3fd: Pop(3)
0x3fe: Push((int) 526268)
0x3ff: Push((int) -1)
0x400: Push((int) 27543)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x405: PushEmpty(bool)
0x406: Call2 0x1024

0x407: Pop(0)
0x408: IF (Stack[-1] == 0) GOTO 0x40c; Pop(1)

0x409: @ lshStopAnimation()
0x40a: Pop(0)
0x40b: GOTO 0x40e

0x40c: @ StopAnimation()
0x40d: Pop(0)
0x40e: Return(); Pop(0)

0x40f: GOTO 0x3ba

0x410: Return(); Pop(0)

0x411: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x412: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x413: PushEmpty(bool, object, float)
0x414: Stack[-2] = Stack[-12]
0x415: Stack[-1] = (float) 70.0
0x416: Call2 0xe55

0x417: Pop(2)
0x418: Pop(1); Push((bool) Stack[-1] == 0)
0x419: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41a: Stack[-10] = (int) -2
0x41b: Return(); Pop(8)

0x41c: @ CreateDialog(Stack[-4])
0x41d: Pop(0)
0x41e: PushEmpty(int)
0x41f: Call2 0x101e

0x420: Pop(0)
0x421: @@ SetNPCName(Stack[-1])
0x422: Pop(1)
0x423: PushEmpty(int)
0x424: Call2 0x101c

0x425: Pop(0)
0x426: @@ SetNPCDescription(Stack[-1])
0x427: Pop(1)
0x428: PushEmpty(string)
0x429: Call2 0x1020

0x42a: Pop(0)
0x42b: @@ SetPhoto(Stack[-1])
0x42c: Pop(1)
0x42d: PushEmpty(string)
0x42e: Call2 0x1022

0x42f: Pop(0)
0x430: @@ SetPhoto2(Stack[-1])
0x431: Pop(1)
0x432: PushEmpty(int)
0x433: Call2 0x1204

0x434: Pop(0)
0x435: @@ SetPlayerName(Stack[-1])
0x436: Pop(1)
0x437: Stack[-2] = (int) -1
0x438: @ IsOverrideActive(Stack[-3])
0x439: Pop(0)
0x43a: Push(Stack[-3])
0x43b: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43c: Stack[-10] = (int) -2
0x43d: Return(); Pop(8)

0x43e: @ DoDialog(Stack[-4])
0x43f: Pop(0)
0x440: PushEmpty(bool, object)
0x441: PushEmpty(object)
0x442: Call2 0xf6b

0x443: Stack[-2] = Stack[-1]
0x444: Pop(1)
0x445: Call2 0xeac

0x446: Pop(2)
0x447: PushEmpty(object, object)
0x448: Stack[-2] = Stack[-11]
0x449: Stack[-1] = Stack[-6]
0x44a: Push(-2, 4); TaskCall(5)
0x44b: Call2 0x462

0x44c: Pop(-2, 4); TaskReturn
0x44d: Pop(2)
0x44e: @@ IsDialogEnd(Stack[-1])
0x44f: Pop(0)
0x450: Pop(0); Push((bool) Stack[-1] == 0)
0x451: IF (Stack[-1] == 0) GOTO 0x457; Pop(1)

0x452: @ sync()
0x453: Pop(0)
0x454: @@ IsDialogEnd(Stack[-1])
0x455: Pop(0)
0x456: GOTO 0x450

0x457: PushEmpty(object)
0x458: Stack[-1] = Stack[-10]
0x459: Call2 0xe9a

0x45a: Pop(1)
0x45b: @ StopDialog(Stack[-4])
0x45c: Pop(0)
0x45d: @@ GetReturnValue(Stack[-2])
0x45e: Pop(0)
0x45f: Stack[-10] = Stack[-2]
0x460: Return(); Pop(8)

0x461: Stack[-4] = 0
0x462: PushEmpty()
0x463: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x464: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x465: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x466: Push((int) 1)
0x467: IF (Stack[-1] == 0) GOTO 0x48c; Pop(1)

0x468: PushEmpty(string)
0x469: Stack[-1] = "Jeer"
0x46a: Call2 0x4aa

0x46b: Pop(1)
0x46c: Push((int) 525594)
0x46d: @@ SetMessage(Stack[-1])
0x46e: Pop(1)
0x46f: @@ ClearReplies()
0x470: Pop(0)
0x471: PushEmpty(bool)
0x472: Stack[-1] = (bool) 0
0x473: PushEmpty(bool, object)
0x474: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x475: Call2 0x10e2

0x476: Pop(1)
0x477: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x478: PushEmpty(bool, object)
0x479: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47a: Call2 0x10ee

0x47b: Pop(1)
0x47c: IF (Stack[-1] == 0) GOTO 0x47e; Pop(1)

0x47d: Stack[-1] = (bool) 1
0x47e: IF (Stack[-1] == 0) GOTO 0x484; Pop(1)

0x47f: Push((int) 525596)
0x480: Push((int) 26944)
0x481: Push((int) 26943)
0x482: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x483: Pop(3)
0x484: Push((int) 525595)
0x485: Push((int) -1)
0x486: Push((int) 26942)
0x487: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x488: Pop(3)
0x489: GOTO 0x48c

0x48a: Return(); Pop(0)

0x48b: GOTO 0x466

0x48c: PushEmpty(bool)
0x48d: Call2 0x1024

0x48e: Pop(0)
0x48f: IF (Stack[-1] == 0) GOTO 0x49b; Pop(1)

0x490: @ lshWaitForAnimEnd()
0x491: Pop(0)
0x492: Push( Stack[3 + Tasks[-1].StackPointer] )
0x493: IF (Stack[-1] == 0) GOTO 0x495; Pop(1)

0x494: GOTO 0x49a

0x495: PushEmpty(string)
0x496: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x497: Call2 0xf36

0x498: Pop(1)
0x499: GOTO 0x490

0x49a: GOTO 0x4a9

0x49b: Push("all")
0x49c: Push("idle")
0x49d: @ PlayAnimation(Stack[-2], Stack[-1])
0x49e: Pop(2)
0x49f: @ WaitForAnimEnd()
0x4a0: Pop(0)
0x4a1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x4a2: IF (Stack[-1] == 0) GOTO 0x4a4; Pop(1)

0x4a3: GOTO 0x4a9

0x4a4: Push("all")
0x4a5: Push("idle")
0x4a6: @ PlayAnimation(Stack[-2], Stack[-1])
0x4a7: Pop(2)
0x4a8: GOTO 0x49f

0x4a9: Return(); Pop(0)

0x4aa: PushEmpty()
0x4ab: PushEmpty(bool)
0x4ac: Call2 0x1024

0x4ad: Pop(0)
0x4ae: Pop(1); Push((bool) Stack[-1] == 0)
0x4af: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4b0: Return(); Pop(0)

0x4b1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b4; Pop(1)

0x4b3: Return(); Pop(0)

0x4b4: PushEmpty(string, bool)
0x4b5: Stack[-2] = Stack[-3]
0x4b6: Push("")
0x4b7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: Stack[-1] = (bool) 0
0x4ba: GOTO 0x4bc

0x4bb: Stack[-1] = (bool) 1
0x4bc: Call2 0xf46

0x4bd: Pop(2)
0x4be: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x4bf: Return(); Pop(0)

0x4c0: PushEmpty()
0x4c1: Push((int) 1)
0x4c2: IF (Stack[-1] == 0) GOTO 0x554; Pop(1)

0x4c3: PushEmpty()
0x4c4: Call2 0xf64

0x4c5: Pop(0)
0x4c6: Push((int) 26943)
0x4c7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4c8: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4c9: PushEmpty(object, object)
0x4ca: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4cb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4cc: Call2 0x1051

0x4cd: Pop(2)
0x4ce: Push((int) 26945)
0x4cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4d6; Pop(1)

0x4d1: PushEmpty(object, object)
0x4d2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4d3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d4: Call2 0x10ac

0x4d5: Pop(2)
0x4d6: Push((int) 42709)
0x4d7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d8: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4d9: PushEmpty(object, object)
0x4da: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4db: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4dc: Call2 0x10b3

0x4dd: Pop(2)
0x4de: Push((int) 26941)
0x4df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Jeer"
0x4e3: Call2 0x4aa

0x4e4: Pop(1)
0x4e5: Push((int) 525594)
0x4e6: @@ SetMessage(Stack[-1])
0x4e7: Pop(1)
0x4e8: @@ ClearReplies()
0x4e9: Pop(0)
0x4ea: PushEmpty(bool)
0x4eb: Stack[-1] = (bool) 0
0x4ec: PushEmpty(bool, object)
0x4ed: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4ee: Call2 0x10e2

0x4ef: Pop(1)
0x4f0: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f1: PushEmpty(bool, object)
0x4f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4f3: Call2 0x10ee

0x4f4: Pop(1)
0x4f5: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4f6: Stack[-1] = (bool) 1
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fd; Pop(1)

0x4f8: Push((int) 525596)
0x4f9: Push((int) 26944)
0x4fa: Push((int) 26943)
0x4fb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4fc: Pop(3)
0x4fd: Push((int) 525595)
0x4fe: Push((int) -1)
0x4ff: Push((int) 26942)
0x500: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x501: Pop(3)
0x502: Return(); Pop(0)

0x503: Push((int) 26944)
0x504: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x505: IF (Stack[-1] == 0) GOTO 0x51a; Pop(1)

0x506: PushEmpty(string)
0x507: Stack[-1] = "Anger"
0x508: Call2 0x4aa

0x509: Pop(1)
0x50a: Push((int) 525597)
0x50b: @@ SetMessage(Stack[-1])
0x50c: Pop(1)
0x50d: @@ ClearReplies()
0x50e: Pop(0)
0x50f: Push((int) 540670)
0x510: Push((int) 42702)
0x511: Push((int) 42701)
0x512: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x513: Pop(3)
0x514: Push((int) 540672)
0x515: Push((int) 42702)
0x516: Push((int) 42703)
0x517: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x518: Pop(3)
0x519: Return(); Pop(0)

0x51a: Push((int) 42702)
0x51b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x51c: IF (Stack[-1] == 0) GOTO 0x531; Pop(1)

0x51d: PushEmpty(string)
0x51e: Stack[-1] = "Anger"
0x51f: Call2 0x4aa

0x520: Pop(1)
0x521: Push((int) 540671)
0x522: @@ SetMessage(Stack[-1])
0x523: Pop(1)
0x524: @@ ClearReplies()
0x525: Pop(0)
0x526: Push((int) 540673)
0x527: Push((int) 42706)
0x528: Push((int) 42704)
0x529: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52a: Pop(3)
0x52b: Push((int) 540675)
0x52c: Push((int) 42706)
0x52d: Push((int) 42707)
0x52e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52f: Pop(3)
0x530: Return(); Pop(0)

0x531: Push((int) 42706)
0x532: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x533: IF (Stack[-1] == 0) GOTO 0x548; Pop(1)

0x534: PushEmpty(string)
0x535: Stack[-1] = "Anger"
0x536: Call2 0x4aa

0x537: Pop(1)
0x538: Push((int) 540674)
0x539: @@ SetMessage(Stack[-1])
0x53a: Pop(1)
0x53b: @@ ClearReplies()
0x53c: Pop(0)
0x53d: Push((int) 525598)
0x53e: Push((int) -1)
0x53f: Push((int) 26945)
0x540: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x541: Pop(3)
0x542: Push((int) 540676)
0x543: Push((int) -1)
0x544: Push((int) 42709)
0x545: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x546: Pop(3)
0x547: Return(); Pop(0)

0x548: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x549: PushEmpty(bool)
0x54a: Call2 0x1024

0x54b: Pop(0)
0x54c: IF (Stack[-1] == 0) GOTO 0x550; Pop(1)

0x54d: @ lshStopAnimation()
0x54e: Pop(0)
0x54f: GOTO 0x552

0x550: @ StopAnimation()
0x551: Pop(0)
0x552: Return(); Pop(0)

0x553: GOTO 0x4c1

0x554: Return(); Pop(0)

0x555: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x556: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x557: PushEmpty(bool, object, float)
0x558: Stack[-2] = Stack[-12]
0x559: Stack[-1] = (float) 70.0
0x55a: Call2 0xe55

0x55b: Pop(2)
0x55c: Pop(1); Push((bool) Stack[-1] == 0)
0x55d: IF (Stack[-1] == 0) GOTO 0x560; Pop(1)

0x55e: Stack[-10] = (int) -2
0x55f: Return(); Pop(8)

0x560: @ CreateDialog(Stack[-4])
0x561: Pop(0)
0x562: PushEmpty(int)
0x563: Call2 0x101e

0x564: Pop(0)
0x565: @@ SetNPCName(Stack[-1])
0x566: Pop(1)
0x567: PushEmpty(int)
0x568: Call2 0x101c

0x569: Pop(0)
0x56a: @@ SetNPCDescription(Stack[-1])
0x56b: Pop(1)
0x56c: PushEmpty(string)
0x56d: Call2 0x1020

0x56e: Pop(0)
0x56f: @@ SetPhoto(Stack[-1])
0x570: Pop(1)
0x571: PushEmpty(string)
0x572: Call2 0x1022

0x573: Pop(0)
0x574: @@ SetPhoto2(Stack[-1])
0x575: Pop(1)
0x576: PushEmpty(int)
0x577: Call2 0x1204

0x578: Pop(0)
0x579: @@ SetPlayerName(Stack[-1])
0x57a: Pop(1)
0x57b: Stack[-2] = (int) -1
0x57c: @ IsOverrideActive(Stack[-3])
0x57d: Pop(0)
0x57e: Push(Stack[-3])
0x57f: IF (Stack[-1] == 0) GOTO 0x582; Pop(1)

0x580: Stack[-10] = (int) -2
0x581: Return(); Pop(8)

0x582: @ DoDialog(Stack[-4])
0x583: Pop(0)
0x584: PushEmpty(bool, object)
0x585: PushEmpty(object)
0x586: Call2 0xf6b

0x587: Stack[-2] = Stack[-1]
0x588: Pop(1)
0x589: Call2 0xeac

0x58a: Pop(2)
0x58b: PushEmpty(object, object)
0x58c: Stack[-2] = Stack[-11]
0x58d: Stack[-1] = Stack[-6]
0x58e: Push(-2, 4); TaskCall(7)
0x58f: Call2 0x5a6

0x590: Pop(-2, 4); TaskReturn
0x591: Pop(2)
0x592: @@ IsDialogEnd(Stack[-1])
0x593: Pop(0)
0x594: Pop(0); Push((bool) Stack[-1] == 0)
0x595: IF (Stack[-1] == 0) GOTO 0x59b; Pop(1)

0x596: @ sync()
0x597: Pop(0)
0x598: @@ IsDialogEnd(Stack[-1])
0x599: Pop(0)
0x59a: GOTO 0x594

0x59b: PushEmpty(object)
0x59c: Stack[-1] = Stack[-10]
0x59d: Call2 0xe9a

0x59e: Pop(1)
0x59f: @ StopDialog(Stack[-4])
0x5a0: Pop(0)
0x5a1: @@ GetReturnValue(Stack[-2])
0x5a2: Pop(0)
0x5a3: Stack[-10] = Stack[-2]
0x5a4: Return(); Pop(8)

0x5a5: Stack[-4] = 0
0x5a6: PushEmpty()
0x5a7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5a8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5a9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5aa: Push((int) 1)
0x5ab: IF (Stack[-1] == 0) GOTO 0x5c7; Pop(1)

0x5ac: PushEmpty(string)
0x5ad: Stack[-1] = "Anger"
0x5ae: Call2 0x5e5

0x5af: Pop(1)
0x5b0: Push((int) 525864)
0x5b1: @@ SetMessage(Stack[-1])
0x5b2: Pop(1)
0x5b3: @@ ClearReplies()
0x5b4: Pop(0)
0x5b5: PushEmpty(bool, object)
0x5b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b7: Call2 0x10fa

0x5b8: Pop(1)
0x5b9: IF (Stack[-1] == 0) GOTO 0x5bf; Pop(1)

0x5ba: Push((int) 525865)
0x5bb: Push((int) 30508)
0x5bc: Push((int) 27164)
0x5bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5be: Pop(3)
0x5bf: Push((int) 525874)
0x5c0: Push((int) -1)
0x5c1: Push((int) 27173)
0x5c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c3: Pop(3)
0x5c4: GOTO 0x5c7

0x5c5: Return(); Pop(0)

0x5c6: GOTO 0x5aa

0x5c7: PushEmpty(bool)
0x5c8: Call2 0x1024

0x5c9: Pop(0)
0x5ca: IF (Stack[-1] == 0) GOTO 0x5d6; Pop(1)

0x5cb: @ lshWaitForAnimEnd()
0x5cc: Pop(0)
0x5cd: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5ce: IF (Stack[-1] == 0) GOTO 0x5d0; Pop(1)

0x5cf: GOTO 0x5d5

0x5d0: PushEmpty(string)
0x5d1: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5d2: Call2 0xf36

0x5d3: Pop(1)
0x5d4: GOTO 0x5cb

0x5d5: GOTO 0x5e4

0x5d6: Push("all")
0x5d7: Push("idle")
0x5d8: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d9: Pop(2)
0x5da: @ WaitForAnimEnd()
0x5db: Pop(0)
0x5dc: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5dd: IF (Stack[-1] == 0) GOTO 0x5df; Pop(1)

0x5de: GOTO 0x5e4

0x5df: Push("all")
0x5e0: Push("idle")
0x5e1: @ PlayAnimation(Stack[-2], Stack[-1])
0x5e2: Pop(2)
0x5e3: GOTO 0x5da

0x5e4: Return(); Pop(0)

0x5e5: PushEmpty()
0x5e6: PushEmpty(bool)
0x5e7: Call2 0x1024

0x5e8: Pop(0)
0x5e9: Pop(1); Push((bool) Stack[-1] == 0)
0x5ea: IF (Stack[-1] == 0) GOTO 0x5ec; Pop(1)

0x5eb: Return(); Pop(0)

0x5ec: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5ed: IF (Stack[-1] == 0) GOTO 0x5ef; Pop(1)

0x5ee: Return(); Pop(0)

0x5ef: PushEmpty(string, bool)
0x5f0: Stack[-2] = Stack[-3]
0x5f1: Push("")
0x5f2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5f3: IF (Stack[-1] == 0) GOTO 0x5f6; Pop(1)

0x5f4: Stack[-1] = (bool) 0
0x5f5: GOTO 0x5f7

0x5f6: Stack[-1] = (bool) 1
0x5f7: Call2 0xf46

0x5f8: Pop(2)
0x5f9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5fa: Return(); Pop(0)

0x5fb: PushEmpty()
0x5fc: Push((int) 1)
0x5fd: IF (Stack[-1] == 0) GOTO 0x695; Pop(1)

0x5fe: PushEmpty()
0x5ff: Call2 0xf64

0x600: Pop(0)
0x601: Push((int) 27172)
0x602: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x603: IF (Stack[-1] == 0) GOTO 0x609; Pop(1)

0x604: PushEmpty(object, object)
0x605: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x606: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x607: Call2 0x1057

0x608: Pop(2)
0x609: Push((int) 27163)
0x60a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x60b: IF (Stack[-1] == 0) GOTO 0x625; Pop(1)

0x60c: PushEmpty(string)
0x60d: Stack[-1] = "Anger"
0x60e: Call2 0x5e5

0x60f: Pop(1)
0x610: Push((int) 525864)
0x611: @@ SetMessage(Stack[-1])
0x612: Pop(1)
0x613: @@ ClearReplies()
0x614: Pop(0)
0x615: PushEmpty(bool, object)
0x616: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x617: Call2 0x10fa

0x618: Pop(1)
0x619: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x61a: Push((int) 525865)
0x61b: Push((int) 30508)
0x61c: Push((int) 27164)
0x61d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x61e: Pop(3)
0x61f: Push((int) 525874)
0x620: Push((int) -1)
0x621: Push((int) 27173)
0x622: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x623: Pop(3)
0x624: Return(); Pop(0)

0x625: Push((int) 30508)
0x626: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x627: IF (Stack[-1] == 0) GOTO 0x63c; Pop(1)

0x628: PushEmpty(string)
0x629: Stack[-1] = "Distrust"
0x62a: Call2 0x5e5

0x62b: Pop(1)
0x62c: Push((int) 529065)
0x62d: @@ SetMessage(Stack[-1])
0x62e: Pop(1)
0x62f: @@ ClearReplies()
0x630: Pop(0)
0x631: Push((int) 529066)
0x632: Push((int) 27165)
0x633: Push((int) 30509)
0x634: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x635: Pop(3)
0x636: Push((int) 540766)
0x637: Push((int) 27165)
0x638: Push((int) 42809)
0x639: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x63a: Pop(3)
0x63b: Return(); Pop(0)

0x63c: Push((int) 27165)
0x63d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x63e: IF (Stack[-1] == 0) GOTO 0x653; Pop(1)

0x63f: PushEmpty(string)
0x640: Stack[-1] = "Distrust"
0x641: Call2 0x5e5

0x642: Pop(1)
0x643: Push((int) 525866)
0x644: @@ SetMessage(Stack[-1])
0x645: Pop(1)
0x646: @@ ClearReplies()
0x647: Pop(0)
0x648: Push((int) 525868)
0x649: Push((int) 27168)
0x64a: Push((int) 27167)
0x64b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64c: Pop(3)
0x64d: Push((int) 529067)
0x64e: Push((int) 30511)
0x64f: Push((int) 30510)
0x650: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x651: Pop(3)
0x652: Return(); Pop(0)

0x653: Push((int) 30511)
0x654: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x655: IF (Stack[-1] == 0) GOTO 0x665; Pop(1)

0x656: PushEmpty(string)
0x657: Stack[-1] = "Neutral"
0x658: Call2 0x5e5

0x659: Pop(1)
0x65a: Push((int) 529068)
0x65b: @@ SetMessage(Stack[-1])
0x65c: Pop(1)
0x65d: @@ ClearReplies()
0x65e: Pop(0)
0x65f: Push((int) 529069)
0x660: Push((int) 27171)
0x661: Push((int) 30512)
0x662: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x663: Pop(3)
0x664: Return(); Pop(0)

0x665: Push((int) 27168)
0x666: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x667: IF (Stack[-1] == 0) GOTO 0x677; Pop(1)

0x668: PushEmpty(string)
0x669: Stack[-1] = "Anger"
0x66a: Call2 0x5e5

0x66b: Pop(1)
0x66c: Push((int) 525869)
0x66d: @@ SetMessage(Stack[-1])
0x66e: Pop(1)
0x66f: @@ ClearReplies()
0x670: Pop(0)
0x671: Push((int) 525870)
0x672: Push((int) 27171)
0x673: Push((int) 27169)
0x674: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x675: Pop(3)
0x676: Return(); Pop(0)

0x677: Push((int) 27171)
0x678: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x679: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x67a: PushEmpty(string)
0x67b: Stack[-1] = "Neutral"
0x67c: Call2 0x5e5

0x67d: Pop(1)
0x67e: Push((int) 525872)
0x67f: @@ SetMessage(Stack[-1])
0x680: Pop(1)
0x681: @@ ClearReplies()
0x682: Pop(0)
0x683: Push((int) 525873)
0x684: Push((int) -1)
0x685: Push((int) 27172)
0x686: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x687: Pop(3)
0x688: Return(); Pop(0)

0x689: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x68a: PushEmpty(bool)
0x68b: Call2 0x1024

0x68c: Pop(0)
0x68d: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68e: @ lshStopAnimation()
0x68f: Pop(0)
0x690: GOTO 0x693

0x691: @ StopAnimation()
0x692: Pop(0)
0x693: Return(); Pop(0)

0x694: GOTO 0x5fc

0x695: Return(); Pop(0)

0x696: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x697: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x698: PushEmpty(bool, object, float)
0x699: Stack[-2] = Stack[-12]
0x69a: Stack[-1] = (float) 70.0
0x69b: Call2 0xe55

0x69c: Pop(2)
0x69d: Pop(1); Push((bool) Stack[-1] == 0)
0x69e: IF (Stack[-1] == 0) GOTO 0x6a1; Pop(1)

0x69f: Stack[-10] = (int) -2
0x6a0: Return(); Pop(8)

0x6a1: @ CreateDialog(Stack[-4])
0x6a2: Pop(0)
0x6a3: PushEmpty(int)
0x6a4: Call2 0x101e

0x6a5: Pop(0)
0x6a6: @@ SetNPCName(Stack[-1])
0x6a7: Pop(1)
0x6a8: PushEmpty(int)
0x6a9: Call2 0x101c

0x6aa: Pop(0)
0x6ab: @@ SetNPCDescription(Stack[-1])
0x6ac: Pop(1)
0x6ad: PushEmpty(string)
0x6ae: Call2 0x1020

0x6af: Pop(0)
0x6b0: @@ SetPhoto(Stack[-1])
0x6b1: Pop(1)
0x6b2: PushEmpty(string)
0x6b3: Call2 0x1022

0x6b4: Pop(0)
0x6b5: @@ SetPhoto2(Stack[-1])
0x6b6: Pop(1)
0x6b7: PushEmpty(int)
0x6b8: Call2 0x1204

0x6b9: Pop(0)
0x6ba: @@ SetPlayerName(Stack[-1])
0x6bb: Pop(1)
0x6bc: Stack[-2] = (int) -1
0x6bd: @ IsOverrideActive(Stack[-3])
0x6be: Pop(0)
0x6bf: Push(Stack[-3])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c1: Stack[-10] = (int) -2
0x6c2: Return(); Pop(8)

0x6c3: @ DoDialog(Stack[-4])
0x6c4: Pop(0)
0x6c5: PushEmpty(bool, object)
0x6c6: PushEmpty(object)
0x6c7: Call2 0xf6b

0x6c8: Stack[-2] = Stack[-1]
0x6c9: Pop(1)
0x6ca: Call2 0xeac

0x6cb: Pop(2)
0x6cc: PushEmpty(object, object)
0x6cd: Stack[-2] = Stack[-11]
0x6ce: Stack[-1] = Stack[-6]
0x6cf: Push(-2, 4); TaskCall(9)
0x6d0: Call2 0x6e7

0x6d1: Pop(-2, 4); TaskReturn
0x6d2: Pop(2)
0x6d3: @@ IsDialogEnd(Stack[-1])
0x6d4: Pop(0)
0x6d5: Pop(0); Push((bool) Stack[-1] == 0)
0x6d6: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d7: @ sync()
0x6d8: Pop(0)
0x6d9: @@ IsDialogEnd(Stack[-1])
0x6da: Pop(0)
0x6db: GOTO 0x6d5

0x6dc: PushEmpty(object)
0x6dd: Stack[-1] = Stack[-10]
0x6de: Call2 0xe9a

0x6df: Pop(1)
0x6e0: @ StopDialog(Stack[-4])
0x6e1: Pop(0)
0x6e2: @@ GetReturnValue(Stack[-2])
0x6e3: Pop(0)
0x6e4: Stack[-10] = Stack[-2]
0x6e5: Return(); Pop(8)

0x6e6: Stack[-4] = 0
0x6e7: PushEmpty()
0x6e8: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x6e9: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x6ea: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x6eb: Push((int) 1)
0x6ec: IF (Stack[-1] == 0) GOTO 0x717; Pop(1)

0x6ed: PushEmpty(string)
0x6ee: Stack[-1] = "Neutral"
0x6ef: Call2 0x735

0x6f0: Pop(1)
0x6f1: Push((int) 526481)
0x6f2: @@ SetMessage(Stack[-1])
0x6f3: Pop(1)
0x6f4: @@ ClearReplies()
0x6f5: Pop(0)
0x6f6: PushEmpty(bool, object)
0x6f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f8: Call2 0x112a

0x6f9: Pop(1)
0x6fa: IF (Stack[-1] == 0) GOTO 0x700; Pop(1)

0x6fb: Push((int) 526482)
0x6fc: Push((int) 30355)
0x6fd: Push((int) 27748)
0x6fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6ff: Pop(3)
0x700: PushEmpty(bool, object)
0x701: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x702: Call2 0x1136

0x703: Pop(1)
0x704: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x705: Push((int) 526504)
0x706: Push((int) 30366)
0x707: Push((int) 27770)
0x708: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x709: Pop(3)
0x70a: Push((int) 526489)
0x70b: Push((int) -1)
0x70c: Push((int) 27755)
0x70d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70e: Pop(3)
0x70f: Push((int) 528924)
0x710: Push((int) -1)
0x711: Push((int) 30354)
0x712: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x713: Pop(3)
0x714: GOTO 0x717

0x715: Return(); Pop(0)

0x716: GOTO 0x6eb

0x717: PushEmpty(bool)
0x718: Call2 0x1024

0x719: Pop(0)
0x71a: IF (Stack[-1] == 0) GOTO 0x726; Pop(1)

0x71b: @ lshWaitForAnimEnd()
0x71c: Pop(0)
0x71d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x71e: IF (Stack[-1] == 0) GOTO 0x720; Pop(1)

0x71f: GOTO 0x725

0x720: PushEmpty(string)
0x721: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x722: Call2 0xf36

0x723: Pop(1)
0x724: GOTO 0x71b

0x725: GOTO 0x734

0x726: Push("all")
0x727: Push("idle")
0x728: @ PlayAnimation(Stack[-2], Stack[-1])
0x729: Pop(2)
0x72a: @ WaitForAnimEnd()
0x72b: Pop(0)
0x72c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x72d: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x72e: GOTO 0x734

0x72f: Push("all")
0x730: Push("idle")
0x731: @ PlayAnimation(Stack[-2], Stack[-1])
0x732: Pop(2)
0x733: GOTO 0x72a

0x734: Return(); Pop(0)

0x735: PushEmpty()
0x736: PushEmpty(bool)
0x737: Call2 0x1024

0x738: Pop(0)
0x739: Pop(1); Push((bool) Stack[-1] == 0)
0x73a: IF (Stack[-1] == 0) GOTO 0x73c; Pop(1)

0x73b: Return(); Pop(0)

0x73c: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x73d: IF (Stack[-1] == 0) GOTO 0x73f; Pop(1)

0x73e: Return(); Pop(0)

0x73f: PushEmpty(string, bool)
0x740: Stack[-2] = Stack[-3]
0x741: Push("")
0x742: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x743: IF (Stack[-1] == 0) GOTO 0x746; Pop(1)

0x744: Stack[-1] = (bool) 0
0x745: GOTO 0x747

0x746: Stack[-1] = (bool) 1
0x747: Call2 0xf46

0x748: Pop(2)
0x749: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x74a: Return(); Pop(0)

0x74b: PushEmpty()
0x74c: Push((int) 1)
0x74d: IF (Stack[-1] == 0) GOTO 0x93d; Pop(1)

0x74e: PushEmpty()
0x74f: Call2 0xf64

0x750: Pop(0)
0x751: Push((int) 30351)
0x752: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x753: IF (Stack[-1] == 0) GOTO 0x768; Pop(1)

0x754: PushEmpty(object, object)
0x755: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x756: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x757: Call2 0x1066

0x758: Pop(2)
0x759: PushEmpty(object, object)
0x75a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x75b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x75c: Call2 0x1046

0x75d: Pop(2)
0x75e: PushEmpty(object, object)
0x75f: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x760: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x761: Call2 0x10a1

0x762: Pop(2)
0x763: PushEmpty(object, object)
0x764: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x765: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x766: Call2 0x108c

0x767: Pop(2)
0x768: Push((int) 30371)
0x769: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x76a: IF (Stack[-1] == 0) GOTO 0x770; Pop(1)

0x76b: PushEmpty(object, object)
0x76c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x76d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x76e: Call2 0x1074

0x76f: Pop(2)
0x770: Push((int) 43830)
0x771: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x778; Pop(1)

0x773: PushEmpty(object, object)
0x774: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x775: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x776: Call2 0x1097

0x777: Pop(2)
0x778: Push((int) 43828)
0x779: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77a: IF (Stack[-1] == 0) GOTO 0x780; Pop(1)

0x77b: PushEmpty(object, object)
0x77c: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x77d: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x77e: Call2 0x1097

0x77f: Pop(2)
0x780: Push((int) 43824)
0x781: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x782: IF (Stack[-1] == 0) GOTO 0x788; Pop(1)

0x783: PushEmpty(object, object)
0x784: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x785: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x786: Call2 0x1097

0x787: Pop(2)
0x788: Push((int) 27747)
0x789: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x78a: IF (Stack[-1] == 0) GOTO 0x7b3; Pop(1)

0x78b: PushEmpty(string)
0x78c: Stack[-1] = "Neutral"
0x78d: Call2 0x735

0x78e: Pop(1)
0x78f: Push((int) 526481)
0x790: @@ SetMessage(Stack[-1])
0x791: Pop(1)
0x792: @@ ClearReplies()
0x793: Pop(0)
0x794: PushEmpty(bool, object)
0x795: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x796: Call2 0x112a

0x797: Pop(1)
0x798: IF (Stack[-1] == 0) GOTO 0x79e; Pop(1)

0x799: Push((int) 526482)
0x79a: Push((int) 30355)
0x79b: Push((int) 27748)
0x79c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x79d: Pop(3)
0x79e: PushEmpty(bool, object)
0x79f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x7a0: Call2 0x1136

0x7a1: Pop(1)
0x7a2: IF (Stack[-1] == 0) GOTO 0x7a8; Pop(1)

0x7a3: Push((int) 526504)
0x7a4: Push((int) 30366)
0x7a5: Push((int) 27770)
0x7a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a7: Pop(3)
0x7a8: Push((int) 526489)
0x7a9: Push((int) -1)
0x7aa: Push((int) 27755)
0x7ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ac: Pop(3)
0x7ad: Push((int) 528924)
0x7ae: Push((int) -1)
0x7af: Push((int) 30354)
0x7b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b1: Pop(3)
0x7b2: Return(); Pop(0)

0x7b3: Push((int) 30366)
0x7b4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7b5: IF (Stack[-1] == 0) GOTO 0x7ca; Pop(1)

0x7b6: PushEmpty(string)
0x7b7: Stack[-1] = "Neutral"
0x7b8: Call2 0x735

0x7b9: Pop(1)
0x7ba: Push((int) 528933)
0x7bb: @@ SetMessage(Stack[-1])
0x7bc: Pop(1)
0x7bd: @@ ClearReplies()
0x7be: Pop(0)
0x7bf: Push((int) 528934)
0x7c0: Push((int) 27771)
0x7c1: Push((int) 30367)
0x7c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c3: Pop(3)
0x7c4: Push((int) 541644)
0x7c5: Push((int) 43817)
0x7c6: Push((int) 43816)
0x7c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7c8: Pop(3)
0x7c9: Return(); Pop(0)

0x7ca: Push((int) 43817)
0x7cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7cc: IF (Stack[-1] == 0) GOTO 0x7e1; Pop(1)

0x7cd: PushEmpty(string)
0x7ce: Stack[-1] = "Distrust"
0x7cf: Call2 0x735

0x7d0: Pop(1)
0x7d1: Push((int) 541645)
0x7d2: @@ SetMessage(Stack[-1])
0x7d3: Pop(1)
0x7d4: @@ ClearReplies()
0x7d5: Pop(0)
0x7d6: Push((int) 541646)
0x7d7: Push((int) 43819)
0x7d8: Push((int) 43818)
0x7d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7da: Pop(3)
0x7db: Push((int) 541648)
0x7dc: Push((int) 43821)
0x7dd: Push((int) 43820)
0x7de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7df: Pop(3)
0x7e0: Return(); Pop(0)

0x7e1: Push((int) 43821)
0x7e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e3: IF (Stack[-1] == 0) GOTO 0x7f3; Pop(1)

0x7e4: PushEmpty(string)
0x7e5: Stack[-1] = "Neutral"
0x7e6: Call2 0x735

0x7e7: Pop(1)
0x7e8: Push((int) 541649)
0x7e9: @@ SetMessage(Stack[-1])
0x7ea: Pop(1)
0x7eb: @@ ClearReplies()
0x7ec: Pop(0)
0x7ed: Push((int) 541650)
0x7ee: Push((int) 43825)
0x7ef: Push((int) 43822)
0x7f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f1: Pop(3)
0x7f2: Return(); Pop(0)

0x7f3: Push((int) 43819)
0x7f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7f5: IF (Stack[-1] == 0) GOTO 0x80a; Pop(1)

0x7f6: PushEmpty(string)
0x7f7: Stack[-1] = "Anger"
0x7f8: Call2 0x735

0x7f9: Pop(1)
0x7fa: Push((int) 541647)
0x7fb: @@ SetMessage(Stack[-1])
0x7fc: Pop(1)
0x7fd: @@ ClearReplies()
0x7fe: Pop(0)
0x7ff: Push((int) 541651)
0x800: Push((int) 43825)
0x801: Push((int) 43823)
0x802: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x803: Pop(3)
0x804: Push((int) 541652)
0x805: Push((int) -1)
0x806: Push((int) 43824)
0x807: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x808: Pop(3)
0x809: Return(); Pop(0)

0x80a: Push((int) 43825)
0x80b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x80c: IF (Stack[-1] == 0) GOTO 0x821; Pop(1)

0x80d: PushEmpty(string)
0x80e: Stack[-1] = "Anger"
0x80f: Call2 0x735

0x810: Pop(1)
0x811: Push((int) 541653)
0x812: @@ SetMessage(Stack[-1])
0x813: Pop(1)
0x814: @@ ClearReplies()
0x815: Pop(0)
0x816: Push((int) 541654)
0x817: Push((int) 27773)
0x818: Push((int) 43827)
0x819: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81a: Pop(3)
0x81b: Push((int) 541655)
0x81c: Push((int) -1)
0x81d: Push((int) 43828)
0x81e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x81f: Pop(3)
0x820: Return(); Pop(0)

0x821: Push((int) 27771)
0x822: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x823: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x824: PushEmpty(string)
0x825: Stack[-1] = "Neutral"
0x826: Call2 0x735

0x827: Pop(1)
0x828: Push((int) 526505)
0x829: @@ SetMessage(Stack[-1])
0x82a: Pop(1)
0x82b: @@ ClearReplies()
0x82c: Pop(0)
0x82d: Push((int) 526506)
0x82e: Push((int) 27773)
0x82f: Push((int) 27772)
0x830: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x831: Pop(3)
0x832: Return(); Pop(0)

0x833: Push((int) 27773)
0x834: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x835: IF (Stack[-1] == 0) GOTO 0x84a; Pop(1)

0x836: PushEmpty(string)
0x837: Stack[-1] = "Anger"
0x838: Call2 0x735

0x839: Pop(1)
0x83a: Push((int) 526507)
0x83b: @@ SetMessage(Stack[-1])
0x83c: Pop(1)
0x83d: @@ ClearReplies()
0x83e: Pop(0)
0x83f: Push((int) 526508)
0x840: Push((int) 27775)
0x841: Push((int) 27774)
0x842: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x843: Pop(3)
0x844: Push((int) 541656)
0x845: Push((int) -1)
0x846: Push((int) 43830)
0x847: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x848: Pop(3)
0x849: Return(); Pop(0)

0x84a: Push((int) 27775)
0x84b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x84c: IF (Stack[-1] == 0) GOTO 0x861; Pop(1)

0x84d: PushEmpty(string)
0x84e: Stack[-1] = "Anger"
0x84f: Call2 0x735

0x850: Pop(1)
0x851: Push((int) 526509)
0x852: @@ SetMessage(Stack[-1])
0x853: Pop(1)
0x854: @@ ClearReplies()
0x855: Pop(0)
0x856: Push((int) 526510)
0x857: Push((int) 27777)
0x858: Push((int) 27776)
0x859: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85a: Pop(3)
0x85b: Push((int) 541657)
0x85c: Push((int) 27777)
0x85d: Push((int) 43831)
0x85e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x85f: Pop(3)
0x860: Return(); Pop(0)

0x861: Push((int) 27777)
0x862: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x863: IF (Stack[-1] == 0) GOTO 0x873; Pop(1)

0x864: PushEmpty(string)
0x865: Stack[-1] = "Distrust"
0x866: Call2 0x735

0x867: Pop(1)
0x868: Push((int) 526511)
0x869: @@ SetMessage(Stack[-1])
0x86a: Pop(1)
0x86b: @@ ClearReplies()
0x86c: Pop(0)
0x86d: Push((int) 526512)
0x86e: Push((int) 30368)
0x86f: Push((int) 27778)
0x870: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x871: Pop(3)
0x872: Return(); Pop(0)

0x873: Push((int) 30368)
0x874: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x875: IF (Stack[-1] == 0) GOTO 0x885; Pop(1)

0x876: PushEmpty(string)
0x877: Stack[-1] = "Neutral"
0x878: Call2 0x735

0x879: Pop(1)
0x87a: Push((int) 528935)
0x87b: @@ SetMessage(Stack[-1])
0x87c: Pop(1)
0x87d: @@ ClearReplies()
0x87e: Pop(0)
0x87f: Push((int) 528936)
0x880: Push((int) 30370)
0x881: Push((int) 30369)
0x882: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x883: Pop(3)
0x884: Return(); Pop(0)

0x885: Push((int) 30370)
0x886: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x887: IF (Stack[-1] == 0) GOTO 0x897; Pop(1)

0x888: PushEmpty(string)
0x889: Stack[-1] = "Neutral"
0x88a: Call2 0x735

0x88b: Pop(1)
0x88c: Push((int) 528937)
0x88d: @@ SetMessage(Stack[-1])
0x88e: Pop(1)
0x88f: @@ ClearReplies()
0x890: Pop(0)
0x891: Push((int) 528938)
0x892: Push((int) -1)
0x893: Push((int) 30371)
0x894: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x895: Pop(3)
0x896: Return(); Pop(0)

0x897: Push((int) 30355)
0x898: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x899: IF (Stack[-1] == 0) GOTO 0x8a9; Pop(1)

0x89a: PushEmpty(string)
0x89b: Stack[-1] = "Jeer"
0x89c: Call2 0x735

0x89d: Pop(1)
0x89e: Push((int) 528925)
0x89f: @@ SetMessage(Stack[-1])
0x8a0: Pop(1)
0x8a1: @@ ClearReplies()
0x8a2: Pop(0)
0x8a3: Push((int) 528926)
0x8a4: Push((int) 30357)
0x8a5: Push((int) 30356)
0x8a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8a7: Pop(3)
0x8a8: Return(); Pop(0)

0x8a9: Push((int) 30357)
0x8aa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8ab: IF (Stack[-1] == 0) GOTO 0x8c0; Pop(1)

0x8ac: PushEmpty(string)
0x8ad: Stack[-1] = "Anger"
0x8ae: Call2 0x735

0x8af: Pop(1)
0x8b0: Push((int) 528927)
0x8b1: @@ SetMessage(Stack[-1])
0x8b2: Pop(1)
0x8b3: @@ ClearReplies()
0x8b4: Pop(0)
0x8b5: Push((int) 528928)
0x8b6: Push((int) 27749)
0x8b7: Push((int) 30358)
0x8b8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8b9: Pop(3)
0x8ba: Push((int) 528929)
0x8bb: Push((int) 27749)
0x8bc: Push((int) 30359)
0x8bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8be: Pop(3)
0x8bf: Return(); Pop(0)

0x8c0: Push((int) 27749)
0x8c1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8c2: IF (Stack[-1] == 0) GOTO 0x8d2; Pop(1)

0x8c3: PushEmpty(string)
0x8c4: Stack[-1] = "Anger"
0x8c5: Call2 0x735

0x8c6: Pop(1)
0x8c7: Push((int) 526483)
0x8c8: @@ SetMessage(Stack[-1])
0x8c9: Pop(1)
0x8ca: @@ ClearReplies()
0x8cb: Pop(0)
0x8cc: Push((int) 526484)
0x8cd: Push((int) 27751)
0x8ce: Push((int) 27750)
0x8cf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8d0: Pop(3)
0x8d1: Return(); Pop(0)

0x8d2: Push((int) 27751)
0x8d3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8d4: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8d5: PushEmpty(string)
0x8d6: Stack[-1] = "Neutral"
0x8d7: Call2 0x735

0x8d8: Pop(1)
0x8d9: Push((int) 526485)
0x8da: @@ SetMessage(Stack[-1])
0x8db: Pop(1)
0x8dc: @@ ClearReplies()
0x8dd: Pop(0)
0x8de: Push((int) 526486)
0x8df: Push((int) 27753)
0x8e0: Push((int) 27752)
0x8e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e2: Pop(3)
0x8e3: Push((int) 528930)
0x8e4: Push((int) 30363)
0x8e5: Push((int) 30362)
0x8e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e7: Pop(3)
0x8e8: Return(); Pop(0)

0x8e9: Push((int) 30363)
0x8ea: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8eb: IF (Stack[-1] == 0) GOTO 0x8fb; Pop(1)

0x8ec: PushEmpty(string)
0x8ed: Stack[-1] = "Neutral"
0x8ee: Call2 0x735

0x8ef: Pop(1)
0x8f0: Push((int) 528931)
0x8f1: @@ SetMessage(Stack[-1])
0x8f2: Pop(1)
0x8f3: @@ ClearReplies()
0x8f4: Pop(0)
0x8f5: Push((int) 528932)
0x8f6: Push((int) 27753)
0x8f7: Push((int) 30364)
0x8f8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f9: Pop(3)
0x8fa: Return(); Pop(0)

0x8fb: Push((int) 27753)
0x8fc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8fd: IF (Stack[-1] == 0) GOTO 0x90d; Pop(1)

0x8fe: PushEmpty(string)
0x8ff: Stack[-1] = "Neutral"
0x900: Call2 0x735

0x901: Pop(1)
0x902: Push((int) 526487)
0x903: @@ SetMessage(Stack[-1])
0x904: Pop(1)
0x905: @@ ClearReplies()
0x906: Pop(0)
0x907: Push((int) 526488)
0x908: Push((int) 30348)
0x909: Push((int) 27754)
0x90a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x90b: Pop(3)
0x90c: Return(); Pop(0)

0x90d: Push((int) 30348)
0x90e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x90f: IF (Stack[-1] == 0) GOTO 0x91f; Pop(1)

0x910: PushEmpty(string)
0x911: Stack[-1] = "Neutral"
0x912: Call2 0x735

0x913: Pop(1)
0x914: Push((int) 528918)
0x915: @@ SetMessage(Stack[-1])
0x916: Pop(1)
0x917: @@ ClearReplies()
0x918: Pop(0)
0x919: Push((int) 528919)
0x91a: Push((int) 30350)
0x91b: Push((int) 30349)
0x91c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x91d: Pop(3)
0x91e: Return(); Pop(0)

0x91f: Push((int) 30350)
0x920: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x921: IF (Stack[-1] == 0) GOTO 0x931; Pop(1)

0x922: PushEmpty(string)
0x923: Stack[-1] = "Distrust"
0x924: Call2 0x735

0x925: Pop(1)
0x926: Push((int) 528920)
0x927: @@ SetMessage(Stack[-1])
0x928: Pop(1)
0x929: @@ ClearReplies()
0x92a: Pop(0)
0x92b: Push((int) 528921)
0x92c: Push((int) -1)
0x92d: Push((int) 30351)
0x92e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x92f: Pop(3)
0x930: Return(); Pop(0)

0x931: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x932: PushEmpty(bool)
0x933: Call2 0x1024

0x934: Pop(0)
0x935: IF (Stack[-1] == 0) GOTO 0x939; Pop(1)

0x936: @ lshStopAnimation()
0x937: Pop(0)
0x938: GOTO 0x93b

0x939: @ StopAnimation()
0x93a: Pop(0)
0x93b: Return(); Pop(0)

0x93c: GOTO 0x74c

0x93d: Return(); Pop(0)

0x93e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x93f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x940: PushEmpty(bool, object, float)
0x941: Stack[-2] = Stack[-12]
0x942: Stack[-1] = (float) 70.0
0x943: Call2 0xe55

0x944: Pop(2)
0x945: Pop(1); Push((bool) Stack[-1] == 0)
0x946: IF (Stack[-1] == 0) GOTO 0x949; Pop(1)

0x947: Stack[-10] = (int) -2
0x948: Return(); Pop(8)

0x949: @ CreateDialog(Stack[-4])
0x94a: Pop(0)
0x94b: PushEmpty(int)
0x94c: Call2 0x101e

0x94d: Pop(0)
0x94e: @@ SetNPCName(Stack[-1])
0x94f: Pop(1)
0x950: PushEmpty(int)
0x951: Call2 0x101c

0x952: Pop(0)
0x953: @@ SetNPCDescription(Stack[-1])
0x954: Pop(1)
0x955: PushEmpty(string)
0x956: Call2 0x1020

0x957: Pop(0)
0x958: @@ SetPhoto(Stack[-1])
0x959: Pop(1)
0x95a: PushEmpty(string)
0x95b: Call2 0x1022

0x95c: Pop(0)
0x95d: @@ SetPhoto2(Stack[-1])
0x95e: Pop(1)
0x95f: PushEmpty(int)
0x960: Call2 0x1204

0x961: Pop(0)
0x962: @@ SetPlayerName(Stack[-1])
0x963: Pop(1)
0x964: Stack[-2] = (int) -1
0x965: @ IsOverrideActive(Stack[-3])
0x966: Pop(0)
0x967: Push(Stack[-3])
0x968: IF (Stack[-1] == 0) GOTO 0x96b; Pop(1)

0x969: Stack[-10] = (int) -2
0x96a: Return(); Pop(8)

0x96b: @ DoDialog(Stack[-4])
0x96c: Pop(0)
0x96d: PushEmpty(bool, object)
0x96e: PushEmpty(object)
0x96f: Call2 0xf6b

0x970: Stack[-2] = Stack[-1]
0x971: Pop(1)
0x972: Call2 0xeac

0x973: Pop(2)
0x974: PushEmpty(object, object)
0x975: Stack[-2] = Stack[-11]
0x976: Stack[-1] = Stack[-6]
0x977: Push(-2, 4); TaskCall(11)
0x978: Call2 0x98f

0x979: Pop(-2, 4); TaskReturn
0x97a: Pop(2)
0x97b: @@ IsDialogEnd(Stack[-1])
0x97c: Pop(0)
0x97d: Pop(0); Push((bool) Stack[-1] == 0)
0x97e: IF (Stack[-1] == 0) GOTO 0x984; Pop(1)

0x97f: @ sync()
0x980: Pop(0)
0x981: @@ IsDialogEnd(Stack[-1])
0x982: Pop(0)
0x983: GOTO 0x97d

0x984: PushEmpty(object)
0x985: Stack[-1] = Stack[-10]
0x986: Call2 0xe9a

0x987: Pop(1)
0x988: @ StopDialog(Stack[-4])
0x989: Pop(0)
0x98a: @@ GetReturnValue(Stack[-2])
0x98b: Pop(0)
0x98c: Stack[-10] = Stack[-2]
0x98d: Return(); Pop(8)

0x98e: Stack[-4] = 0
0x98f: PushEmpty()
0x990: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x991: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x992: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x993: Push((int) 1)
0x994: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x995: PushEmpty(string)
0x996: Stack[-1] = "Neutral"
0x997: Call2 0x9e9

0x998: Pop(1)
0x999: Push((int) 526953)
0x99a: @@ SetMessage(Stack[-1])
0x99b: Pop(1)
0x99c: @@ ClearReplies()
0x99d: Pop(0)
0x99e: PushEmpty(bool)
0x99f: Stack[-1] = (bool) 1
0x9a0: PushEmpty(bool)
0x9a1: Stack[-1] = (bool) 0
0x9a2: PushEmpty(bool, object)
0x9a3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a4: Call2 0x1106

0x9a5: Pop(1)
0x9a6: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9a7: PushEmpty(bool, object)
0x9a8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9a9: Call2 0x111e

0x9aa: Pop(1)
0x9ab: IF (Stack[-1] == 0) GOTO 0x9ad; Pop(1)

0x9ac: Stack[-1] = (bool) 1
0x9ad: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9ae: PushEmpty(bool)
0x9af: Stack[-1] = (bool) 0
0x9b0: PushEmpty(bool, object)
0x9b1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b2: Call2 0x1112

0x9b3: Pop(1)
0x9b4: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9b5: PushEmpty(bool, object)
0x9b6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x9b7: Call2 0x111e

0x9b8: Pop(1)
0x9b9: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9ba: Stack[-1] = (bool) 1
0x9bb: IF (Stack[-1] == 0) GOTO 0x9bd; Pop(1)

0x9bc: Stack[-1] = (bool) 0
0x9bd: IF (Stack[-1] == 0) GOTO 0x9c3; Pop(1)

0x9be: Push((int) 526954)
0x9bf: Push((int) 29329)
0x9c0: Push((int) 28246)
0x9c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c2: Pop(3)
0x9c3: Push((int) 526957)
0x9c4: Push((int) -1)
0x9c5: Push((int) 28249)
0x9c6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x9c7: Pop(3)
0x9c8: GOTO 0x9cb

0x9c9: Return(); Pop(0)

0x9ca: GOTO 0x993

0x9cb: PushEmpty(bool)
0x9cc: Call2 0x1024

0x9cd: Pop(0)
0x9ce: IF (Stack[-1] == 0) GOTO 0x9da; Pop(1)

0x9cf: @ lshWaitForAnimEnd()
0x9d0: Pop(0)
0x9d1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d2: IF (Stack[-1] == 0) GOTO 0x9d4; Pop(1)

0x9d3: GOTO 0x9d9

0x9d4: PushEmpty(string)
0x9d5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9d6: Call2 0xf36

0x9d7: Pop(1)
0x9d8: GOTO 0x9cf

0x9d9: GOTO 0x9e8

0x9da: Push("all")
0x9db: Push("idle")
0x9dc: @ PlayAnimation(Stack[-2], Stack[-1])
0x9dd: Pop(2)
0x9de: @ WaitForAnimEnd()
0x9df: Pop(0)
0x9e0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9e1: IF (Stack[-1] == 0) GOTO 0x9e3; Pop(1)

0x9e2: GOTO 0x9e8

0x9e3: Push("all")
0x9e4: Push("idle")
0x9e5: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e6: Pop(2)
0x9e7: GOTO 0x9de

0x9e8: Return(); Pop(0)

0x9e9: PushEmpty()
0x9ea: PushEmpty(bool)
0x9eb: Call2 0x1024

0x9ec: Pop(0)
0x9ed: Pop(1); Push((bool) Stack[-1] == 0)
0x9ee: IF (Stack[-1] == 0) GOTO 0x9f0; Pop(1)

0x9ef: Return(); Pop(0)

0x9f0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9f1: IF (Stack[-1] == 0) GOTO 0x9f3; Pop(1)

0x9f2: Return(); Pop(0)

0x9f3: PushEmpty(string, bool)
0x9f4: Stack[-2] = Stack[-3]
0x9f5: Push("")
0x9f6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9f7: IF (Stack[-1] == 0) GOTO 0x9fa; Pop(1)

0x9f8: Stack[-1] = (bool) 0
0x9f9: GOTO 0x9fb

0x9fa: Stack[-1] = (bool) 1
0x9fb: Call2 0xf46

0x9fc: Pop(2)
0x9fd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9fe: Return(); Pop(0)

0x9ff: PushEmpty()
0xa00: Push((int) 1)
0xa01: IF (Stack[-1] == 0) GOTO 0xb41; Pop(1)

0xa02: PushEmpty()
0xa03: Call2 0xf64

0xa04: Pop(0)
0xa05: Push((int) 28246)
0xa06: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa07: IF (Stack[-1] == 0) GOTO 0xa0d; Pop(1)

0xa08: PushEmpty(object, object)
0xa09: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa0a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa0b: Call2 0x1060

0xa0c: Pop(2)
0xa0d: Push((int) 28245)
0xa0e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa0f: IF (Stack[-1] == 0) GOTO 0xa44; Pop(1)

0xa10: PushEmpty(string)
0xa11: Stack[-1] = "Neutral"
0xa12: Call2 0x9e9

0xa13: Pop(1)
0xa14: Push((int) 526953)
0xa15: @@ SetMessage(Stack[-1])
0xa16: Pop(1)
0xa17: @@ ClearReplies()
0xa18: Pop(0)
0xa19: PushEmpty(bool)
0xa1a: Stack[-1] = (bool) 1
0xa1b: PushEmpty(bool)
0xa1c: Stack[-1] = (bool) 0
0xa1d: PushEmpty(bool, object)
0xa1e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa1f: Call2 0x1106

0xa20: Pop(1)
0xa21: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa22: PushEmpty(bool, object)
0xa23: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa24: Call2 0x111e

0xa25: Pop(1)
0xa26: IF (Stack[-1] == 0) GOTO 0xa28; Pop(1)

0xa27: Stack[-1] = (bool) 1
0xa28: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa29: PushEmpty(bool)
0xa2a: Stack[-1] = (bool) 0
0xa2b: PushEmpty(bool, object)
0xa2c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa2d: Call2 0x1112

0xa2e: Pop(1)
0xa2f: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa30: PushEmpty(bool, object)
0xa31: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa32: Call2 0x111e

0xa33: Pop(1)
0xa34: IF (Stack[-1] == 0) GOTO 0xa36; Pop(1)

0xa35: Stack[-1] = (bool) 1
0xa36: IF (Stack[-1] == 0) GOTO 0xa38; Pop(1)

0xa37: Stack[-1] = (bool) 0
0xa38: IF (Stack[-1] == 0) GOTO 0xa3e; Pop(1)

0xa39: Push((int) 526954)
0xa3a: Push((int) 29329)
0xa3b: Push((int) 28246)
0xa3c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa3d: Pop(3)
0xa3e: Push((int) 526957)
0xa3f: Push((int) -1)
0xa40: Push((int) 28249)
0xa41: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa42: Pop(3)
0xa43: Return(); Pop(0)

0xa44: Push((int) 29329)
0xa45: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa46: IF (Stack[-1] == 0) GOTO 0xa5b; Pop(1)

0xa47: PushEmpty(string)
0xa48: Stack[-1] = "Neutral"
0xa49: Call2 0x9e9

0xa4a: Pop(1)
0xa4b: Push((int) 527972)
0xa4c: @@ SetMessage(Stack[-1])
0xa4d: Pop(1)
0xa4e: @@ ClearReplies()
0xa4f: Pop(0)
0xa50: Push((int) 527977)
0xa51: Push((int) 29339)
0xa52: Push((int) 29335)
0xa53: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa54: Pop(3)
0xa55: Push((int) 527978)
0xa56: Push((int) 29337)
0xa57: Push((int) 29336)
0xa58: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa59: Pop(3)
0xa5a: Return(); Pop(0)

0xa5b: Push((int) 29337)
0xa5c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa5d: IF (Stack[-1] == 0) GOTO 0xa6d; Pop(1)

0xa5e: PushEmpty(string)
0xa5f: Stack[-1] = "Neutral"
0xa60: Call2 0x9e9

0xa61: Pop(1)
0xa62: Push((int) 527979)
0xa63: @@ SetMessage(Stack[-1])
0xa64: Pop(1)
0xa65: @@ ClearReplies()
0xa66: Pop(0)
0xa67: Push((int) 527980)
0xa68: Push((int) 29339)
0xa69: Push((int) 29338)
0xa6a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6b: Pop(3)
0xa6c: Return(); Pop(0)

0xa6d: Push((int) 29339)
0xa6e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa6f: IF (Stack[-1] == 0) GOTO 0xa7f; Pop(1)

0xa70: PushEmpty(string)
0xa71: Stack[-1] = "Distrust"
0xa72: Call2 0x9e9

0xa73: Pop(1)
0xa74: Push((int) 527981)
0xa75: @@ SetMessage(Stack[-1])
0xa76: Pop(1)
0xa77: @@ ClearReplies()
0xa78: Pop(0)
0xa79: Push((int) 527982)
0xa7a: Push((int) 29341)
0xa7b: Push((int) 29340)
0xa7c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa7d: Pop(3)
0xa7e: Return(); Pop(0)

0xa7f: Push((int) 29341)
0xa80: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa81: IF (Stack[-1] == 0) GOTO 0xa96; Pop(1)

0xa82: PushEmpty(string)
0xa83: Stack[-1] = "Distrust"
0xa84: Call2 0x9e9

0xa85: Pop(1)
0xa86: Push((int) 527983)
0xa87: @@ SetMessage(Stack[-1])
0xa88: Pop(1)
0xa89: @@ ClearReplies()
0xa8a: Pop(0)
0xa8b: Push((int) 527988)
0xa8c: Push((int) 29347)
0xa8d: Push((int) 29346)
0xa8e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa8f: Pop(3)
0xa90: Push((int) 527990)
0xa91: Push((int) 29349)
0xa92: Push((int) 29348)
0xa93: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa94: Pop(3)
0xa95: Return(); Pop(0)

0xa96: Push((int) 29349)
0xa97: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa98: IF (Stack[-1] == 0) GOTO 0xaa8; Pop(1)

0xa99: PushEmpty(string)
0xa9a: Stack[-1] = "Anger"
0xa9b: Call2 0x9e9

0xa9c: Pop(1)
0xa9d: Push((int) 527991)
0xa9e: @@ SetMessage(Stack[-1])
0xa9f: Pop(1)
0xaa0: @@ ClearReplies()
0xaa1: Pop(0)
0xaa2: Push((int) 527992)
0xaa3: Push((int) 28247)
0xaa4: Push((int) 29350)
0xaa5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa6: Pop(3)
0xaa7: Return(); Pop(0)

0xaa8: Push((int) 29347)
0xaa9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaaa: IF (Stack[-1] == 0) GOTO 0xabf; Pop(1)

0xaab: PushEmpty(string)
0xaac: Stack[-1] = "Neutral"
0xaad: Call2 0x9e9

0xaae: Pop(1)
0xaaf: Push((int) 527989)
0xab0: @@ SetMessage(Stack[-1])
0xab1: Pop(1)
0xab2: @@ ClearReplies()
0xab3: Pop(0)
0xab4: Push((int) 527984)
0xab5: Push((int) 28247)
0xab6: Push((int) 29342)
0xab7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab8: Pop(3)
0xab9: Push((int) 527986)
0xaba: Push((int) 29345)
0xabb: Push((int) 29344)
0xabc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xabd: Pop(3)
0xabe: Return(); Pop(0)

0xabf: Push((int) 29345)
0xac0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xac1: IF (Stack[-1] == 0) GOTO 0xad1; Pop(1)

0xac2: PushEmpty(string)
0xac3: Stack[-1] = "Neutral"
0xac4: Call2 0x9e9

0xac5: Pop(1)
0xac6: Push((int) 527987)
0xac7: @@ SetMessage(Stack[-1])
0xac8: Pop(1)
0xac9: @@ ClearReplies()
0xaca: Pop(0)
0xacb: Push((int) 527993)
0xacc: Push((int) 28247)
0xacd: Push((int) 29352)
0xace: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xacf: Pop(3)
0xad0: Return(); Pop(0)

0xad1: Push((int) 28247)
0xad2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad3: IF (Stack[-1] == 0) GOTO 0xae3; Pop(1)

0xad4: PushEmpty(string)
0xad5: Stack[-1] = "Neutral"
0xad6: Call2 0x9e9

0xad7: Pop(1)
0xad8: Push((int) 526955)
0xad9: @@ SetMessage(Stack[-1])
0xada: Pop(1)
0xadb: @@ ClearReplies()
0xadc: Pop(0)
0xadd: Push((int) 526956)
0xade: Push((int) 29354)
0xadf: Push((int) 28248)
0xae0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae1: Pop(3)
0xae2: Return(); Pop(0)

0xae3: Push((int) 29354)
0xae4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae5: IF (Stack[-1] == 0) GOTO 0xafa; Pop(1)

0xae6: PushEmpty(string)
0xae7: Stack[-1] = "Distrust"
0xae8: Call2 0x9e9

0xae9: Pop(1)
0xaea: Push((int) 527994)
0xaeb: @@ SetMessage(Stack[-1])
0xaec: Pop(1)
0xaed: @@ ClearReplies()
0xaee: Pop(0)
0xaef: Push((int) 527995)
0xaf0: Push((int) 29362)
0xaf1: Push((int) 29355)
0xaf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf3: Pop(3)
0xaf4: Push((int) 527996)
0xaf5: Push((int) 29357)
0xaf6: Push((int) 29356)
0xaf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf8: Pop(3)
0xaf9: Return(); Pop(0)

0xafa: Push((int) 29357)
0xafb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafc: IF (Stack[-1] == 0) GOTO 0xb11; Pop(1)

0xafd: PushEmpty(string)
0xafe: Stack[-1] = "Anger"
0xaff: Call2 0x9e9

0xb00: Pop(1)
0xb01: Push((int) 527997)
0xb02: @@ SetMessage(Stack[-1])
0xb03: Pop(1)
0xb04: @@ ClearReplies()
0xb05: Pop(0)
0xb06: Push((int) 527998)
0xb07: Push((int) -1)
0xb08: Push((int) 29358)
0xb09: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0a: Pop(3)
0xb0b: Push((int) 527999)
0xb0c: Push((int) -1)
0xb0d: Push((int) 29359)
0xb0e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0f: Pop(3)
0xb10: Return(); Pop(0)

0xb11: Push((int) 29362)
0xb12: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb13: IF (Stack[-1] == 0) GOTO 0xb23; Pop(1)

0xb14: PushEmpty(string)
0xb15: Stack[-1] = "Distrust"
0xb16: Call2 0x9e9

0xb17: Pop(1)
0xb18: Push((int) 528002)
0xb19: @@ SetMessage(Stack[-1])
0xb1a: Pop(1)
0xb1b: @@ ClearReplies()
0xb1c: Pop(0)
0xb1d: Push((int) 528003)
0xb1e: Push((int) 29364)
0xb1f: Push((int) 29363)
0xb20: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb21: Pop(3)
0xb22: Return(); Pop(0)

0xb23: Push((int) 29364)
0xb24: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb25: IF (Stack[-1] == 0) GOTO 0xb35; Pop(1)

0xb26: PushEmpty(string)
0xb27: Stack[-1] = "Grin"
0xb28: Call2 0x9e9

0xb29: Pop(1)
0xb2a: Push((int) 528004)
0xb2b: @@ SetMessage(Stack[-1])
0xb2c: Pop(1)
0xb2d: @@ ClearReplies()
0xb2e: Pop(0)
0xb2f: Push((int) 528005)
0xb30: Push((int) -1)
0xb31: Push((int) 29365)
0xb32: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb33: Pop(3)
0xb34: Return(); Pop(0)

0xb35: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xb36: PushEmpty(bool)
0xb37: Call2 0x1024

0xb38: Pop(0)
0xb39: IF (Stack[-1] == 0) GOTO 0xb3d; Pop(1)

0xb3a: @ lshStopAnimation()
0xb3b: Pop(0)
0xb3c: GOTO 0xb3f

0xb3d: @ StopAnimation()
0xb3e: Pop(0)
0xb3f: Return(); Pop(0)

0xb40: GOTO 0xa00

0xb41: Return(); Pop(0)

0xb42: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xb43: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xb44: PushEmpty(bool, object, float)
0xb45: Stack[-2] = Stack[-12]
0xb46: Stack[-1] = (float) 70.0
0xb47: Call2 0xe55

0xb48: Pop(2)
0xb49: Pop(1); Push((bool) Stack[-1] == 0)
0xb4a: IF (Stack[-1] == 0) GOTO 0xb4d; Pop(1)

0xb4b: Stack[-10] = (int) -2
0xb4c: Return(); Pop(8)

0xb4d: @ CreateDialog(Stack[-4])
0xb4e: Pop(0)
0xb4f: PushEmpty(int)
0xb50: Call2 0x101e

0xb51: Pop(0)
0xb52: @@ SetNPCName(Stack[-1])
0xb53: Pop(1)
0xb54: PushEmpty(int)
0xb55: Call2 0x101c

0xb56: Pop(0)
0xb57: @@ SetNPCDescription(Stack[-1])
0xb58: Pop(1)
0xb59: PushEmpty(string)
0xb5a: Call2 0x1020

0xb5b: Pop(0)
0xb5c: @@ SetPhoto(Stack[-1])
0xb5d: Pop(1)
0xb5e: PushEmpty(string)
0xb5f: Call2 0x1022

0xb60: Pop(0)
0xb61: @@ SetPhoto2(Stack[-1])
0xb62: Pop(1)
0xb63: PushEmpty(int)
0xb64: Call2 0x1204

0xb65: Pop(0)
0xb66: @@ SetPlayerName(Stack[-1])
0xb67: Pop(1)
0xb68: Stack[-2] = (int) -1
0xb69: @ IsOverrideActive(Stack[-3])
0xb6a: Pop(0)
0xb6b: Push(Stack[-3])
0xb6c: IF (Stack[-1] == 0) GOTO 0xb6f; Pop(1)

0xb6d: Stack[-10] = (int) -2
0xb6e: Return(); Pop(8)

0xb6f: @ DoDialog(Stack[-4])
0xb70: Pop(0)
0xb71: PushEmpty(bool, object)
0xb72: PushEmpty(object)
0xb73: Call2 0xf6b

0xb74: Stack[-2] = Stack[-1]
0xb75: Pop(1)
0xb76: Call2 0xeac

0xb77: Pop(2)
0xb78: PushEmpty(object, object)
0xb79: Stack[-2] = Stack[-11]
0xb7a: Stack[-1] = Stack[-6]
0xb7b: Push(-2, 4); TaskCall(13)
0xb7c: Call2 0xb93

0xb7d: Pop(-2, 4); TaskReturn
0xb7e: Pop(2)
0xb7f: @@ IsDialogEnd(Stack[-1])
0xb80: Pop(0)
0xb81: Pop(0); Push((bool) Stack[-1] == 0)
0xb82: IF (Stack[-1] == 0) GOTO 0xb88; Pop(1)

0xb83: @ sync()
0xb84: Pop(0)
0xb85: @@ IsDialogEnd(Stack[-1])
0xb86: Pop(0)
0xb87: GOTO 0xb81

0xb88: PushEmpty(object)
0xb89: Stack[-1] = Stack[-10]
0xb8a: Call2 0xe9a

0xb8b: Pop(1)
0xb8c: @ StopDialog(Stack[-4])
0xb8d: Pop(0)
0xb8e: @@ GetReturnValue(Stack[-2])
0xb8f: Pop(0)
0xb90: Stack[-10] = Stack[-2]
0xb91: Return(); Pop(8)

0xb92: Stack[-4] = 0
0xb93: PushEmpty()
0xb94: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xb95: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xb96: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xb97: Push((int) 1)
0xb98: IF (Stack[-1] == 0) GOTO 0xbb4; Pop(1)

0xb99: PushEmpty(string)
0xb9a: Stack[-1] = "Neutral"
0xb9b: Call2 0xbd2

0xb9c: Pop(1)
0xb9d: Push((int) 535231)
0xb9e: @@ SetMessage(Stack[-1])
0xb9f: Pop(1)
0xba0: @@ ClearReplies()
0xba1: Pop(0)
0xba2: Push((int) 535232)
0xba3: Push((int) 36953)
0xba4: Push((int) 36907)
0xba5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba6: Pop(3)
0xba7: Push((int) 535233)
0xba8: Push((int) -1)
0xba9: Push((int) 36908)
0xbaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbab: Pop(3)
0xbac: Push((int) 535280)
0xbad: Push((int) -1)
0xbae: Push((int) 36956)
0xbaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb0: Pop(3)
0xbb1: GOTO 0xbb4

0xbb2: Return(); Pop(0)

0xbb3: GOTO 0xb97

0xbb4: PushEmpty(bool)
0xbb5: Call2 0x1024

0xbb6: Pop(0)
0xbb7: IF (Stack[-1] == 0) GOTO 0xbc3; Pop(1)

0xbb8: @ lshWaitForAnimEnd()
0xbb9: Pop(0)
0xbba: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbbb: IF (Stack[-1] == 0) GOTO 0xbbd; Pop(1)

0xbbc: GOTO 0xbc2

0xbbd: PushEmpty(string)
0xbbe: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xbbf: Call2 0xf36

0xbc0: Pop(1)
0xbc1: GOTO 0xbb8

0xbc2: GOTO 0xbd1

0xbc3: Push("all")
0xbc4: Push("idle")
0xbc5: @ PlayAnimation(Stack[-2], Stack[-1])
0xbc6: Pop(2)
0xbc7: @ WaitForAnimEnd()
0xbc8: Pop(0)
0xbc9: Push( Stack[3 + Tasks[-1].StackPointer] )
0xbca: IF (Stack[-1] == 0) GOTO 0xbcc; Pop(1)

0xbcb: GOTO 0xbd1

0xbcc: Push("all")
0xbcd: Push("idle")
0xbce: @ PlayAnimation(Stack[-2], Stack[-1])
0xbcf: Pop(2)
0xbd0: GOTO 0xbc7

0xbd1: Return(); Pop(0)

0xbd2: PushEmpty()
0xbd3: PushEmpty(bool)
0xbd4: Call2 0x1024

0xbd5: Pop(0)
0xbd6: Pop(1); Push((bool) Stack[-1] == 0)
0xbd7: IF (Stack[-1] == 0) GOTO 0xbd9; Pop(1)

0xbd8: Return(); Pop(0)

0xbd9: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xbda: IF (Stack[-1] == 0) GOTO 0xbdc; Pop(1)

0xbdb: Return(); Pop(0)

0xbdc: PushEmpty(string, bool)
0xbdd: Stack[-2] = Stack[-3]
0xbde: Push("")
0xbdf: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbe0: IF (Stack[-1] == 0) GOTO 0xbe3; Pop(1)

0xbe1: Stack[-1] = (bool) 0
0xbe2: GOTO 0xbe4

0xbe3: Stack[-1] = (bool) 1
0xbe4: Call2 0xf46

0xbe5: Pop(2)
0xbe6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xbe7: Return(); Pop(0)

0xbe8: PushEmpty()
0xbe9: Push((int) 1)
0xbea: IF (Stack[-1] == 0) GOTO 0xc44; Pop(1)

0xbeb: PushEmpty()
0xbec: Call2 0xf64

0xbed: Pop(0)
0xbee: Push((int) 36906)
0xbef: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbf0: IF (Stack[-1] == 0) GOTO 0xc0a; Pop(1)

0xbf1: PushEmpty(string)
0xbf2: Stack[-1] = "Neutral"
0xbf3: Call2 0xbd2

0xbf4: Pop(1)
0xbf5: Push((int) 535231)
0xbf6: @@ SetMessage(Stack[-1])
0xbf7: Pop(1)
0xbf8: @@ ClearReplies()
0xbf9: Pop(0)
0xbfa: Push((int) 535232)
0xbfb: Push((int) 36953)
0xbfc: Push((int) 36907)
0xbfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbfe: Pop(3)
0xbff: Push((int) 535233)
0xc00: Push((int) -1)
0xc01: Push((int) 36908)
0xc02: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc03: Pop(3)
0xc04: Push((int) 535280)
0xc05: Push((int) -1)
0xc06: Push((int) 36956)
0xc07: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc08: Pop(3)
0xc09: Return(); Pop(0)

0xc0a: Push((int) 36953)
0xc0b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0c: IF (Stack[-1] == 0) GOTO 0xc21; Pop(1)

0xc0d: PushEmpty(string)
0xc0e: Stack[-1] = "Neutral"
0xc0f: Call2 0xbd2

0xc10: Pop(1)
0xc11: Push((int) 535277)
0xc12: @@ SetMessage(Stack[-1])
0xc13: Pop(1)
0xc14: @@ ClearReplies()
0xc15: Pop(0)
0xc16: Push((int) 535278)
0xc17: Push((int) 36957)
0xc18: Push((int) 36954)
0xc19: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1a: Pop(3)
0xc1b: Push((int) 535279)
0xc1c: Push((int) 36957)
0xc1d: Push((int) 36955)
0xc1e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc1f: Pop(3)
0xc20: Return(); Pop(0)

0xc21: Push((int) 36957)
0xc22: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc23: IF (Stack[-1] == 0) GOTO 0xc38; Pop(1)

0xc24: PushEmpty(string)
0xc25: Stack[-1] = "Neutral"
0xc26: Call2 0xbd2

0xc27: Pop(1)
0xc28: Push((int) 535281)
0xc29: @@ SetMessage(Stack[-1])
0xc2a: Pop(1)
0xc2b: @@ ClearReplies()
0xc2c: Pop(0)
0xc2d: Push((int) 535282)
0xc2e: Push((int) -1)
0xc2f: Push((int) 36958)
0xc30: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc31: Pop(3)
0xc32: Push((int) 535283)
0xc33: Push((int) -1)
0xc34: Push((int) 36959)
0xc35: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc36: Pop(3)
0xc37: Return(); Pop(0)

0xc38: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc39: PushEmpty(bool)
0xc3a: Call2 0x1024

0xc3b: Pop(0)
0xc3c: IF (Stack[-1] == 0) GOTO 0xc40; Pop(1)

0xc3d: @ lshStopAnimation()
0xc3e: Pop(0)
0xc3f: GOTO 0xc42

0xc40: @ StopAnimation()
0xc41: Pop(0)
0xc42: Return(); Pop(0)

0xc43: GOTO 0xbe9

0xc44: Return(); Pop(0)

0xc45: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc46: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc47: PushEmpty(bool, object, float)
0xc48: Stack[-2] = Stack[-12]
0xc49: Stack[-1] = (float) 70.0
0xc4a: Call2 0xe55

0xc4b: Pop(2)
0xc4c: Pop(1); Push((bool) Stack[-1] == 0)
0xc4d: IF (Stack[-1] == 0) GOTO 0xc50; Pop(1)

0xc4e: Stack[-10] = (int) -2
0xc4f: Return(); Pop(8)

0xc50: @ CreateDialog(Stack[-4])
0xc51: Pop(0)
0xc52: PushEmpty(int)
0xc53: Call2 0x101e

0xc54: Pop(0)
0xc55: @@ SetNPCName(Stack[-1])
0xc56: Pop(1)
0xc57: PushEmpty(int)
0xc58: Call2 0x101c

0xc59: Pop(0)
0xc5a: @@ SetNPCDescription(Stack[-1])
0xc5b: Pop(1)
0xc5c: PushEmpty(string)
0xc5d: Call2 0x1020

0xc5e: Pop(0)
0xc5f: @@ SetPhoto(Stack[-1])
0xc60: Pop(1)
0xc61: PushEmpty(string)
0xc62: Call2 0x1022

0xc63: Pop(0)
0xc64: @@ SetPhoto2(Stack[-1])
0xc65: Pop(1)
0xc66: PushEmpty(int)
0xc67: Call2 0x1204

0xc68: Pop(0)
0xc69: @@ SetPlayerName(Stack[-1])
0xc6a: Pop(1)
0xc6b: Stack[-2] = (int) -1
0xc6c: @ IsOverrideActive(Stack[-3])
0xc6d: Pop(0)
0xc6e: Push(Stack[-3])
0xc6f: IF (Stack[-1] == 0) GOTO 0xc72; Pop(1)

0xc70: Stack[-10] = (int) -2
0xc71: Return(); Pop(8)

0xc72: @ DoDialog(Stack[-4])
0xc73: Pop(0)
0xc74: PushEmpty(bool, object)
0xc75: PushEmpty(object)
0xc76: Call2 0xf6b

0xc77: Stack[-2] = Stack[-1]
0xc78: Pop(1)
0xc79: Call2 0xeac

0xc7a: Pop(2)
0xc7b: PushEmpty(object, object)
0xc7c: Stack[-2] = Stack[-11]
0xc7d: Stack[-1] = Stack[-6]
0xc7e: Push(-2, 4); TaskCall(15)
0xc7f: Call2 0xc96

0xc80: Pop(-2, 4); TaskReturn
0xc81: Pop(2)
0xc82: @@ IsDialogEnd(Stack[-1])
0xc83: Pop(0)
0xc84: Pop(0); Push((bool) Stack[-1] == 0)
0xc85: IF (Stack[-1] == 0) GOTO 0xc8b; Pop(1)

0xc86: @ sync()
0xc87: Pop(0)
0xc88: @@ IsDialogEnd(Stack[-1])
0xc89: Pop(0)
0xc8a: GOTO 0xc84

0xc8b: PushEmpty(object)
0xc8c: Stack[-1] = Stack[-10]
0xc8d: Call2 0xe9a

0xc8e: Pop(1)
0xc8f: @ StopDialog(Stack[-4])
0xc90: Pop(0)
0xc91: @@ GetReturnValue(Stack[-2])
0xc92: Pop(0)
0xc93: Stack[-10] = Stack[-2]
0xc94: Return(); Pop(8)

0xc95: Stack[-4] = 0
0xc96: PushEmpty()
0xc97: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc98: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc99: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc9a: Push((int) 1)
0xc9b: IF (Stack[-1] == 0) GOTO 0xcb2; Pop(1)

0xc9c: PushEmpty(string)
0xc9d: Stack[-1] = "Neutral"
0xc9e: Call2 0xcd0

0xc9f: Pop(1)
0xca0: Push((int) 540545)
0xca1: @@ SetMessage(Stack[-1])
0xca2: Pop(1)
0xca3: @@ ClearReplies()
0xca4: Pop(0)
0xca5: Push((int) 540546)
0xca6: Push((int) -1)
0xca7: Push((int) 42555)
0xca8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xca9: Pop(3)
0xcaa: Push((int) 540798)
0xcab: Push((int) -1)
0xcac: Push((int) 42847)
0xcad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcae: Pop(3)
0xcaf: GOTO 0xcb2

0xcb0: Return(); Pop(0)

0xcb1: GOTO 0xc9a

0xcb2: PushEmpty(bool)
0xcb3: Call2 0x1024

0xcb4: Pop(0)
0xcb5: IF (Stack[-1] == 0) GOTO 0xcc1; Pop(1)

0xcb6: @ lshWaitForAnimEnd()
0xcb7: Pop(0)
0xcb8: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcb9: IF (Stack[-1] == 0) GOTO 0xcbb; Pop(1)

0xcba: GOTO 0xcc0

0xcbb: PushEmpty(string)
0xcbc: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xcbd: Call2 0xf36

0xcbe: Pop(1)
0xcbf: GOTO 0xcb6

0xcc0: GOTO 0xccf

0xcc1: Push("all")
0xcc2: Push("idle")
0xcc3: @ PlayAnimation(Stack[-2], Stack[-1])
0xcc4: Pop(2)
0xcc5: @ WaitForAnimEnd()
0xcc6: Pop(0)
0xcc7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xcc8: IF (Stack[-1] == 0) GOTO 0xcca; Pop(1)

0xcc9: GOTO 0xccf

0xcca: Push("all")
0xccb: Push("idle")
0xccc: @ PlayAnimation(Stack[-2], Stack[-1])
0xccd: Pop(2)
0xcce: GOTO 0xcc5

0xccf: Return(); Pop(0)

0xcd0: PushEmpty()
0xcd1: PushEmpty(bool)
0xcd2: Call2 0x1024

0xcd3: Pop(0)
0xcd4: Pop(1); Push((bool) Stack[-1] == 0)
0xcd5: IF (Stack[-1] == 0) GOTO 0xcd7; Pop(1)

0xcd6: Return(); Pop(0)

0xcd7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcd8: IF (Stack[-1] == 0) GOTO 0xcda; Pop(1)

0xcd9: Return(); Pop(0)

0xcda: PushEmpty(string, bool)
0xcdb: Stack[-2] = Stack[-3]
0xcdc: Push("")
0xcdd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcde: IF (Stack[-1] == 0) GOTO 0xce1; Pop(1)

0xcdf: Stack[-1] = (bool) 0
0xce0: GOTO 0xce2

0xce1: Stack[-1] = (bool) 1
0xce2: Call2 0xf46

0xce3: Pop(2)
0xce4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xce5: Return(); Pop(0)

0xce6: PushEmpty()
0xce7: Push((int) 1)
0xce8: IF (Stack[-1] == 0) GOTO 0xd0f; Pop(1)

0xce9: PushEmpty()
0xcea: Call2 0xf64

0xceb: Pop(0)
0xcec: Push((int) 42554)
0xced: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcee: IF (Stack[-1] == 0) GOTO 0xd03; Pop(1)

0xcef: PushEmpty(string)
0xcf0: Stack[-1] = "Neutral"
0xcf1: Call2 0xcd0

0xcf2: Pop(1)
0xcf3: Push((int) 540545)
0xcf4: @@ SetMessage(Stack[-1])
0xcf5: Pop(1)
0xcf6: @@ ClearReplies()
0xcf7: Pop(0)
0xcf8: Push((int) 540546)
0xcf9: Push((int) -1)
0xcfa: Push((int) 42555)
0xcfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcfc: Pop(3)
0xcfd: Push((int) 540798)
0xcfe: Push((int) -1)
0xcff: Push((int) 42847)
0xd00: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd01: Pop(3)
0xd02: Return(); Pop(0)

0xd03: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd04: PushEmpty(bool)
0xd05: Call2 0x1024

0xd06: Pop(0)
0xd07: IF (Stack[-1] == 0) GOTO 0xd0b; Pop(1)

0xd08: @ lshStopAnimation()
0xd09: Pop(0)
0xd0a: GOTO 0xd0d

0xd0b: @ StopAnimation()
0xd0c: Pop(0)
0xd0d: Return(); Pop(0)

0xd0e: GOTO 0xce7

0xd0f: Return(); Pop(0)

0xd10: Push(GlobalVars[1])
0xd11: Stack[-1] = (bool) 0
0xd12: GlobalVars[1] = Stack[-1]; Pop(1)
0xd13: PushEmpty()
0xd14: Call2 0xd17

0xd15: Pop(0)
0xd16: Return(); Pop(0)

0xd17: PushEmpty(bool)
0xd18: Call2 0xe50

0xd19: Pop(0)
0xd1a: Pop(1); Push((bool) Stack[-1] == 0)
0xd1b: IF (Stack[-1] == 0) GOTO 0xd1e; Pop(1)

0xd1c: @ Hold()
0xd1d: Pop(0)
0xd1e: @ GetDirection(Stack[-0])
0xd1f: Pop(0)
0xd20: PushEmpty()
0xd21: Call2 0xdc7

0xd22: Pop(0)
0xd23: GOTO 0xd20

0xd24: Return(); Pop(0)

0xd25: PushEmpty(object, object)
0xd26: Push("player")
0xd27: @ FindActor(Stack[-2], Stack[-1])
0xd28: Pop(1)
0xd29: Pop(0); Push((bool) Stack[-1] == 0)
0xd2a: IF (Stack[-1] == 0) GOTO 0xd2d; Pop(1)

0xd2b: Stack[-3] = (bool) 0
0xd2c: Return(); Pop(2)

0xd2d: PushEmpty(bool, object)
0xd2e: Stack[-1] = Stack[-3]
0xd2f: Call2 0xe47

0xd30: Stack[-5] = Stack[-2]
0xd31: Pop(2)
0xd32: Return(); Pop(2)

0xd33: Stack[-1] = 0
0xd34: Push(CvectorIndex(Stack[-0], 0))
0xd35: Push(CvectorIndex(Stack[-0], 2))
0xd36: @ RotateAsync(Stack[-2], Stack[-1])
0xd37: Pop(2)
0xd38: Return(); Pop(0)

0xd39: PushEmpty(object, bool, object, bool)
0xd3a: Push("player")
0xd3b: @ FindActor(Stack[-3], Stack[-1])
0xd3c: Pop(1)
0xd3d: Pop(0); Push((bool) Stack[-2] == 0)
0xd3e: IF (Stack[-1] == 0) GOTO 0xd41; Pop(1)

0xd3f: Stack[-5] = (bool) 0
0xd40: Return(); Pop(4)

0xd41: PushEmpty(float, object)
0xd42: Stack[-1] = Stack[-4]
0xd43: Call2 0xe13

0xd44: Pop(1)
0xd45: Push((float)90000.0)
0xd46: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xd47: IF (Stack[-1] == 0) GOTO 0xd4a; Pop(1)

0xd48: Stack[-5] = (bool) 0
0xd49: Return(); Pop(4)

0xd4a: @ CanSee(Stack[-1], Stack[-2])
0xd4b: Pop(0)
0xd4c: Stack[-5] = Stack[-1]
0xd4d: Return(); Pop(4)

0xd4e: Stack[-2] = 0
0xd4f: PushEmpty(float, float)
0xd50: Push((int) 8)
0xd51: Push((int) 16)
0xd52: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xd53: Pop(2)
0xd54: Push((int) 10)
0xd55: @ SetTimer(Stack[-1], Stack[-2])
0xd56: Pop(1)
0xd57: Return(); Pop(2)

0xd58: Push((int) 10)
0xd59: @ KillTimer(Stack[-1])
0xd5a: Pop(1)
0xd5b: Return(); Pop(0)

0xd5c: PushEmpty()
0xd5d: Push((int) 10)
0xd5e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd5f: IF (Stack[-1] == 0) GOTO 0xd81; Pop(1)

0xd60: PushEmpty()
0xd61: Call2 0xd58

0xd62: Pop(0)
0xd63: PushEmpty(bool)
0xd64: Stack[-1] = (bool) 0
0xd65: PushEmpty(bool)
0xd66: Call2 0xe50

0xd67: Pop(0)
0xd68: IF (Stack[-1] == 0) GOTO 0xd6e; Pop(1)

0xd69: PushEmpty(bool)
0xd6a: Call2 0xd39

0xd6b: Pop(0)
0xd6c: IF (Stack[-1] == 0) GOTO 0xd6e; Pop(1)

0xd6d: Stack[-1] = (bool) 1
0xd6e: IF (Stack[-1] == 0) GOTO 0xd7b; Pop(1)

0xd6f: PushEmpty(bool)
0xd70: Call2 0xd25

0xd71: Pop(0)
0xd72: IF (Stack[-1] == 0) GOTO 0xd7a; Pop(1)

0xd73: PushEmpty(bool, object)
0xd74: PushEmpty(object)
0xd75: Call2 0xf6b

0xd76: Stack[-2] = Stack[-1]
0xd77: Pop(1)
0xd78: Call2 0xee6

0xd79: Pop(2)
0xd7a: GOTO 0xd81

0xd7b: PushEmpty()
0xd7c: Call2 0xd34

0xd7d: Pop(0)
0xd7e: PushEmpty()
0xd7f: Call2 0xd4f

0xd80: Pop(0)
0xd81: Return(); Pop(0)

0xd82: PushEmpty()
0xd83: Call2 0xe0e

0xd84: Pop(0)
0xd85: PushEmpty()
0xd86: Call2 0xd58

0xd87: Pop(0)
0xd88: @ lshStopSpeech()
0xd89: Pop(0)
0xd8a: @ lshStopAnimation()
0xd8b: Pop(0)
0xd8c: @ StopAsync()
0xd8d: Pop(0)
0xd8e: @ Hold()
0xd8f: Pop(0)
0xd90: Return(); Pop(0)

0xd91: @ StopGroup0()
0xd92: Pop(0)
0xd93: PushEmpty()
0xd94: Call2 0xd58

0xd95: Pop(0)
0xd96: PushEmpty(string)
0xd97: Stack[-1] = "Neutral"
0xd98: Call2 0xf36

0xd99: Pop(1)
0xd9a: PushEmpty()
0xd9b: Call2 0xd4f

0xd9c: Pop(0)
0xd9d: Return(); Pop(0)

0xd9e: PushEmpty()
0xd9f: Push(Stack[-1])
0xda0: IF (Stack[-1] == 0) GOTO 0xda5; Pop(1)

0xda1: PushEmpty()
0xda2: Call2 0xd4f

0xda3: Pop(0)
0xda4: GOTO 0xda9

0xda5: PushEmpty(string)
0xda6: Stack[-1] = "Neutral"
0xda7: Call2 0xf36

0xda8: Pop(1)
0xda9: Return(); Pop(0)

0xdaa: PushEmpty(bool, bool)
0xdab: @ IsOverrideActive(Stack[-1])
0xdac: Pop(0)
0xdad: Pop(0); Push((bool) Stack[-1] == 0)
0xdae: IF (Stack[-1] == 0) GOTO 0xdc6; Pop(1)

0xdaf: EventDisable(0)
0xdb0: PushEmpty()
0xdb1: Call2 0xe0e

0xdb2: Pop(0)
0xdb3: PushEmpty(bool, object)
0xdb4: Stack[-1] = Stack[-5]
0xdb5: Call2 0xe47

0xdb6: Pop(2)
0xdb7: EventEnable(0)
0xdb8: PushEmpty(object)
0xdb9: Stack[-1] = Stack[-4]
0xdba: Call2 0x1215

0xdbb: Pop(1)
0xdbc: PushEmpty(string)
0xdbd: Stack[-1] = "Neutral"
0xdbe: Call2 0xf36

0xdbf: Pop(1)
0xdc0: PushEmpty()
0xdc1: Call2 0xd58

0xdc2: Pop(0)
0xdc3: PushEmpty()
0xdc4: Call2 0xd4f

0xdc5: Pop(0)
0xdc6: Return(); Pop(2)

0xdc7: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xdc8: @ WaitForAnimEnd()
0xdc9: Pop(0)
0xdca: PushEmpty(bool)
0xdcb: Call2 0xe50

0xdcc: Pop(0)
0xdcd: Pop(1); Push((bool) Stack[-1] == 0)
0xdce: IF (Stack[-1] == 0) GOTO 0xdd0; Pop(1)

0xdcf: Return(); Pop(12)

0xdd0: PushEmpty(int)
0xdd1: Call2 0x100b

0xdd2: Stack[-7] = Stack[-1]
0xdd3: Pop(1)
0xdd4: Stack[-5] = (int) 0
0xdd5: PushEmpty(bool)
0xdd6: Stack[-1] = (bool) 0
0xdd7: Push((int) 5)
0xdd8: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xdd9: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xdda: PushEmpty(bool)
0xddb: Call2 0xe50

0xddc: Pop(0)
0xddd: IF (Stack[-1] == 0) GOTO 0xddf; Pop(1)

0xdde: Stack[-1] = (bool) 1
0xddf: IF (Stack[-1] == 0) GOTO 0xe09; Pop(1)

0xde0: Pop(0); Push((bool) Stack[-6] == 0)
0xde1: IF (Stack[-1] == 0) GOTO 0xde9; Pop(1)

0xde2: Push((int) 3)
0xde3: @ Sleep(Stack[-1], Stack[-5])
0xde4: Pop(1)
0xde5: Pop(0); Push((bool) Stack[-4] == 0)
0xde6: IF (Stack[-1] == 0) GOTO 0xde8; Pop(1)

0xde7: GOTO 0xe09

0xde8: GOTO 0xdfe

0xde9: @ irand(Stack[-3], Stack[-6])
0xdea: Pop(0)
0xdeb: Push((int) 5)
0xdec: @ irand(Stack[-3], Stack[-1])
0xded: Pop(1)
0xdee: Push((int) 0)
0xdef: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xdf0: IF (Stack[-1] == 0) GOTO 0xdf2; Pop(1)

0xdf1: Stack[-3] = (int) 0
0xdf2: Push("all")
0xdf3: PushEmpty(string, int)
0xdf4: Stack[-1] = Stack[-6]
0xdf5: Call2 0x1004

0xdf6: Pop(1)
0xdf7: @ PlayAnimation(Stack[-2], Stack[-1])
0xdf8: Pop(2)
0xdf9: @ WaitForAnimEnd(Stack[-1])
0xdfa: Pop(0)
0xdfb: Pop(0); Push((bool) Stack[-1] == 0)
0xdfc: IF (Stack[-1] == 0) GOTO 0xdfe; Pop(1)

0xdfd: GOTO 0xe09

0xdfe: PushEmpty(bool)
0xdff: Call2 0xe0c

0xe00: Pop(0)
0xe01: Pop(1); Push((bool) Stack[-1] == 0)
0xe02: IF (Stack[-1] == 0) GOTO 0xe04; Pop(1)

0xe03: GOTO 0xe09

0xe04: @ ResetAAS()
0xe05: Pop(0)
0xe06: Push((int) 1)
0xe07: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xe08: GOTO 0xdd5

0xe09: @ ResetAAS()
0xe0a: Pop(0)
0xe0b: Return(); Pop(12)

0xe0c: Stack[-1] = (bool) 1
0xe0d: Return(); Pop(0)

0xe0e: @ StopAnimation()
0xe0f: Pop(0)
0xe10: @ StopGroup0()
0xe11: Pop(0)
0xe12: Return(); Pop(0)

0xe13: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xe14: @ GetPosition(Stack[-3])
0xe15: Pop(0)
0xe16: @@ GetPosition(Stack[-2])
0xe17: Pop(0)
0xe18: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xe19: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xe1a: Return(); Pop(6)

0xe1b: PushEmpty(bool, bool)
0xe1c: Push("HasProperty")
0xe1d: Push((int) 2)
0xe1e: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xe1f: Pop(1); Push((bool) Stack[-1] == 0)
0xe20: IF (Stack[-1] == 0) GOTO 0xe23; Pop(1)

0xe21: Stack[-5] = (bool) 0
0xe22: Return(); Pop(2)

0xe23: @@ HasProperty(Stack[-3], Stack[-1])
0xe24: Pop(0)
0xe25: Stack[-5] = Stack[-1]
0xe26: Return(); Pop(2)

0xe27: PushEmpty(float, float)
0xe28: PushEmpty(bool, object, string)
0xe29: Stack[-2] = Stack[-10]
0xe2a: Stack[-1] = Stack[-9]
0xe2b: Call2 0xe1b

0xe2c: Pop(2)
0xe2d: Pop(1); Push((bool) Stack[-1] == 0)
0xe2e: IF (Stack[-1] == 0) GOTO 0xe31; Pop(1)

0xe2f: Stack[-8] = (bool) 0
0xe30: Return(); Pop(2)

0xe31: @@ GetProperty(Stack[-6], Stack[-1])
0xe32: Pop(0)
0xe33: PushEmpty(float, float, float, float)
0xe34: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xe35: Stack[-2] = Stack[-8]
0xe36: Stack[-1] = Stack[-7]
0xe37: Call2 0xf7b

0xe38: Pop(3)
0xe39: @@ SetProperty(Stack[-7], Stack[-1])
0xe3a: Pop(1)
0xe3b: Stack[-8] = (bool) 1
0xe3c: Return(); Pop(2)

0xe3d: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xe3e: @ GetPosition(Stack[-3])
0xe3f: Pop(0)
0xe40: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xe41: Push(CvectorIndex(Stack[-2], 0))
0xe42: Push(CvectorIndex(Stack[-3], 2))
0xe43: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xe44: Pop(2)
0xe45: Stack[-8] = Stack[-1]
0xe46: Return(); Pop(6)

0xe47: PushEmpty(cvector, cvector)
0xe48: @@ GetPosition(Stack[-1])
0xe49: Pop(0)
0xe4a: PushEmpty(bool, cvector)
0xe4b: Stack[-1] = Stack[-3]
0xe4c: Call2 0xe3d

0xe4d: Stack[-6] = Stack[-2]
0xe4e: Pop(2)
0xe4f: Return(); Pop(2)

0xe50: PushEmpty(bool, bool)
0xe51: @ IsLoaded(Stack[-1])
0xe52: Pop(0)
0xe53: Stack[-3] = Stack[-1]
0xe54: Return(); Pop(2)

0xe55: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xe56: @@ GetPosition(Stack[-8])
0xe57: Pop(0)
0xe58: @@ GetEyesHeight(Stack[-9])
0xe59: Pop(0)
0xe5a: Push(CvectorIndex(Stack[-8], 1))
0xe5b: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe5c: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xe5d: @ GetPosition(Stack[-7])
0xe5e: Pop(0)
0xe5f: @ GetEyesHeight(Stack[-9])
0xe60: Pop(0)
0xe61: Push(CvectorIndex(Stack[-7], 1))
0xe62: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe63: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xe64: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xe65: Push(CvectorIndex(Stack[-6], 1))
0xe66: Stack[-1] = (int) 0
0xe67: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xe68: Pop(0); Push(Stack[-6] | Stack[-6]);
0xe69: Pop(1); Push(Sqrt(Stack[-1]))
0xe6a: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xe6b: Stack[-5] = -Stack[-6]; Pop(0);
0xe6c: Pop(0); Push(Stack[-6] * Stack[-19]);
0xe6d: PushEmpty(cvector, cvector)
0xe6e: Push(CVector(0.0, 1.0, 0.0))
0xe6f: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xe70: Call2 0xf71

0xe71: Pop(1)
0xe72: Push((int) 25)
0xe73: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe74: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe75: Push(CVector(0.0, 10.0, 0.0))
0xe76: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xe77: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xe78: @ IsOverrideActive(Stack[-2])
0xe79: Pop(0)
0xe7a: Push(Stack[-2])
0xe7b: IF (Stack[-1] == 0) GOTO 0xe7e; Pop(1)

0xe7c: Stack[-21] = (bool) 0
0xe7d: Return(); Pop(18)

0xe7e: @ StopWorld()
0xe7f: Pop(0)
0xe80: Push((bool) 1)
0xe81: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0xe82: Pop(1)
0xe83: Push(CvectorIndex(Stack[-4], 0))
0xe84: Push(CvectorIndex(Stack[-5], 2))
0xe85: @ Rotate(Stack[-2], Stack[-1])
0xe86: Pop(2)
0xe87: PushEmpty(bool)
0xe88: Call2 0x1024

0xe89: Pop(0)
0xe8a: IF (Stack[-1] == 0) GOTO 0xe8c; Pop(1)

0xe8b: GOTO 0xe94

0xe8c: Push("head")
0xe8d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xe8e: Pop(1)
0xe8f: Push(Stack[-1])
0xe90: IF (Stack[-1] == 0) GOTO 0xe94; Pop(1)

0xe91: Push("head")
0xe92: @ LookAsyncCamera(Stack[-1])
0xe93: Pop(1)
0xe94: @ CameraWaitForPlayFinish()
0xe95: Pop(0)
0xe96: @ ResumeWorld()
0xe97: Pop(0)
0xe98: Stack[-21] = (bool) 1
0xe99: Return(); Pop(18)

0xe9a: PushEmpty(bool, bool)
0xe9b: Push((bool) 1)
0xe9c: @ CameraSwitchToNormal(Stack[-1])
0xe9d: Pop(1)
0xe9e: PushEmpty(bool)
0xe9f: Call2 0x1024

0xea0: Pop(0)
0xea1: IF (Stack[-1] == 0) GOTO 0xea3; Pop(1)

0xea2: GOTO 0xeab

0xea3: Push("head")
0xea4: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xea5: Pop(1)
0xea6: Push(Stack[-1])
0xea7: IF (Stack[-1] == 0) GOTO 0xeab; Pop(1)

0xea8: Push("head")
0xea9: @ UnlookAsync(Stack[-1])
0xeaa: Pop(1)
0xeab: Return(); Pop(2)

0xeac: PushEmpty(int, int, int, int)
0xead: Push("voice_common")
0xeae: @ GetVariable(Stack[-1], Stack[-3])
0xeaf: Pop(1)
0xeb0: Push(Stack[-2])
0xeb1: IF (Stack[-1] == 0) GOTO 0xed2; Pop(1)

0xeb2: PushEmpty(bool, object)
0xeb3: Stack[-1] = Stack[-7]
0xeb4: Call2 0xee6

0xeb5: Pop(1)
0xeb6: Pop(1); Push((bool) Stack[-1] == 0)
0xeb7: IF (Stack[-1] == 0) GOTO 0xec0; Pop(1)

0xeb8: PushEmpty(bool, object)
0xeb9: Stack[-1] = Stack[-7]
0xeba: Call2 0xf0b

0xebb: Pop(1)
0xebc: Pop(1); Push((bool) Stack[-1] == 0)
0xebd: IF (Stack[-1] == 0) GOTO 0xec0; Pop(1)

0xebe: Stack[-6] = (bool) 0
0xebf: Return(); Pop(4)

0xec0: Push((int) 2)
0xec1: @ irand(Stack[-2], Stack[-1])
0xec2: Pop(1)
0xec3: Push(Stack[-1])
0xec4: IF (Stack[-1] == 0) GOTO 0xecd; Pop(1)

0xec5: Push("voice_common")
0xec6: Push((int) 1)
0xec7: Pop(1); Push(Stack[-4] + Stack[-1]);
0xec8: Push((int) 3)
0xec9: Pop(2); Push(Stack[-2] % Stack[-1]);
0xeca: @ SetVariable(Stack[-2], Stack[-1])
0xecb: Pop(2)
0xecc: GOTO 0xed1

0xecd: Push("voice_common")
0xece: Push((int) 0)
0xecf: @ SetVariable(Stack[-2], Stack[-1])
0xed0: Pop(2)
0xed1: GOTO 0xee4

0xed2: PushEmpty(bool, object)
0xed3: Stack[-1] = Stack[-7]
0xed4: Call2 0xf0b

0xed5: Pop(1)
0xed6: Pop(1); Push((bool) Stack[-1] == 0)
0xed7: IF (Stack[-1] == 0) GOTO 0xee0; Pop(1)

0xed8: PushEmpty(bool, object)
0xed9: Stack[-1] = Stack[-7]
0xeda: Call2 0xee6

0xedb: Pop(1)
0xedc: Pop(1); Push((bool) Stack[-1] == 0)
0xedd: IF (Stack[-1] == 0) GOTO 0xee0; Pop(1)

0xede: Stack[-6] = (bool) 0
0xedf: Return(); Pop(4)

0xee0: Push("voice_common")
0xee1: Push((int) 1)
0xee2: @ SetVariable(Stack[-2], Stack[-1])
0xee3: Pop(2)
0xee4: Stack[-6] = (bool) 1
0xee5: Return(); Pop(4)

0xee6: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xee7: Stack[-5] = "c"
0xee8: Stack[-4] = (int) 0
0xee9: Push((int) 1)
0xeea: IF (Stack[-1] == 0) GOTO 0xef6; Pop(1)

0xeeb: Push((int) 1)
0xeec: Pop(1); Push(Stack[-5] + Stack[-1]);
0xeed: Pop(1); Push(Stack[-6] + Stack[-1]);
0xeee: @@ HasProperty(Stack[-1], Stack[-4])
0xeef: Pop(1)
0xef0: Pop(0); Push((bool) Stack[-3] == 0)
0xef1: IF (Stack[-1] == 0) GOTO 0xef3; Pop(1)

0xef2: GOTO 0xef6

0xef3: Push((int) 1)
0xef4: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xef5: GOTO 0xee9

0xef6: Pop(0); Push((bool) Stack[-4] == 0)
0xef7: IF (Stack[-1] == 0) GOTO 0xefa; Pop(1)

0xef8: Stack[-12] = (bool) 0
0xef9: Return(); Pop(10)

0xefa: Stack[-2] = (int) 0
0xefb: Push((int) 1)
0xefc: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xefd: IF (Stack[-1] == 0) GOTO 0xf00; Pop(1)

0xefe: @ irand(Stack[-2], Stack[-4])
0xeff: Pop(0)
0xf00: Push((int) 1)
0xf01: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf02: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf03: @@ GetProperty(Stack[-1], Stack[-2])
0xf04: Pop(1)
0xf05: PushEmpty(bool, string)
0xf06: Stack[-1] = Stack[-3]
0xf07: Call2 0xf55

0xf08: Stack[-14] = Stack[-2]
0xf09: Pop(2)
0xf0a: Return(); Pop(10)

0xf0b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xf0c: Push("d")
0xf0d: PushEmpty(int)
0xf0e: Call2 0xff5

0xf0f: Pop(0)
0xf10: Pop(2); Push(Stack[-2] + Stack[-1]);
0xf11: Push("m")
0xf12: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xf13: Stack[-4] = (int) 0
0xf14: Push((int) 1)
0xf15: IF (Stack[-1] == 0) GOTO 0xf21; Pop(1)

0xf16: Push((int) 1)
0xf17: Pop(1); Push(Stack[-5] + Stack[-1]);
0xf18: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf19: @@ HasProperty(Stack[-1], Stack[-4])
0xf1a: Pop(1)
0xf1b: Pop(0); Push((bool) Stack[-3] == 0)
0xf1c: IF (Stack[-1] == 0) GOTO 0xf1e; Pop(1)

0xf1d: GOTO 0xf21

0xf1e: Push((int) 1)
0xf1f: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xf20: GOTO 0xf14

0xf21: Pop(0); Push((bool) Stack[-4] == 0)
0xf22: IF (Stack[-1] == 0) GOTO 0xf25; Pop(1)

0xf23: Stack[-12] = (bool) 0
0xf24: Return(); Pop(10)

0xf25: Stack[-2] = (int) 0
0xf26: Push((int) 1)
0xf27: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xf28: IF (Stack[-1] == 0) GOTO 0xf2b; Pop(1)

0xf29: @ irand(Stack[-2], Stack[-4])
0xf2a: Pop(0)
0xf2b: Push((int) 1)
0xf2c: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf2d: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf2e: @@ GetProperty(Stack[-1], Stack[-2])
0xf2f: Pop(1)
0xf30: PushEmpty(bool, string)
0xf31: Stack[-1] = Stack[-3]
0xf32: Call2 0xf55

0xf33: Stack[-14] = Stack[-2]
0xf34: Pop(2)
0xf35: Return(); Pop(10)

0xf36: PushEmpty(bool, float, float, bool, float, float)
0xf37: @ lshHasAnimation(Stack[-3], Stack[-7])
0xf38: Pop(0)
0xf39: Push(Stack[-3])
0xf3a: IF (Stack[-1] == 0) GOTO 0xf41; Pop(1)

0xf3b: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xf3c: Pop(0)
0xf3d: Push((bool) 0)
0xf3e: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf3f: Pop(1)
0xf40: GOTO 0xf45

0xf41: Push("Can't find lsh animation : ")
0xf42: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf43: @ Trace(Stack[-1])
0xf44: Pop(1)
0xf45: Return(); Pop(6)

0xf46: PushEmpty(bool, float, float, bool, float, float)
0xf47: @ lshHasAnimation(Stack[-3], Stack[-8])
0xf48: Pop(0)
0xf49: Push(Stack[-3])
0xf4a: IF (Stack[-1] == 0) GOTO 0xf50; Pop(1)

0xf4b: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xf4c: Pop(0)
0xf4d: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf4e: Pop(0)
0xf4f: GOTO 0xf54

0xf50: Push("Can't find lsh animation : ")
0xf51: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf52: @ Trace(Stack[-1])
0xf53: Pop(1)
0xf54: Return(); Pop(6)

0xf55: PushEmpty(bool, bool)
0xf56: PushEmpty(bool)
0xf57: Call2 0x1024

0xf58: Pop(0)
0xf59: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf5a: @ lshHasSpeech(Stack[-1], Stack[-3])
0xf5b: Pop(0)
0xf5c: Push(Stack[-1])
0xf5d: IF (Stack[-1] == 0) GOTO 0xf62; Pop(1)

0xf5e: @ lshPlaySpeech(Stack[-3])
0xf5f: Pop(0)
0xf60: Stack[-4] = (bool) 1
0xf61: Return(); Pop(2)

0xf62: Stack[-4] = (bool) 0
0xf63: Return(); Pop(2)

0xf64: PushEmpty(bool)
0xf65: Call2 0x1024

0xf66: Pop(0)
0xf67: IF (Stack[-1] == 0) GOTO 0xf6a; Pop(1)

0xf68: @ lshStopSpeech()
0xf69: Pop(0)
0xf6a: Return(); Pop(0)

0xf6b: PushEmpty(object, object)
0xf6c: @ self(Stack[-1])
0xf6d: Pop(0)
0xf6e: Stack[-3] = Stack[-1]
0xf6f: Return(); Pop(2)

0xf70: Stack[-1] = 0
0xf71: PushEmpty(float, float)
0xf72: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf73: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf74: Push((float)0.0)
0xf75: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf76: IF (Stack[-1] == 0) GOTO 0xf79; Pop(1)

0xf77: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xf78: Return(); Pop(2)

0xf79: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf7a: Return(); Pop(2)

0xf7b: PushEmpty()
0xf7c: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xf7d: IF (Stack[-1] == 0) GOTO 0xf80; Pop(1)

0xf7e: Stack[-4] = Stack[-2]
0xf7f: Return(); Pop(0)

0xf80: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xf81: IF (Stack[-1] == 0) GOTO 0xf84; Pop(1)

0xf82: Stack[-4] = Stack[-1]
0xf83: Return(); Pop(0)

0xf84: Stack[-4] = Stack[-3]
0xf85: Return(); Pop(0)

0xf86: PushEmpty(int, int)
0xf87: @ GetVariable(Stack[-3], Stack[-1])
0xf88: Pop(0)
0xf89: Stack[-4] = Stack[-1]
0xf8a: Return(); Pop(2)

0xf8b: PushEmpty(object, object)
0xf8c: @ CreateIntVector(Stack[-1])
0xf8d: Pop(0)
0xf8e: @@ add(Stack[-4])
0xf8f: Pop(0)
0xf90: @@ add(Stack[-3])
0xf91: Pop(0)
0xf92: Push((int) 3)
0xf93: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xf94: Pop(1)
0xf95: Return(); Pop(2)

0xf96: Stack[-1] = 0
0xf97: PushEmpty(int, int, bool, int, int, bool)
0xf98: @@ GetItemID(Stack[-3])
0xf99: Pop(0)
0xf9a: Push("Category")
0xf9b: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xf9c: Pop(1)
0xf9d: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xf9e: Pop(0)
0xf9f: Pop(0); Push((bool) Stack[-1] == 0)
0xfa0: IF (Stack[-1] == 0) GOTO 0xfa4; Pop(1)

0xfa1: @@ DropItems(Stack[-8], Stack[-7])
0xfa2: Pop(0)
0xfa3: GOTO 0xfa9

0xfa4: PushEmpty(int, int)
0xfa5: Stack[-2] = Stack[-5]
0xfa6: Stack[-1] = Stack[-9]
0xfa7: Call2 0xf8b

0xfa8: Pop(2)
0xfa9: Return(); Pop(6)

0xfaa: PushEmpty(object, object)
0xfab: @ CreateInvItem(Stack[-1])
0xfac: Pop(0)
0xfad: @@ SetItemName(Stack[-4])
0xfae: Pop(0)
0xfaf: PushEmpty(object, object, int)
0xfb0: Stack[-3] = Stack[-8]
0xfb1: Stack[-2] = Stack[-4]
0xfb2: Stack[-1] = Stack[-6]
0xfb3: Call2 0xf97

0xfb4: Pop(3)
0xfb5: Return(); Pop(2)

0xfb6: Stack[-1] = 0
0xfb7: PushEmpty()
0xfb8: Pop(0); Push((bool) Stack[-2] == 0)
0xfb9: IF (Stack[-1] == 0) GOTO 0xfbc; Pop(1)

0xfba: Stack[-3] = (bool) 0
0xfbb: Return(); Pop(0)

0xfbc: Push((int) 0)
0xfbd: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc3; Pop(1)

0xfbf: Push((int) 8)
0xfc0: @ SendWorldWndMessage(Stack[-1])
0xfc1: Pop(1)
0xfc2: GOTO 0xfcc

0xfc3: Push((int) 0)
0xfc4: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xfc5: IF (Stack[-1] == 0) GOTO 0xfca; Pop(1)

0xfc6: Push((int) 9)
0xfc7: @ SendWorldWndMessage(Stack[-1])
0xfc8: Pop(1)
0xfc9: GOTO 0xfcc

0xfca: Stack[-3] = (bool) 0
0xfcb: Return(); Pop(0)

0xfcc: PushEmpty(float)
0xfcd: Stack[-1] = Stack[-2]
0xfce: Call2 0xfda

0xfcf: Pop(1)
0xfd0: PushEmpty(bool, object, string, float, float, float)
0xfd1: Stack[-5] = Stack[-8]
0xfd2: Stack[-4] = "reputation"
0xfd3: Stack[-3] = Stack[-7]
0xfd4: Stack[-2] = (int) 0
0xfd5: Stack[-1] = (int) 1
0xfd6: Call2 0xe27

0xfd7: Pop(6)
0xfd8: Stack[-3] = (bool) 1
0xfd9: Return(); Pop(0)

0xfda: PushEmpty(object, object)
0xfdb: @ CreateFloatVector(Stack[-1])
0xfdc: Pop(0)
0xfdd: @@ add(Stack[-3])
0xfde: Pop(0)
0xfdf: Push((int) 16)
0xfe0: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xfe1: Pop(1)
0xfe2: Return(); Pop(2)

0xfe3: Stack[-1] = 0
0xfe4: PushEmpty(object, object)
0xfe5: @ FindActor(Stack[-1], Stack[-4])
0xfe6: Pop(0)
0xfe7: Pop(0); Push((bool) Stack[-1] == 0)
0xfe8: IF (Stack[-1] == 0) GOTO 0xfeb; Pop(1)

0xfe9: Stack[-5] = (bool) 0
0xfea: Return(); Pop(2)

0xfeb: @ Trigger(Stack[-1], Stack[-3])
0xfec: Pop(0)
0xfed: Stack[-5] = (bool) 1
0xfee: Return(); Pop(2)

0xfef: Stack[-1] = 0
0xff0: PushEmpty(float, float)
0xff1: @ GetGameTime(Stack[-1])
0xff2: Pop(0)
0xff3: Stack[-3] = Stack[-1]
0xff4: Return(); Pop(2)

0xff5: PushEmpty(float, float)
0xff6: @ GetGameTime(Stack[-1])
0xff7: Pop(0)
0xff8: Push((int) 1)
0xff9: PushEmpty(int)
0xffa: Push((int) 24)
0xffb: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xffc: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xffd: Return(); Pop(2)

0xffe: PushEmpty()
0xfff: PushEmpty(int)
0x1000: Call2 0xff5

0x1001: Pop(0)
0x1002: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x1003: Return(); Pop(0)

0x1004: PushEmpty(string, string)
0x1005: Stack[-1] = "idle"
0x1006: Push(Stack[-3])
0x1007: IF (Stack[-1] == 0) GOTO 0x1009; Pop(1)

0x1008: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x1009: Stack[-4] = Stack[-1]
0x100a: Return(); Pop(2)

0x100b: PushEmpty(int, bool, int, bool)
0x100c: Stack[-2] = (int) 0
0x100d: Push("all")
0x100e: PushEmpty(string, int)
0x100f: Stack[-1] = Stack[-5]
0x1010: Call2 0x1004

0x1011: Pop(1)
0x1012: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x1013: Pop(2)
0x1014: Pop(0); Push((bool) Stack[-1] == 0)
0x1015: IF (Stack[-1] == 0) GOTO 0x1017; Pop(1)

0x1016: GOTO 0x101a

0x1017: Push((int) 1)
0x1018: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x1019: GOTO 0x100d

0x101a: Stack[-5] = Stack[-2]
0x101b: Return(); Pop(4)

0x101c: Stack[-1] = (int) 515534
0x101d: Return(); Pop(0)

0x101e: Stack[-1] = (int) 502859
0x101f: Return(); Pop(0)

0x1020: Stack[-1] = "ui/NPC_Georg.png"
0x1021: Return(); Pop(0)

0x1022: Stack[-1] = "ui/NPC_Georg_b.png"
0x1023: Return(); Pop(0)

0x1024: Stack[-1] = (bool) 1
0x1025: Return(); Pop(0)

0x1026: PushEmpty(object, object)
0x1027: Push("k1q02")
0x1028: Push((int) 3)
0x1029: @ SetVariable(Stack[-2], Stack[-1])
0x102a: Pop(2)
0x102b: PushEmpty(object)
0x102c: Call2 0x11d2

0x102d: Stack[-2] = Stack[-1]
0x102e: Pop(1)
0x102f: Push("k1q02GeorgGotoMaria")
0x1030: Push("pt_map_maria")
0x1031: Push((int) 0)
0x1032: Push((int) 524779)
0x1033: PushEmpty(float)
0x1034: Call2 0xff0

0x1035: Pop(0)
0x1036: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1037: Pop(5)
0x1038: PushEmpty()
0x1039: Call2 0x115b

0x103a: Pop(0)
0x103b: Return(); Pop(2)

0x103c: Stack[-1] = 0
0x103d: PushEmpty()
0x103e: Push("k1q02")
0x103f: Push((int) 5)
0x1040: @ SetVariable(Stack[-2], Stack[-1])
0x1041: Pop(2)
0x1042: PushEmpty()
0x1043: Call2 0x114e

0x1044: Pop(0)
0x1045: Return(); Pop(0)

0x1046: PushEmpty()
0x1047: Push("beta_pills 5 is given")
0x1048: @ Trace(Stack[-1])
0x1049: Pop(1)
0x104a: PushEmpty(object, string, int)
0x104b: Stack[-3] = Stack[-5]
0x104c: Stack[-2] = "beta_pills"
0x104d: Stack[-1] = (int) 5
0x104e: Call2 0xfaa

0x104f: Pop(3)
0x1050: Return(); Pop(0)

0x1051: PushEmpty()
0x1052: Push("ook3Georg1")
0x1053: Push((int) 1)
0x1054: @ SetVariable(Stack[-2], Stack[-1])
0x1055: Pop(2)
0x1056: Return(); Pop(0)

0x1057: PushEmpty()
0x1058: Push("k5q01")
0x1059: Push((int) 3)
0x105a: @ SetVariable(Stack[-2], Stack[-1])
0x105b: Pop(2)
0x105c: PushEmpty()
0x105d: Call2 0x1175

0x105e: Pop(0)
0x105f: Return(); Pop(0)

0x1060: PushEmpty()
0x1061: Push("ook10Georg1")
0x1062: Push((int) 1)
0x1063: @ SetVariable(Stack[-2], Stack[-1])
0x1064: Pop(2)
0x1065: Return(); Pop(0)

0x1066: PushEmpty()
0x1067: Push("k9q01")
0x1068: Push((int) 2)
0x1069: @ SetVariable(Stack[-2], Stack[-1])
0x106a: Pop(2)
0x106b: PushEmpty()
0x106c: Call2 0x118f

0x106d: Pop(0)
0x106e: PushEmpty(bool, string, string)
0x106f: Stack[-2] = "quest_k9_01"
0x1070: Stack[-1] = "init_termitnik2"
0x1071: Call2 0xfe4

0x1072: Pop(3)
0x1073: Return(); Pop(0)

0x1074: PushEmpty()
0x1075: Push("k9q01")
0x1076: Push((int) 4)
0x1077: @ SetVariable(Stack[-2], Stack[-1])
0x1078: Pop(2)
0x1079: PushEmpty()
0x107a: Call2 0x119c

0x107b: Pop(0)
0x107c: Return(); Pop(0)

0x107d: PushEmpty()
0x107e: Push("ook1Georg1")
0x107f: Push((int) 1)
0x1080: @ SetVariable(Stack[-2], Stack[-1])
0x1081: Pop(2)
0x1082: Return(); Pop(0)

0x1083: PushEmpty()
0x1084: Push("k1q02")
0x1085: Push((int) -1)
0x1086: @ SetVariable(Stack[-2], Stack[-1])
0x1087: Pop(2)
0x1088: PushEmpty()
0x1089: Call2 0x1168

0x108a: Pop(0)
0x108b: Return(); Pop(0)

0x108c: PushEmpty()
0x108d: Push("raincoat_repel is given")
0x108e: @ Trace(Stack[-1])
0x108f: Pop(1)
0x1090: PushEmpty(object, string, int)
0x1091: Stack[-3] = Stack[-5]
0x1092: Stack[-2] = "raincoat_repel"
0x1093: Stack[-1] = (int) 1
0x1094: Call2 0xfaa

0x1095: Pop(3)
0x1096: Return(); Pop(0)

0x1097: PushEmpty()
0x1098: PushEmpty()
0x1099: Call2 0x1182

0x109a: Pop(0)
0x109b: PushEmpty(bool, string, string)
0x109c: Stack[-2] = "quest_k9_01"
0x109d: Stack[-1] = "fail"
0x109e: Call2 0xfe4

0x109f: Pop(3)
0x10a0: Return(); Pop(0)

0x10a1: PushEmpty()
0x10a2: Push("revolver ammo6 is given")
0x10a3: @ Trace(Stack[-1])
0x10a4: Pop(1)
0x10a5: PushEmpty(object, string, int)
0x10a6: Stack[-3] = Stack[-5]
0x10a7: Stack[-2] = "revolver_ammo"
0x10a8: Stack[-1] = (int) 6
0x10a9: Call2 0xfaa

0x10aa: Pop(3)
0x10ab: Return(); Pop(0)

0x10ac: PushEmpty()
0x10ad: PushEmpty(bool, object, float)
0x10ae: Stack[-2] = Stack[-5]
0x10af: Stack[-1] = (float) -0.3
0x10b0: Call2 0xfb7

0x10b1: Pop(3)
0x10b2: Return(); Pop(0)

0x10b3: PushEmpty()
0x10b4: PushEmpty(bool, object, float)
0x10b5: Stack[-2] = Stack[-5]
0x10b6: Stack[-1] = (float) -0.5
0x10b7: Call2 0xfb7

0x10b8: Pop(3)
0x10b9: Return(); Pop(0)

0x10ba: PushEmpty()
0x10bb: PushEmpty(object, string, float)
0x10bc: PushEmpty(object)
0x10bd: Call2 0x11d2

0x10be: Stack[-4] = Stack[-1]
0x10bf: Pop(1)
0x10c0: Stack[-2] = "pt_map_maria"
0x10c1: Stack[-1] = (int) 2
0x10c2: Call2 0x11e3

0x10c3: Pop(3)
0x10c4: PushEmpty(object)
0x10c5: Call2 0x11d2

0x10c6: Pop(0)
0x10c7: @@ ShowMap(Stack[-1])
0x10c8: Pop(1)
0x10c9: Return(); Pop(0)

0x10ca: PushEmpty()
0x10cb: PushEmpty(int, string)
0x10cc: Stack[-1] = "k1q02"
0x10cd: Call2 0xf86

0x10ce: Pop(1)
0x10cf: Push((int) 2)
0x10d0: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10d1: IF (Stack[-1] == 0) GOTO 0x10d4; Pop(1)

0x10d2: Stack[-2] = (bool) 1
0x10d3: Return(); Pop(0)

0x10d4: Stack[-2] = (bool) 0
0x10d5: Return(); Pop(0)

0x10d6: PushEmpty()
0x10d7: PushEmpty(int, string)
0x10d8: Stack[-1] = "k1q02"
0x10d9: Call2 0xf86

0x10da: Pop(1)
0x10db: Push((int) 4)
0x10dc: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10dd: IF (Stack[-1] == 0) GOTO 0x10e0; Pop(1)

0x10de: Stack[-2] = (bool) 1
0x10df: Return(); Pop(0)

0x10e0: Stack[-2] = (bool) 0
0x10e1: Return(); Pop(0)

0x10e2: PushEmpty()
0x10e3: PushEmpty(int, string)
0x10e4: Stack[-1] = "k3q03"
0x10e5: Call2 0xf86

0x10e6: Pop(1)
0x10e7: Push((int) 1000)
0x10e8: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10e9: IF (Stack[-1] == 0) GOTO 0x10ec; Pop(1)

0x10ea: Stack[-2] = (bool) 1
0x10eb: Return(); Pop(0)

0x10ec: Stack[-2] = (bool) 0
0x10ed: Return(); Pop(0)

0x10ee: PushEmpty()
0x10ef: PushEmpty(int, string)
0x10f0: Stack[-1] = "ook3Georg1"
0x10f1: Call2 0xf86

0x10f2: Pop(1)
0x10f3: Push((int) 0)
0x10f4: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10f5: IF (Stack[-1] == 0) GOTO 0x10f8; Pop(1)

0x10f6: Stack[-2] = (bool) 1
0x10f7: Return(); Pop(0)

0x10f8: Stack[-2] = (bool) 0
0x10f9: Return(); Pop(0)

0x10fa: PushEmpty()
0x10fb: PushEmpty(int, string)
0x10fc: Stack[-1] = "k5q01"
0x10fd: Call2 0xf86

0x10fe: Pop(1)
0x10ff: Push((int) 2)
0x1100: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1101: IF (Stack[-1] == 0) GOTO 0x1104; Pop(1)

0x1102: Stack[-2] = (bool) 1
0x1103: Return(); Pop(0)

0x1104: Stack[-2] = (bool) 0
0x1105: Return(); Pop(0)

0x1106: PushEmpty()
0x1107: PushEmpty(int, string)
0x1108: Stack[-1] = "k10q01"
0x1109: Call2 0xf86

0x110a: Pop(1)
0x110b: Push((int) 1)
0x110c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x110d: IF (Stack[-1] == 0) GOTO 0x1110; Pop(1)

0x110e: Stack[-2] = (bool) 1
0x110f: Return(); Pop(0)

0x1110: Stack[-2] = (bool) 0
0x1111: Return(); Pop(0)

0x1112: PushEmpty()
0x1113: PushEmpty(int, string)
0x1114: Stack[-1] = "k10q01"
0x1115: Call2 0xf86

0x1116: Pop(1)
0x1117: Push((int) 2)
0x1118: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1119: IF (Stack[-1] == 0) GOTO 0x111c; Pop(1)

0x111a: Stack[-2] = (bool) 1
0x111b: Return(); Pop(0)

0x111c: Stack[-2] = (bool) 0
0x111d: Return(); Pop(0)

0x111e: PushEmpty()
0x111f: PushEmpty(int, string)
0x1120: Stack[-1] = "ook10Georg1"
0x1121: Call2 0xf86

0x1122: Pop(1)
0x1123: Push((int) 0)
0x1124: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1125: IF (Stack[-1] == 0) GOTO 0x1128; Pop(1)

0x1126: Stack[-2] = (bool) 1
0x1127: Return(); Pop(0)

0x1128: Stack[-2] = (bool) 0
0x1129: Return(); Pop(0)

0x112a: PushEmpty()
0x112b: PushEmpty(int, string)
0x112c: Stack[-1] = "k9q01"
0x112d: Call2 0xf86

0x112e: Pop(1)
0x112f: Push((int) 1)
0x1130: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1131: IF (Stack[-1] == 0) GOTO 0x1134; Pop(1)

0x1132: Stack[-2] = (bool) 1
0x1133: Return(); Pop(0)

0x1134: Stack[-2] = (bool) 0
0x1135: Return(); Pop(0)

0x1136: PushEmpty()
0x1137: PushEmpty(int, string)
0x1138: Stack[-1] = "k9q01"
0x1139: Call2 0xf86

0x113a: Pop(1)
0x113b: Push((int) 3)
0x113c: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x113d: IF (Stack[-1] == 0) GOTO 0x1140; Pop(1)

0x113e: Stack[-2] = (bool) 1
0x113f: Return(); Pop(0)

0x1140: Stack[-2] = (bool) 0
0x1141: Return(); Pop(0)

0x1142: PushEmpty()
0x1143: PushEmpty(int, string)
0x1144: Stack[-1] = "ook1Georg1"
0x1145: Call2 0xf86

0x1146: Pop(1)
0x1147: Push((int) 0)
0x1148: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1149: IF (Stack[-1] == 0) GOTO 0x114c; Pop(1)

0x114a: Stack[-2] = (bool) 1
0x114b: Return(); Pop(0)

0x114c: Stack[-2] = (bool) 0
0x114d: Return(); Pop(0)

0x114e: PushEmpty(object, object)
0x114f: Push((int) 331)
0x1150: Push((int) 2)
0x1151: Push((int) 524776)
0x1152: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1153: Pop(3)
0x1154: PushEmpty(bool, object, int)
0x1155: Stack[-2] = Stack[-4]
0x1156: Stack[-1] = (int) 326
0x1157: Call2 0x11b6

0x1158: Pop(3)
0x1159: Return(); Pop(2)

0x115a: Stack[-1] = 0
0x115b: PushEmpty(object, object)
0x115c: Push((int) 329)
0x115d: Push((int) 2)
0x115e: Push((int) 524774)
0x115f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1160: Pop(3)
0x1161: PushEmpty(bool, object, int)
0x1162: Stack[-2] = Stack[-4]
0x1163: Stack[-1] = (int) 326
0x1164: Call2 0x11b6

0x1165: Pop(3)
0x1166: Return(); Pop(2)

0x1167: Stack[-1] = 0
0x1168: PushEmpty(object, object)
0x1169: Push((int) 544)
0x116a: Push((int) 2)
0x116b: Push((int) 530366)
0x116c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x116d: Pop(3)
0x116e: PushEmpty(bool, object, int)
0x116f: Stack[-2] = Stack[-4]
0x1170: Stack[-1] = (int) 326
0x1171: Call2 0x11b6

0x1172: Pop(3)
0x1173: Return(); Pop(2)

0x1174: Stack[-1] = 0
0x1175: PushEmpty(object, object)
0x1176: Push((int) 394)
0x1177: Push((int) 1)
0x1178: Push((int) 525887)
0x1179: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x117a: Pop(3)
0x117b: PushEmpty(bool, object, int)
0x117c: Stack[-2] = Stack[-4]
0x117d: Stack[-1] = (int) 390
0x117e: Call2 0x11b6

0x117f: Pop(3)
0x1180: Return(); Pop(2)

0x1181: Stack[-1] = 0
0x1182: PushEmpty(object, object)
0x1183: Push((int) 789)
0x1184: Push((int) 1)
0x1185: Push((int) 542508)
0x1186: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1187: Pop(3)
0x1188: PushEmpty(bool, object, int)
0x1189: Stack[-2] = Stack[-4]
0x118a: Stack[-1] = (int) 517
0x118b: Call2 0x11b6

0x118c: Pop(3)
0x118d: Return(); Pop(2)

0x118e: Stack[-1] = 0
0x118f: PushEmpty(object, object)
0x1190: Push((int) 519)
0x1191: Push((int) 1)
0x1192: Push((int) 529811)
0x1193: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1194: Pop(3)
0x1195: PushEmpty(bool, object, int)
0x1196: Stack[-2] = Stack[-4]
0x1197: Stack[-1] = (int) 517
0x1198: Call2 0x11b6

0x1199: Pop(3)
0x119a: Return(); Pop(2)

0x119b: Stack[-1] = 0
0x119c: PushEmpty(object, object)
0x119d: Push((int) 521)
0x119e: Push((int) 1)
0x119f: Push((int) 529813)
0x11a0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x11a1: Pop(3)
0x11a2: PushEmpty(bool, object, int)
0x11a3: Stack[-2] = Stack[-4]
0x11a4: Stack[-1] = (int) 517
0x11a5: Call2 0x11b6

0x11a6: Pop(3)
0x11a7: Return(); Pop(2)

0x11a8: Stack[-1] = 0
0x11a9: PushEmpty(object, object)
0x11aa: @ GetDiaryRoot(Stack[-1])
0x11ab: Pop(0)
0x11ac: Pop(0); Push((bool) Stack[-1] == 0)
0x11ad: IF (Stack[-1] == 0) GOTO 0x11b3; Pop(1)

0x11ae: Push("Can't retrieve diary root")
0x11af: @ Trace(Stack[-1])
0x11b0: Pop(1)
0x11b1: Stack[-3] = (bool) 0
0x11b2: Return(); Pop(2)

0x11b3: Stack[-3] = Stack[-1]
0x11b4: Return(); Pop(2)

0x11b5: Stack[-1] = 0
0x11b6: PushEmpty(object, object, int, object, object, int)
0x11b7: PushEmpty(object)
0x11b8: Call2 0x11a9

0x11b9: Stack[-4] = Stack[-1]
0x11ba: Pop(1)
0x11bb: @@ Find(Stack[-7], Stack[-2])
0x11bc: Pop(0)
0x11bd: Pop(0); Push((bool) Stack[-2] == 0)
0x11be: IF (Stack[-1] == 0) GOTO 0x11c5; Pop(1)

0x11bf: Push("Can't find diary parent with id: ")
0x11c0: Pop(1); Push(Stack[-1] + Stack[-8]);
0x11c1: @ Trace(Stack[-1])
0x11c2: Pop(1)
0x11c3: Stack[-9] = (bool) 0
0x11c4: Return(); Pop(6)

0x11c5: @@ AddChild(Stack[-8])
0x11c6: Pop(0)
0x11c7: Push((int) 7)
0x11c8: @ SendWorldWndMessage(Stack[-1])
0x11c9: Pop(1)
0x11ca: @@ GetCategory(Stack[-1])
0x11cb: Pop(0)
0x11cc: @ SetDiarySection(Stack[-1])
0x11cd: Pop(0)
0x11ce: Stack[-9] = (bool) 0
0x11cf: Return(); Pop(6)

0x11d0: Stack[-2] = 0
0x11d1: Stack[-3] = 0
0x11d2: PushEmpty(object, object, object, object)
0x11d3: @ GetMainOutdoorScene(Stack[-2])
0x11d4: Pop(0)
0x11d5: Pop(0); Push((bool) Stack[-2] == 0)
0x11d6: IF (Stack[-1] == 0) GOTO 0x11dd; Pop(1)

0x11d7: Push("Can't find main outdoor scene")
0x11d8: @ Trace(Stack[-1])
0x11d9: Pop(1)
0x11da: Stack[-1] = 0
0x11db: Stack[-5] = Stack[-1]
0x11dc: Return(); Pop(4)

0x11dd: @@ GetMap(Stack[-1])
0x11de: Pop(0)
0x11df: Stack[-5] = Stack[-1]
0x11e0: Return(); Pop(4)

0x11e1: Stack[-1] = 0
0x11e2: Stack[-2] = 0
0x11e3: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x11e4: @ GetMainOutdoorScene(Stack[-2])
0x11e5: Pop(0)
0x11e6: Pop(0); Push((bool) Stack[-2] == 0)
0x11e7: IF (Stack[-1] == 0) GOTO 0x11ec; Pop(1)

0x11e8: Push("Can't find main outdoor scene")
0x11e9: @ Trace(Stack[-1])
0x11ea: Pop(1)
0x11eb: Return(); Pop(8)

0x11ec: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x11ed: Pop(0)
0x11ee: Pop(0); Push((bool) Stack[-1] == 0)
0x11ef: IF (Stack[-1] == 0) GOTO 0x11f6; Pop(1)

0x11f0: Push("Warning: outdoor scene locator ")
0x11f1: Pop(1); Push(Stack[-1] + Stack[-11]);
0x11f2: Push(" doesnt exist")
0x11f3: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11f4: @ Trace(Stack[-1])
0x11f5: Pop(1)
0x11f6: @@ GetMap(Stack[-11])
0x11f7: Pop(0)
0x11f8: Pop(0); Push((bool) Stack[-11] == 0)
0x11f9: IF (Stack[-1] == 0) GOTO 0x11fe; Pop(1)

0x11fa: Push("Can't find map")
0x11fb: @ Trace(Stack[-1])
0x11fc: Pop(1)
0x11fd: Return(); Pop(8)

0x11fe: Push(CvectorIndex(Stack[-4], 0))
0x11ff: Push(CvectorIndex(Stack[-5], 2))
0x1200: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x1201: Pop(2)
0x1202: Return(); Pop(8)

0x1203: Stack[-2] = 0
0x1204: PushEmpty(int, int)
0x1205: Push("branch")
0x1206: @ GetVariable(Stack[-1], Stack[-2])
0x1207: Pop(1)
0x1208: Push((int) 0)
0x1209: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x120a: IF (Stack[-1] == 0) GOTO 0x120e; Pop(1)

0x120b: Stack[-3] = (int) 1
0x120c: Return(); Pop(2)

0x120d: GOTO 0x1213

0x120e: Push((int) 1)
0x120f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1210: IF (Stack[-1] == 0) GOTO 0x1213; Pop(1)

0x1211: Stack[-3] = (int) 2
0x1212: Return(); Pop(2)

0x1213: Stack[-3] = (int) 3
0x1214: Return(); Pop(2)

0x1215: PushEmpty()
0x1216: Push(GlobalVars[1])
0x1217: Pop(1); Push((bool) Stack[-1] == 0)
0x1218: IF (Stack[-1] == 0) GOTO 0x1222; Pop(1)

0x1219: PushEmpty(int, object)
0x121a: Stack[-1] = Stack[-3]
0x121b: Push(-2, 1); TaskCall(2)
0x121c: Call2 0x318

0x121d: Pop(-2, 1); TaskReturn
0x121e: Pop(2)
0x121f: Push(GlobalVars[1])
0x1220: Stack[-1] = (bool) 1
0x1221: GlobalVars[1] = Stack[-1]; Pop(1)
0x1222: PushEmpty(bool, int)
0x1223: Stack[-1] = (int) 1
0x1224: Call2 0xffe

0x1225: Pop(1)
0x1226: IF (Stack[-1] == 0) GOTO 0x122e; Pop(1)

0x1227: PushEmpty(int, object)
0x1228: Stack[-1] = Stack[-3]
0x1229: Push(-2, 1); TaskCall(0)
0x122a: Call2 0x0

0x122b: Pop(-2, 1); TaskReturn
0x122c: Pop(2)
0x122d: Return(); Pop(0)

0x122e: PushEmpty(bool, int)
0x122f: Stack[-1] = (int) 3
0x1230: Call2 0xffe

0x1231: Pop(1)
0x1232: IF (Stack[-1] == 0) GOTO 0x123a; Pop(1)

0x1233: PushEmpty(int, object)
0x1234: Stack[-1] = Stack[-3]
0x1235: Push(-2, 1); TaskCall(4)
0x1236: Call2 0x411

0x1237: Pop(-2, 1); TaskReturn
0x1238: Pop(2)
0x1239: Return(); Pop(0)

0x123a: PushEmpty(bool, int)
0x123b: Stack[-1] = (int) 5
0x123c: Call2 0xffe

0x123d: Pop(1)
0x123e: IF (Stack[-1] == 0) GOTO 0x1246; Pop(1)

0x123f: PushEmpty(int, object)
0x1240: Stack[-1] = Stack[-3]
0x1241: Push(-2, 1); TaskCall(6)
0x1242: Call2 0x555

0x1243: Pop(-2, 1); TaskReturn
0x1244: Pop(2)
0x1245: Return(); Pop(0)

0x1246: PushEmpty(bool, int)
0x1247: Stack[-1] = (int) 9
0x1248: Call2 0xffe

0x1249: Pop(1)
0x124a: IF (Stack[-1] == 0) GOTO 0x1252; Pop(1)

0x124b: PushEmpty(int, object)
0x124c: Stack[-1] = Stack[-3]
0x124d: Push(-2, 1); TaskCall(8)
0x124e: Call2 0x696

0x124f: Pop(-2, 1); TaskReturn
0x1250: Pop(2)
0x1251: Return(); Pop(0)

0x1252: PushEmpty(bool, int)
0x1253: Stack[-1] = (int) 10
0x1254: Call2 0xffe

0x1255: Pop(1)
0x1256: IF (Stack[-1] == 0) GOTO 0x125e; Pop(1)

0x1257: PushEmpty(int, object)
0x1258: Stack[-1] = Stack[-3]
0x1259: Push(-2, 1); TaskCall(10)
0x125a: Call2 0x93e

0x125b: Pop(-2, 1); TaskReturn
0x125c: Pop(2)
0x125d: Return(); Pop(0)

0x125e: PushEmpty(bool, int)
0x125f: Stack[-1] = (int) 12
0x1260: Call2 0xffe

0x1261: Pop(1)
0x1262: IF (Stack[-1] == 0) GOTO 0x126a; Pop(1)

0x1263: PushEmpty(int, object)
0x1264: Stack[-1] = Stack[-3]
0x1265: Push(-2, 1); TaskCall(12)
0x1266: Call2 0xb42

0x1267: Pop(-2, 1); TaskReturn
0x1268: Pop(2)
0x1269: Return(); Pop(0)

0x126a: PushEmpty(int, object)
0x126b: Stack[-1] = Stack[-3]
0x126c: Push(-2, 1); TaskCall(14)
0x126d: Call2 0xc45

0x126e: Pop(-2, 1); TaskReturn
0x126f: Pop(2)
0x1270: Return(); Pop(0)

