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
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	Jeer
	Anger
	Distrust
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
	SendWorldWndMessage (1 args)
	CreateFloatVector (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SetDiarySection (1 args)
	GetMainOutdoorScene (1 args)

RunOp = 0xce8
RunTask = 16

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1a8 Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2e3 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x41f Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x6d3 Vars = (int, int)
	GTASK_10 Vars = (object) Params = 2
	GTASK_11 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x8a8 Vars = (int, int)
	GTASK_12 Vars = (object) Params = 2
	GTASK_13 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9d7 Vars = (int, int)
	GTASK_14 Vars = (object) Params = 2
	GTASK_15 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xcbe Vars = (int, int)
	GTASK_16 Vars = (cvector) Params = 0
		EVENT_7 Op = 0xd34 Vars = (int)
		EVENT_6 Op = 0xd5a Vars = ()
		EVENT_5 Op = 0xd69 Vars = ()
		EVENT_45 Op = 0xd76 Vars = (bool)
		EVENT_0 Op = 0xd82 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0xe2d

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0xff4

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0xff2

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0xff6

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0xff8

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x11da

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
0x31: Call2 0xf41

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0xe82

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
0x48: Call2 0xe71

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
0x5b: Push((int) 525480)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 525481)
0x61: Push((int) 27536)
0x62: Push((int) 26837)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 526263)
0x66: Push((int) 27536)
0x67: Push((int) 27537)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0xffa

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0xf0c

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
0x8d: Call2 0xffa

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
0x9d: Call2 0xf1c

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xf8; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0xf3a

0xa6: Pop(0)
0xa7: Push((int) 26836)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 525480)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 525481)
0xb4: Push((int) 27536)
0xb5: Push((int) 26837)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 526263)
0xb9: Push((int) 27536)
0xba: Push((int) 27537)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 27536)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd5; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Neutral"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 526262)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 526264)
0xcb: Push((int) 27540)
0xcc: Push((int) 27539)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Push((int) 526266)
0xd0: Push((int) -1)
0xd1: Push((int) 27541)
0xd2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd3: Pop(3)
0xd4: Return(); Pop(0)

0xd5: Push((int) 27540)
0xd6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd7: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xd8: PushEmpty(string)
0xd9: Stack[-1] = "Neutral"
0xda: Call2 0x8b

0xdb: Pop(1)
0xdc: Push((int) 526265)
0xdd: @@ SetMessage(Stack[-1])
0xde: Pop(1)
0xdf: @@ ClearReplies()
0xe0: Pop(0)
0xe1: Push((int) 526267)
0xe2: Push((int) -1)
0xe3: Push((int) 27542)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Push((int) 526268)
0xe7: Push((int) -1)
0xe8: Push((int) 27543)
0xe9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xea: Pop(3)
0xeb: Return(); Pop(0)

0xec: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xed: PushEmpty(bool)
0xee: Call2 0xffa

0xef: Pop(0)
0xf0: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf1: @ lshStopAnimation()
0xf2: Pop(0)
0xf3: GOTO 0xf6

0xf4: @ StopAnimation()
0xf5: Pop(0)
0xf6: Return(); Pop(0)

0xf7: GOTO 0xa2

0xf8: Return(); Pop(0)

0xf9: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xfa: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xfb: PushEmpty(bool, object, float)
0xfc: Stack[-2] = Stack[-12]
0xfd: Stack[-1] = (float) 70.0
0xfe: Call2 0xe2d

0xff: Pop(2)
0x100: Pop(1); Push((bool) Stack[-1] == 0)
0x101: IF (Stack[-1] == 0) GOTO 0x104; Pop(1)

0x102: Stack[-10] = (int) -2
0x103: Return(); Pop(8)

0x104: @ CreateDialog(Stack[-4])
0x105: Pop(0)
0x106: PushEmpty(int)
0x107: Call2 0xff4

0x108: Pop(0)
0x109: @@ SetNPCName(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(int)
0x10c: Call2 0xff2

0x10d: Pop(0)
0x10e: @@ SetNPCDescription(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0xff6

0x112: Pop(0)
0x113: @@ SetPhoto(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(string)
0x116: Call2 0xff8

0x117: Pop(0)
0x118: @@ SetPhoto2(Stack[-1])
0x119: Pop(1)
0x11a: PushEmpty(int)
0x11b: Call2 0x11da

0x11c: Pop(0)
0x11d: @@ SetPlayerName(Stack[-1])
0x11e: Pop(1)
0x11f: Stack[-2] = (int) -1
0x120: @ IsOverrideActive(Stack[-3])
0x121: Pop(0)
0x122: Push(Stack[-3])
0x123: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x124: Stack[-10] = (int) -2
0x125: Return(); Pop(8)

0x126: @ DoDialog(Stack[-4])
0x127: Pop(0)
0x128: PushEmpty(bool, object)
0x129: PushEmpty(object)
0x12a: Call2 0xf41

0x12b: Stack[-2] = Stack[-1]
0x12c: Pop(1)
0x12d: Call2 0xe82

0x12e: Pop(2)
0x12f: PushEmpty(object, object)
0x130: Stack[-2] = Stack[-11]
0x131: Stack[-1] = Stack[-6]
0x132: Push(-2, 4); TaskCall(3)
0x133: Call2 0x14a

0x134: Pop(-2, 4); TaskReturn
0x135: Pop(2)
0x136: @@ IsDialogEnd(Stack[-1])
0x137: Pop(0)
0x138: Pop(0); Push((bool) Stack[-1] == 0)
0x139: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x13a: @ sync()
0x13b: Pop(0)
0x13c: @@ IsDialogEnd(Stack[-1])
0x13d: Pop(0)
0x13e: GOTO 0x138

0x13f: PushEmpty(object)
0x140: Stack[-1] = Stack[-10]
0x141: Call2 0xe71

0x142: Pop(1)
0x143: @ StopDialog(Stack[-4])
0x144: Pop(0)
0x145: @@ GetReturnValue(Stack[-2])
0x146: Pop(0)
0x147: Stack[-10] = Stack[-2]
0x148: Return(); Pop(8)

0x149: Stack[-4] = 0
0x14a: PushEmpty()
0x14b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x14c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x14d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x14e: Push((int) 1)
0x14f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x150: PushEmpty(string)
0x151: Stack[-1] = "Jeer"
0x152: Call2 0x192

0x153: Pop(1)
0x154: Push((int) 525594)
0x155: @@ SetMessage(Stack[-1])
0x156: Pop(1)
0x157: @@ ClearReplies()
0x158: Pop(0)
0x159: PushEmpty(bool)
0x15a: Stack[-1] = (bool) 0
0x15b: PushEmpty(bool, object)
0x15c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x15d: Call2 0x10b8

0x15e: Pop(1)
0x15f: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x160: PushEmpty(bool, object)
0x161: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x162: Call2 0x10c4

0x163: Pop(1)
0x164: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x165: Stack[-1] = (bool) 1
0x166: IF (Stack[-1] == 0) GOTO 0x16c; Pop(1)

0x167: Push((int) 525596)
0x168: Push((int) 26944)
0x169: Push((int) 26943)
0x16a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16b: Pop(3)
0x16c: Push((int) 525595)
0x16d: Push((int) -1)
0x16e: Push((int) 26942)
0x16f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x170: Pop(3)
0x171: GOTO 0x174

0x172: Return(); Pop(0)

0x173: GOTO 0x14e

0x174: PushEmpty(bool)
0x175: Call2 0xffa

0x176: Pop(0)
0x177: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x178: @ lshWaitForAnimEnd()
0x179: Pop(0)
0x17a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17b: IF (Stack[-1] == 0) GOTO 0x17d; Pop(1)

0x17c: GOTO 0x182

0x17d: PushEmpty(string)
0x17e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x17f: Call2 0xf0c

0x180: Pop(1)
0x181: GOTO 0x178

0x182: GOTO 0x191

0x183: Push("all")
0x184: Push("idle")
0x185: @ PlayAnimation(Stack[-2], Stack[-1])
0x186: Pop(2)
0x187: @ WaitForAnimEnd()
0x188: Pop(0)
0x189: Push( Stack[3 + Tasks[-1].StackPointer] )
0x18a: IF (Stack[-1] == 0) GOTO 0x18c; Pop(1)

0x18b: GOTO 0x191

0x18c: Push("all")
0x18d: Push("idle")
0x18e: @ PlayAnimation(Stack[-2], Stack[-1])
0x18f: Pop(2)
0x190: GOTO 0x187

0x191: Return(); Pop(0)

0x192: PushEmpty()
0x193: PushEmpty(bool)
0x194: Call2 0xffa

0x195: Pop(0)
0x196: Pop(1); Push((bool) Stack[-1] == 0)
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: Return(); Pop(0)

0x199: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x19a: IF (Stack[-1] == 0) GOTO 0x19c; Pop(1)

0x19b: Return(); Pop(0)

0x19c: PushEmpty(string, bool)
0x19d: Stack[-2] = Stack[-3]
0x19e: Push("")
0x19f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a3; Pop(1)

0x1a1: Stack[-1] = (bool) 0
0x1a2: GOTO 0x1a4

0x1a3: Stack[-1] = (bool) 1
0x1a4: Call2 0xf1c

0x1a5: Pop(2)
0x1a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1a7: Return(); Pop(0)

0x1a8: PushEmpty()
0x1a9: Push((int) 1)
0x1aa: IF (Stack[-1] == 0) GOTO 0x23c; Pop(1)

0x1ab: PushEmpty()
0x1ac: Call2 0xf3a

0x1ad: Pop(0)
0x1ae: Push((int) 26943)
0x1af: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b0: IF (Stack[-1] == 0) GOTO 0x1b6; Pop(1)

0x1b1: PushEmpty(object, object)
0x1b2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1b3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1b4: Call2 0x1027

0x1b5: Pop(2)
0x1b6: Push((int) 26945)
0x1b7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1b8: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1b9: PushEmpty(object, object)
0x1ba: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1bb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1bc: Call2 0x1082

0x1bd: Pop(2)
0x1be: Push((int) 42709)
0x1bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c6; Pop(1)

0x1c1: PushEmpty(object, object)
0x1c2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c4: Call2 0x1089

0x1c5: Pop(2)
0x1c6: Push((int) 26941)
0x1c7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c8: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1c9: PushEmpty(string)
0x1ca: Stack[-1] = "Jeer"
0x1cb: Call2 0x192

0x1cc: Pop(1)
0x1cd: Push((int) 525594)
0x1ce: @@ SetMessage(Stack[-1])
0x1cf: Pop(1)
0x1d0: @@ ClearReplies()
0x1d1: Pop(0)
0x1d2: PushEmpty(bool)
0x1d3: Stack[-1] = (bool) 0
0x1d4: PushEmpty(bool, object)
0x1d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1d6: Call2 0x10b8

0x1d7: Pop(1)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1d9: PushEmpty(bool, object)
0x1da: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1db: Call2 0x10c4

0x1dc: Pop(1)
0x1dd: IF (Stack[-1] == 0) GOTO 0x1df; Pop(1)

0x1de: Stack[-1] = (bool) 1
0x1df: IF (Stack[-1] == 0) GOTO 0x1e5; Pop(1)

0x1e0: Push((int) 525596)
0x1e1: Push((int) 26944)
0x1e2: Push((int) 26943)
0x1e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e4: Pop(3)
0x1e5: Push((int) 525595)
0x1e6: Push((int) -1)
0x1e7: Push((int) 26942)
0x1e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e9: Pop(3)
0x1ea: Return(); Pop(0)

0x1eb: Push((int) 26944)
0x1ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ed: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x1ee: PushEmpty(string)
0x1ef: Stack[-1] = "Anger"
0x1f0: Call2 0x192

0x1f1: Pop(1)
0x1f2: Push((int) 525597)
0x1f3: @@ SetMessage(Stack[-1])
0x1f4: Pop(1)
0x1f5: @@ ClearReplies()
0x1f6: Pop(0)
0x1f7: Push((int) 540670)
0x1f8: Push((int) 42702)
0x1f9: Push((int) 42701)
0x1fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fb: Pop(3)
0x1fc: Push((int) 540672)
0x1fd: Push((int) 42702)
0x1fe: Push((int) 42703)
0x1ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x200: Pop(3)
0x201: Return(); Pop(0)

0x202: Push((int) 42702)
0x203: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x204: IF (Stack[-1] == 0) GOTO 0x219; Pop(1)

0x205: PushEmpty(string)
0x206: Stack[-1] = "Anger"
0x207: Call2 0x192

0x208: Pop(1)
0x209: Push((int) 540671)
0x20a: @@ SetMessage(Stack[-1])
0x20b: Pop(1)
0x20c: @@ ClearReplies()
0x20d: Pop(0)
0x20e: Push((int) 540673)
0x20f: Push((int) 42706)
0x210: Push((int) 42704)
0x211: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x212: Pop(3)
0x213: Push((int) 540675)
0x214: Push((int) 42706)
0x215: Push((int) 42707)
0x216: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x217: Pop(3)
0x218: Return(); Pop(0)

0x219: Push((int) 42706)
0x21a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21b: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x21c: PushEmpty(string)
0x21d: Stack[-1] = "Anger"
0x21e: Call2 0x192

0x21f: Pop(1)
0x220: Push((int) 540674)
0x221: @@ SetMessage(Stack[-1])
0x222: Pop(1)
0x223: @@ ClearReplies()
0x224: Pop(0)
0x225: Push((int) 525598)
0x226: Push((int) -1)
0x227: Push((int) 26945)
0x228: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x229: Pop(3)
0x22a: Push((int) 540676)
0x22b: Push((int) -1)
0x22c: Push((int) 42709)
0x22d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22e: Pop(3)
0x22f: Return(); Pop(0)

0x230: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x231: PushEmpty(bool)
0x232: Call2 0xffa

0x233: Pop(0)
0x234: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x235: @ lshStopAnimation()
0x236: Pop(0)
0x237: GOTO 0x23a

0x238: @ StopAnimation()
0x239: Pop(0)
0x23a: Return(); Pop(0)

0x23b: GOTO 0x1a9

0x23c: Return(); Pop(0)

0x23d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x23e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x23f: PushEmpty(bool, object, float)
0x240: Stack[-2] = Stack[-12]
0x241: Stack[-1] = (float) 70.0
0x242: Call2 0xe2d

0x243: Pop(2)
0x244: Pop(1); Push((bool) Stack[-1] == 0)
0x245: IF (Stack[-1] == 0) GOTO 0x248; Pop(1)

0x246: Stack[-10] = (int) -2
0x247: Return(); Pop(8)

0x248: @ CreateDialog(Stack[-4])
0x249: Pop(0)
0x24a: PushEmpty(int)
0x24b: Call2 0xff4

0x24c: Pop(0)
0x24d: @@ SetNPCName(Stack[-1])
0x24e: Pop(1)
0x24f: PushEmpty(int)
0x250: Call2 0xff2

0x251: Pop(0)
0x252: @@ SetNPCDescription(Stack[-1])
0x253: Pop(1)
0x254: PushEmpty(string)
0x255: Call2 0xff6

0x256: Pop(0)
0x257: @@ SetPhoto(Stack[-1])
0x258: Pop(1)
0x259: PushEmpty(string)
0x25a: Call2 0xff8

0x25b: Pop(0)
0x25c: @@ SetPhoto2(Stack[-1])
0x25d: Pop(1)
0x25e: PushEmpty(int)
0x25f: Call2 0x11da

0x260: Pop(0)
0x261: @@ SetPlayerName(Stack[-1])
0x262: Pop(1)
0x263: Stack[-2] = (int) -1
0x264: @ IsOverrideActive(Stack[-3])
0x265: Pop(0)
0x266: Push(Stack[-3])
0x267: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x268: Stack[-10] = (int) -2
0x269: Return(); Pop(8)

0x26a: @ DoDialog(Stack[-4])
0x26b: Pop(0)
0x26c: PushEmpty(bool, object)
0x26d: PushEmpty(object)
0x26e: Call2 0xf41

0x26f: Stack[-2] = Stack[-1]
0x270: Pop(1)
0x271: Call2 0xe82

0x272: Pop(2)
0x273: PushEmpty(object, object)
0x274: Stack[-2] = Stack[-11]
0x275: Stack[-1] = Stack[-6]
0x276: Push(-2, 4); TaskCall(5)
0x277: Call2 0x28e

0x278: Pop(-2, 4); TaskReturn
0x279: Pop(2)
0x27a: @@ IsDialogEnd(Stack[-1])
0x27b: Pop(0)
0x27c: Pop(0); Push((bool) Stack[-1] == 0)
0x27d: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x27e: @ sync()
0x27f: Pop(0)
0x280: @@ IsDialogEnd(Stack[-1])
0x281: Pop(0)
0x282: GOTO 0x27c

0x283: PushEmpty(object)
0x284: Stack[-1] = Stack[-10]
0x285: Call2 0xe71

0x286: Pop(1)
0x287: @ StopDialog(Stack[-4])
0x288: Pop(0)
0x289: @@ GetReturnValue(Stack[-2])
0x28a: Pop(0)
0x28b: Stack[-10] = Stack[-2]
0x28c: Return(); Pop(8)

0x28d: Stack[-4] = 0
0x28e: PushEmpty()
0x28f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x290: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x291: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x292: Push((int) 1)
0x293: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x294: PushEmpty(string)
0x295: Stack[-1] = "Anger"
0x296: Call2 0x2cd

0x297: Pop(1)
0x298: Push((int) 525864)
0x299: @@ SetMessage(Stack[-1])
0x29a: Pop(1)
0x29b: @@ ClearReplies()
0x29c: Pop(0)
0x29d: PushEmpty(bool, object)
0x29e: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x29f: Call2 0x10d0

0x2a0: Pop(1)
0x2a1: IF (Stack[-1] == 0) GOTO 0x2a7; Pop(1)

0x2a2: Push((int) 525865)
0x2a3: Push((int) 30508)
0x2a4: Push((int) 27164)
0x2a5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a6: Pop(3)
0x2a7: Push((int) 525874)
0x2a8: Push((int) -1)
0x2a9: Push((int) 27173)
0x2aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ab: Pop(3)
0x2ac: GOTO 0x2af

0x2ad: Return(); Pop(0)

0x2ae: GOTO 0x292

0x2af: PushEmpty(bool)
0x2b0: Call2 0xffa

0x2b1: Pop(0)
0x2b2: IF (Stack[-1] == 0) GOTO 0x2be; Pop(1)

0x2b3: @ lshWaitForAnimEnd()
0x2b4: Pop(0)
0x2b5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b6: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2b7: GOTO 0x2bd

0x2b8: PushEmpty(string)
0x2b9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2ba: Call2 0xf0c

0x2bb: Pop(1)
0x2bc: GOTO 0x2b3

0x2bd: GOTO 0x2cc

0x2be: Push("all")
0x2bf: Push("idle")
0x2c0: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c1: Pop(2)
0x2c2: @ WaitForAnimEnd()
0x2c3: Pop(0)
0x2c4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2c5: IF (Stack[-1] == 0) GOTO 0x2c7; Pop(1)

0x2c6: GOTO 0x2cc

0x2c7: Push("all")
0x2c8: Push("idle")
0x2c9: @ PlayAnimation(Stack[-2], Stack[-1])
0x2ca: Pop(2)
0x2cb: GOTO 0x2c2

0x2cc: Return(); Pop(0)

0x2cd: PushEmpty()
0x2ce: PushEmpty(bool)
0x2cf: Call2 0xffa

0x2d0: Pop(0)
0x2d1: Pop(1); Push((bool) Stack[-1] == 0)
0x2d2: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2d3: Return(); Pop(0)

0x2d4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d7; Pop(1)

0x2d6: Return(); Pop(0)

0x2d7: PushEmpty(string, bool)
0x2d8: Stack[-2] = Stack[-3]
0x2d9: Push("")
0x2da: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2db: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2dc: Stack[-1] = (bool) 0
0x2dd: GOTO 0x2df

0x2de: Stack[-1] = (bool) 1
0x2df: Call2 0xf1c

0x2e0: Pop(2)
0x2e1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2e2: Return(); Pop(0)

0x2e3: PushEmpty()
0x2e4: Push((int) 1)
0x2e5: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x2e6: PushEmpty()
0x2e7: Call2 0xf3a

0x2e8: Pop(0)
0x2e9: Push((int) 27172)
0x2ea: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ec: PushEmpty(object, object)
0x2ed: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2ee: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2ef: Call2 0x102d

0x2f0: Pop(2)
0x2f1: Push((int) 27163)
0x2f2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x30d; Pop(1)

0x2f4: PushEmpty(string)
0x2f5: Stack[-1] = "Anger"
0x2f6: Call2 0x2cd

0x2f7: Pop(1)
0x2f8: Push((int) 525864)
0x2f9: @@ SetMessage(Stack[-1])
0x2fa: Pop(1)
0x2fb: @@ ClearReplies()
0x2fc: Pop(0)
0x2fd: PushEmpty(bool, object)
0x2fe: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2ff: Call2 0x10d0

0x300: Pop(1)
0x301: IF (Stack[-1] == 0) GOTO 0x307; Pop(1)

0x302: Push((int) 525865)
0x303: Push((int) 30508)
0x304: Push((int) 27164)
0x305: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x306: Pop(3)
0x307: Push((int) 525874)
0x308: Push((int) -1)
0x309: Push((int) 27173)
0x30a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30b: Pop(3)
0x30c: Return(); Pop(0)

0x30d: Push((int) 30508)
0x30e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30f: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x310: PushEmpty(string)
0x311: Stack[-1] = "Distrust"
0x312: Call2 0x2cd

0x313: Pop(1)
0x314: Push((int) 529065)
0x315: @@ SetMessage(Stack[-1])
0x316: Pop(1)
0x317: @@ ClearReplies()
0x318: Pop(0)
0x319: Push((int) 529066)
0x31a: Push((int) 27165)
0x31b: Push((int) 30509)
0x31c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31d: Pop(3)
0x31e: Push((int) 540766)
0x31f: Push((int) 27165)
0x320: Push((int) 42809)
0x321: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x322: Pop(3)
0x323: Return(); Pop(0)

0x324: Push((int) 27165)
0x325: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x326: IF (Stack[-1] == 0) GOTO 0x336; Pop(1)

0x327: PushEmpty(string)
0x328: Stack[-1] = "Distrust"
0x329: Call2 0x2cd

0x32a: Pop(1)
0x32b: Push((int) 525866)
0x32c: @@ SetMessage(Stack[-1])
0x32d: Pop(1)
0x32e: @@ ClearReplies()
0x32f: Pop(0)
0x330: Push((int) 525868)
0x331: Push((int) 27168)
0x332: Push((int) 27167)
0x333: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x334: Pop(3)
0x335: Return(); Pop(0)

0x336: Push((int) 30511)
0x337: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x338: IF (Stack[-1] == 0) GOTO 0x339; Pop(1)

0x339: Push((int) 27168)
0x33a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33b: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x33c: PushEmpty(string)
0x33d: Stack[-1] = "Anger"
0x33e: Call2 0x2cd

0x33f: Pop(1)
0x340: Push((int) 525869)
0x341: @@ SetMessage(Stack[-1])
0x342: Pop(1)
0x343: @@ ClearReplies()
0x344: Pop(0)
0x345: Push((int) 525870)
0x346: Push((int) 27171)
0x347: Push((int) 27169)
0x348: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x349: Pop(3)
0x34a: Return(); Pop(0)

0x34b: Push((int) 27171)
0x34c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x35d; Pop(1)

0x34e: PushEmpty(string)
0x34f: Stack[-1] = "Neutral"
0x350: Call2 0x2cd

0x351: Pop(1)
0x352: Push((int) 525872)
0x353: @@ SetMessage(Stack[-1])
0x354: Pop(1)
0x355: @@ ClearReplies()
0x356: Pop(0)
0x357: Push((int) 525873)
0x358: Push((int) -1)
0x359: Push((int) 27172)
0x35a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x35b: Pop(3)
0x35c: Return(); Pop(0)

0x35d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x35e: PushEmpty(bool)
0x35f: Call2 0xffa

0x360: Pop(0)
0x361: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x362: @ lshStopAnimation()
0x363: Pop(0)
0x364: GOTO 0x367

0x365: @ StopAnimation()
0x366: Pop(0)
0x367: Return(); Pop(0)

0x368: GOTO 0x2e4

0x369: Return(); Pop(0)

0x36a: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x36b: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x36c: PushEmpty(bool, object, float)
0x36d: Stack[-2] = Stack[-12]
0x36e: Stack[-1] = (float) 70.0
0x36f: Call2 0xe2d

0x370: Pop(2)
0x371: Pop(1); Push((bool) Stack[-1] == 0)
0x372: IF (Stack[-1] == 0) GOTO 0x375; Pop(1)

0x373: Stack[-10] = (int) -2
0x374: Return(); Pop(8)

0x375: @ CreateDialog(Stack[-4])
0x376: Pop(0)
0x377: PushEmpty(int)
0x378: Call2 0xff4

0x379: Pop(0)
0x37a: @@ SetNPCName(Stack[-1])
0x37b: Pop(1)
0x37c: PushEmpty(int)
0x37d: Call2 0xff2

0x37e: Pop(0)
0x37f: @@ SetNPCDescription(Stack[-1])
0x380: Pop(1)
0x381: PushEmpty(string)
0x382: Call2 0xff6

0x383: Pop(0)
0x384: @@ SetPhoto(Stack[-1])
0x385: Pop(1)
0x386: PushEmpty(string)
0x387: Call2 0xff8

0x388: Pop(0)
0x389: @@ SetPhoto2(Stack[-1])
0x38a: Pop(1)
0x38b: PushEmpty(int)
0x38c: Call2 0x11da

0x38d: Pop(0)
0x38e: @@ SetPlayerName(Stack[-1])
0x38f: Pop(1)
0x390: Stack[-2] = (int) -1
0x391: @ IsOverrideActive(Stack[-3])
0x392: Pop(0)
0x393: Push(Stack[-3])
0x394: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x395: Stack[-10] = (int) -2
0x396: Return(); Pop(8)

0x397: @ DoDialog(Stack[-4])
0x398: Pop(0)
0x399: PushEmpty(bool, object)
0x39a: PushEmpty(object)
0x39b: Call2 0xf41

0x39c: Stack[-2] = Stack[-1]
0x39d: Pop(1)
0x39e: Call2 0xe82

0x39f: Pop(2)
0x3a0: PushEmpty(object, object)
0x3a1: Stack[-2] = Stack[-11]
0x3a2: Stack[-1] = Stack[-6]
0x3a3: Push(-2, 4); TaskCall(7)
0x3a4: Call2 0x3bb

0x3a5: Pop(-2, 4); TaskReturn
0x3a6: Pop(2)
0x3a7: @@ IsDialogEnd(Stack[-1])
0x3a8: Pop(0)
0x3a9: Pop(0); Push((bool) Stack[-1] == 0)
0x3aa: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3ab: @ sync()
0x3ac: Pop(0)
0x3ad: @@ IsDialogEnd(Stack[-1])
0x3ae: Pop(0)
0x3af: GOTO 0x3a9

0x3b0: PushEmpty(object)
0x3b1: Stack[-1] = Stack[-10]
0x3b2: Call2 0xe71

0x3b3: Pop(1)
0x3b4: @ StopDialog(Stack[-4])
0x3b5: Pop(0)
0x3b6: @@ GetReturnValue(Stack[-2])
0x3b7: Pop(0)
0x3b8: Stack[-10] = Stack[-2]
0x3b9: Return(); Pop(8)

0x3ba: Stack[-4] = 0
0x3bb: PushEmpty()
0x3bc: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x3bd: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x3be: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x3bf: Push((int) 1)
0x3c0: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3c1: PushEmpty(string)
0x3c2: Stack[-1] = "Neutral"
0x3c3: Call2 0x409

0x3c4: Pop(1)
0x3c5: Push((int) 526481)
0x3c6: @@ SetMessage(Stack[-1])
0x3c7: Pop(1)
0x3c8: @@ ClearReplies()
0x3c9: Pop(0)
0x3ca: PushEmpty(bool, object)
0x3cb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3cc: Call2 0x1100

0x3cd: Pop(1)
0x3ce: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3cf: Push((int) 526482)
0x3d0: Push((int) 30355)
0x3d1: Push((int) 27748)
0x3d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d3: Pop(3)
0x3d4: PushEmpty(bool, object)
0x3d5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x3d6: Call2 0x110c

0x3d7: Pop(1)
0x3d8: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3d9: Push((int) 526504)
0x3da: Push((int) 30366)
0x3db: Push((int) 27770)
0x3dc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3dd: Pop(3)
0x3de: Push((int) 526489)
0x3df: Push((int) -1)
0x3e0: Push((int) 27755)
0x3e1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e2: Pop(3)
0x3e3: Push((int) 528924)
0x3e4: Push((int) -1)
0x3e5: Push((int) 30354)
0x3e6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3e7: Pop(3)
0x3e8: GOTO 0x3eb

0x3e9: Return(); Pop(0)

0x3ea: GOTO 0x3bf

0x3eb: PushEmpty(bool)
0x3ec: Call2 0xffa

0x3ed: Pop(0)
0x3ee: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3ef: @ lshWaitForAnimEnd()
0x3f0: Pop(0)
0x3f1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f4; Pop(1)

0x3f3: GOTO 0x3f9

0x3f4: PushEmpty(string)
0x3f5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3f6: Call2 0xf0c

0x3f7: Pop(1)
0x3f8: GOTO 0x3ef

0x3f9: GOTO 0x408

0x3fa: Push("all")
0x3fb: Push("idle")
0x3fc: @ PlayAnimation(Stack[-2], Stack[-1])
0x3fd: Pop(2)
0x3fe: @ WaitForAnimEnd()
0x3ff: Pop(0)
0x400: Push( Stack[3 + Tasks[-1].StackPointer] )
0x401: IF (Stack[-1] == 0) GOTO 0x403; Pop(1)

0x402: GOTO 0x408

0x403: Push("all")
0x404: Push("idle")
0x405: @ PlayAnimation(Stack[-2], Stack[-1])
0x406: Pop(2)
0x407: GOTO 0x3fe

0x408: Return(); Pop(0)

0x409: PushEmpty()
0x40a: PushEmpty(bool)
0x40b: Call2 0xffa

0x40c: Pop(0)
0x40d: Pop(1); Push((bool) Stack[-1] == 0)
0x40e: IF (Stack[-1] == 0) GOTO 0x410; Pop(1)

0x40f: Return(); Pop(0)

0x410: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x411: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x412: Return(); Pop(0)

0x413: PushEmpty(string, bool)
0x414: Stack[-2] = Stack[-3]
0x415: Push("")
0x416: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x417: IF (Stack[-1] == 0) GOTO 0x41a; Pop(1)

0x418: Stack[-1] = (bool) 0
0x419: GOTO 0x41b

0x41a: Stack[-1] = (bool) 1
0x41b: Call2 0xf1c

0x41c: Pop(2)
0x41d: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x41e: Return(); Pop(0)

0x41f: PushEmpty()
0x420: Push((int) 1)
0x421: IF (Stack[-1] == 0) GOTO 0x611; Pop(1)

0x422: PushEmpty()
0x423: Call2 0xf3a

0x424: Pop(0)
0x425: Push((int) 30351)
0x426: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x427: IF (Stack[-1] == 0) GOTO 0x43c; Pop(1)

0x428: PushEmpty(object, object)
0x429: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x42b: Call2 0x103c

0x42c: Pop(2)
0x42d: PushEmpty(object, object)
0x42e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x42f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x430: Call2 0x101c

0x431: Pop(2)
0x432: PushEmpty(object, object)
0x433: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x434: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x435: Call2 0x1077

0x436: Pop(2)
0x437: PushEmpty(object, object)
0x438: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x439: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x43a: Call2 0x1062

0x43b: Pop(2)
0x43c: Push((int) 30371)
0x43d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x43e: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43f: PushEmpty(object, object)
0x440: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x441: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x442: Call2 0x104a

0x443: Pop(2)
0x444: Push((int) 43830)
0x445: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x446: IF (Stack[-1] == 0) GOTO 0x44c; Pop(1)

0x447: PushEmpty(object, object)
0x448: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x449: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x44a: Call2 0x106d

0x44b: Pop(2)
0x44c: Push((int) 43828)
0x44d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44e: IF (Stack[-1] == 0) GOTO 0x454; Pop(1)

0x44f: PushEmpty(object, object)
0x450: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x451: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x452: Call2 0x106d

0x453: Pop(2)
0x454: Push((int) 43824)
0x455: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x456: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x457: PushEmpty(object, object)
0x458: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x459: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x45a: Call2 0x106d

0x45b: Pop(2)
0x45c: Push((int) 27747)
0x45d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x487; Pop(1)

0x45f: PushEmpty(string)
0x460: Stack[-1] = "Neutral"
0x461: Call2 0x409

0x462: Pop(1)
0x463: Push((int) 526481)
0x464: @@ SetMessage(Stack[-1])
0x465: Pop(1)
0x466: @@ ClearReplies()
0x467: Pop(0)
0x468: PushEmpty(bool, object)
0x469: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x46a: Call2 0x1100

0x46b: Pop(1)
0x46c: IF (Stack[-1] == 0) GOTO 0x472; Pop(1)

0x46d: Push((int) 526482)
0x46e: Push((int) 30355)
0x46f: Push((int) 27748)
0x470: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x471: Pop(3)
0x472: PushEmpty(bool, object)
0x473: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x474: Call2 0x110c

0x475: Pop(1)
0x476: IF (Stack[-1] == 0) GOTO 0x47c; Pop(1)

0x477: Push((int) 526504)
0x478: Push((int) 30366)
0x479: Push((int) 27770)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: Push((int) 526489)
0x47d: Push((int) -1)
0x47e: Push((int) 27755)
0x47f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x480: Pop(3)
0x481: Push((int) 528924)
0x482: Push((int) -1)
0x483: Push((int) 30354)
0x484: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x485: Pop(3)
0x486: Return(); Pop(0)

0x487: Push((int) 30366)
0x488: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x489: IF (Stack[-1] == 0) GOTO 0x49e; Pop(1)

0x48a: PushEmpty(string)
0x48b: Stack[-1] = "Neutral"
0x48c: Call2 0x409

0x48d: Pop(1)
0x48e: Push((int) 528933)
0x48f: @@ SetMessage(Stack[-1])
0x490: Pop(1)
0x491: @@ ClearReplies()
0x492: Pop(0)
0x493: Push((int) 528934)
0x494: Push((int) 27771)
0x495: Push((int) 30367)
0x496: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x497: Pop(3)
0x498: Push((int) 541644)
0x499: Push((int) 43817)
0x49a: Push((int) 43816)
0x49b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49c: Pop(3)
0x49d: Return(); Pop(0)

0x49e: Push((int) 43817)
0x49f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a0: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4a1: PushEmpty(string)
0x4a2: Stack[-1] = "Distrust"
0x4a3: Call2 0x409

0x4a4: Pop(1)
0x4a5: Push((int) 541645)
0x4a6: @@ SetMessage(Stack[-1])
0x4a7: Pop(1)
0x4a8: @@ ClearReplies()
0x4a9: Pop(0)
0x4aa: Push((int) 541646)
0x4ab: Push((int) 43819)
0x4ac: Push((int) 43818)
0x4ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ae: Pop(3)
0x4af: Push((int) 541648)
0x4b0: Push((int) 43821)
0x4b1: Push((int) 43820)
0x4b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b3: Pop(3)
0x4b4: Return(); Pop(0)

0x4b5: Push((int) 43821)
0x4b6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4b7: IF (Stack[-1] == 0) GOTO 0x4c7; Pop(1)

0x4b8: PushEmpty(string)
0x4b9: Stack[-1] = "Neutral"
0x4ba: Call2 0x409

0x4bb: Pop(1)
0x4bc: Push((int) 541649)
0x4bd: @@ SetMessage(Stack[-1])
0x4be: Pop(1)
0x4bf: @@ ClearReplies()
0x4c0: Pop(0)
0x4c1: Push((int) 541650)
0x4c2: Push((int) 43825)
0x4c3: Push((int) 43822)
0x4c4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c5: Pop(3)
0x4c6: Return(); Pop(0)

0x4c7: Push((int) 43819)
0x4c8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4c9: IF (Stack[-1] == 0) GOTO 0x4de; Pop(1)

0x4ca: PushEmpty(string)
0x4cb: Stack[-1] = "Anger"
0x4cc: Call2 0x409

0x4cd: Pop(1)
0x4ce: Push((int) 541647)
0x4cf: @@ SetMessage(Stack[-1])
0x4d0: Pop(1)
0x4d1: @@ ClearReplies()
0x4d2: Pop(0)
0x4d3: Push((int) 541651)
0x4d4: Push((int) 43825)
0x4d5: Push((int) 43823)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Push((int) 541652)
0x4d9: Push((int) -1)
0x4da: Push((int) 43824)
0x4db: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4dc: Pop(3)
0x4dd: Return(); Pop(0)

0x4de: Push((int) 43825)
0x4df: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e0: IF (Stack[-1] == 0) GOTO 0x4f5; Pop(1)

0x4e1: PushEmpty(string)
0x4e2: Stack[-1] = "Anger"
0x4e3: Call2 0x409

0x4e4: Pop(1)
0x4e5: Push((int) 541653)
0x4e6: @@ SetMessage(Stack[-1])
0x4e7: Pop(1)
0x4e8: @@ ClearReplies()
0x4e9: Pop(0)
0x4ea: Push((int) 541654)
0x4eb: Push((int) 27773)
0x4ec: Push((int) 43827)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Push((int) 541655)
0x4f0: Push((int) -1)
0x4f1: Push((int) 43828)
0x4f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f3: Pop(3)
0x4f4: Return(); Pop(0)

0x4f5: Push((int) 27771)
0x4f6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f7: IF (Stack[-1] == 0) GOTO 0x507; Pop(1)

0x4f8: PushEmpty(string)
0x4f9: Stack[-1] = "Neutral"
0x4fa: Call2 0x409

0x4fb: Pop(1)
0x4fc: Push((int) 526505)
0x4fd: @@ SetMessage(Stack[-1])
0x4fe: Pop(1)
0x4ff: @@ ClearReplies()
0x500: Pop(0)
0x501: Push((int) 526506)
0x502: Push((int) 27773)
0x503: Push((int) 27772)
0x504: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x505: Pop(3)
0x506: Return(); Pop(0)

0x507: Push((int) 27773)
0x508: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x509: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x50a: PushEmpty(string)
0x50b: Stack[-1] = "Anger"
0x50c: Call2 0x409

0x50d: Pop(1)
0x50e: Push((int) 526507)
0x50f: @@ SetMessage(Stack[-1])
0x510: Pop(1)
0x511: @@ ClearReplies()
0x512: Pop(0)
0x513: Push((int) 526508)
0x514: Push((int) 27775)
0x515: Push((int) 27774)
0x516: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x517: Pop(3)
0x518: Push((int) 541656)
0x519: Push((int) -1)
0x51a: Push((int) 43830)
0x51b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x51c: Pop(3)
0x51d: Return(); Pop(0)

0x51e: Push((int) 27775)
0x51f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x520: IF (Stack[-1] == 0) GOTO 0x535; Pop(1)

0x521: PushEmpty(string)
0x522: Stack[-1] = "Anger"
0x523: Call2 0x409

0x524: Pop(1)
0x525: Push((int) 526509)
0x526: @@ SetMessage(Stack[-1])
0x527: Pop(1)
0x528: @@ ClearReplies()
0x529: Pop(0)
0x52a: Push((int) 526510)
0x52b: Push((int) 27777)
0x52c: Push((int) 27776)
0x52d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x52e: Pop(3)
0x52f: Push((int) 541657)
0x530: Push((int) 27777)
0x531: Push((int) 43831)
0x532: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x533: Pop(3)
0x534: Return(); Pop(0)

0x535: Push((int) 27777)
0x536: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x537: IF (Stack[-1] == 0) GOTO 0x547; Pop(1)

0x538: PushEmpty(string)
0x539: Stack[-1] = "Distrust"
0x53a: Call2 0x409

0x53b: Pop(1)
0x53c: Push((int) 526511)
0x53d: @@ SetMessage(Stack[-1])
0x53e: Pop(1)
0x53f: @@ ClearReplies()
0x540: Pop(0)
0x541: Push((int) 526512)
0x542: Push((int) 30368)
0x543: Push((int) 27778)
0x544: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x545: Pop(3)
0x546: Return(); Pop(0)

0x547: Push((int) 30368)
0x548: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x549: IF (Stack[-1] == 0) GOTO 0x559; Pop(1)

0x54a: PushEmpty(string)
0x54b: Stack[-1] = "Neutral"
0x54c: Call2 0x409

0x54d: Pop(1)
0x54e: Push((int) 528935)
0x54f: @@ SetMessage(Stack[-1])
0x550: Pop(1)
0x551: @@ ClearReplies()
0x552: Pop(0)
0x553: Push((int) 528936)
0x554: Push((int) 30370)
0x555: Push((int) 30369)
0x556: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x557: Pop(3)
0x558: Return(); Pop(0)

0x559: Push((int) 30370)
0x55a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x55b: IF (Stack[-1] == 0) GOTO 0x56b; Pop(1)

0x55c: PushEmpty(string)
0x55d: Stack[-1] = "Neutral"
0x55e: Call2 0x409

0x55f: Pop(1)
0x560: Push((int) 528937)
0x561: @@ SetMessage(Stack[-1])
0x562: Pop(1)
0x563: @@ ClearReplies()
0x564: Pop(0)
0x565: Push((int) 528938)
0x566: Push((int) -1)
0x567: Push((int) 30371)
0x568: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x569: Pop(3)
0x56a: Return(); Pop(0)

0x56b: Push((int) 30355)
0x56c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x56d: IF (Stack[-1] == 0) GOTO 0x57d; Pop(1)

0x56e: PushEmpty(string)
0x56f: Stack[-1] = "Jeer"
0x570: Call2 0x409

0x571: Pop(1)
0x572: Push((int) 528925)
0x573: @@ SetMessage(Stack[-1])
0x574: Pop(1)
0x575: @@ ClearReplies()
0x576: Pop(0)
0x577: Push((int) 528926)
0x578: Push((int) 30357)
0x579: Push((int) 30356)
0x57a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x57b: Pop(3)
0x57c: Return(); Pop(0)

0x57d: Push((int) 30357)
0x57e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x57f: IF (Stack[-1] == 0) GOTO 0x594; Pop(1)

0x580: PushEmpty(string)
0x581: Stack[-1] = "Anger"
0x582: Call2 0x409

0x583: Pop(1)
0x584: Push((int) 528927)
0x585: @@ SetMessage(Stack[-1])
0x586: Pop(1)
0x587: @@ ClearReplies()
0x588: Pop(0)
0x589: Push((int) 528928)
0x58a: Push((int) 27749)
0x58b: Push((int) 30358)
0x58c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x58d: Pop(3)
0x58e: Push((int) 528929)
0x58f: Push((int) 27749)
0x590: Push((int) 30359)
0x591: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x592: Pop(3)
0x593: Return(); Pop(0)

0x594: Push((int) 27749)
0x595: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x596: IF (Stack[-1] == 0) GOTO 0x5a6; Pop(1)

0x597: PushEmpty(string)
0x598: Stack[-1] = "Anger"
0x599: Call2 0x409

0x59a: Pop(1)
0x59b: Push((int) 526483)
0x59c: @@ SetMessage(Stack[-1])
0x59d: Pop(1)
0x59e: @@ ClearReplies()
0x59f: Pop(0)
0x5a0: Push((int) 526484)
0x5a1: Push((int) 27751)
0x5a2: Push((int) 27750)
0x5a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5a4: Pop(3)
0x5a5: Return(); Pop(0)

0x5a6: Push((int) 27751)
0x5a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5a8: IF (Stack[-1] == 0) GOTO 0x5bd; Pop(1)

0x5a9: PushEmpty(string)
0x5aa: Stack[-1] = "Neutral"
0x5ab: Call2 0x409

0x5ac: Pop(1)
0x5ad: Push((int) 526485)
0x5ae: @@ SetMessage(Stack[-1])
0x5af: Pop(1)
0x5b0: @@ ClearReplies()
0x5b1: Pop(0)
0x5b2: Push((int) 526486)
0x5b3: Push((int) 27753)
0x5b4: Push((int) 27752)
0x5b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b6: Pop(3)
0x5b7: Push((int) 528930)
0x5b8: Push((int) 30363)
0x5b9: Push((int) 30362)
0x5ba: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5bb: Pop(3)
0x5bc: Return(); Pop(0)

0x5bd: Push((int) 30363)
0x5be: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5cf; Pop(1)

0x5c0: PushEmpty(string)
0x5c1: Stack[-1] = "Neutral"
0x5c2: Call2 0x409

0x5c3: Pop(1)
0x5c4: Push((int) 528931)
0x5c5: @@ SetMessage(Stack[-1])
0x5c6: Pop(1)
0x5c7: @@ ClearReplies()
0x5c8: Pop(0)
0x5c9: Push((int) 528932)
0x5ca: Push((int) 27753)
0x5cb: Push((int) 30364)
0x5cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5cd: Pop(3)
0x5ce: Return(); Pop(0)

0x5cf: Push((int) 27753)
0x5d0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5d1: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5d2: PushEmpty(string)
0x5d3: Stack[-1] = "Neutral"
0x5d4: Call2 0x409

0x5d5: Pop(1)
0x5d6: Push((int) 526487)
0x5d7: @@ SetMessage(Stack[-1])
0x5d8: Pop(1)
0x5d9: @@ ClearReplies()
0x5da: Pop(0)
0x5db: Push((int) 526488)
0x5dc: Push((int) 30348)
0x5dd: Push((int) 27754)
0x5de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5df: Pop(3)
0x5e0: Return(); Pop(0)

0x5e1: Push((int) 30348)
0x5e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5e3: IF (Stack[-1] == 0) GOTO 0x5f3; Pop(1)

0x5e4: PushEmpty(string)
0x5e5: Stack[-1] = "Neutral"
0x5e6: Call2 0x409

0x5e7: Pop(1)
0x5e8: Push((int) 528918)
0x5e9: @@ SetMessage(Stack[-1])
0x5ea: Pop(1)
0x5eb: @@ ClearReplies()
0x5ec: Pop(0)
0x5ed: Push((int) 528919)
0x5ee: Push((int) 30350)
0x5ef: Push((int) 30349)
0x5f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5f1: Pop(3)
0x5f2: Return(); Pop(0)

0x5f3: Push((int) 30350)
0x5f4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f5: IF (Stack[-1] == 0) GOTO 0x605; Pop(1)

0x5f6: PushEmpty(string)
0x5f7: Stack[-1] = "Distrust"
0x5f8: Call2 0x409

0x5f9: Pop(1)
0x5fa: Push((int) 528920)
0x5fb: @@ SetMessage(Stack[-1])
0x5fc: Pop(1)
0x5fd: @@ ClearReplies()
0x5fe: Pop(0)
0x5ff: Push((int) 528921)
0x600: Push((int) -1)
0x601: Push((int) 30351)
0x602: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x603: Pop(3)
0x604: Return(); Pop(0)

0x605: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x606: PushEmpty(bool)
0x607: Call2 0xffa

0x608: Pop(0)
0x609: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x60a: @ lshStopAnimation()
0x60b: Pop(0)
0x60c: GOTO 0x60f

0x60d: @ StopAnimation()
0x60e: Pop(0)
0x60f: Return(); Pop(0)

0x610: GOTO 0x420

0x611: Return(); Pop(0)

0x612: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x613: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x614: PushEmpty(bool, object, float)
0x615: Stack[-2] = Stack[-12]
0x616: Stack[-1] = (float) 70.0
0x617: Call2 0xe2d

0x618: Pop(2)
0x619: Pop(1); Push((bool) Stack[-1] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x61d; Pop(1)

0x61b: Stack[-10] = (int) -2
0x61c: Return(); Pop(8)

0x61d: @ CreateDialog(Stack[-4])
0x61e: Pop(0)
0x61f: PushEmpty(int)
0x620: Call2 0xff4

0x621: Pop(0)
0x622: @@ SetNPCName(Stack[-1])
0x623: Pop(1)
0x624: PushEmpty(int)
0x625: Call2 0xff2

0x626: Pop(0)
0x627: @@ SetNPCDescription(Stack[-1])
0x628: Pop(1)
0x629: PushEmpty(string)
0x62a: Call2 0xff6

0x62b: Pop(0)
0x62c: @@ SetPhoto(Stack[-1])
0x62d: Pop(1)
0x62e: PushEmpty(string)
0x62f: Call2 0xff8

0x630: Pop(0)
0x631: @@ SetPhoto2(Stack[-1])
0x632: Pop(1)
0x633: PushEmpty(int)
0x634: Call2 0x11da

0x635: Pop(0)
0x636: @@ SetPlayerName(Stack[-1])
0x637: Pop(1)
0x638: Stack[-2] = (int) -1
0x639: @ IsOverrideActive(Stack[-3])
0x63a: Pop(0)
0x63b: Push(Stack[-3])
0x63c: IF (Stack[-1] == 0) GOTO 0x63f; Pop(1)

0x63d: Stack[-10] = (int) -2
0x63e: Return(); Pop(8)

0x63f: @ DoDialog(Stack[-4])
0x640: Pop(0)
0x641: PushEmpty(bool, object)
0x642: PushEmpty(object)
0x643: Call2 0xf41

0x644: Stack[-2] = Stack[-1]
0x645: Pop(1)
0x646: Call2 0xe82

0x647: Pop(2)
0x648: PushEmpty(object, object)
0x649: Stack[-2] = Stack[-11]
0x64a: Stack[-1] = Stack[-6]
0x64b: Push(-2, 4); TaskCall(9)
0x64c: Call2 0x663

0x64d: Pop(-2, 4); TaskReturn
0x64e: Pop(2)
0x64f: @@ IsDialogEnd(Stack[-1])
0x650: Pop(0)
0x651: Pop(0); Push((bool) Stack[-1] == 0)
0x652: IF (Stack[-1] == 0) GOTO 0x658; Pop(1)

0x653: @ sync()
0x654: Pop(0)
0x655: @@ IsDialogEnd(Stack[-1])
0x656: Pop(0)
0x657: GOTO 0x651

0x658: PushEmpty(object)
0x659: Stack[-1] = Stack[-10]
0x65a: Call2 0xe71

0x65b: Pop(1)
0x65c: @ StopDialog(Stack[-4])
0x65d: Pop(0)
0x65e: @@ GetReturnValue(Stack[-2])
0x65f: Pop(0)
0x660: Stack[-10] = Stack[-2]
0x661: Return(); Pop(8)

0x662: Stack[-4] = 0
0x663: PushEmpty()
0x664: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x665: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x666: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x667: Push((int) 1)
0x668: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x669: PushEmpty(string)
0x66a: Stack[-1] = "Neutral"
0x66b: Call2 0x6bd

0x66c: Pop(1)
0x66d: Push((int) 526953)
0x66e: @@ SetMessage(Stack[-1])
0x66f: Pop(1)
0x670: @@ ClearReplies()
0x671: Pop(0)
0x672: PushEmpty(bool)
0x673: Stack[-1] = (bool) 1
0x674: PushEmpty(bool)
0x675: Stack[-1] = (bool) 0
0x676: PushEmpty(bool, object)
0x677: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x678: Call2 0x10dc

0x679: Pop(1)
0x67a: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x67b: PushEmpty(bool, object)
0x67c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x67d: Call2 0x10f4

0x67e: Pop(1)
0x67f: IF (Stack[-1] == 0) GOTO 0x681; Pop(1)

0x680: Stack[-1] = (bool) 1
0x681: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x682: PushEmpty(bool)
0x683: Stack[-1] = (bool) 0
0x684: PushEmpty(bool, object)
0x685: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x686: Call2 0x10e8

0x687: Pop(1)
0x688: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x689: PushEmpty(bool, object)
0x68a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x68b: Call2 0x10f4

0x68c: Pop(1)
0x68d: IF (Stack[-1] == 0) GOTO 0x68f; Pop(1)

0x68e: Stack[-1] = (bool) 1
0x68f: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x690: Stack[-1] = (bool) 0
0x691: IF (Stack[-1] == 0) GOTO 0x697; Pop(1)

0x692: Push((int) 526954)
0x693: Push((int) 29329)
0x694: Push((int) 28246)
0x695: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x696: Pop(3)
0x697: Push((int) 526957)
0x698: Push((int) -1)
0x699: Push((int) 28249)
0x69a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69b: Pop(3)
0x69c: GOTO 0x69f

0x69d: Return(); Pop(0)

0x69e: GOTO 0x667

0x69f: PushEmpty(bool)
0x6a0: Call2 0xffa

0x6a1: Pop(0)
0x6a2: IF (Stack[-1] == 0) GOTO 0x6ae; Pop(1)

0x6a3: @ lshWaitForAnimEnd()
0x6a4: Pop(0)
0x6a5: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6a6: IF (Stack[-1] == 0) GOTO 0x6a8; Pop(1)

0x6a7: GOTO 0x6ad

0x6a8: PushEmpty(string)
0x6a9: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x6aa: Call2 0xf0c

0x6ab: Pop(1)
0x6ac: GOTO 0x6a3

0x6ad: GOTO 0x6bc

0x6ae: Push("all")
0x6af: Push("idle")
0x6b0: @ PlayAnimation(Stack[-2], Stack[-1])
0x6b1: Pop(2)
0x6b2: @ WaitForAnimEnd()
0x6b3: Pop(0)
0x6b4: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6b5: IF (Stack[-1] == 0) GOTO 0x6b7; Pop(1)

0x6b6: GOTO 0x6bc

0x6b7: Push("all")
0x6b8: Push("idle")
0x6b9: @ PlayAnimation(Stack[-2], Stack[-1])
0x6ba: Pop(2)
0x6bb: GOTO 0x6b2

0x6bc: Return(); Pop(0)

0x6bd: PushEmpty()
0x6be: PushEmpty(bool)
0x6bf: Call2 0xffa

0x6c0: Pop(0)
0x6c1: Pop(1); Push((bool) Stack[-1] == 0)
0x6c2: IF (Stack[-1] == 0) GOTO 0x6c4; Pop(1)

0x6c3: Return(); Pop(0)

0x6c4: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x6c5: IF (Stack[-1] == 0) GOTO 0x6c7; Pop(1)

0x6c6: Return(); Pop(0)

0x6c7: PushEmpty(string, bool)
0x6c8: Stack[-2] = Stack[-3]
0x6c9: Push("")
0x6ca: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x6cb: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6cc: Stack[-1] = (bool) 0
0x6cd: GOTO 0x6cf

0x6ce: Stack[-1] = (bool) 1
0x6cf: Call2 0xf1c

0x6d0: Pop(2)
0x6d1: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x6d2: Return(); Pop(0)

0x6d3: PushEmpty()
0x6d4: Push((int) 1)
0x6d5: IF (Stack[-1] == 0) GOTO 0x801; Pop(1)

0x6d6: PushEmpty()
0x6d7: Call2 0xf3a

0x6d8: Pop(0)
0x6d9: Push((int) 28246)
0x6da: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x6db: IF (Stack[-1] == 0) GOTO 0x6e1; Pop(1)

0x6dc: PushEmpty(object, object)
0x6dd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x6de: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x6df: Call2 0x1036

0x6e0: Pop(2)
0x6e1: Push((int) 28245)
0x6e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x718; Pop(1)

0x6e4: PushEmpty(string)
0x6e5: Stack[-1] = "Neutral"
0x6e6: Call2 0x6bd

0x6e7: Pop(1)
0x6e8: Push((int) 526953)
0x6e9: @@ SetMessage(Stack[-1])
0x6ea: Pop(1)
0x6eb: @@ ClearReplies()
0x6ec: Pop(0)
0x6ed: PushEmpty(bool)
0x6ee: Stack[-1] = (bool) 1
0x6ef: PushEmpty(bool)
0x6f0: Stack[-1] = (bool) 0
0x6f1: PushEmpty(bool, object)
0x6f2: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f3: Call2 0x10dc

0x6f4: Pop(1)
0x6f5: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6f6: PushEmpty(bool, object)
0x6f7: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6f8: Call2 0x10f4

0x6f9: Pop(1)
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6fb: Stack[-1] = (bool) 1
0x6fc: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x6fd: PushEmpty(bool)
0x6fe: Stack[-1] = (bool) 0
0x6ff: PushEmpty(bool, object)
0x700: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x701: Call2 0x10e8

0x702: Pop(1)
0x703: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x704: PushEmpty(bool, object)
0x705: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x706: Call2 0x10f4

0x707: Pop(1)
0x708: IF (Stack[-1] == 0) GOTO 0x70a; Pop(1)

0x709: Stack[-1] = (bool) 1
0x70a: IF (Stack[-1] == 0) GOTO 0x70c; Pop(1)

0x70b: Stack[-1] = (bool) 0
0x70c: IF (Stack[-1] == 0) GOTO 0x712; Pop(1)

0x70d: Push((int) 526954)
0x70e: Push((int) 29329)
0x70f: Push((int) 28246)
0x710: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x711: Pop(3)
0x712: Push((int) 526957)
0x713: Push((int) -1)
0x714: Push((int) 28249)
0x715: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x716: Pop(3)
0x717: Return(); Pop(0)

0x718: Push((int) 29329)
0x719: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x71a: IF (Stack[-1] == 0) GOTO 0x72f; Pop(1)

0x71b: PushEmpty(string)
0x71c: Stack[-1] = "Neutral"
0x71d: Call2 0x6bd

0x71e: Pop(1)
0x71f: Push((int) 527972)
0x720: @@ SetMessage(Stack[-1])
0x721: Pop(1)
0x722: @@ ClearReplies()
0x723: Pop(0)
0x724: Push((int) 527977)
0x725: Push((int) 29339)
0x726: Push((int) 29335)
0x727: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x728: Pop(3)
0x729: Push((int) 527978)
0x72a: Push((int) 29337)
0x72b: Push((int) 29336)
0x72c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x72d: Pop(3)
0x72e: Return(); Pop(0)

0x72f: Push((int) 29337)
0x730: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x731: IF (Stack[-1] == 0) GOTO 0x741; Pop(1)

0x732: PushEmpty(string)
0x733: Stack[-1] = "Neutral"
0x734: Call2 0x6bd

0x735: Pop(1)
0x736: Push((int) 527979)
0x737: @@ SetMessage(Stack[-1])
0x738: Pop(1)
0x739: @@ ClearReplies()
0x73a: Pop(0)
0x73b: Push((int) 527980)
0x73c: Push((int) 29339)
0x73d: Push((int) 29338)
0x73e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x73f: Pop(3)
0x740: Return(); Pop(0)

0x741: Push((int) 29339)
0x742: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x743: IF (Stack[-1] == 0) GOTO 0x753; Pop(1)

0x744: PushEmpty(string)
0x745: Stack[-1] = "Distrust"
0x746: Call2 0x6bd

0x747: Pop(1)
0x748: Push((int) 527981)
0x749: @@ SetMessage(Stack[-1])
0x74a: Pop(1)
0x74b: @@ ClearReplies()
0x74c: Pop(0)
0x74d: Push((int) 527982)
0x74e: Push((int) 29341)
0x74f: Push((int) 29340)
0x750: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x751: Pop(3)
0x752: Return(); Pop(0)

0x753: Push((int) 29341)
0x754: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x755: IF (Stack[-1] == 0) GOTO 0x76a; Pop(1)

0x756: PushEmpty(string)
0x757: Stack[-1] = "Distrust"
0x758: Call2 0x6bd

0x759: Pop(1)
0x75a: Push((int) 527983)
0x75b: @@ SetMessage(Stack[-1])
0x75c: Pop(1)
0x75d: @@ ClearReplies()
0x75e: Pop(0)
0x75f: Push((int) 527988)
0x760: Push((int) 29347)
0x761: Push((int) 29346)
0x762: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x763: Pop(3)
0x764: Push((int) 527990)
0x765: Push((int) 29349)
0x766: Push((int) 29348)
0x767: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x768: Pop(3)
0x769: Return(); Pop(0)

0x76a: Push((int) 29349)
0x76b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x76c: IF (Stack[-1] == 0) GOTO 0x77c; Pop(1)

0x76d: PushEmpty(string)
0x76e: Stack[-1] = "Anger"
0x76f: Call2 0x6bd

0x770: Pop(1)
0x771: Push((int) 527991)
0x772: @@ SetMessage(Stack[-1])
0x773: Pop(1)
0x774: @@ ClearReplies()
0x775: Pop(0)
0x776: Push((int) 527992)
0x777: Push((int) 28247)
0x778: Push((int) 29350)
0x779: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x77a: Pop(3)
0x77b: Return(); Pop(0)

0x77c: Push((int) 29347)
0x77d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x78e; Pop(1)

0x77f: PushEmpty(string)
0x780: Stack[-1] = "Neutral"
0x781: Call2 0x6bd

0x782: Pop(1)
0x783: Push((int) 527989)
0x784: @@ SetMessage(Stack[-1])
0x785: Pop(1)
0x786: @@ ClearReplies()
0x787: Pop(0)
0x788: Push((int) 527984)
0x789: Push((int) 28247)
0x78a: Push((int) 29342)
0x78b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x78c: Pop(3)
0x78d: Return(); Pop(0)

0x78e: Push((int) 29345)
0x78f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x790: IF (Stack[-1] == 0) GOTO 0x791; Pop(1)

0x791: Push((int) 28247)
0x792: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x793: IF (Stack[-1] == 0) GOTO 0x7a3; Pop(1)

0x794: PushEmpty(string)
0x795: Stack[-1] = "Neutral"
0x796: Call2 0x6bd

0x797: Pop(1)
0x798: Push((int) 526955)
0x799: @@ SetMessage(Stack[-1])
0x79a: Pop(1)
0x79b: @@ ClearReplies()
0x79c: Pop(0)
0x79d: Push((int) 526956)
0x79e: Push((int) 29354)
0x79f: Push((int) 28248)
0x7a0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a1: Pop(3)
0x7a2: Return(); Pop(0)

0x7a3: Push((int) 29354)
0x7a4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7a5: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7a6: PushEmpty(string)
0x7a7: Stack[-1] = "Distrust"
0x7a8: Call2 0x6bd

0x7a9: Pop(1)
0x7aa: Push((int) 527994)
0x7ab: @@ SetMessage(Stack[-1])
0x7ac: Pop(1)
0x7ad: @@ ClearReplies()
0x7ae: Pop(0)
0x7af: Push((int) 527995)
0x7b0: Push((int) 29362)
0x7b1: Push((int) 29355)
0x7b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b3: Pop(3)
0x7b4: Push((int) 527996)
0x7b5: Push((int) 29357)
0x7b6: Push((int) 29356)
0x7b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7b8: Pop(3)
0x7b9: Return(); Pop(0)

0x7ba: Push((int) 29357)
0x7bb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7bc: IF (Stack[-1] == 0) GOTO 0x7d1; Pop(1)

0x7bd: PushEmpty(string)
0x7be: Stack[-1] = "Anger"
0x7bf: Call2 0x6bd

0x7c0: Pop(1)
0x7c1: Push((int) 527997)
0x7c2: @@ SetMessage(Stack[-1])
0x7c3: Pop(1)
0x7c4: @@ ClearReplies()
0x7c5: Pop(0)
0x7c6: Push((int) 527998)
0x7c7: Push((int) -1)
0x7c8: Push((int) 29358)
0x7c9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7ca: Pop(3)
0x7cb: Push((int) 527999)
0x7cc: Push((int) -1)
0x7cd: Push((int) 29359)
0x7ce: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7cf: Pop(3)
0x7d0: Return(); Pop(0)

0x7d1: Push((int) 29362)
0x7d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7d3: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7d4: PushEmpty(string)
0x7d5: Stack[-1] = "Distrust"
0x7d6: Call2 0x6bd

0x7d7: Pop(1)
0x7d8: Push((int) 528002)
0x7d9: @@ SetMessage(Stack[-1])
0x7da: Pop(1)
0x7db: @@ ClearReplies()
0x7dc: Pop(0)
0x7dd: Push((int) 528003)
0x7de: Push((int) 29364)
0x7df: Push((int) 29363)
0x7e0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e1: Pop(3)
0x7e2: Return(); Pop(0)

0x7e3: Push((int) 29364)
0x7e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x7e5: IF (Stack[-1] == 0) GOTO 0x7f5; Pop(1)

0x7e6: PushEmpty(string)
0x7e7: Stack[-1] = "Grin"
0x7e8: Call2 0x6bd

0x7e9: Pop(1)
0x7ea: Push((int) 528004)
0x7eb: @@ SetMessage(Stack[-1])
0x7ec: Pop(1)
0x7ed: @@ ClearReplies()
0x7ee: Pop(0)
0x7ef: Push((int) 528005)
0x7f0: Push((int) -1)
0x7f1: Push((int) 29365)
0x7f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f3: Pop(3)
0x7f4: Return(); Pop(0)

0x7f5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x7f6: PushEmpty(bool)
0x7f7: Call2 0xffa

0x7f8: Pop(0)
0x7f9: IF (Stack[-1] == 0) GOTO 0x7fd; Pop(1)

0x7fa: @ lshStopAnimation()
0x7fb: Pop(0)
0x7fc: GOTO 0x7ff

0x7fd: @ StopAnimation()
0x7fe: Pop(0)
0x7ff: Return(); Pop(0)

0x800: GOTO 0x6d4

0x801: Return(); Pop(0)

0x802: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x803: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x804: PushEmpty(bool, object, float)
0x805: Stack[-2] = Stack[-12]
0x806: Stack[-1] = (float) 70.0
0x807: Call2 0xe2d

0x808: Pop(2)
0x809: Pop(1); Push((bool) Stack[-1] == 0)
0x80a: IF (Stack[-1] == 0) GOTO 0x80d; Pop(1)

0x80b: Stack[-10] = (int) -2
0x80c: Return(); Pop(8)

0x80d: @ CreateDialog(Stack[-4])
0x80e: Pop(0)
0x80f: PushEmpty(int)
0x810: Call2 0xff4

0x811: Pop(0)
0x812: @@ SetNPCName(Stack[-1])
0x813: Pop(1)
0x814: PushEmpty(int)
0x815: Call2 0xff2

0x816: Pop(0)
0x817: @@ SetNPCDescription(Stack[-1])
0x818: Pop(1)
0x819: PushEmpty(string)
0x81a: Call2 0xff6

0x81b: Pop(0)
0x81c: @@ SetPhoto(Stack[-1])
0x81d: Pop(1)
0x81e: PushEmpty(string)
0x81f: Call2 0xff8

0x820: Pop(0)
0x821: @@ SetPhoto2(Stack[-1])
0x822: Pop(1)
0x823: PushEmpty(int)
0x824: Call2 0x11da

0x825: Pop(0)
0x826: @@ SetPlayerName(Stack[-1])
0x827: Pop(1)
0x828: Stack[-2] = (int) -1
0x829: @ IsOverrideActive(Stack[-3])
0x82a: Pop(0)
0x82b: Push(Stack[-3])
0x82c: IF (Stack[-1] == 0) GOTO 0x82f; Pop(1)

0x82d: Stack[-10] = (int) -2
0x82e: Return(); Pop(8)

0x82f: @ DoDialog(Stack[-4])
0x830: Pop(0)
0x831: PushEmpty(bool, object)
0x832: PushEmpty(object)
0x833: Call2 0xf41

0x834: Stack[-2] = Stack[-1]
0x835: Pop(1)
0x836: Call2 0xe82

0x837: Pop(2)
0x838: PushEmpty(object, object)
0x839: Stack[-2] = Stack[-11]
0x83a: Stack[-1] = Stack[-6]
0x83b: Push(-2, 4); TaskCall(11)
0x83c: Call2 0x853

0x83d: Pop(-2, 4); TaskReturn
0x83e: Pop(2)
0x83f: @@ IsDialogEnd(Stack[-1])
0x840: Pop(0)
0x841: Pop(0); Push((bool) Stack[-1] == 0)
0x842: IF (Stack[-1] == 0) GOTO 0x848; Pop(1)

0x843: @ sync()
0x844: Pop(0)
0x845: @@ IsDialogEnd(Stack[-1])
0x846: Pop(0)
0x847: GOTO 0x841

0x848: PushEmpty(object)
0x849: Stack[-1] = Stack[-10]
0x84a: Call2 0xe71

0x84b: Pop(1)
0x84c: @ StopDialog(Stack[-4])
0x84d: Pop(0)
0x84e: @@ GetReturnValue(Stack[-2])
0x84f: Pop(0)
0x850: Stack[-10] = Stack[-2]
0x851: Return(); Pop(8)

0x852: Stack[-4] = 0
0x853: PushEmpty()
0x854: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x855: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x856: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x857: Push((int) 1)
0x858: IF (Stack[-1] == 0) GOTO 0x874; Pop(1)

0x859: PushEmpty(string)
0x85a: Stack[-1] = "Neutral"
0x85b: Call2 0x892

0x85c: Pop(1)
0x85d: Push((int) 535231)
0x85e: @@ SetMessage(Stack[-1])
0x85f: Pop(1)
0x860: @@ ClearReplies()
0x861: Pop(0)
0x862: Push((int) 535232)
0x863: Push((int) 36953)
0x864: Push((int) 36907)
0x865: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x866: Pop(3)
0x867: Push((int) 535233)
0x868: Push((int) -1)
0x869: Push((int) 36908)
0x86a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x86b: Pop(3)
0x86c: Push((int) 535280)
0x86d: Push((int) -1)
0x86e: Push((int) 36956)
0x86f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x870: Pop(3)
0x871: GOTO 0x874

0x872: Return(); Pop(0)

0x873: GOTO 0x857

0x874: PushEmpty(bool)
0x875: Call2 0xffa

0x876: Pop(0)
0x877: IF (Stack[-1] == 0) GOTO 0x883; Pop(1)

0x878: @ lshWaitForAnimEnd()
0x879: Pop(0)
0x87a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x87b: IF (Stack[-1] == 0) GOTO 0x87d; Pop(1)

0x87c: GOTO 0x882

0x87d: PushEmpty(string)
0x87e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x87f: Call2 0xf0c

0x880: Pop(1)
0x881: GOTO 0x878

0x882: GOTO 0x891

0x883: Push("all")
0x884: Push("idle")
0x885: @ PlayAnimation(Stack[-2], Stack[-1])
0x886: Pop(2)
0x887: @ WaitForAnimEnd()
0x888: Pop(0)
0x889: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88a: IF (Stack[-1] == 0) GOTO 0x88c; Pop(1)

0x88b: GOTO 0x891

0x88c: Push("all")
0x88d: Push("idle")
0x88e: @ PlayAnimation(Stack[-2], Stack[-1])
0x88f: Pop(2)
0x890: GOTO 0x887

0x891: Return(); Pop(0)

0x892: PushEmpty()
0x893: PushEmpty(bool)
0x894: Call2 0xffa

0x895: Pop(0)
0x896: Pop(1); Push((bool) Stack[-1] == 0)
0x897: IF (Stack[-1] == 0) GOTO 0x899; Pop(1)

0x898: Return(); Pop(0)

0x899: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x89a: IF (Stack[-1] == 0) GOTO 0x89c; Pop(1)

0x89b: Return(); Pop(0)

0x89c: PushEmpty(string, bool)
0x89d: Stack[-2] = Stack[-3]
0x89e: Push("")
0x89f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x8a0: IF (Stack[-1] == 0) GOTO 0x8a3; Pop(1)

0x8a1: Stack[-1] = (bool) 0
0x8a2: GOTO 0x8a4

0x8a3: Stack[-1] = (bool) 1
0x8a4: Call2 0xf1c

0x8a5: Pop(2)
0x8a6: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x8a7: Return(); Pop(0)

0x8a8: PushEmpty()
0x8a9: Push((int) 1)
0x8aa: IF (Stack[-1] == 0) GOTO 0x904; Pop(1)

0x8ab: PushEmpty()
0x8ac: Call2 0xf3a

0x8ad: Pop(0)
0x8ae: Push((int) 36906)
0x8af: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8b0: IF (Stack[-1] == 0) GOTO 0x8ca; Pop(1)

0x8b1: PushEmpty(string)
0x8b2: Stack[-1] = "Neutral"
0x8b3: Call2 0x892

0x8b4: Pop(1)
0x8b5: Push((int) 535231)
0x8b6: @@ SetMessage(Stack[-1])
0x8b7: Pop(1)
0x8b8: @@ ClearReplies()
0x8b9: Pop(0)
0x8ba: Push((int) 535232)
0x8bb: Push((int) 36953)
0x8bc: Push((int) 36907)
0x8bd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8be: Pop(3)
0x8bf: Push((int) 535233)
0x8c0: Push((int) -1)
0x8c1: Push((int) 36908)
0x8c2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c3: Pop(3)
0x8c4: Push((int) 535280)
0x8c5: Push((int) -1)
0x8c6: Push((int) 36956)
0x8c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c8: Pop(3)
0x8c9: Return(); Pop(0)

0x8ca: Push((int) 36953)
0x8cb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8cc: IF (Stack[-1] == 0) GOTO 0x8e1; Pop(1)

0x8cd: PushEmpty(string)
0x8ce: Stack[-1] = "Neutral"
0x8cf: Call2 0x892

0x8d0: Pop(1)
0x8d1: Push((int) 535277)
0x8d2: @@ SetMessage(Stack[-1])
0x8d3: Pop(1)
0x8d4: @@ ClearReplies()
0x8d5: Pop(0)
0x8d6: Push((int) 535278)
0x8d7: Push((int) 36957)
0x8d8: Push((int) 36954)
0x8d9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8da: Pop(3)
0x8db: Push((int) 535279)
0x8dc: Push((int) 36957)
0x8dd: Push((int) 36955)
0x8de: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8df: Pop(3)
0x8e0: Return(); Pop(0)

0x8e1: Push((int) 36957)
0x8e2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x8e3: IF (Stack[-1] == 0) GOTO 0x8f8; Pop(1)

0x8e4: PushEmpty(string)
0x8e5: Stack[-1] = "Neutral"
0x8e6: Call2 0x892

0x8e7: Pop(1)
0x8e8: Push((int) 535281)
0x8e9: @@ SetMessage(Stack[-1])
0x8ea: Pop(1)
0x8eb: @@ ClearReplies()
0x8ec: Pop(0)
0x8ed: Push((int) 535282)
0x8ee: Push((int) -1)
0x8ef: Push((int) 36958)
0x8f0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f1: Pop(3)
0x8f2: Push((int) 535283)
0x8f3: Push((int) -1)
0x8f4: Push((int) 36959)
0x8f5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8f6: Pop(3)
0x8f7: Return(); Pop(0)

0x8f8: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x8f9: PushEmpty(bool)
0x8fa: Call2 0xffa

0x8fb: Pop(0)
0x8fc: IF (Stack[-1] == 0) GOTO 0x900; Pop(1)

0x8fd: @ lshStopAnimation()
0x8fe: Pop(0)
0x8ff: GOTO 0x902

0x900: @ StopAnimation()
0x901: Pop(0)
0x902: Return(); Pop(0)

0x903: GOTO 0x8a9

0x904: Return(); Pop(0)

0x905: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x906: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x907: PushEmpty(bool, object, float)
0x908: Stack[-2] = Stack[-12]
0x909: Stack[-1] = (float) 70.0
0x90a: Call2 0xe2d

0x90b: Pop(2)
0x90c: Pop(1); Push((bool) Stack[-1] == 0)
0x90d: IF (Stack[-1] == 0) GOTO 0x910; Pop(1)

0x90e: Stack[-10] = (int) -2
0x90f: Return(); Pop(8)

0x910: @ CreateDialog(Stack[-4])
0x911: Pop(0)
0x912: PushEmpty(int)
0x913: Call2 0xff4

0x914: Pop(0)
0x915: @@ SetNPCName(Stack[-1])
0x916: Pop(1)
0x917: PushEmpty(int)
0x918: Call2 0xff2

0x919: Pop(0)
0x91a: @@ SetNPCDescription(Stack[-1])
0x91b: Pop(1)
0x91c: PushEmpty(string)
0x91d: Call2 0xff6

0x91e: Pop(0)
0x91f: @@ SetPhoto(Stack[-1])
0x920: Pop(1)
0x921: PushEmpty(string)
0x922: Call2 0xff8

0x923: Pop(0)
0x924: @@ SetPhoto2(Stack[-1])
0x925: Pop(1)
0x926: PushEmpty(int)
0x927: Call2 0x11da

0x928: Pop(0)
0x929: @@ SetPlayerName(Stack[-1])
0x92a: Pop(1)
0x92b: Stack[-2] = (int) -1
0x92c: @ IsOverrideActive(Stack[-3])
0x92d: Pop(0)
0x92e: Push(Stack[-3])
0x92f: IF (Stack[-1] == 0) GOTO 0x932; Pop(1)

0x930: Stack[-10] = (int) -2
0x931: Return(); Pop(8)

0x932: @ DoDialog(Stack[-4])
0x933: Pop(0)
0x934: PushEmpty(bool, object)
0x935: PushEmpty(object)
0x936: Call2 0xf41

0x937: Stack[-2] = Stack[-1]
0x938: Pop(1)
0x939: Call2 0xe82

0x93a: Pop(2)
0x93b: PushEmpty(object, object)
0x93c: Stack[-2] = Stack[-11]
0x93d: Stack[-1] = Stack[-6]
0x93e: Push(-2, 4); TaskCall(13)
0x93f: Call2 0x956

0x940: Pop(-2, 4); TaskReturn
0x941: Pop(2)
0x942: @@ IsDialogEnd(Stack[-1])
0x943: Pop(0)
0x944: Pop(0); Push((bool) Stack[-1] == 0)
0x945: IF (Stack[-1] == 0) GOTO 0x94b; Pop(1)

0x946: @ sync()
0x947: Pop(0)
0x948: @@ IsDialogEnd(Stack[-1])
0x949: Pop(0)
0x94a: GOTO 0x944

0x94b: PushEmpty(object)
0x94c: Stack[-1] = Stack[-10]
0x94d: Call2 0xe71

0x94e: Pop(1)
0x94f: @ StopDialog(Stack[-4])
0x950: Pop(0)
0x951: @@ GetReturnValue(Stack[-2])
0x952: Pop(0)
0x953: Stack[-10] = Stack[-2]
0x954: Return(); Pop(8)

0x955: Stack[-4] = 0
0x956: PushEmpty()
0x957: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x958: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x959: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x95a: Push((int) 1)
0x95b: IF (Stack[-1] == 0) GOTO 0x9a3; Pop(1)

0x95c: PushEmpty(bool)
0x95d: Stack[-1] = (bool) 0
0x95e: PushEmpty(bool, object)
0x95f: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x960: Call2 0x10a0

0x961: Pop(1)
0x962: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x963: PushEmpty(bool, object)
0x964: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x965: Call2 0x1118

0x966: Pop(1)
0x967: IF (Stack[-1] == 0) GOTO 0x969; Pop(1)

0x968: Stack[-1] = (bool) 1
0x969: IF (Stack[-1] == 0) GOTO 0x97e; Pop(1)

0x96a: PushEmpty(object, object)
0x96b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x96c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x96d: Call2 0x1053

0x96e: Pop(2)
0x96f: PushEmpty(string)
0x970: Stack[-1] = "Anger"
0x971: Call2 0x9c1

0x972: Pop(1)
0x973: Push((int) 524754)
0x974: @@ SetMessage(Stack[-1])
0x975: Pop(1)
0x976: @@ ClearReplies()
0x977: Pop(0)
0x978: Push((int) 526909)
0x979: Push((int) 28202)
0x97a: Push((int) 28201)
0x97b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x97c: Pop(3)
0x97d: GOTO 0x9a3

0x97e: PushEmpty(string)
0x97f: Stack[-1] = "Jeer"
0x980: Call2 0x9c1

0x981: Pop(1)
0x982: Push((int) 524756)
0x983: @@ SetMessage(Stack[-1])
0x984: Pop(1)
0x985: @@ ClearReplies()
0x986: Pop(0)
0x987: PushEmpty(bool, object)
0x988: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x989: Call2 0x10ac

0x98a: Pop(1)
0x98b: IF (Stack[-1] == 0) GOTO 0x991; Pop(1)

0x98c: Push((int) 524763)
0x98d: Push((int) 26088)
0x98e: Push((int) 26087)
0x98f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x990: Pop(3)
0x991: PushEmpty(bool, object)
0x992: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x993: Call2 0x10a0

0x994: Pop(1)
0x995: IF (Stack[-1] == 0) GOTO 0x99b; Pop(1)

0x996: Push((int) 530365)
0x997: Push((int) -1)
0x998: Push((int) 31738)
0x999: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99a: Pop(3)
0x99b: Push((int) 524757)
0x99c: Push((int) -1)
0x99d: Push((int) 26081)
0x99e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x99f: Pop(3)
0x9a0: GOTO 0x9a3

0x9a1: Return(); Pop(0)

0x9a2: GOTO 0x95a

0x9a3: PushEmpty(bool)
0x9a4: Call2 0xffa

0x9a5: Pop(0)
0x9a6: IF (Stack[-1] == 0) GOTO 0x9b2; Pop(1)

0x9a7: @ lshWaitForAnimEnd()
0x9a8: Pop(0)
0x9a9: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9aa: IF (Stack[-1] == 0) GOTO 0x9ac; Pop(1)

0x9ab: GOTO 0x9b1

0x9ac: PushEmpty(string)
0x9ad: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9ae: Call2 0xf0c

0x9af: Pop(1)
0x9b0: GOTO 0x9a7

0x9b1: GOTO 0x9c0

0x9b2: Push("all")
0x9b3: Push("idle")
0x9b4: @ PlayAnimation(Stack[-2], Stack[-1])
0x9b5: Pop(2)
0x9b6: @ WaitForAnimEnd()
0x9b7: Pop(0)
0x9b8: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9b9: IF (Stack[-1] == 0) GOTO 0x9bb; Pop(1)

0x9ba: GOTO 0x9c0

0x9bb: Push("all")
0x9bc: Push("idle")
0x9bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x9be: Pop(2)
0x9bf: GOTO 0x9b6

0x9c0: Return(); Pop(0)

0x9c1: PushEmpty()
0x9c2: PushEmpty(bool)
0x9c3: Call2 0xffa

0x9c4: Pop(0)
0x9c5: Pop(1); Push((bool) Stack[-1] == 0)
0x9c6: IF (Stack[-1] == 0) GOTO 0x9c8; Pop(1)

0x9c7: Return(); Pop(0)

0x9c8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x9c9: IF (Stack[-1] == 0) GOTO 0x9cb; Pop(1)

0x9ca: Return(); Pop(0)

0x9cb: PushEmpty(string, bool)
0x9cc: Stack[-2] = Stack[-3]
0x9cd: Push("")
0x9ce: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9cf: IF (Stack[-1] == 0) GOTO 0x9d2; Pop(1)

0x9d0: Stack[-1] = (bool) 0
0x9d1: GOTO 0x9d3

0x9d2: Stack[-1] = (bool) 1
0x9d3: Call2 0xf1c

0x9d4: Pop(2)
0x9d5: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x9d6: Return(); Pop(0)

0x9d7: PushEmpty()
0x9d8: Push((int) 1)
0x9d9: IF (Stack[-1] == 0) GOTO 0xc1c; Pop(1)

0x9da: PushEmpty()
0x9db: Call2 0xf3a

0x9dc: Pop(0)
0x9dd: Push((int) 28456)
0x9de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9df: IF (Stack[-1] == 0) GOTO 0x9ea; Pop(1)

0x9e0: PushEmpty(object, object)
0x9e1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e3: Call2 0xffc

0x9e4: Pop(2)
0x9e5: PushEmpty(object, object)
0x9e6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9e7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9e8: Call2 0x1090

0x9e9: Pop(2)
0x9ea: Push((int) 26079)
0x9eb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9ec: IF (Stack[-1] == 0) GOTO 0x9f7; Pop(1)

0x9ed: PushEmpty(object, object)
0x9ee: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9ef: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f0: Call2 0xffc

0x9f1: Pop(2)
0x9f2: PushEmpty(object, object)
0x9f3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9f4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9f5: Call2 0x1090

0x9f6: Pop(2)
0x9f7: Push((int) 26091)
0x9f8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x9f9: IF (Stack[-1] == 0) GOTO 0x9ff; Pop(1)

0x9fa: PushEmpty(object, object)
0x9fb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x9fc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x9fd: Call2 0x1013

0x9fe: Pop(2)
0x9ff: Push((int) 28475)
0xa00: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa01: IF (Stack[-1] == 0) GOTO 0xa07; Pop(1)

0xa02: PushEmpty(object, object)
0xa03: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa04: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa05: Call2 0x1013

0xa06: Pop(2)
0xa07: Push((int) 28220)
0xa08: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa09: IF (Stack[-1] == 0) GOTO 0xa0f; Pop(1)

0xa0a: PushEmpty(object, object)
0xa0b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa0c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa0d: Call2 0x1059

0xa0e: Pop(2)
0xa0f: Push((int) 28221)
0xa10: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa11: IF (Stack[-1] == 0) GOTO 0xa17; Pop(1)

0xa12: PushEmpty(object, object)
0xa13: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa14: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa15: Call2 0x1059

0xa16: Pop(2)
0xa17: Push((int) 28218)
0xa18: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa19: IF (Stack[-1] == 0) GOTO 0xa1f; Pop(1)

0xa1a: PushEmpty(object, object)
0xa1b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa1c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa1d: Call2 0x1059

0xa1e: Pop(2)
0xa1f: Push((int) 31738)
0xa20: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa21: IF (Stack[-1] == 0) GOTO 0xa2c; Pop(1)

0xa22: PushEmpty(object, object)
0xa23: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa24: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa25: Call2 0xffc

0xa26: Pop(2)
0xa27: PushEmpty(object, object)
0xa28: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa29: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa2a: Call2 0x1090

0xa2b: Pop(2)
0xa2c: Push((int) 26078)
0xa2d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa2e: IF (Stack[-1] == 0) GOTO 0xa74; Pop(1)

0xa2f: PushEmpty(bool)
0xa30: Stack[-1] = (bool) 0
0xa31: PushEmpty(bool, object)
0xa32: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa33: Call2 0x10a0

0xa34: Pop(1)
0xa35: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa36: PushEmpty(bool, object)
0xa37: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa38: Call2 0x1118

0xa39: Pop(1)
0xa3a: IF (Stack[-1] == 0) GOTO 0xa3c; Pop(1)

0xa3b: Stack[-1] = (bool) 1
0xa3c: IF (Stack[-1] == 0) GOTO 0xa51; Pop(1)

0xa3d: PushEmpty(object, object)
0xa3e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa3f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa40: Call2 0x1053

0xa41: Pop(2)
0xa42: PushEmpty(string)
0xa43: Stack[-1] = "Anger"
0xa44: Call2 0x9c1

0xa45: Pop(1)
0xa46: Push((int) 524754)
0xa47: @@ SetMessage(Stack[-1])
0xa48: Pop(1)
0xa49: @@ ClearReplies()
0xa4a: Pop(0)
0xa4b: Push((int) 526909)
0xa4c: Push((int) 28202)
0xa4d: Push((int) 28201)
0xa4e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa4f: Pop(3)
0xa50: Return(); Pop(0)

0xa51: PushEmpty(string)
0xa52: Stack[-1] = "Jeer"
0xa53: Call2 0x9c1

0xa54: Pop(1)
0xa55: Push((int) 524756)
0xa56: @@ SetMessage(Stack[-1])
0xa57: Pop(1)
0xa58: @@ ClearReplies()
0xa59: Pop(0)
0xa5a: PushEmpty(bool, object)
0xa5b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa5c: Call2 0x10ac

0xa5d: Pop(1)
0xa5e: IF (Stack[-1] == 0) GOTO 0xa64; Pop(1)

0xa5f: Push((int) 524763)
0xa60: Push((int) 26088)
0xa61: Push((int) 26087)
0xa62: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa63: Pop(3)
0xa64: PushEmpty(bool, object)
0xa65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xa66: Call2 0x10a0

0xa67: Pop(1)
0xa68: IF (Stack[-1] == 0) GOTO 0xa6e; Pop(1)

0xa69: Push((int) 530365)
0xa6a: Push((int) -1)
0xa6b: Push((int) 31738)
0xa6c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa6d: Pop(3)
0xa6e: Push((int) 524757)
0xa6f: Push((int) -1)
0xa70: Push((int) 26081)
0xa71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa72: Pop(3)
0xa73: Return(); Pop(0)

0xa74: Push((int) 26088)
0xa75: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa76: IF (Stack[-1] == 0) GOTO 0xa8b; Pop(1)

0xa77: PushEmpty(string)
0xa78: Stack[-1] = "Distrust"
0xa79: Call2 0x9c1

0xa7a: Pop(1)
0xa7b: Push((int) 524764)
0xa7c: @@ SetMessage(Stack[-1])
0xa7d: Pop(1)
0xa7e: @@ ClearReplies()
0xa7f: Pop(0)
0xa80: Push((int) 524765)
0xa81: Push((int) 26090)
0xa82: Push((int) 26089)
0xa83: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa84: Pop(3)
0xa85: Push((int) 526923)
0xa86: Push((int) 28216)
0xa87: Push((int) 28215)
0xa88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa89: Pop(3)
0xa8a: Return(); Pop(0)

0xa8b: Push((int) 28216)
0xa8c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa8d: IF (Stack[-1] == 0) GOTO 0xaa2; Pop(1)

0xa8e: PushEmpty(string)
0xa8f: Stack[-1] = "Anger"
0xa90: Call2 0x9c1

0xa91: Pop(1)
0xa92: Push((int) 526924)
0xa93: @@ SetMessage(Stack[-1])
0xa94: Pop(1)
0xa95: @@ ClearReplies()
0xa96: Pop(0)
0xa97: Push((int) 526925)
0xa98: Push((int) 28219)
0xa99: Push((int) 28217)
0xa9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xa9b: Pop(3)
0xa9c: Push((int) 526926)
0xa9d: Push((int) -1)
0xa9e: Push((int) 28218)
0xa9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaa0: Pop(3)
0xaa1: Return(); Pop(0)

0xaa2: Push((int) 28219)
0xaa3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xaa4: IF (Stack[-1] == 0) GOTO 0xab9; Pop(1)

0xaa5: PushEmpty(string)
0xaa6: Stack[-1] = "Anger"
0xaa7: Call2 0x9c1

0xaa8: Pop(1)
0xaa9: Push((int) 526927)
0xaaa: @@ SetMessage(Stack[-1])
0xaab: Pop(1)
0xaac: @@ ClearReplies()
0xaad: Pop(0)
0xaae: Push((int) 526928)
0xaaf: Push((int) -1)
0xab0: Push((int) 28220)
0xab1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab2: Pop(3)
0xab3: Push((int) 526929)
0xab4: Push((int) -1)
0xab5: Push((int) 28221)
0xab6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab7: Pop(3)
0xab8: Return(); Pop(0)

0xab9: Push((int) 26090)
0xaba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xabb: IF (Stack[-1] == 0) GOTO 0xad0; Pop(1)

0xabc: PushEmpty(string)
0xabd: Stack[-1] = "Neutral"
0xabe: Call2 0x9c1

0xabf: Pop(1)
0xac0: Push((int) 524766)
0xac1: @@ SetMessage(Stack[-1])
0xac2: Pop(1)
0xac3: @@ ClearReplies()
0xac4: Pop(0)
0xac5: Push((int) 526915)
0xac6: Push((int) 28208)
0xac7: Push((int) 28207)
0xac8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xac9: Pop(3)
0xaca: Push((int) 526930)
0xacb: Push((int) 28223)
0xacc: Push((int) 28222)
0xacd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xace: Pop(3)
0xacf: Return(); Pop(0)

0xad0: Push((int) 28223)
0xad1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xad2: IF (Stack[-1] == 0) GOTO 0xae2; Pop(1)

0xad3: PushEmpty(string)
0xad4: Stack[-1] = "Anger"
0xad5: Call2 0x9c1

0xad6: Pop(1)
0xad7: Push((int) 526931)
0xad8: @@ SetMessage(Stack[-1])
0xad9: Pop(1)
0xada: @@ ClearReplies()
0xadb: Pop(0)
0xadc: Push((int) 526932)
0xadd: Push((int) 28208)
0xade: Push((int) 28224)
0xadf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xae0: Pop(3)
0xae1: Return(); Pop(0)

0xae2: Push((int) 28208)
0xae3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xae4: IF (Stack[-1] == 0) GOTO 0xaf9; Pop(1)

0xae5: PushEmpty(string)
0xae6: Stack[-1] = "Distrust"
0xae7: Call2 0x9c1

0xae8: Pop(1)
0xae9: Push((int) 526916)
0xaea: @@ SetMessage(Stack[-1])
0xaeb: Pop(1)
0xaec: @@ ClearReplies()
0xaed: Pop(0)
0xaee: Push((int) 526917)
0xaef: Push((int) 28210)
0xaf0: Push((int) 28209)
0xaf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf2: Pop(3)
0xaf3: Push((int) 527156)
0xaf4: Push((int) 28460)
0xaf5: Push((int) 28459)
0xaf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xaf7: Pop(3)
0xaf8: Return(); Pop(0)

0xaf9: Push((int) 28460)
0xafa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xafb: IF (Stack[-1] == 0) GOTO 0xb0b; Pop(1)

0xafc: PushEmpty(string)
0xafd: Stack[-1] = "Distrust"
0xafe: Call2 0x9c1

0xaff: Pop(1)
0xb00: Push((int) 527157)
0xb01: @@ SetMessage(Stack[-1])
0xb02: Pop(1)
0xb03: @@ ClearReplies()
0xb04: Pop(0)
0xb05: Push((int) 527158)
0xb06: Push((int) 28210)
0xb07: Push((int) 28461)
0xb08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb09: Pop(3)
0xb0a: Return(); Pop(0)

0xb0b: Push((int) 28210)
0xb0c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb0d: IF (Stack[-1] == 0) GOTO 0xb22; Pop(1)

0xb0e: PushEmpty(string)
0xb0f: Stack[-1] = "Distrust"
0xb10: Call2 0x9c1

0xb11: Pop(1)
0xb12: Push((int) 526918)
0xb13: @@ SetMessage(Stack[-1])
0xb14: Pop(1)
0xb15: @@ ClearReplies()
0xb16: Pop(0)
0xb17: Push((int) 526919)
0xb18: Push((int) 28212)
0xb19: Push((int) 28211)
0xb1a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb1b: Pop(3)
0xb1c: Push((int) 527159)
0xb1d: Push((int) 28464)
0xb1e: Push((int) 28463)
0xb1f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb20: Pop(3)
0xb21: Return(); Pop(0)

0xb22: Push((int) 28464)
0xb23: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb24: IF (Stack[-1] == 0) GOTO 0xb34; Pop(1)

0xb25: PushEmpty(string)
0xb26: Stack[-1] = "Distrust"
0xb27: Call2 0x9c1

0xb28: Pop(1)
0xb29: Push((int) 527160)
0xb2a: @@ SetMessage(Stack[-1])
0xb2b: Pop(1)
0xb2c: @@ ClearReplies()
0xb2d: Pop(0)
0xb2e: Push((int) 527161)
0xb2f: Push((int) 28214)
0xb30: Push((int) 28465)
0xb31: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb32: Pop(3)
0xb33: Return(); Pop(0)

0xb34: Push((int) 28212)
0xb35: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb36: IF (Stack[-1] == 0) GOTO 0xb4b; Pop(1)

0xb37: PushEmpty(string)
0xb38: Stack[-1] = "Anger"
0xb39: Call2 0x9c1

0xb3a: Pop(1)
0xb3b: Push((int) 526920)
0xb3c: @@ SetMessage(Stack[-1])
0xb3d: Pop(1)
0xb3e: @@ ClearReplies()
0xb3f: Pop(0)
0xb40: Push((int) 526921)
0xb41: Push((int) 28214)
0xb42: Push((int) 28213)
0xb43: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb44: Pop(3)
0xb45: Push((int) 527166)
0xb46: Push((int) 28214)
0xb47: Push((int) 28471)
0xb48: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb49: Pop(3)
0xb4a: Return(); Pop(0)

0xb4b: Push((int) 28214)
0xb4c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4d: IF (Stack[-1] == 0) GOTO 0xb62; Pop(1)

0xb4e: PushEmpty(string)
0xb4f: Stack[-1] = "Anger"
0xb50: Call2 0x9c1

0xb51: Pop(1)
0xb52: Push((int) 526922)
0xb53: @@ SetMessage(Stack[-1])
0xb54: Pop(1)
0xb55: @@ ClearReplies()
0xb56: Pop(0)
0xb57: Push((int) 527162)
0xb58: Push((int) 28467)
0xb59: Push((int) 28466)
0xb5a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb5b: Pop(3)
0xb5c: Push((int) 527167)
0xb5d: Push((int) 28467)
0xb5e: Push((int) 28473)
0xb5f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb60: Pop(3)
0xb61: Return(); Pop(0)

0xb62: Push((int) 28467)
0xb63: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb64: IF (Stack[-1] == 0) GOTO 0xb79; Pop(1)

0xb65: PushEmpty(string)
0xb66: Stack[-1] = "Anger"
0xb67: Call2 0x9c1

0xb68: Pop(1)
0xb69: Push((int) 527163)
0xb6a: @@ SetMessage(Stack[-1])
0xb6b: Pop(1)
0xb6c: @@ ClearReplies()
0xb6d: Pop(0)
0xb6e: Push((int) 527164)
0xb6f: Push((int) 28469)
0xb70: Push((int) 28468)
0xb71: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb72: Pop(3)
0xb73: Push((int) 527169)
0xb74: Push((int) 28477)
0xb75: Push((int) 28476)
0xb76: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb77: Pop(3)
0xb78: Return(); Pop(0)

0xb79: Push((int) 28477)
0xb7a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb7b: IF (Stack[-1] == 0) GOTO 0xb8b; Pop(1)

0xb7c: PushEmpty(string)
0xb7d: Stack[-1] = "Neutral"
0xb7e: Call2 0x9c1

0xb7f: Pop(1)
0xb80: Push((int) 527170)
0xb81: @@ SetMessage(Stack[-1])
0xb82: Pop(1)
0xb83: @@ ClearReplies()
0xb84: Pop(0)
0xb85: Push((int) 527171)
0xb86: Push((int) 28469)
0xb87: Push((int) 28478)
0xb88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb89: Pop(3)
0xb8a: Return(); Pop(0)

0xb8b: Push((int) 28469)
0xb8c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb8d: IF (Stack[-1] == 0) GOTO 0xba2; Pop(1)

0xb8e: PushEmpty(string)
0xb8f: Stack[-1] = "Distrust"
0xb90: Call2 0x9c1

0xb91: Pop(1)
0xb92: Push((int) 527165)
0xb93: @@ SetMessage(Stack[-1])
0xb94: Pop(1)
0xb95: @@ ClearReplies()
0xb96: Pop(0)
0xb97: Push((int) 524767)
0xb98: Push((int) -1)
0xb99: Push((int) 26091)
0xb9a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb9b: Pop(3)
0xb9c: Push((int) 527168)
0xb9d: Push((int) -1)
0xb9e: Push((int) 28475)
0xb9f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xba0: Pop(3)
0xba1: Return(); Pop(0)

0xba2: Push((int) 28202)
0xba3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xba4: IF (Stack[-1] == 0) GOTO 0xbb9; Pop(1)

0xba5: PushEmpty(string)
0xba6: Stack[-1] = "Anger"
0xba7: Call2 0x9c1

0xba8: Pop(1)
0xba9: Push((int) 526910)
0xbaa: @@ SetMessage(Stack[-1])
0xbab: Pop(1)
0xbac: @@ ClearReplies()
0xbad: Pop(0)
0xbae: Push((int) 527148)
0xbaf: Push((int) 28450)
0xbb0: Push((int) 28448)
0xbb1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb2: Pop(3)
0xbb3: Push((int) 527149)
0xbb4: Push((int) 28450)
0xbb5: Push((int) 28449)
0xbb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbb7: Pop(3)
0xbb8: Return(); Pop(0)

0xbb9: Push((int) 28450)
0xbba: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbbb: IF (Stack[-1] == 0) GOTO 0xbcb; Pop(1)

0xbbc: PushEmpty(string)
0xbbd: Stack[-1] = "Neutral"
0xbbe: Call2 0x9c1

0xbbf: Pop(1)
0xbc0: Push((int) 527150)
0xbc1: @@ SetMessage(Stack[-1])
0xbc2: Pop(1)
0xbc3: @@ ClearReplies()
0xbc4: Pop(0)
0xbc5: Push((int) 526911)
0xbc6: Push((int) 28452)
0xbc7: Push((int) 28203)
0xbc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc9: Pop(3)
0xbca: Return(); Pop(0)

0xbcb: Push((int) 28452)
0xbcc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbcd: IF (Stack[-1] == 0) GOTO 0xbe2; Pop(1)

0xbce: PushEmpty(string)
0xbcf: Stack[-1] = "Neutral"
0xbd0: Call2 0x9c1

0xbd1: Pop(1)
0xbd2: Push((int) 527151)
0xbd3: @@ SetMessage(Stack[-1])
0xbd4: Pop(1)
0xbd5: @@ ClearReplies()
0xbd6: Pop(0)
0xbd7: Push((int) 527152)
0xbd8: Push((int) 28204)
0xbd9: Push((int) 28453)
0xbda: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbdb: Pop(3)
0xbdc: Push((int) 527153)
0xbdd: Push((int) 28204)
0xbde: Push((int) 28454)
0xbdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbe0: Pop(3)
0xbe1: Return(); Pop(0)

0xbe2: Push((int) 28204)
0xbe3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbe4: IF (Stack[-1] == 0) GOTO 0xbf9; Pop(1)

0xbe5: PushEmpty(string)
0xbe6: Stack[-1] = "Jeer"
0xbe7: Call2 0x9c1

0xbe8: Pop(1)
0xbe9: Push((int) 526912)
0xbea: @@ SetMessage(Stack[-1])
0xbeb: Pop(1)
0xbec: @@ ClearReplies()
0xbed: Pop(0)
0xbee: Push((int) 527146)
0xbef: Push((int) 28447)
0xbf0: Push((int) 28446)
0xbf1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf2: Pop(3)
0xbf3: Push((int) 524755)
0xbf4: Push((int) -1)
0xbf5: Push((int) 26079)
0xbf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbf7: Pop(3)
0xbf8: Return(); Pop(0)

0xbf9: Push((int) 28447)
0xbfa: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbfb: IF (Stack[-1] == 0) GOTO 0xc10; Pop(1)

0xbfc: PushEmpty(string)
0xbfd: Stack[-1] = "Jeer"
0xbfe: Call2 0x9c1

0xbff: Pop(1)
0xc00: Push((int) 527147)
0xc01: @@ SetMessage(Stack[-1])
0xc02: Pop(1)
0xc03: @@ ClearReplies()
0xc04: Pop(0)
0xc05: Push((int) 527154)
0xc06: Push((int) -1)
0xc07: Push((int) 28456)
0xc08: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc09: Pop(3)
0xc0a: Push((int) 527155)
0xc0b: Push((int) -1)
0xc0c: Push((int) 28457)
0xc0d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc0e: Pop(3)
0xc0f: Return(); Pop(0)

0xc10: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xc11: PushEmpty(bool)
0xc12: Call2 0xffa

0xc13: Pop(0)
0xc14: IF (Stack[-1] == 0) GOTO 0xc18; Pop(1)

0xc15: @ lshStopAnimation()
0xc16: Pop(0)
0xc17: GOTO 0xc1a

0xc18: @ StopAnimation()
0xc19: Pop(0)
0xc1a: Return(); Pop(0)

0xc1b: GOTO 0x9d8

0xc1c: Return(); Pop(0)

0xc1d: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xc1e: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xc1f: PushEmpty(bool, object, float)
0xc20: Stack[-2] = Stack[-12]
0xc21: Stack[-1] = (float) 70.0
0xc22: Call2 0xe2d

0xc23: Pop(2)
0xc24: Pop(1); Push((bool) Stack[-1] == 0)
0xc25: IF (Stack[-1] == 0) GOTO 0xc28; Pop(1)

0xc26: Stack[-10] = (int) -2
0xc27: Return(); Pop(8)

0xc28: @ CreateDialog(Stack[-4])
0xc29: Pop(0)
0xc2a: PushEmpty(int)
0xc2b: Call2 0xff4

0xc2c: Pop(0)
0xc2d: @@ SetNPCName(Stack[-1])
0xc2e: Pop(1)
0xc2f: PushEmpty(int)
0xc30: Call2 0xff2

0xc31: Pop(0)
0xc32: @@ SetNPCDescription(Stack[-1])
0xc33: Pop(1)
0xc34: PushEmpty(string)
0xc35: Call2 0xff6

0xc36: Pop(0)
0xc37: @@ SetPhoto(Stack[-1])
0xc38: Pop(1)
0xc39: PushEmpty(string)
0xc3a: Call2 0xff8

0xc3b: Pop(0)
0xc3c: @@ SetPhoto2(Stack[-1])
0xc3d: Pop(1)
0xc3e: PushEmpty(int)
0xc3f: Call2 0x11da

0xc40: Pop(0)
0xc41: @@ SetPlayerName(Stack[-1])
0xc42: Pop(1)
0xc43: Stack[-2] = (int) -1
0xc44: @ IsOverrideActive(Stack[-3])
0xc45: Pop(0)
0xc46: Push(Stack[-3])
0xc47: IF (Stack[-1] == 0) GOTO 0xc4a; Pop(1)

0xc48: Stack[-10] = (int) -2
0xc49: Return(); Pop(8)

0xc4a: @ DoDialog(Stack[-4])
0xc4b: Pop(0)
0xc4c: PushEmpty(bool, object)
0xc4d: PushEmpty(object)
0xc4e: Call2 0xf41

0xc4f: Stack[-2] = Stack[-1]
0xc50: Pop(1)
0xc51: Call2 0xe82

0xc52: Pop(2)
0xc53: PushEmpty(object, object)
0xc54: Stack[-2] = Stack[-11]
0xc55: Stack[-1] = Stack[-6]
0xc56: Push(-2, 4); TaskCall(15)
0xc57: Call2 0xc6e

0xc58: Pop(-2, 4); TaskReturn
0xc59: Pop(2)
0xc5a: @@ IsDialogEnd(Stack[-1])
0xc5b: Pop(0)
0xc5c: Pop(0); Push((bool) Stack[-1] == 0)
0xc5d: IF (Stack[-1] == 0) GOTO 0xc63; Pop(1)

0xc5e: @ sync()
0xc5f: Pop(0)
0xc60: @@ IsDialogEnd(Stack[-1])
0xc61: Pop(0)
0xc62: GOTO 0xc5c

0xc63: PushEmpty(object)
0xc64: Stack[-1] = Stack[-10]
0xc65: Call2 0xe71

0xc66: Pop(1)
0xc67: @ StopDialog(Stack[-4])
0xc68: Pop(0)
0xc69: @@ GetReturnValue(Stack[-2])
0xc6a: Pop(0)
0xc6b: Stack[-10] = Stack[-2]
0xc6c: Return(); Pop(8)

0xc6d: Stack[-4] = 0
0xc6e: PushEmpty()
0xc6f: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0xc70: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0xc71: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0xc72: Push((int) 1)
0xc73: IF (Stack[-1] == 0) GOTO 0xc8a; Pop(1)

0xc74: PushEmpty(string)
0xc75: Stack[-1] = "Neutral"
0xc76: Call2 0xca8

0xc77: Pop(1)
0xc78: Push((int) 540545)
0xc79: @@ SetMessage(Stack[-1])
0xc7a: Pop(1)
0xc7b: @@ ClearReplies()
0xc7c: Pop(0)
0xc7d: Push((int) 540546)
0xc7e: Push((int) -1)
0xc7f: Push((int) 42555)
0xc80: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc81: Pop(3)
0xc82: Push((int) 540798)
0xc83: Push((int) -1)
0xc84: Push((int) 42847)
0xc85: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc86: Pop(3)
0xc87: GOTO 0xc8a

0xc88: Return(); Pop(0)

0xc89: GOTO 0xc72

0xc8a: PushEmpty(bool)
0xc8b: Call2 0xffa

0xc8c: Pop(0)
0xc8d: IF (Stack[-1] == 0) GOTO 0xc99; Pop(1)

0xc8e: @ lshWaitForAnimEnd()
0xc8f: Pop(0)
0xc90: Push( Stack[3 + Tasks[-1].StackPointer] )
0xc91: IF (Stack[-1] == 0) GOTO 0xc93; Pop(1)

0xc92: GOTO 0xc98

0xc93: PushEmpty(string)
0xc94: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0xc95: Call2 0xf0c

0xc96: Pop(1)
0xc97: GOTO 0xc8e

0xc98: GOTO 0xca7

0xc99: Push("all")
0xc9a: Push("idle")
0xc9b: @ PlayAnimation(Stack[-2], Stack[-1])
0xc9c: Pop(2)
0xc9d: @ WaitForAnimEnd()
0xc9e: Pop(0)
0xc9f: Push( Stack[3 + Tasks[-1].StackPointer] )
0xca0: IF (Stack[-1] == 0) GOTO 0xca2; Pop(1)

0xca1: GOTO 0xca7

0xca2: Push("all")
0xca3: Push("idle")
0xca4: @ PlayAnimation(Stack[-2], Stack[-1])
0xca5: Pop(2)
0xca6: GOTO 0xc9d

0xca7: Return(); Pop(0)

0xca8: PushEmpty()
0xca9: PushEmpty(bool)
0xcaa: Call2 0xffa

0xcab: Pop(0)
0xcac: Pop(1); Push((bool) Stack[-1] == 0)
0xcad: IF (Stack[-1] == 0) GOTO 0xcaf; Pop(1)

0xcae: Return(); Pop(0)

0xcaf: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xcb0: IF (Stack[-1] == 0) GOTO 0xcb2; Pop(1)

0xcb1: Return(); Pop(0)

0xcb2: PushEmpty(string, bool)
0xcb3: Stack[-2] = Stack[-3]
0xcb4: Push("")
0xcb5: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xcb6: IF (Stack[-1] == 0) GOTO 0xcb9; Pop(1)

0xcb7: Stack[-1] = (bool) 0
0xcb8: GOTO 0xcba

0xcb9: Stack[-1] = (bool) 1
0xcba: Call2 0xf1c

0xcbb: Pop(2)
0xcbc: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xcbd: Return(); Pop(0)

0xcbe: PushEmpty()
0xcbf: Push((int) 1)
0xcc0: IF (Stack[-1] == 0) GOTO 0xce7; Pop(1)

0xcc1: PushEmpty()
0xcc2: Call2 0xf3a

0xcc3: Pop(0)
0xcc4: Push((int) 42554)
0xcc5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcc6: IF (Stack[-1] == 0) GOTO 0xcdb; Pop(1)

0xcc7: PushEmpty(string)
0xcc8: Stack[-1] = "Neutral"
0xcc9: Call2 0xca8

0xcca: Pop(1)
0xccb: Push((int) 540545)
0xccc: @@ SetMessage(Stack[-1])
0xccd: Pop(1)
0xcce: @@ ClearReplies()
0xccf: Pop(0)
0xcd0: Push((int) 540546)
0xcd1: Push((int) -1)
0xcd2: Push((int) 42555)
0xcd3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd4: Pop(3)
0xcd5: Push((int) 540798)
0xcd6: Push((int) -1)
0xcd7: Push((int) 42847)
0xcd8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcd9: Pop(3)
0xcda: Return(); Pop(0)

0xcdb: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xcdc: PushEmpty(bool)
0xcdd: Call2 0xffa

0xcde: Pop(0)
0xcdf: IF (Stack[-1] == 0) GOTO 0xce3; Pop(1)

0xce0: @ lshStopAnimation()
0xce1: Pop(0)
0xce2: GOTO 0xce5

0xce3: @ StopAnimation()
0xce4: Pop(0)
0xce5: Return(); Pop(0)

0xce6: GOTO 0xcbf

0xce7: Return(); Pop(0)

0xce8: Push(GlobalVars[1])
0xce9: Stack[-1] = (bool) 0
0xcea: GlobalVars[1] = Stack[-1]; Pop(1)
0xceb: PushEmpty()
0xcec: Call2 0xcef

0xced: Pop(0)
0xcee: Return(); Pop(0)

0xcef: PushEmpty(bool)
0xcf0: Call2 0xe28

0xcf1: Pop(0)
0xcf2: Pop(1); Push((bool) Stack[-1] == 0)
0xcf3: IF (Stack[-1] == 0) GOTO 0xcf6; Pop(1)

0xcf4: @ Hold()
0xcf5: Pop(0)
0xcf6: @ GetDirection(Stack[-0])
0xcf7: Pop(0)
0xcf8: PushEmpty()
0xcf9: Call2 0xd9f

0xcfa: Pop(0)
0xcfb: GOTO 0xcf8

0xcfc: Return(); Pop(0)

0xcfd: PushEmpty(object, object)
0xcfe: Push("player")
0xcff: @ FindActor(Stack[-2], Stack[-1])
0xd00: Pop(1)
0xd01: Pop(0); Push((bool) Stack[-1] == 0)
0xd02: IF (Stack[-1] == 0) GOTO 0xd05; Pop(1)

0xd03: Stack[-3] = (bool) 0
0xd04: Return(); Pop(2)

0xd05: PushEmpty(bool, object)
0xd06: Stack[-1] = Stack[-3]
0xd07: Call2 0xe1f

0xd08: Stack[-5] = Stack[-2]
0xd09: Pop(2)
0xd0a: Return(); Pop(2)

0xd0b: Stack[-1] = 0
0xd0c: Push(CvectorIndex(Stack[-0], 0))
0xd0d: Push(CvectorIndex(Stack[-0], 2))
0xd0e: @ RotateAsync(Stack[-2], Stack[-1])
0xd0f: Pop(2)
0xd10: Return(); Pop(0)

0xd11: PushEmpty(object, bool, object, bool)
0xd12: Push("player")
0xd13: @ FindActor(Stack[-3], Stack[-1])
0xd14: Pop(1)
0xd15: Pop(0); Push((bool) Stack[-2] == 0)
0xd16: IF (Stack[-1] == 0) GOTO 0xd19; Pop(1)

0xd17: Stack[-5] = (bool) 0
0xd18: Return(); Pop(4)

0xd19: PushEmpty(float, object)
0xd1a: Stack[-1] = Stack[-4]
0xd1b: Call2 0xdeb

0xd1c: Pop(1)
0xd1d: Push((float)90000.0)
0xd1e: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0xd1f: IF (Stack[-1] == 0) GOTO 0xd22; Pop(1)

0xd20: Stack[-5] = (bool) 0
0xd21: Return(); Pop(4)

0xd22: @ CanSee(Stack[-1], Stack[-2])
0xd23: Pop(0)
0xd24: Stack[-5] = Stack[-1]
0xd25: Return(); Pop(4)

0xd26: Stack[-2] = 0
0xd27: PushEmpty(float, float)
0xd28: Push((int) 8)
0xd29: Push((int) 16)
0xd2a: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xd2b: Pop(2)
0xd2c: Push((int) 10)
0xd2d: @ SetTimer(Stack[-1], Stack[-2])
0xd2e: Pop(1)
0xd2f: Return(); Pop(2)

0xd30: Push((int) 10)
0xd31: @ KillTimer(Stack[-1])
0xd32: Pop(1)
0xd33: Return(); Pop(0)

0xd34: PushEmpty()
0xd35: Push((int) 10)
0xd36: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd37: IF (Stack[-1] == 0) GOTO 0xd59; Pop(1)

0xd38: PushEmpty()
0xd39: Call2 0xd30

0xd3a: Pop(0)
0xd3b: PushEmpty(bool)
0xd3c: Stack[-1] = (bool) 0
0xd3d: PushEmpty(bool)
0xd3e: Call2 0xe28

0xd3f: Pop(0)
0xd40: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd41: PushEmpty(bool)
0xd42: Call2 0xd11

0xd43: Pop(0)
0xd44: IF (Stack[-1] == 0) GOTO 0xd46; Pop(1)

0xd45: Stack[-1] = (bool) 1
0xd46: IF (Stack[-1] == 0) GOTO 0xd53; Pop(1)

0xd47: PushEmpty(bool)
0xd48: Call2 0xcfd

0xd49: Pop(0)
0xd4a: IF (Stack[-1] == 0) GOTO 0xd52; Pop(1)

0xd4b: PushEmpty(bool, object)
0xd4c: PushEmpty(object)
0xd4d: Call2 0xf41

0xd4e: Stack[-2] = Stack[-1]
0xd4f: Pop(1)
0xd50: Call2 0xebc

0xd51: Pop(2)
0xd52: GOTO 0xd59

0xd53: PushEmpty()
0xd54: Call2 0xd0c

0xd55: Pop(0)
0xd56: PushEmpty()
0xd57: Call2 0xd27

0xd58: Pop(0)
0xd59: Return(); Pop(0)

0xd5a: PushEmpty()
0xd5b: Call2 0xde6

0xd5c: Pop(0)
0xd5d: PushEmpty()
0xd5e: Call2 0xd30

0xd5f: Pop(0)
0xd60: @ lshStopSpeech()
0xd61: Pop(0)
0xd62: @ lshStopAnimation()
0xd63: Pop(0)
0xd64: @ StopAsync()
0xd65: Pop(0)
0xd66: @ Hold()
0xd67: Pop(0)
0xd68: Return(); Pop(0)

0xd69: @ StopGroup0()
0xd6a: Pop(0)
0xd6b: PushEmpty()
0xd6c: Call2 0xd30

0xd6d: Pop(0)
0xd6e: PushEmpty(string)
0xd6f: Stack[-1] = "Neutral"
0xd70: Call2 0xf0c

0xd71: Pop(1)
0xd72: PushEmpty()
0xd73: Call2 0xd27

0xd74: Pop(0)
0xd75: Return(); Pop(0)

0xd76: PushEmpty()
0xd77: Push(Stack[-1])
0xd78: IF (Stack[-1] == 0) GOTO 0xd7d; Pop(1)

0xd79: PushEmpty()
0xd7a: Call2 0xd27

0xd7b: Pop(0)
0xd7c: GOTO 0xd81

0xd7d: PushEmpty(string)
0xd7e: Stack[-1] = "Neutral"
0xd7f: Call2 0xf0c

0xd80: Pop(1)
0xd81: Return(); Pop(0)

0xd82: PushEmpty(bool, bool)
0xd83: @ IsOverrideActive(Stack[-1])
0xd84: Pop(0)
0xd85: Pop(0); Push((bool) Stack[-1] == 0)
0xd86: IF (Stack[-1] == 0) GOTO 0xd9e; Pop(1)

0xd87: EventDisable(0)
0xd88: PushEmpty()
0xd89: Call2 0xde6

0xd8a: Pop(0)
0xd8b: PushEmpty(bool, object)
0xd8c: Stack[-1] = Stack[-5]
0xd8d: Call2 0xe1f

0xd8e: Pop(2)
0xd8f: EventEnable(0)
0xd90: PushEmpty(object)
0xd91: Stack[-1] = Stack[-4]
0xd92: Call2 0x11eb

0xd93: Pop(1)
0xd94: PushEmpty(string)
0xd95: Stack[-1] = "Neutral"
0xd96: Call2 0xf0c

0xd97: Pop(1)
0xd98: PushEmpty()
0xd99: Call2 0xd30

0xd9a: Pop(0)
0xd9b: PushEmpty()
0xd9c: Call2 0xd27

0xd9d: Pop(0)
0xd9e: Return(); Pop(2)

0xd9f: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0xda0: @ WaitForAnimEnd()
0xda1: Pop(0)
0xda2: PushEmpty(bool)
0xda3: Call2 0xe28

0xda4: Pop(0)
0xda5: Pop(1); Push((bool) Stack[-1] == 0)
0xda6: IF (Stack[-1] == 0) GOTO 0xda8; Pop(1)

0xda7: Return(); Pop(12)

0xda8: PushEmpty(int)
0xda9: Call2 0xfe1

0xdaa: Stack[-7] = Stack[-1]
0xdab: Pop(1)
0xdac: Stack[-5] = (int) 0
0xdad: PushEmpty(bool)
0xdae: Stack[-1] = (bool) 0
0xdaf: Push((int) 5)
0xdb0: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0xdb1: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb2: PushEmpty(bool)
0xdb3: Call2 0xe28

0xdb4: Pop(0)
0xdb5: IF (Stack[-1] == 0) GOTO 0xdb7; Pop(1)

0xdb6: Stack[-1] = (bool) 1
0xdb7: IF (Stack[-1] == 0) GOTO 0xde1; Pop(1)

0xdb8: Pop(0); Push((bool) Stack[-6] == 0)
0xdb9: IF (Stack[-1] == 0) GOTO 0xdc1; Pop(1)

0xdba: Push((int) 3)
0xdbb: @ Sleep(Stack[-1], Stack[-5])
0xdbc: Pop(1)
0xdbd: Pop(0); Push((bool) Stack[-4] == 0)
0xdbe: IF (Stack[-1] == 0) GOTO 0xdc0; Pop(1)

0xdbf: GOTO 0xde1

0xdc0: GOTO 0xdd6

0xdc1: @ irand(Stack[-3], Stack[-6])
0xdc2: Pop(0)
0xdc3: Push((int) 5)
0xdc4: @ irand(Stack[-3], Stack[-1])
0xdc5: Pop(1)
0xdc6: Push((int) 0)
0xdc7: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0xdc8: IF (Stack[-1] == 0) GOTO 0xdca; Pop(1)

0xdc9: Stack[-3] = (int) 0
0xdca: Push("all")
0xdcb: PushEmpty(string, int)
0xdcc: Stack[-1] = Stack[-6]
0xdcd: Call2 0xfda

0xdce: Pop(1)
0xdcf: @ PlayAnimation(Stack[-2], Stack[-1])
0xdd0: Pop(2)
0xdd1: @ WaitForAnimEnd(Stack[-1])
0xdd2: Pop(0)
0xdd3: Pop(0); Push((bool) Stack[-1] == 0)
0xdd4: IF (Stack[-1] == 0) GOTO 0xdd6; Pop(1)

0xdd5: GOTO 0xde1

0xdd6: PushEmpty(bool)
0xdd7: Call2 0xde4

0xdd8: Pop(0)
0xdd9: Pop(1); Push((bool) Stack[-1] == 0)
0xdda: IF (Stack[-1] == 0) GOTO 0xddc; Pop(1)

0xddb: GOTO 0xde1

0xddc: @ ResetAAS()
0xddd: Pop(0)
0xdde: Push((int) 1)
0xddf: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0xde0: GOTO 0xdad

0xde1: @ ResetAAS()
0xde2: Pop(0)
0xde3: Return(); Pop(12)

0xde4: Stack[-1] = (bool) 1
0xde5: Return(); Pop(0)

0xde6: @ StopAnimation()
0xde7: Pop(0)
0xde8: @ StopGroup0()
0xde9: Pop(0)
0xdea: Return(); Pop(0)

0xdeb: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0xdec: @ GetPosition(Stack[-3])
0xded: Pop(0)
0xdee: @@ GetPosition(Stack[-2])
0xdef: Pop(0)
0xdf0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0xdf1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0xdf2: Return(); Pop(6)

0xdf3: PushEmpty(bool, bool)
0xdf4: Push("HasProperty")
0xdf5: Push((int) 2)
0xdf6: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0xdf7: Pop(1); Push((bool) Stack[-1] == 0)
0xdf8: IF (Stack[-1] == 0) GOTO 0xdfb; Pop(1)

0xdf9: Stack[-5] = (bool) 0
0xdfa: Return(); Pop(2)

0xdfb: @@ HasProperty(Stack[-3], Stack[-1])
0xdfc: Pop(0)
0xdfd: Stack[-5] = Stack[-1]
0xdfe: Return(); Pop(2)

0xdff: PushEmpty(float, float)
0xe00: PushEmpty(bool, object, string)
0xe01: Stack[-2] = Stack[-10]
0xe02: Stack[-1] = Stack[-9]
0xe03: Call2 0xdf3

0xe04: Pop(2)
0xe05: Pop(1); Push((bool) Stack[-1] == 0)
0xe06: IF (Stack[-1] == 0) GOTO 0xe09; Pop(1)

0xe07: Stack[-8] = (bool) 0
0xe08: Return(); Pop(2)

0xe09: @@ GetProperty(Stack[-6], Stack[-1])
0xe0a: Pop(0)
0xe0b: PushEmpty(float, float, float, float)
0xe0c: Stack[-3] = Stack[-5] + Stack[-9]; Pop(0);
0xe0d: Stack[-2] = Stack[-8]
0xe0e: Stack[-1] = Stack[-7]
0xe0f: Call2 0xf51

0xe10: Pop(3)
0xe11: @@ SetProperty(Stack[-7], Stack[-1])
0xe12: Pop(1)
0xe13: Stack[-8] = (bool) 1
0xe14: Return(); Pop(2)

0xe15: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0xe16: @ GetPosition(Stack[-3])
0xe17: Pop(0)
0xe18: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0xe19: Push(CvectorIndex(Stack[-2], 0))
0xe1a: Push(CvectorIndex(Stack[-3], 2))
0xe1b: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0xe1c: Pop(2)
0xe1d: Stack[-8] = Stack[-1]
0xe1e: Return(); Pop(6)

0xe1f: PushEmpty(cvector, cvector)
0xe20: @@ GetPosition(Stack[-1])
0xe21: Pop(0)
0xe22: PushEmpty(bool, cvector)
0xe23: Stack[-1] = Stack[-3]
0xe24: Call2 0xe15

0xe25: Stack[-6] = Stack[-2]
0xe26: Pop(2)
0xe27: Return(); Pop(2)

0xe28: PushEmpty(bool, bool)
0xe29: @ IsLoaded(Stack[-1])
0xe2a: Pop(0)
0xe2b: Stack[-3] = Stack[-1]
0xe2c: Return(); Pop(2)

0xe2d: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0xe2e: @@ GetPosition(Stack[-8])
0xe2f: Pop(0)
0xe30: @@ GetEyesHeight(Stack[-9])
0xe31: Pop(0)
0xe32: Push(CvectorIndex(Stack[-8], 1))
0xe33: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe34: CvectorIndex(Stack[-9], 1) = Stack[-1];
0xe35: @ GetPosition(Stack[-7])
0xe36: Pop(0)
0xe37: @ GetEyesHeight(Stack[-9])
0xe38: Pop(0)
0xe39: Push(CvectorIndex(Stack[-7], 1))
0xe3a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0xe3b: CvectorIndex(Stack[-8], 1) = Stack[-1];
0xe3c: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0xe3d: Push(CvectorIndex(Stack[-6], 1))
0xe3e: Stack[-1] = (int) 0
0xe3f: CvectorIndex(Stack[-7], 1) = Stack[-1];
0xe40: Pop(0); Push(Stack[-6] | Stack[-6]);
0xe41: Pop(1); Push(Sqrt(Stack[-1]))
0xe42: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0xe43: Stack[-5] = -Stack[-6]; Pop(0);
0xe44: Pop(0); Push(Stack[-6] * Stack[-19]);
0xe45: PushEmpty(cvector, cvector)
0xe46: Push(CVector(0.0, 1.0, 0.0))
0xe47: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0xe48: Call2 0xf47

0xe49: Pop(1)
0xe4a: Push((int) 25)
0xe4b: Pop(2); Push(Stack[-2] * Stack[-1]);
0xe4c: Pop(2); Push(Stack[-2] + Stack[-1]);
0xe4d: Push(CVector(0.0, 10.0, 0.0))
0xe4e: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0xe4f: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0xe50: @ IsOverrideActive(Stack[-2])
0xe51: Pop(0)
0xe52: Push(Stack[-2])
0xe53: IF (Stack[-1] == 0) GOTO 0xe56; Pop(1)

0xe54: Stack[-21] = (bool) 0
0xe55: Return(); Pop(18)

0xe56: @ StopWorld()
0xe57: Pop(0)
0xe58: @ CameraTransit(Stack[-3], Stack[-5])
0xe59: Pop(0)
0xe5a: Push(CvectorIndex(Stack[-4], 0))
0xe5b: Push(CvectorIndex(Stack[-5], 2))
0xe5c: @ Rotate(Stack[-2], Stack[-1])
0xe5d: Pop(2)
0xe5e: PushEmpty(bool)
0xe5f: Call2 0xffa

0xe60: Pop(0)
0xe61: IF (Stack[-1] == 0) GOTO 0xe63; Pop(1)

0xe62: GOTO 0xe6b

0xe63: Push("head")
0xe64: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xe65: Pop(1)
0xe66: Push(Stack[-1])
0xe67: IF (Stack[-1] == 0) GOTO 0xe6b; Pop(1)

0xe68: Push("head")
0xe69: @ LookAsyncCamera(Stack[-1])
0xe6a: Pop(1)
0xe6b: @ CameraWaitForPlayFinish()
0xe6c: Pop(0)
0xe6d: @ ResumeWorld()
0xe6e: Pop(0)
0xe6f: Stack[-21] = (bool) 1
0xe70: Return(); Pop(18)

0xe71: PushEmpty(bool, bool)
0xe72: @ CameraSwitchToNormal()
0xe73: Pop(0)
0xe74: PushEmpty(bool)
0xe75: Call2 0xffa

0xe76: Pop(0)
0xe77: IF (Stack[-1] == 0) GOTO 0xe79; Pop(1)

0xe78: GOTO 0xe81

0xe79: Push("head")
0xe7a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0xe7b: Pop(1)
0xe7c: Push(Stack[-1])
0xe7d: IF (Stack[-1] == 0) GOTO 0xe81; Pop(1)

0xe7e: Push("head")
0xe7f: @ UnlookAsync(Stack[-1])
0xe80: Pop(1)
0xe81: Return(); Pop(2)

0xe82: PushEmpty(int, int, int, int)
0xe83: Push("voice_common")
0xe84: @ GetVariable(Stack[-1], Stack[-3])
0xe85: Pop(1)
0xe86: Push(Stack[-2])
0xe87: IF (Stack[-1] == 0) GOTO 0xea8; Pop(1)

0xe88: PushEmpty(bool, object)
0xe89: Stack[-1] = Stack[-7]
0xe8a: Call2 0xebc

0xe8b: Pop(1)
0xe8c: Pop(1); Push((bool) Stack[-1] == 0)
0xe8d: IF (Stack[-1] == 0) GOTO 0xe96; Pop(1)

0xe8e: PushEmpty(bool, object)
0xe8f: Stack[-1] = Stack[-7]
0xe90: Call2 0xee1

0xe91: Pop(1)
0xe92: Pop(1); Push((bool) Stack[-1] == 0)
0xe93: IF (Stack[-1] == 0) GOTO 0xe96; Pop(1)

0xe94: Stack[-6] = (bool) 0
0xe95: Return(); Pop(4)

0xe96: Push((int) 2)
0xe97: @ irand(Stack[-2], Stack[-1])
0xe98: Pop(1)
0xe99: Push(Stack[-1])
0xe9a: IF (Stack[-1] == 0) GOTO 0xea3; Pop(1)

0xe9b: Push("voice_common")
0xe9c: Push((int) 1)
0xe9d: Pop(1); Push(Stack[-4] + Stack[-1]);
0xe9e: Push((int) 3)
0xe9f: Pop(2); Push(Stack[-2] % Stack[-1]);
0xea0: @ SetVariable(Stack[-2], Stack[-1])
0xea1: Pop(2)
0xea2: GOTO 0xea7

0xea3: Push("voice_common")
0xea4: Push((int) 0)
0xea5: @ SetVariable(Stack[-2], Stack[-1])
0xea6: Pop(2)
0xea7: GOTO 0xeba

0xea8: PushEmpty(bool, object)
0xea9: Stack[-1] = Stack[-7]
0xeaa: Call2 0xee1

0xeab: Pop(1)
0xeac: Pop(1); Push((bool) Stack[-1] == 0)
0xead: IF (Stack[-1] == 0) GOTO 0xeb6; Pop(1)

0xeae: PushEmpty(bool, object)
0xeaf: Stack[-1] = Stack[-7]
0xeb0: Call2 0xebc

0xeb1: Pop(1)
0xeb2: Pop(1); Push((bool) Stack[-1] == 0)
0xeb3: IF (Stack[-1] == 0) GOTO 0xeb6; Pop(1)

0xeb4: Stack[-6] = (bool) 0
0xeb5: Return(); Pop(4)

0xeb6: Push("voice_common")
0xeb7: Push((int) 1)
0xeb8: @ SetVariable(Stack[-2], Stack[-1])
0xeb9: Pop(2)
0xeba: Stack[-6] = (bool) 1
0xebb: Return(); Pop(4)

0xebc: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xebd: Stack[-5] = "c"
0xebe: Stack[-4] = (int) 0
0xebf: Push((int) 1)
0xec0: IF (Stack[-1] == 0) GOTO 0xecc; Pop(1)

0xec1: Push((int) 1)
0xec2: Pop(1); Push(Stack[-5] + Stack[-1]);
0xec3: Pop(1); Push(Stack[-6] + Stack[-1]);
0xec4: @@ HasProperty(Stack[-1], Stack[-4])
0xec5: Pop(1)
0xec6: Pop(0); Push((bool) Stack[-3] == 0)
0xec7: IF (Stack[-1] == 0) GOTO 0xec9; Pop(1)

0xec8: GOTO 0xecc

0xec9: Push((int) 1)
0xeca: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xecb: GOTO 0xebf

0xecc: Pop(0); Push((bool) Stack[-4] == 0)
0xecd: IF (Stack[-1] == 0) GOTO 0xed0; Pop(1)

0xece: Stack[-12] = (bool) 0
0xecf: Return(); Pop(10)

0xed0: Stack[-2] = (int) 0
0xed1: Push((int) 1)
0xed2: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xed3: IF (Stack[-1] == 0) GOTO 0xed6; Pop(1)

0xed4: @ irand(Stack[-2], Stack[-4])
0xed5: Pop(0)
0xed6: Push((int) 1)
0xed7: Pop(1); Push(Stack[-3] + Stack[-1]);
0xed8: Pop(1); Push(Stack[-6] + Stack[-1]);
0xed9: @@ GetProperty(Stack[-1], Stack[-2])
0xeda: Pop(1)
0xedb: PushEmpty(bool, string)
0xedc: Stack[-1] = Stack[-3]
0xedd: Call2 0xf2b

0xede: Stack[-14] = Stack[-2]
0xedf: Pop(2)
0xee0: Return(); Pop(10)

0xee1: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0xee2: Push("d")
0xee3: PushEmpty(int)
0xee4: Call2 0xfcb

0xee5: Pop(0)
0xee6: Pop(2); Push(Stack[-2] + Stack[-1]);
0xee7: Push("m")
0xee8: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0xee9: Stack[-4] = (int) 0
0xeea: Push((int) 1)
0xeeb: IF (Stack[-1] == 0) GOTO 0xef7; Pop(1)

0xeec: Push((int) 1)
0xeed: Pop(1); Push(Stack[-5] + Stack[-1]);
0xeee: Pop(1); Push(Stack[-6] + Stack[-1]);
0xeef: @@ HasProperty(Stack[-1], Stack[-4])
0xef0: Pop(1)
0xef1: Pop(0); Push((bool) Stack[-3] == 0)
0xef2: IF (Stack[-1] == 0) GOTO 0xef4; Pop(1)

0xef3: GOTO 0xef7

0xef4: Push((int) 1)
0xef5: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0xef6: GOTO 0xeea

0xef7: Pop(0); Push((bool) Stack[-4] == 0)
0xef8: IF (Stack[-1] == 0) GOTO 0xefb; Pop(1)

0xef9: Stack[-12] = (bool) 0
0xefa: Return(); Pop(10)

0xefb: Stack[-2] = (int) 0
0xefc: Push((int) 1)
0xefd: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0xefe: IF (Stack[-1] == 0) GOTO 0xf01; Pop(1)

0xeff: @ irand(Stack[-2], Stack[-4])
0xf00: Pop(0)
0xf01: Push((int) 1)
0xf02: Pop(1); Push(Stack[-3] + Stack[-1]);
0xf03: Pop(1); Push(Stack[-6] + Stack[-1]);
0xf04: @@ GetProperty(Stack[-1], Stack[-2])
0xf05: Pop(1)
0xf06: PushEmpty(bool, string)
0xf07: Stack[-1] = Stack[-3]
0xf08: Call2 0xf2b

0xf09: Stack[-14] = Stack[-2]
0xf0a: Pop(2)
0xf0b: Return(); Pop(10)

0xf0c: PushEmpty(bool, float, float, bool, float, float)
0xf0d: @ lshHasAnimation(Stack[-3], Stack[-7])
0xf0e: Pop(0)
0xf0f: Push(Stack[-3])
0xf10: IF (Stack[-1] == 0) GOTO 0xf17; Pop(1)

0xf11: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0xf12: Pop(0)
0xf13: Push((bool) 0)
0xf14: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0xf15: Pop(1)
0xf16: GOTO 0xf1b

0xf17: Push("Can't find lsh animation : ")
0xf18: Pop(1); Push(Stack[-1] + Stack[-8]);
0xf19: @ Trace(Stack[-1])
0xf1a: Pop(1)
0xf1b: Return(); Pop(6)

0xf1c: PushEmpty(bool, float, float, bool, float, float)
0xf1d: @ lshHasAnimation(Stack[-3], Stack[-8])
0xf1e: Pop(0)
0xf1f: Push(Stack[-3])
0xf20: IF (Stack[-1] == 0) GOTO 0xf26; Pop(1)

0xf21: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0xf22: Pop(0)
0xf23: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0xf24: Pop(0)
0xf25: GOTO 0xf2a

0xf26: Push("Can't find lsh animation : ")
0xf27: Pop(1); Push(Stack[-1] + Stack[-9]);
0xf28: @ Trace(Stack[-1])
0xf29: Pop(1)
0xf2a: Return(); Pop(6)

0xf2b: PushEmpty(bool, bool)
0xf2c: PushEmpty(bool)
0xf2d: Call2 0xffa

0xf2e: Pop(0)
0xf2f: IF (Stack[-1] == 0) GOTO 0xf38; Pop(1)

0xf30: @ lshHasSpeech(Stack[-1], Stack[-3])
0xf31: Pop(0)
0xf32: Push(Stack[-1])
0xf33: IF (Stack[-1] == 0) GOTO 0xf38; Pop(1)

0xf34: @ lshPlaySpeech(Stack[-3])
0xf35: Pop(0)
0xf36: Stack[-4] = (bool) 1
0xf37: Return(); Pop(2)

0xf38: Stack[-4] = (bool) 0
0xf39: Return(); Pop(2)

0xf3a: PushEmpty(bool)
0xf3b: Call2 0xffa

0xf3c: Pop(0)
0xf3d: IF (Stack[-1] == 0) GOTO 0xf40; Pop(1)

0xf3e: @ lshStopSpeech()
0xf3f: Pop(0)
0xf40: Return(); Pop(0)

0xf41: PushEmpty(object, object)
0xf42: @ self(Stack[-1])
0xf43: Pop(0)
0xf44: Stack[-3] = Stack[-1]
0xf45: Return(); Pop(2)

0xf46: Stack[-1] = 0
0xf47: PushEmpty(float, float)
0xf48: Pop(0); Push(Stack[-3] | Stack[-3]);
0xf49: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0xf4a: Push((float)0.0)
0xf4b: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf4c: IF (Stack[-1] == 0) GOTO 0xf4f; Pop(1)

0xf4d: Stack[-4] = CVector(0.0, 0.0, 0.0)
0xf4e: Return(); Pop(2)

0xf4f: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0xf50: Return(); Pop(2)

0xf51: PushEmpty()
0xf52: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0xf53: IF (Stack[-1] == 0) GOTO 0xf56; Pop(1)

0xf54: Stack[-4] = Stack[-2]
0xf55: Return(); Pop(0)

0xf56: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0xf57: IF (Stack[-1] == 0) GOTO 0xf5a; Pop(1)

0xf58: Stack[-4] = Stack[-1]
0xf59: Return(); Pop(0)

0xf5a: Stack[-4] = Stack[-3]
0xf5b: Return(); Pop(0)

0xf5c: PushEmpty(int, int)
0xf5d: @ GetVariable(Stack[-3], Stack[-1])
0xf5e: Pop(0)
0xf5f: Stack[-4] = Stack[-1]
0xf60: Return(); Pop(2)

0xf61: PushEmpty(object, object)
0xf62: @ CreateIntVector(Stack[-1])
0xf63: Pop(0)
0xf64: @@ add(Stack[-4])
0xf65: Pop(0)
0xf66: @@ add(Stack[-3])
0xf67: Pop(0)
0xf68: Push((int) 3)
0xf69: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xf6a: Pop(1)
0xf6b: Return(); Pop(2)

0xf6c: Stack[-1] = 0
0xf6d: PushEmpty(int, int, bool, int, int, bool)
0xf6e: @@ GetItemID(Stack[-3])
0xf6f: Pop(0)
0xf70: Push("Category")
0xf71: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0xf72: Pop(1)
0xf73: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0xf74: Pop(0)
0xf75: Pop(0); Push((bool) Stack[-1] == 0)
0xf76: IF (Stack[-1] == 0) GOTO 0xf7a; Pop(1)

0xf77: @@ DropItems(Stack[-8], Stack[-7])
0xf78: Pop(0)
0xf79: GOTO 0xf7f

0xf7a: PushEmpty(int, int)
0xf7b: Stack[-2] = Stack[-5]
0xf7c: Stack[-1] = Stack[-9]
0xf7d: Call2 0xf61

0xf7e: Pop(2)
0xf7f: Return(); Pop(6)

0xf80: PushEmpty(object, object)
0xf81: @ CreateInvItem(Stack[-1])
0xf82: Pop(0)
0xf83: @@ SetItemName(Stack[-4])
0xf84: Pop(0)
0xf85: PushEmpty(object, object, int)
0xf86: Stack[-3] = Stack[-8]
0xf87: Stack[-2] = Stack[-4]
0xf88: Stack[-1] = Stack[-6]
0xf89: Call2 0xf6d

0xf8a: Pop(3)
0xf8b: Return(); Pop(2)

0xf8c: Stack[-1] = 0
0xf8d: PushEmpty()
0xf8e: Pop(0); Push((bool) Stack[-2] == 0)
0xf8f: IF (Stack[-1] == 0) GOTO 0xf92; Pop(1)

0xf90: Stack[-3] = (bool) 0
0xf91: Return(); Pop(0)

0xf92: Push((int) 0)
0xf93: Pop(1); Push((bool) Stack[-2] > Stack[-1])
0xf94: IF (Stack[-1] == 0) GOTO 0xf99; Pop(1)

0xf95: Push((int) 8)
0xf96: @ SendWorldWndMessage(Stack[-1])
0xf97: Pop(1)
0xf98: GOTO 0xfa2

0xf99: Push((int) 0)
0xf9a: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0xf9b: IF (Stack[-1] == 0) GOTO 0xfa0; Pop(1)

0xf9c: Push((int) 9)
0xf9d: @ SendWorldWndMessage(Stack[-1])
0xf9e: Pop(1)
0xf9f: GOTO 0xfa2

0xfa0: Stack[-3] = (bool) 0
0xfa1: Return(); Pop(0)

0xfa2: PushEmpty(float)
0xfa3: Stack[-1] = Stack[-2]
0xfa4: Call2 0xfb0

0xfa5: Pop(1)
0xfa6: PushEmpty(bool, object, string, float, float, float)
0xfa7: Stack[-5] = Stack[-8]
0xfa8: Stack[-4] = "reputation"
0xfa9: Stack[-3] = Stack[-7]
0xfaa: Stack[-2] = (int) 0
0xfab: Stack[-1] = (int) 1
0xfac: Call2 0xdff

0xfad: Pop(6)
0xfae: Stack[-3] = (bool) 1
0xfaf: Return(); Pop(0)

0xfb0: PushEmpty(object, object)
0xfb1: @ CreateFloatVector(Stack[-1])
0xfb2: Pop(0)
0xfb3: @@ add(Stack[-3])
0xfb4: Pop(0)
0xfb5: Push((int) 16)
0xfb6: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0xfb7: Pop(1)
0xfb8: Return(); Pop(2)

0xfb9: Stack[-1] = 0
0xfba: PushEmpty(object, object)
0xfbb: @ FindActor(Stack[-1], Stack[-4])
0xfbc: Pop(0)
0xfbd: Pop(0); Push((bool) Stack[-1] == 0)
0xfbe: IF (Stack[-1] == 0) GOTO 0xfc1; Pop(1)

0xfbf: Stack[-5] = (bool) 0
0xfc0: Return(); Pop(2)

0xfc1: @ Trigger(Stack[-1], Stack[-3])
0xfc2: Pop(0)
0xfc3: Stack[-5] = (bool) 1
0xfc4: Return(); Pop(2)

0xfc5: Stack[-1] = 0
0xfc6: PushEmpty(float, float)
0xfc7: @ GetGameTime(Stack[-1])
0xfc8: Pop(0)
0xfc9: Stack[-3] = Stack[-1]
0xfca: Return(); Pop(2)

0xfcb: PushEmpty(float, float)
0xfcc: @ GetGameTime(Stack[-1])
0xfcd: Pop(0)
0xfce: Push((int) 1)
0xfcf: PushEmpty(int)
0xfd0: Push((int) 24)
0xfd1: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0xfd2: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0xfd3: Return(); Pop(2)

0xfd4: PushEmpty()
0xfd5: PushEmpty(int)
0xfd6: Call2 0xfcb

0xfd7: Pop(0)
0xfd8: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0xfd9: Return(); Pop(0)

0xfda: PushEmpty(string, string)
0xfdb: Stack[-1] = "idle"
0xfdc: Push(Stack[-3])
0xfdd: IF (Stack[-1] == 0) GOTO 0xfdf; Pop(1)

0xfde: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0xfdf: Stack[-4] = Stack[-1]
0xfe0: Return(); Pop(2)

0xfe1: PushEmpty(int, bool, int, bool)
0xfe2: Stack[-2] = (int) 0
0xfe3: Push("all")
0xfe4: PushEmpty(string, int)
0xfe5: Stack[-1] = Stack[-5]
0xfe6: Call2 0xfda

0xfe7: Pop(1)
0xfe8: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0xfe9: Pop(2)
0xfea: Pop(0); Push((bool) Stack[-1] == 0)
0xfeb: IF (Stack[-1] == 0) GOTO 0xfed; Pop(1)

0xfec: GOTO 0xff0

0xfed: Push((int) 1)
0xfee: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0xfef: GOTO 0xfe3

0xff0: Stack[-5] = Stack[-2]
0xff1: Return(); Pop(4)

0xff2: Stack[-1] = (int) 515534
0xff3: Return(); Pop(0)

0xff4: Stack[-1] = (int) 502859
0xff5: Return(); Pop(0)

0xff6: Stack[-1] = "ui/NPC_Georg.png"
0xff7: Return(); Pop(0)

0xff8: Stack[-1] = "ui/NPC_Georg_b.png"
0xff9: Return(); Pop(0)

0xffa: Stack[-1] = (bool) 1
0xffb: Return(); Pop(0)

0xffc: PushEmpty(object, object)
0xffd: Push("k1q02")
0xffe: Push((int) 3)
0xfff: @ SetVariable(Stack[-2], Stack[-1])
0x1000: Pop(2)
0x1001: PushEmpty(object)
0x1002: Call2 0x11a8

0x1003: Stack[-2] = Stack[-1]
0x1004: Pop(1)
0x1005: Push("k1q02GeorgGotoMaria")
0x1006: Push("pt_map_maria")
0x1007: Push((int) 0)
0x1008: Push((int) 524779)
0x1009: PushEmpty(float)
0x100a: Call2 0xfc6

0x100b: Pop(0)
0x100c: @@ AddMark(Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x100d: Pop(5)
0x100e: PushEmpty()
0x100f: Call2 0x1131

0x1010: Pop(0)
0x1011: Return(); Pop(2)

0x1012: Stack[-1] = 0
0x1013: PushEmpty()
0x1014: Push("k1q02")
0x1015: Push((int) 5)
0x1016: @ SetVariable(Stack[-2], Stack[-1])
0x1017: Pop(2)
0x1018: PushEmpty()
0x1019: Call2 0x1124

0x101a: Pop(0)
0x101b: Return(); Pop(0)

0x101c: PushEmpty()
0x101d: Push("beta_pills 5 is given")
0x101e: @ Trace(Stack[-1])
0x101f: Pop(1)
0x1020: PushEmpty(object, string, int)
0x1021: Stack[-3] = Stack[-5]
0x1022: Stack[-2] = "beta_pills"
0x1023: Stack[-1] = (int) 5
0x1024: Call2 0xf80

0x1025: Pop(3)
0x1026: Return(); Pop(0)

0x1027: PushEmpty()
0x1028: Push("ook3Georg1")
0x1029: Push((int) 1)
0x102a: @ SetVariable(Stack[-2], Stack[-1])
0x102b: Pop(2)
0x102c: Return(); Pop(0)

0x102d: PushEmpty()
0x102e: Push("k5q01")
0x102f: Push((int) 3)
0x1030: @ SetVariable(Stack[-2], Stack[-1])
0x1031: Pop(2)
0x1032: PushEmpty()
0x1033: Call2 0x114b

0x1034: Pop(0)
0x1035: Return(); Pop(0)

0x1036: PushEmpty()
0x1037: Push("ook10Georg1")
0x1038: Push((int) 1)
0x1039: @ SetVariable(Stack[-2], Stack[-1])
0x103a: Pop(2)
0x103b: Return(); Pop(0)

0x103c: PushEmpty()
0x103d: Push("k9q01")
0x103e: Push((int) 2)
0x103f: @ SetVariable(Stack[-2], Stack[-1])
0x1040: Pop(2)
0x1041: PushEmpty()
0x1042: Call2 0x1165

0x1043: Pop(0)
0x1044: PushEmpty(bool, string, string)
0x1045: Stack[-2] = "quest_k9_01"
0x1046: Stack[-1] = "init_termitnik2"
0x1047: Call2 0xfba

0x1048: Pop(3)
0x1049: Return(); Pop(0)

0x104a: PushEmpty()
0x104b: Push("k9q01")
0x104c: Push((int) 4)
0x104d: @ SetVariable(Stack[-2], Stack[-1])
0x104e: Pop(2)
0x104f: PushEmpty()
0x1050: Call2 0x1172

0x1051: Pop(0)
0x1052: Return(); Pop(0)

0x1053: PushEmpty()
0x1054: Push("ook1Georg1")
0x1055: Push((int) 1)
0x1056: @ SetVariable(Stack[-2], Stack[-1])
0x1057: Pop(2)
0x1058: Return(); Pop(0)

0x1059: PushEmpty()
0x105a: Push("k1q02")
0x105b: Push((int) -1)
0x105c: @ SetVariable(Stack[-2], Stack[-1])
0x105d: Pop(2)
0x105e: PushEmpty()
0x105f: Call2 0x113e

0x1060: Pop(0)
0x1061: Return(); Pop(0)

0x1062: PushEmpty()
0x1063: Push("raincoat_repel is given")
0x1064: @ Trace(Stack[-1])
0x1065: Pop(1)
0x1066: PushEmpty(object, string, int)
0x1067: Stack[-3] = Stack[-5]
0x1068: Stack[-2] = "raincoat_repel"
0x1069: Stack[-1] = (int) 1
0x106a: Call2 0xf80

0x106b: Pop(3)
0x106c: Return(); Pop(0)

0x106d: PushEmpty()
0x106e: PushEmpty()
0x106f: Call2 0x1158

0x1070: Pop(0)
0x1071: PushEmpty(bool, string, string)
0x1072: Stack[-2] = "quest_k9_01"
0x1073: Stack[-1] = "fail"
0x1074: Call2 0xfba

0x1075: Pop(3)
0x1076: Return(); Pop(0)

0x1077: PushEmpty()
0x1078: Push("revolver ammo6 is given")
0x1079: @ Trace(Stack[-1])
0x107a: Pop(1)
0x107b: PushEmpty(object, string, int)
0x107c: Stack[-3] = Stack[-5]
0x107d: Stack[-2] = "revolver_ammo"
0x107e: Stack[-1] = (int) 6
0x107f: Call2 0xf80

0x1080: Pop(3)
0x1081: Return(); Pop(0)

0x1082: PushEmpty()
0x1083: PushEmpty(bool, object, float)
0x1084: Stack[-2] = Stack[-5]
0x1085: Stack[-1] = (float) -0.3
0x1086: Call2 0xf8d

0x1087: Pop(3)
0x1088: Return(); Pop(0)

0x1089: PushEmpty()
0x108a: PushEmpty(bool, object, float)
0x108b: Stack[-2] = Stack[-5]
0x108c: Stack[-1] = (float) -0.5
0x108d: Call2 0xf8d

0x108e: Pop(3)
0x108f: Return(); Pop(0)

0x1090: PushEmpty()
0x1091: PushEmpty(object, string, float)
0x1092: PushEmpty(object)
0x1093: Call2 0x11a8

0x1094: Stack[-4] = Stack[-1]
0x1095: Pop(1)
0x1096: Stack[-2] = "pt_map_maria"
0x1097: Stack[-1] = (int) 2
0x1098: Call2 0x11b9

0x1099: Pop(3)
0x109a: PushEmpty(object)
0x109b: Call2 0x11a8

0x109c: Pop(0)
0x109d: @@ ShowMap(Stack[-1])
0x109e: Pop(1)
0x109f: Return(); Pop(0)

0x10a0: PushEmpty()
0x10a1: PushEmpty(int, string)
0x10a2: Stack[-1] = "k1q02"
0x10a3: Call2 0xf5c

0x10a4: Pop(1)
0x10a5: Push((int) 2)
0x10a6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10a7: IF (Stack[-1] == 0) GOTO 0x10aa; Pop(1)

0x10a8: Stack[-2] = (bool) 1
0x10a9: Return(); Pop(0)

0x10aa: Stack[-2] = (bool) 0
0x10ab: Return(); Pop(0)

0x10ac: PushEmpty()
0x10ad: PushEmpty(int, string)
0x10ae: Stack[-1] = "k1q02"
0x10af: Call2 0xf5c

0x10b0: Pop(1)
0x10b1: Push((int) 4)
0x10b2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10b3: IF (Stack[-1] == 0) GOTO 0x10b6; Pop(1)

0x10b4: Stack[-2] = (bool) 1
0x10b5: Return(); Pop(0)

0x10b6: Stack[-2] = (bool) 0
0x10b7: Return(); Pop(0)

0x10b8: PushEmpty()
0x10b9: PushEmpty(int, string)
0x10ba: Stack[-1] = "k3q03"
0x10bb: Call2 0xf5c

0x10bc: Pop(1)
0x10bd: Push((int) 1000)
0x10be: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10bf: IF (Stack[-1] == 0) GOTO 0x10c2; Pop(1)

0x10c0: Stack[-2] = (bool) 1
0x10c1: Return(); Pop(0)

0x10c2: Stack[-2] = (bool) 0
0x10c3: Return(); Pop(0)

0x10c4: PushEmpty()
0x10c5: PushEmpty(int, string)
0x10c6: Stack[-1] = "ook3Georg1"
0x10c7: Call2 0xf5c

0x10c8: Pop(1)
0x10c9: Push((int) 0)
0x10ca: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10cb: IF (Stack[-1] == 0) GOTO 0x10ce; Pop(1)

0x10cc: Stack[-2] = (bool) 1
0x10cd: Return(); Pop(0)

0x10ce: Stack[-2] = (bool) 0
0x10cf: Return(); Pop(0)

0x10d0: PushEmpty()
0x10d1: PushEmpty(int, string)
0x10d2: Stack[-1] = "k5q01"
0x10d3: Call2 0xf5c

0x10d4: Pop(1)
0x10d5: Push((int) 2)
0x10d6: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10d7: IF (Stack[-1] == 0) GOTO 0x10da; Pop(1)

0x10d8: Stack[-2] = (bool) 1
0x10d9: Return(); Pop(0)

0x10da: Stack[-2] = (bool) 0
0x10db: Return(); Pop(0)

0x10dc: PushEmpty()
0x10dd: PushEmpty(int, string)
0x10de: Stack[-1] = "k10q01"
0x10df: Call2 0xf5c

0x10e0: Pop(1)
0x10e1: Push((int) 1)
0x10e2: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10e3: IF (Stack[-1] == 0) GOTO 0x10e6; Pop(1)

0x10e4: Stack[-2] = (bool) 1
0x10e5: Return(); Pop(0)

0x10e6: Stack[-2] = (bool) 0
0x10e7: Return(); Pop(0)

0x10e8: PushEmpty()
0x10e9: PushEmpty(int, string)
0x10ea: Stack[-1] = "k10q01"
0x10eb: Call2 0xf5c

0x10ec: Pop(1)
0x10ed: Push((int) 2)
0x10ee: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10ef: IF (Stack[-1] == 0) GOTO 0x10f2; Pop(1)

0x10f0: Stack[-2] = (bool) 1
0x10f1: Return(); Pop(0)

0x10f2: Stack[-2] = (bool) 0
0x10f3: Return(); Pop(0)

0x10f4: PushEmpty()
0x10f5: PushEmpty(int, string)
0x10f6: Stack[-1] = "ook10Georg1"
0x10f7: Call2 0xf5c

0x10f8: Pop(1)
0x10f9: Push((int) 0)
0x10fa: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x10fb: IF (Stack[-1] == 0) GOTO 0x10fe; Pop(1)

0x10fc: Stack[-2] = (bool) 1
0x10fd: Return(); Pop(0)

0x10fe: Stack[-2] = (bool) 0
0x10ff: Return(); Pop(0)

0x1100: PushEmpty()
0x1101: PushEmpty(int, string)
0x1102: Stack[-1] = "k9q01"
0x1103: Call2 0xf5c

0x1104: Pop(1)
0x1105: Push((int) 1)
0x1106: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1107: IF (Stack[-1] == 0) GOTO 0x110a; Pop(1)

0x1108: Stack[-2] = (bool) 1
0x1109: Return(); Pop(0)

0x110a: Stack[-2] = (bool) 0
0x110b: Return(); Pop(0)

0x110c: PushEmpty()
0x110d: PushEmpty(int, string)
0x110e: Stack[-1] = "k9q01"
0x110f: Call2 0xf5c

0x1110: Pop(1)
0x1111: Push((int) 3)
0x1112: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x1113: IF (Stack[-1] == 0) GOTO 0x1116; Pop(1)

0x1114: Stack[-2] = (bool) 1
0x1115: Return(); Pop(0)

0x1116: Stack[-2] = (bool) 0
0x1117: Return(); Pop(0)

0x1118: PushEmpty()
0x1119: PushEmpty(int, string)
0x111a: Stack[-1] = "ook1Georg1"
0x111b: Call2 0xf5c

0x111c: Pop(1)
0x111d: Push((int) 0)
0x111e: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x111f: IF (Stack[-1] == 0) GOTO 0x1122; Pop(1)

0x1120: Stack[-2] = (bool) 1
0x1121: Return(); Pop(0)

0x1122: Stack[-2] = (bool) 0
0x1123: Return(); Pop(0)

0x1124: PushEmpty(object, object)
0x1125: Push((int) 331)
0x1126: Push((int) 2)
0x1127: Push((int) 524776)
0x1128: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1129: Pop(3)
0x112a: PushEmpty(bool, object, int)
0x112b: Stack[-2] = Stack[-4]
0x112c: Stack[-1] = (int) 326
0x112d: Call2 0x118c

0x112e: Pop(3)
0x112f: Return(); Pop(2)

0x1130: Stack[-1] = 0
0x1131: PushEmpty(object, object)
0x1132: Push((int) 329)
0x1133: Push((int) 2)
0x1134: Push((int) 524774)
0x1135: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1136: Pop(3)
0x1137: PushEmpty(bool, object, int)
0x1138: Stack[-2] = Stack[-4]
0x1139: Stack[-1] = (int) 326
0x113a: Call2 0x118c

0x113b: Pop(3)
0x113c: Return(); Pop(2)

0x113d: Stack[-1] = 0
0x113e: PushEmpty(object, object)
0x113f: Push((int) 544)
0x1140: Push((int) 2)
0x1141: Push((int) 530366)
0x1142: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1143: Pop(3)
0x1144: PushEmpty(bool, object, int)
0x1145: Stack[-2] = Stack[-4]
0x1146: Stack[-1] = (int) 326
0x1147: Call2 0x118c

0x1148: Pop(3)
0x1149: Return(); Pop(2)

0x114a: Stack[-1] = 0
0x114b: PushEmpty(object, object)
0x114c: Push((int) 394)
0x114d: Push((int) 1)
0x114e: Push((int) 525887)
0x114f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1150: Pop(3)
0x1151: PushEmpty(bool, object, int)
0x1152: Stack[-2] = Stack[-4]
0x1153: Stack[-1] = (int) 390
0x1154: Call2 0x118c

0x1155: Pop(3)
0x1156: Return(); Pop(2)

0x1157: Stack[-1] = 0
0x1158: PushEmpty(object, object)
0x1159: Push((int) 789)
0x115a: Push((int) 1)
0x115b: Push((int) 542508)
0x115c: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x115d: Pop(3)
0x115e: PushEmpty(bool, object, int)
0x115f: Stack[-2] = Stack[-4]
0x1160: Stack[-1] = (int) 517
0x1161: Call2 0x118c

0x1162: Pop(3)
0x1163: Return(); Pop(2)

0x1164: Stack[-1] = 0
0x1165: PushEmpty(object, object)
0x1166: Push((int) 519)
0x1167: Push((int) 1)
0x1168: Push((int) 529811)
0x1169: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x116a: Pop(3)
0x116b: PushEmpty(bool, object, int)
0x116c: Stack[-2] = Stack[-4]
0x116d: Stack[-1] = (int) 517
0x116e: Call2 0x118c

0x116f: Pop(3)
0x1170: Return(); Pop(2)

0x1171: Stack[-1] = 0
0x1172: PushEmpty(object, object)
0x1173: Push((int) 521)
0x1174: Push((int) 1)
0x1175: Push((int) 529813)
0x1176: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x1177: Pop(3)
0x1178: PushEmpty(bool, object, int)
0x1179: Stack[-2] = Stack[-4]
0x117a: Stack[-1] = (int) 517
0x117b: Call2 0x118c

0x117c: Pop(3)
0x117d: Return(); Pop(2)

0x117e: Stack[-1] = 0
0x117f: PushEmpty(object, object)
0x1180: @ GetDiaryRoot(Stack[-1])
0x1181: Pop(0)
0x1182: Pop(0); Push((bool) Stack[-1] == 0)
0x1183: IF (Stack[-1] == 0) GOTO 0x1189; Pop(1)

0x1184: Push("Can't retrieve diary root")
0x1185: @ Trace(Stack[-1])
0x1186: Pop(1)
0x1187: Stack[-3] = (bool) 0
0x1188: Return(); Pop(2)

0x1189: Stack[-3] = Stack[-1]
0x118a: Return(); Pop(2)

0x118b: Stack[-1] = 0
0x118c: PushEmpty(object, object, int, object, object, int)
0x118d: PushEmpty(object)
0x118e: Call2 0x117f

0x118f: Stack[-4] = Stack[-1]
0x1190: Pop(1)
0x1191: @@ Find(Stack[-7], Stack[-2])
0x1192: Pop(0)
0x1193: Pop(0); Push((bool) Stack[-2] == 0)
0x1194: IF (Stack[-1] == 0) GOTO 0x119b; Pop(1)

0x1195: Push("Can't find diary parent with id: ")
0x1196: Pop(1); Push(Stack[-1] + Stack[-8]);
0x1197: @ Trace(Stack[-1])
0x1198: Pop(1)
0x1199: Stack[-9] = (bool) 0
0x119a: Return(); Pop(6)

0x119b: @@ AddChild(Stack[-8])
0x119c: Pop(0)
0x119d: Push((int) 7)
0x119e: @ SendWorldWndMessage(Stack[-1])
0x119f: Pop(1)
0x11a0: @@ GetCategory(Stack[-1])
0x11a1: Pop(0)
0x11a2: @ SetDiarySection(Stack[-1])
0x11a3: Pop(0)
0x11a4: Stack[-9] = (bool) 0
0x11a5: Return(); Pop(6)

0x11a6: Stack[-2] = 0
0x11a7: Stack[-3] = 0
0x11a8: PushEmpty(object, object, object, object)
0x11a9: @ GetMainOutdoorScene(Stack[-2])
0x11aa: Pop(0)
0x11ab: Pop(0); Push((bool) Stack[-2] == 0)
0x11ac: IF (Stack[-1] == 0) GOTO 0x11b3; Pop(1)

0x11ad: Push("Can't find main outdoor scene")
0x11ae: @ Trace(Stack[-1])
0x11af: Pop(1)
0x11b0: Stack[-1] = 0
0x11b1: Stack[-5] = Stack[-1]
0x11b2: Return(); Pop(4)

0x11b3: @@ GetMap(Stack[-1])
0x11b4: Pop(0)
0x11b5: Stack[-5] = Stack[-1]
0x11b6: Return(); Pop(4)

0x11b7: Stack[-1] = 0
0x11b8: Stack[-2] = 0
0x11b9: PushEmpty(cvector, cvector, object, bool, cvector, cvector, object, bool)
0x11ba: @ GetMainOutdoorScene(Stack[-2])
0x11bb: Pop(0)
0x11bc: Pop(0); Push((bool) Stack[-2] == 0)
0x11bd: IF (Stack[-1] == 0) GOTO 0x11c2; Pop(1)

0x11be: Push("Can't find main outdoor scene")
0x11bf: @ Trace(Stack[-1])
0x11c0: Pop(1)
0x11c1: Return(); Pop(8)

0x11c2: @@ GetLocator(Stack[-10], Stack[-1], Stack[-4], Stack[-3])
0x11c3: Pop(0)
0x11c4: Pop(0); Push((bool) Stack[-1] == 0)
0x11c5: IF (Stack[-1] == 0) GOTO 0x11cc; Pop(1)

0x11c6: Push("Warning: outdoor scene locator ")
0x11c7: Pop(1); Push(Stack[-1] + Stack[-11]);
0x11c8: Push(" doesnt exist")
0x11c9: Pop(2); Push(Stack[-2] + Stack[-1]);
0x11ca: @ Trace(Stack[-1])
0x11cb: Pop(1)
0x11cc: @@ GetMap(Stack[-11])
0x11cd: Pop(0)
0x11ce: Pop(0); Push((bool) Stack[-11] == 0)
0x11cf: IF (Stack[-1] == 0) GOTO 0x11d4; Pop(1)

0x11d0: Push("Can't find map")
0x11d1: @ Trace(Stack[-1])
0x11d2: Pop(1)
0x11d3: Return(); Pop(8)

0x11d4: Push(CvectorIndex(Stack[-4], 0))
0x11d5: Push(CvectorIndex(Stack[-5], 2))
0x11d6: @@ SetMapParams(Stack[-2], Stack[-1], Stack[-11])
0x11d7: Pop(2)
0x11d8: Return(); Pop(8)

0x11d9: Stack[-2] = 0
0x11da: PushEmpty(int, int)
0x11db: Push("branch")
0x11dc: @ GetVariable(Stack[-1], Stack[-2])
0x11dd: Pop(1)
0x11de: Push((int) 0)
0x11df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11e0: IF (Stack[-1] == 0) GOTO 0x11e4; Pop(1)

0x11e1: Stack[-3] = (int) 1
0x11e2: Return(); Pop(2)

0x11e3: GOTO 0x11e9

0x11e4: Push((int) 1)
0x11e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x11e6: IF (Stack[-1] == 0) GOTO 0x11e9; Pop(1)

0x11e7: Stack[-3] = (int) 2
0x11e8: Return(); Pop(2)

0x11e9: Stack[-3] = (int) 3
0x11ea: Return(); Pop(2)

0x11eb: PushEmpty()
0x11ec: Push(GlobalVars[1])
0x11ed: Pop(1); Push((bool) Stack[-1] == 0)
0x11ee: IF (Stack[-1] == 0) GOTO 0x11f8; Pop(1)

0x11ef: PushEmpty(int, object)
0x11f0: Stack[-1] = Stack[-3]
0x11f1: Push(-2, 1); TaskCall(0)
0x11f2: Call2 0x0

0x11f3: Pop(-2, 1); TaskReturn
0x11f4: Pop(2)
0x11f5: Push(GlobalVars[1])
0x11f6: Stack[-1] = (bool) 1
0x11f7: GlobalVars[1] = Stack[-1]; Pop(1)
0x11f8: PushEmpty(bool, int)
0x11f9: Stack[-1] = (int) 1
0x11fa: Call2 0xfd4

0x11fb: Pop(1)
0x11fc: IF (Stack[-1] == 0) GOTO 0x1204; Pop(1)

0x11fd: PushEmpty(int, object)
0x11fe: Stack[-1] = Stack[-3]
0x11ff: Push(-2, 1); TaskCall(12)
0x1200: Call2 0x905

0x1201: Pop(-2, 1); TaskReturn
0x1202: Pop(2)
0x1203: Return(); Pop(0)

0x1204: PushEmpty(bool, int)
0x1205: Stack[-1] = (int) 3
0x1206: Call2 0xfd4

0x1207: Pop(1)
0x1208: IF (Stack[-1] == 0) GOTO 0x1210; Pop(1)

0x1209: PushEmpty(int, object)
0x120a: Stack[-1] = Stack[-3]
0x120b: Push(-2, 1); TaskCall(2)
0x120c: Call2 0xf9

0x120d: Pop(-2, 1); TaskReturn
0x120e: Pop(2)
0x120f: Return(); Pop(0)

0x1210: PushEmpty(bool, int)
0x1211: Stack[-1] = (int) 5
0x1212: Call2 0xfd4

0x1213: Pop(1)
0x1214: IF (Stack[-1] == 0) GOTO 0x121c; Pop(1)

0x1215: PushEmpty(int, object)
0x1216: Stack[-1] = Stack[-3]
0x1217: Push(-2, 1); TaskCall(4)
0x1218: Call2 0x23d

0x1219: Pop(-2, 1); TaskReturn
0x121a: Pop(2)
0x121b: Return(); Pop(0)

0x121c: PushEmpty(bool, int)
0x121d: Stack[-1] = (int) 9
0x121e: Call2 0xfd4

0x121f: Pop(1)
0x1220: IF (Stack[-1] == 0) GOTO 0x1228; Pop(1)

0x1221: PushEmpty(int, object)
0x1222: Stack[-1] = Stack[-3]
0x1223: Push(-2, 1); TaskCall(6)
0x1224: Call2 0x36a

0x1225: Pop(-2, 1); TaskReturn
0x1226: Pop(2)
0x1227: Return(); Pop(0)

0x1228: PushEmpty(bool, int)
0x1229: Stack[-1] = (int) 10
0x122a: Call2 0xfd4

0x122b: Pop(1)
0x122c: IF (Stack[-1] == 0) GOTO 0x1234; Pop(1)

0x122d: PushEmpty(int, object)
0x122e: Stack[-1] = Stack[-3]
0x122f: Push(-2, 1); TaskCall(8)
0x1230: Call2 0x612

0x1231: Pop(-2, 1); TaskReturn
0x1232: Pop(2)
0x1233: Return(); Pop(0)

0x1234: PushEmpty(bool, int)
0x1235: Stack[-1] = (int) 12
0x1236: Call2 0xfd4

0x1237: Pop(1)
0x1238: IF (Stack[-1] == 0) GOTO 0x1240; Pop(1)

0x1239: PushEmpty(int, object)
0x123a: Stack[-1] = Stack[-3]
0x123b: Push(-2, 1); TaskCall(10)
0x123c: Call2 0x802

0x123d: Pop(-2, 1); TaskReturn
0x123e: Pop(2)
0x123f: Return(); Pop(0)

0x1240: PushEmpty(int, object)
0x1241: Stack[-1] = Stack[-3]
0x1242: Push(-2, 1); TaskCall(14)
0x1243: Call2 0xc1d

0x1244: Pop(-2, 1); TaskReturn
0x1245: Pop(2)
0x1246: Return(); Pop(0)

