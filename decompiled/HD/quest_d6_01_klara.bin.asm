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
	Fear
	SetMessage
	ClearReplies
	AddReply
	Neutral
	all
	idle
	Saveyouall
	cleanup
	restore
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
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	quest_d6_01
	completed
	klara blood is given
	d6q01_klara_blood
	playsound
	giveitem
	ood6Klara1
	ood6Klara2
	d6q01KlaraVolonteer
	ood6Klara3
	failed
	d6q01
	microscope_d6q01_klara_blood
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Klara.png
	ui/NPC_Klara_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x50c
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x136 Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x510 Vars = (string)
		EVENT_6 Op = 0x524 Vars = ()
		EVENT_5 Op = 0x531 Vars = ()
		EVENT_7 Op = 0x57a Vars = (int)
		EVENT_45 Op = 0x5bc Vars = (bool)
		EVENT_0 Op = 0x5c8 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x651

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8ed

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8eb

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8ef

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8f1

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x8da

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
0x31: Call2 0x767

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x6a8

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
0x48: Call2 0x696

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
0x56: IF (Stack[-1] == 0) GOTO 0x102; Pop(1)

0x57: PushEmpty(bool)
0x58: Stack[-1] = (bool) 0
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool, object)
0x5c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5d: Call2 0x829

0x5e: Pop(1)
0x5f: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x835

0x63: Pop(1)
0x64: Pop(1); Push((bool) Stack[-1] == 0)
0x65: IF (Stack[-1] == 0) GOTO 0x67; Pop(1)

0x66: Stack[-1] = (bool) 1
0x67: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x68: PushEmpty(bool, object)
0x69: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6a: Call2 0x81d

0x6b: Pop(1)
0x6c: Pop(1); Push((bool) Stack[-1] == 0)
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: Stack[-1] = (bool) 1
0x6f: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x70: PushEmpty(object, object)
0x71: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x72: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x73: Call2 0x7f3

0x74: Pop(2)
0x75: PushEmpty(string)
0x76: Stack[-1] = "Fear"
0x77: Call2 0x120

0x78: Pop(1)
0x79: Push((int) 512737)
0x7a: @@ SetMessage(Stack[-1])
0x7b: Pop(1)
0x7c: @@ ClearReplies()
0x7d: Pop(0)
0x7e: Push((int) 512738)
0x7f: Push((int) 13933)
0x80: Push((int) 13932)
0x81: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x82: Pop(3)
0x83: Push((int) 512744)
0x84: Push((int) 13965)
0x85: Push((int) 13938)
0x86: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x87: Pop(3)
0x88: Push((int) 512745)
0x89: Push((int) 13954)
0x8a: Push((int) 13939)
0x8b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8c: Pop(3)
0x8d: GOTO 0x102

0x8e: PushEmpty(bool)
0x8f: Stack[-1] = (bool) 0
0x90: PushEmpty(bool, object)
0x91: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x92: Call2 0x835

0x93: Pop(1)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x96: PushEmpty(bool, object)
0x97: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x98: Call2 0x81d

0x99: Pop(1)
0x9a: Pop(1); Push((bool) Stack[-1] == 0)
0x9b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x9c: Stack[-1] = (bool) 1
0x9d: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0x9e: PushEmpty(string)
0x9f: Stack[-1] = "Fear"
0xa0: Call2 0x120

0xa1: Pop(1)
0xa2: Push((int) 533081)
0xa3: @@ SetMessage(Stack[-1])
0xa4: Pop(1)
0xa5: @@ ClearReplies()
0xa6: Pop(0)
0xa7: Push((int) 533082)
0xa8: Push((int) -1)
0xa9: Push((int) 34594)
0xaa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xab: Pop(3)
0xac: Push((int) 536138)
0xad: Push((int) -1)
0xae: Push((int) 37897)
0xaf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb0: Pop(3)
0xb1: GOTO 0x102

0xb2: PushEmpty(bool)
0xb3: Stack[-1] = (bool) 1
0xb4: PushEmpty(bool, object)
0xb5: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xb6: Call2 0x835

0xb7: Pop(1)
0xb8: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xb9: PushEmpty(bool, object)
0xba: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xbb: Call2 0x81d

0xbc: Pop(1)
0xbd: IF (Stack[-1] == 0) GOTO 0xbf; Pop(1)

0xbe: Stack[-1] = (bool) 0
0xbf: IF (Stack[-1] == 0) GOTO 0x100; Pop(1)

0xc0: PushEmpty(string)
0xc1: Stack[-1] = "Neutral"
0xc2: Call2 0x120

0xc3: Pop(1)
0xc4: Push((int) 512748)
0xc5: @@ SetMessage(Stack[-1])
0xc6: Pop(1)
0xc7: @@ ClearReplies()
0xc8: Pop(0)
0xc9: PushEmpty(bool, object)
0xca: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xcb: Call2 0x841

0xcc: Pop(1)
0xcd: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xce: Push((int) 512749)
0xcf: Push((int) 3753)
0xd0: Push((int) 13943)
0xd1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd2: Pop(3)
0xd3: PushEmpty(bool)
0xd4: Stack[-1] = (bool) 0
0xd5: PushEmpty(bool)
0xd6: Stack[-1] = (bool) 0
0xd7: PushEmpty(bool)
0xd8: Stack[-1] = (bool) 0
0xd9: PushEmpty(bool, object)
0xda: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xdb: Call2 0x871

0xdc: Pop(1)
0xdd: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xde: PushEmpty(bool, object)
0xdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Call2 0x84d

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xe4; Pop(1)

0xe3: Stack[-1] = (bool) 1
0xe4: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xe5: PushEmpty(bool, object)
0xe6: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe7: Call2 0x859

0xe8: Pop(1)
0xe9: Pop(1); Push((bool) Stack[-1] == 0)
0xea: IF (Stack[-1] == 0) GOTO 0xec; Pop(1)

0xeb: Stack[-1] = (bool) 1
0xec: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xed: PushEmpty(bool, object)
0xee: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xef: Call2 0x865

0xf0: Pop(1)
0xf1: Pop(1); Push((bool) Stack[-1] == 0)
0xf2: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xf3: Stack[-1] = (bool) 1
0xf4: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xf5: Push((int) 512750)
0xf6: Push((int) 11864)
0xf7: Push((int) 13944)
0xf8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf9: Pop(3)
0xfa: Push((int) 512769)
0xfb: Push((int) -1)
0xfc: Push((int) 13968)
0xfd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfe: Pop(3)
0xff: GOTO 0x102

0x100: Return(); Pop(0)

0x101: GOTO 0x55

0x102: PushEmpty(bool)
0x103: Call2 0x8f3

0x104: Pop(0)
0x105: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x106: @ lshWaitForAnimEnd()
0x107: Pop(0)
0x108: Push( Stack[3 + Tasks[-1].StackPointer] )
0x109: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x10a: GOTO 0x110

0x10b: PushEmpty(string)
0x10c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x10d: Call2 0x732

0x10e: Pop(1)
0x10f: GOTO 0x106

0x110: GOTO 0x11f

0x111: Push("all")
0x112: Push("idle")
0x113: @ PlayAnimation(Stack[-2], Stack[-1])
0x114: Pop(2)
0x115: @ WaitForAnimEnd()
0x116: Pop(0)
0x117: Push( Stack[3 + Tasks[-1].StackPointer] )
0x118: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0x119: GOTO 0x11f

0x11a: Push("all")
0x11b: Push("idle")
0x11c: @ PlayAnimation(Stack[-2], Stack[-1])
0x11d: Pop(2)
0x11e: GOTO 0x115

0x11f: Return(); Pop(0)

0x120: PushEmpty()
0x121: PushEmpty(bool)
0x122: Call2 0x8f3

0x123: Pop(0)
0x124: Pop(1); Push((bool) Stack[-1] == 0)
0x125: IF (Stack[-1] == 0) GOTO 0x127; Pop(1)

0x126: Return(); Pop(0)

0x127: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x128: IF (Stack[-1] == 0) GOTO 0x12a; Pop(1)

0x129: Return(); Pop(0)

0x12a: PushEmpty(string, bool)
0x12b: Stack[-2] = Stack[-3]
0x12c: Push("")
0x12d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x131; Pop(1)

0x12f: Stack[-1] = (bool) 0
0x130: GOTO 0x132

0x131: Stack[-1] = (bool) 1
0x132: Call2 0x742

0x133: Pop(2)
0x134: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x135: Return(); Pop(0)

0x136: PushEmpty()
0x137: Push((int) 1)
0x138: IF (Stack[-1] == 0) GOTO 0x503; Pop(1)

0x139: PushEmpty()
0x13a: Call2 0x760

0x13b: Pop(0)
0x13c: Push((int) 13943)
0x13d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x13e: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x13f: PushEmpty(object, object)
0x140: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x141: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x142: Call2 0x7f9

0x143: Pop(2)
0x144: Push((int) 3807)
0x145: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x146: IF (Stack[-1] == 0) GOTO 0x151; Pop(1)

0x147: PushEmpty(object, object)
0x148: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x149: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14a: Call2 0x7df

0x14b: Pop(2)
0x14c: PushEmpty(object, object)
0x14d: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x14e: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x14f: Call2 0x7ed

0x150: Pop(2)
0x151: Push((int) 3812)
0x152: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x153: IF (Stack[-1] == 0) GOTO 0x15e; Pop(1)

0x154: PushEmpty(object, object)
0x155: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x156: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x157: Call2 0x7df

0x158: Pop(2)
0x159: PushEmpty(object, object)
0x15a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x15b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x15c: Call2 0x7ed

0x15d: Pop(2)
0x15e: Push((int) 3813)
0x15f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: PushEmpty(object, object)
0x162: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x163: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x164: Call2 0x813

0x165: Pop(2)
0x166: Push((int) 3796)
0x167: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x168: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x169: PushEmpty(object, object)
0x16a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x16b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x16c: Call2 0x813

0x16d: Pop(2)
0x16e: Push((int) 3803)
0x16f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x170: IF (Stack[-1] == 0) GOTO 0x176; Pop(1)

0x171: PushEmpty(object, object)
0x172: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x173: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x174: Call2 0x813

0x175: Pop(2)
0x176: Push((int) 3774)
0x177: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x178: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x179: PushEmpty(object, object)
0x17a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x17b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x17c: Call2 0x813

0x17d: Pop(2)
0x17e: Push((int) 13944)
0x17f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x180: IF (Stack[-1] == 0) GOTO 0x186; Pop(1)

0x181: PushEmpty(object, object)
0x182: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x183: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x184: Call2 0x80d

0x185: Pop(2)
0x186: Push((int) 11872)
0x187: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x188: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x189: PushEmpty(object, object)
0x18a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x18b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x18c: Call2 0x7d5

0x18d: Pop(2)
0x18e: Push((int) 11873)
0x18f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x190: IF (Stack[-1] == 0) GOTO 0x196; Pop(1)

0x191: PushEmpty(object, object)
0x192: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x193: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x194: Call2 0x7ff

0x195: Pop(2)
0x196: Push((int) 11871)
0x197: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x198: IF (Stack[-1] == 0) GOTO 0x19e; Pop(1)

0x199: PushEmpty(object, object)
0x19a: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x19b: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x19c: Call2 0x7d5

0x19d: Pop(2)
0x19e: Push((int) 11876)
0x19f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1a0: IF (Stack[-1] == 0) GOTO 0x1a6; Pop(1)

0x1a1: PushEmpty(object, object)
0x1a2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1a3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1a4: Call2 0x7ff

0x1a5: Pop(2)
0x1a6: Push((int) 13931)
0x1a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a8: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x1a9: PushEmpty(bool)
0x1aa: Stack[-1] = (bool) 0
0x1ab: PushEmpty(bool)
0x1ac: Stack[-1] = (bool) 0
0x1ad: PushEmpty(bool, object)
0x1ae: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1af: Call2 0x829

0x1b0: Pop(1)
0x1b1: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b2: PushEmpty(bool, object)
0x1b3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1b4: Call2 0x835

0x1b5: Pop(1)
0x1b6: Pop(1); Push((bool) Stack[-1] == 0)
0x1b7: IF (Stack[-1] == 0) GOTO 0x1b9; Pop(1)

0x1b8: Stack[-1] = (bool) 1
0x1b9: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1ba: PushEmpty(bool, object)
0x1bb: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1bc: Call2 0x81d

0x1bd: Pop(1)
0x1be: Pop(1); Push((bool) Stack[-1] == 0)
0x1bf: IF (Stack[-1] == 0) GOTO 0x1c1; Pop(1)

0x1c0: Stack[-1] = (bool) 1
0x1c1: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1c2: PushEmpty(object, object)
0x1c3: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x1c4: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x1c5: Call2 0x7f3

0x1c6: Pop(2)
0x1c7: PushEmpty(string)
0x1c8: Stack[-1] = "Fear"
0x1c9: Call2 0x120

0x1ca: Pop(1)
0x1cb: Push((int) 512737)
0x1cc: @@ SetMessage(Stack[-1])
0x1cd: Pop(1)
0x1ce: @@ ClearReplies()
0x1cf: Pop(0)
0x1d0: Push((int) 512738)
0x1d1: Push((int) 13933)
0x1d2: Push((int) 13932)
0x1d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d4: Pop(3)
0x1d5: Push((int) 512744)
0x1d6: Push((int) 13965)
0x1d7: Push((int) 13938)
0x1d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d9: Pop(3)
0x1da: Push((int) 512745)
0x1db: Push((int) 13954)
0x1dc: Push((int) 13939)
0x1dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1de: Pop(3)
0x1df: Return(); Pop(0)

0x1e0: PushEmpty(bool)
0x1e1: Stack[-1] = (bool) 0
0x1e2: PushEmpty(bool, object)
0x1e3: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1e4: Call2 0x835

0x1e5: Pop(1)
0x1e6: Pop(1); Push((bool) Stack[-1] == 0)
0x1e7: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1e8: PushEmpty(bool, object)
0x1e9: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x1ea: Call2 0x81d

0x1eb: Pop(1)
0x1ec: Pop(1); Push((bool) Stack[-1] == 0)
0x1ed: IF (Stack[-1] == 0) GOTO 0x1ef; Pop(1)

0x1ee: Stack[-1] = (bool) 1
0x1ef: IF (Stack[-1] == 0) GOTO 0x204; Pop(1)

0x1f0: PushEmpty(string)
0x1f1: Stack[-1] = "Fear"
0x1f2: Call2 0x120

0x1f3: Pop(1)
0x1f4: Push((int) 533081)
0x1f5: @@ SetMessage(Stack[-1])
0x1f6: Pop(1)
0x1f7: @@ ClearReplies()
0x1f8: Pop(0)
0x1f9: Push((int) 533082)
0x1fa: Push((int) -1)
0x1fb: Push((int) 34594)
0x1fc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fd: Pop(3)
0x1fe: Push((int) 536138)
0x1ff: Push((int) -1)
0x200: Push((int) 37897)
0x201: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x202: Pop(3)
0x203: Return(); Pop(0)

0x204: PushEmpty(bool)
0x205: Stack[-1] = (bool) 1
0x206: PushEmpty(bool, object)
0x207: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x208: Call2 0x835

0x209: Pop(1)
0x20a: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x20b: PushEmpty(bool, object)
0x20c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x20d: Call2 0x81d

0x20e: Pop(1)
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: Stack[-1] = (bool) 0
0x211: IF (Stack[-1] == 0) GOTO 0x252; Pop(1)

0x212: PushEmpty(string)
0x213: Stack[-1] = "Neutral"
0x214: Call2 0x120

0x215: Pop(1)
0x216: Push((int) 512748)
0x217: @@ SetMessage(Stack[-1])
0x218: Pop(1)
0x219: @@ ClearReplies()
0x21a: Pop(0)
0x21b: PushEmpty(bool, object)
0x21c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x21d: Call2 0x841

0x21e: Pop(1)
0x21f: IF (Stack[-1] == 0) GOTO 0x225; Pop(1)

0x220: Push((int) 512749)
0x221: Push((int) 3753)
0x222: Push((int) 13943)
0x223: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x224: Pop(3)
0x225: PushEmpty(bool)
0x226: Stack[-1] = (bool) 0
0x227: PushEmpty(bool)
0x228: Stack[-1] = (bool) 0
0x229: PushEmpty(bool)
0x22a: Stack[-1] = (bool) 0
0x22b: PushEmpty(bool, object)
0x22c: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x22d: Call2 0x871

0x22e: Pop(1)
0x22f: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x230: PushEmpty(bool, object)
0x231: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x232: Call2 0x84d

0x233: Pop(1)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Stack[-1] = (bool) 1
0x236: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x237: PushEmpty(bool, object)
0x238: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x239: Call2 0x859

0x23a: Pop(1)
0x23b: Pop(1); Push((bool) Stack[-1] == 0)
0x23c: IF (Stack[-1] == 0) GOTO 0x23e; Pop(1)

0x23d: Stack[-1] = (bool) 1
0x23e: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x23f: PushEmpty(bool, object)
0x240: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x241: Call2 0x865

0x242: Pop(1)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x246; Pop(1)

0x245: Stack[-1] = (bool) 1
0x246: IF (Stack[-1] == 0) GOTO 0x24c; Pop(1)

0x247: Push((int) 512750)
0x248: Push((int) 11864)
0x249: Push((int) 13944)
0x24a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x24b: Pop(3)
0x24c: Push((int) 512769)
0x24d: Push((int) -1)
0x24e: Push((int) 13968)
0x24f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x250: Pop(3)
0x251: Return(); Pop(0)

0x252: Push((int) 11864)
0x253: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x254: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x255: PushEmpty(string)
0x256: Stack[-1] = "Saveyouall"
0x257: Call2 0x120

0x258: Pop(1)
0x259: Push((int) 510739)
0x25a: @@ SetMessage(Stack[-1])
0x25b: Pop(1)
0x25c: @@ ClearReplies()
0x25d: Pop(0)
0x25e: Push((int) 510740)
0x25f: Push((int) 11866)
0x260: Push((int) 11865)
0x261: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x262: Pop(3)
0x263: Push((int) 510752)
0x264: Push((int) 11866)
0x265: Push((int) 11879)
0x266: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x267: Pop(3)
0x268: Return(); Pop(0)

0x269: Push((int) 11866)
0x26a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x280; Pop(1)

0x26c: PushEmpty(string)
0x26d: Stack[-1] = "Saveyouall"
0x26e: Call2 0x120

0x26f: Pop(1)
0x270: Push((int) 510741)
0x271: @@ SetMessage(Stack[-1])
0x272: Pop(1)
0x273: @@ ClearReplies()
0x274: Pop(0)
0x275: Push((int) 510742)
0x276: Push((int) 11868)
0x277: Push((int) 11867)
0x278: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x279: Pop(3)
0x27a: Push((int) 510751)
0x27b: Push((int) 11870)
0x27c: Push((int) 11877)
0x27d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x27e: Pop(3)
0x27f: Return(); Pop(0)

0x280: Push((int) 11868)
0x281: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x282: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x283: PushEmpty(string)
0x284: Stack[-1] = "Fear"
0x285: Call2 0x120

0x286: Pop(1)
0x287: Push((int) 510743)
0x288: @@ SetMessage(Stack[-1])
0x289: Pop(1)
0x28a: @@ ClearReplies()
0x28b: Pop(0)
0x28c: Push((int) 510744)
0x28d: Push((int) 11870)
0x28e: Push((int) 11869)
0x28f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x290: Pop(3)
0x291: Push((int) 510749)
0x292: Push((int) 11870)
0x293: Push((int) 11874)
0x294: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x295: Pop(3)
0x296: Push((int) 510750)
0x297: Push((int) -1)
0x298: Push((int) 11876)
0x299: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x29a: Pop(3)
0x29b: Return(); Pop(0)

0x29c: Push((int) 11870)
0x29d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x29e: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x29f: PushEmpty(string)
0x2a0: Stack[-1] = "Saveyouall"
0x2a1: Call2 0x120

0x2a2: Pop(1)
0x2a3: Push((int) 510745)
0x2a4: @@ SetMessage(Stack[-1])
0x2a5: Pop(1)
0x2a6: @@ ClearReplies()
0x2a7: Pop(0)
0x2a8: Push((int) 510747)
0x2a9: Push((int) -1)
0x2aa: Push((int) 11872)
0x2ab: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ac: Pop(3)
0x2ad: Push((int) 510748)
0x2ae: Push((int) -1)
0x2af: Push((int) 11873)
0x2b0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b1: Pop(3)
0x2b2: Push((int) 510746)
0x2b3: Push((int) -1)
0x2b4: Push((int) 11871)
0x2b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b6: Pop(3)
0x2b7: Return(); Pop(0)

0x2b8: Push((int) 3753)
0x2b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ba: IF (Stack[-1] == 0) GOTO 0x2d4; Pop(1)

0x2bb: PushEmpty(string)
0x2bc: Stack[-1] = "Neutral"
0x2bd: Call2 0x120

0x2be: Pop(1)
0x2bf: Push((int) 503483)
0x2c0: @@ SetMessage(Stack[-1])
0x2c1: Pop(1)
0x2c2: @@ ClearReplies()
0x2c3: Pop(0)
0x2c4: Push((int) 503484)
0x2c5: Push((int) 3756)
0x2c6: Push((int) 3754)
0x2c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2c8: Pop(3)
0x2c9: Push((int) 503485)
0x2ca: Push((int) 3778)
0x2cb: Push((int) 3755)
0x2cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2cd: Pop(3)
0x2ce: Push((int) 503508)
0x2cf: Push((int) 3763)
0x2d0: Push((int) 3783)
0x2d1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2d2: Pop(3)
0x2d3: Return(); Pop(0)

0x2d4: Push((int) 3778)
0x2d5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2d6: IF (Stack[-1] == 0) GOTO 0x2eb; Pop(1)

0x2d7: PushEmpty(string)
0x2d8: Stack[-1] = "Saveyouall"
0x2d9: Call2 0x120

0x2da: Pop(1)
0x2db: Push((int) 503505)
0x2dc: @@ SetMessage(Stack[-1])
0x2dd: Pop(1)
0x2de: @@ ClearReplies()
0x2df: Pop(0)
0x2e0: Push((int) 503506)
0x2e1: Push((int) 3775)
0x2e2: Push((int) 3779)
0x2e3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e4: Pop(3)
0x2e5: Push((int) 503507)
0x2e6: Push((int) 3763)
0x2e7: Push((int) 3781)
0x2e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2e9: Pop(3)
0x2ea: Return(); Pop(0)

0x2eb: Push((int) 3756)
0x2ec: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2ed: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x2ee: PushEmpty(string)
0x2ef: Stack[-1] = "Saveyouall"
0x2f0: Call2 0x120

0x2f1: Pop(1)
0x2f2: Push((int) 503486)
0x2f3: @@ SetMessage(Stack[-1])
0x2f4: Pop(1)
0x2f5: @@ ClearReplies()
0x2f6: Pop(0)
0x2f7: Push((int) 503487)
0x2f8: Push((int) 3775)
0x2f9: Push((int) 3757)
0x2fa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2fb: Pop(3)
0x2fc: Push((int) 503488)
0x2fd: Push((int) 3770)
0x2fe: Push((int) 3758)
0x2ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x300: Pop(3)
0x301: Push((int) 503489)
0x302: Push((int) 3760)
0x303: Push((int) 3759)
0x304: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(3)
0x306: Push((int) 503491)
0x307: Push((int) 3763)
0x308: Push((int) 3761)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Return(); Pop(0)

0x30c: Push((int) 3760)
0x30d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x30e: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x30f: PushEmpty(string)
0x310: Stack[-1] = "Fear"
0x311: Call2 0x120

0x312: Pop(1)
0x313: Push((int) 503490)
0x314: @@ SetMessage(Stack[-1])
0x315: Pop(1)
0x316: @@ ClearReplies()
0x317: Pop(0)
0x318: Push((int) 503492)
0x319: Push((int) 3763)
0x31a: Push((int) 3762)
0x31b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x31c: Pop(3)
0x31d: Push((int) 503509)
0x31e: Push((int) 3786)
0x31f: Push((int) 3785)
0x320: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x321: Pop(3)
0x322: Return(); Pop(0)

0x323: Push((int) 3786)
0x324: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x326: PushEmpty(string)
0x327: Stack[-1] = "Fear"
0x328: Call2 0x120

0x329: Pop(1)
0x32a: Push((int) 503510)
0x32b: @@ SetMessage(Stack[-1])
0x32c: Pop(1)
0x32d: @@ ClearReplies()
0x32e: Pop(0)
0x32f: Push((int) 503511)
0x330: Push((int) 3788)
0x331: Push((int) 3787)
0x332: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x333: Pop(3)
0x334: Push((int) 503515)
0x335: Push((int) 3766)
0x336: Push((int) 3793)
0x337: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x338: Pop(3)
0x339: Return(); Pop(0)

0x33a: Push((int) 3788)
0x33b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x33c: IF (Stack[-1] == 0) GOTO 0x351; Pop(1)

0x33d: PushEmpty(string)
0x33e: Stack[-1] = "Fear"
0x33f: Call2 0x120

0x340: Pop(1)
0x341: Push((int) 503512)
0x342: @@ SetMessage(Stack[-1])
0x343: Pop(1)
0x344: @@ ClearReplies()
0x345: Pop(0)
0x346: Push((int) 503513)
0x347: Push((int) 3775)
0x348: Push((int) 3789)
0x349: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34a: Pop(3)
0x34b: Push((int) 503514)
0x34c: Push((int) 3766)
0x34d: Push((int) 3791)
0x34e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x34f: Pop(3)
0x350: Return(); Pop(0)

0x351: Push((int) 3763)
0x352: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x353: IF (Stack[-1] == 0) GOTO 0x368; Pop(1)

0x354: PushEmpty(string)
0x355: Stack[-1] = "Neutral"
0x356: Call2 0x120

0x357: Pop(1)
0x358: Push((int) 503493)
0x359: @@ SetMessage(Stack[-1])
0x35a: Pop(1)
0x35b: @@ ClearReplies()
0x35c: Pop(0)
0x35d: Push((int) 503494)
0x35e: Push((int) 3766)
0x35f: Push((int) 3764)
0x360: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x361: Pop(3)
0x362: Push((int) 503495)
0x363: Push((int) 3766)
0x364: Push((int) 3765)
0x365: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x366: Pop(3)
0x367: Return(); Pop(0)

0x368: Push((int) 3766)
0x369: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x36a: IF (Stack[-1] == 0) GOTO 0x384; Pop(1)

0x36b: PushEmpty(string)
0x36c: Stack[-1] = "Neutral"
0x36d: Call2 0x120

0x36e: Pop(1)
0x36f: Push((int) 503496)
0x370: @@ SetMessage(Stack[-1])
0x371: Pop(1)
0x372: @@ ClearReplies()
0x373: Pop(0)
0x374: Push((int) 503497)
0x375: Push((int) 3771)
0x376: Push((int) 3769)
0x377: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x378: Pop(3)
0x379: Push((int) 503501)
0x37a: Push((int) 3797)
0x37b: Push((int) 3773)
0x37c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x37d: Pop(3)
0x37e: Push((int) 503502)
0x37f: Push((int) -1)
0x380: Push((int) 3774)
0x381: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x382: Pop(3)
0x383: Return(); Pop(0)

0x384: Push((int) 3797)
0x385: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x386: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x387: PushEmpty(string)
0x388: Stack[-1] = "Saveyouall"
0x389: Call2 0x120

0x38a: Pop(1)
0x38b: Push((int) 503517)
0x38c: @@ SetMessage(Stack[-1])
0x38d: Pop(1)
0x38e: @@ ClearReplies()
0x38f: Pop(0)
0x390: Push((int) 503518)
0x391: Push((int) 3770)
0x392: Push((int) 3798)
0x393: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x394: Pop(3)
0x395: Push((int) 503520)
0x396: Push((int) 3801)
0x397: Push((int) 3800)
0x398: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x399: Pop(3)
0x39a: Return(); Pop(0)

0x39b: Push((int) 3801)
0x39c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3b2; Pop(1)

0x39e: PushEmpty(string)
0x39f: Stack[-1] = "Saveyouall"
0x3a0: Call2 0x120

0x3a1: Pop(1)
0x3a2: Push((int) 503521)
0x3a3: @@ SetMessage(Stack[-1])
0x3a4: Pop(1)
0x3a5: @@ ClearReplies()
0x3a6: Pop(0)
0x3a7: Push((int) 503522)
0x3a8: Push((int) 3804)
0x3a9: Push((int) 3802)
0x3aa: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3ab: Pop(3)
0x3ac: Push((int) 503523)
0x3ad: Push((int) -1)
0x3ae: Push((int) 3803)
0x3af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3b0: Pop(3)
0x3b1: Return(); Pop(0)

0x3b2: Push((int) 3804)
0x3b3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3b4: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3b5: PushEmpty(string)
0x3b6: Stack[-1] = "Fear"
0x3b7: Call2 0x120

0x3b8: Pop(1)
0x3b9: Push((int) 503524)
0x3ba: @@ SetMessage(Stack[-1])
0x3bb: Pop(1)
0x3bc: @@ ClearReplies()
0x3bd: Pop(0)
0x3be: Push((int) 503525)
0x3bf: Push((int) 3770)
0x3c0: Push((int) 3805)
0x3c1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3c2: Pop(3)
0x3c3: Return(); Pop(0)

0x3c4: Push((int) 3771)
0x3c5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c6: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3c7: PushEmpty(string)
0x3c8: Stack[-1] = "Neutral"
0x3c9: Call2 0x120

0x3ca: Pop(1)
0x3cb: Push((int) 503499)
0x3cc: @@ SetMessage(Stack[-1])
0x3cd: Pop(1)
0x3ce: @@ ClearReplies()
0x3cf: Pop(0)
0x3d0: Push((int) 503500)
0x3d1: Push((int) 3770)
0x3d2: Push((int) 3772)
0x3d3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d4: Pop(3)
0x3d5: Push((int) 503516)
0x3d6: Push((int) -1)
0x3d7: Push((int) 3796)
0x3d8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3d9: Pop(3)
0x3da: Return(); Pop(0)

0x3db: Push((int) 3770)
0x3dc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3dd: IF (Stack[-1] == 0) GOTO 0x3f2; Pop(1)

0x3de: PushEmpty(string)
0x3df: Stack[-1] = "Neutral"
0x3e0: Call2 0x120

0x3e1: Pop(1)
0x3e2: Push((int) 503498)
0x3e3: @@ SetMessage(Stack[-1])
0x3e4: Pop(1)
0x3e5: @@ ClearReplies()
0x3e6: Pop(0)
0x3e7: Push((int) 503526)
0x3e8: Push((int) -1)
0x3e9: Push((int) 3807)
0x3ea: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3eb: Pop(3)
0x3ec: Push((int) 503527)
0x3ed: Push((int) 3809)
0x3ee: Push((int) 3808)
0x3ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3f0: Pop(3)
0x3f1: Return(); Pop(0)

0x3f2: Push((int) 3809)
0x3f3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3f4: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x3f5: PushEmpty(string)
0x3f6: Stack[-1] = "Fear"
0x3f7: Call2 0x120

0x3f8: Pop(1)
0x3f9: Push((int) 503528)
0x3fa: @@ SetMessage(Stack[-1])
0x3fb: Pop(1)
0x3fc: @@ ClearReplies()
0x3fd: Pop(0)
0x3fe: Push((int) 503529)
0x3ff: Push((int) 3811)
0x400: Push((int) 3810)
0x401: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x402: Pop(3)
0x403: Return(); Pop(0)

0x404: Push((int) 3811)
0x405: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x41b; Pop(1)

0x407: PushEmpty(string)
0x408: Stack[-1] = "Fear"
0x409: Call2 0x120

0x40a: Pop(1)
0x40b: Push((int) 503530)
0x40c: @@ SetMessage(Stack[-1])
0x40d: Pop(1)
0x40e: @@ ClearReplies()
0x40f: Pop(0)
0x410: Push((int) 503531)
0x411: Push((int) -1)
0x412: Push((int) 3812)
0x413: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: Push((int) 503532)
0x416: Push((int) -1)
0x417: Push((int) 3813)
0x418: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x419: Pop(3)
0x41a: Return(); Pop(0)

0x41b: Push((int) 3775)
0x41c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x41d: IF (Stack[-1] == 0) GOTO 0x42d; Pop(1)

0x41e: PushEmpty(string)
0x41f: Stack[-1] = "Saveyouall"
0x420: Call2 0x120

0x421: Pop(1)
0x422: Push((int) 503503)
0x423: @@ SetMessage(Stack[-1])
0x424: Pop(1)
0x425: @@ ClearReplies()
0x426: Pop(0)
0x427: Push((int) 503504)
0x428: Push((int) 3770)
0x429: Push((int) 3776)
0x42a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x42b: Pop(3)
0x42c: Return(); Pop(0)

0x42d: Push((int) 13965)
0x42e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x42f: IF (Stack[-1] == 0) GOTO 0x43f; Pop(1)

0x430: PushEmpty(string)
0x431: Stack[-1] = "Fear"
0x432: Call2 0x120

0x433: Pop(1)
0x434: Push((int) 512767)
0x435: @@ SetMessage(Stack[-1])
0x436: Pop(1)
0x437: @@ ClearReplies()
0x438: Pop(0)
0x439: Push((int) 512768)
0x43a: Push((int) 13933)
0x43b: Push((int) 13966)
0x43c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x43d: Pop(3)
0x43e: Return(); Pop(0)

0x43f: Push((int) 13933)
0x440: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x441: IF (Stack[-1] == 0) GOTO 0x45b; Pop(1)

0x442: PushEmpty(string)
0x443: Stack[-1] = "Fear"
0x444: Call2 0x120

0x445: Pop(1)
0x446: Push((int) 512739)
0x447: @@ SetMessage(Stack[-1])
0x448: Pop(1)
0x449: @@ ClearReplies()
0x44a: Pop(0)
0x44b: Push((int) 512740)
0x44c: Push((int) 13935)
0x44d: Push((int) 13934)
0x44e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x44f: Pop(3)
0x450: Push((int) 512746)
0x451: Push((int) 13935)
0x452: Push((int) 13940)
0x453: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x454: Pop(3)
0x455: Push((int) 512747)
0x456: Push((int) 13935)
0x457: Push((int) 13941)
0x458: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x459: Pop(3)
0x45a: Return(); Pop(0)

0x45b: Push((int) 13935)
0x45c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x45d: IF (Stack[-1] == 0) GOTO 0x477; Pop(1)

0x45e: PushEmpty(string)
0x45f: Stack[-1] = "Fear"
0x460: Call2 0x120

0x461: Pop(1)
0x462: Push((int) 512741)
0x463: @@ SetMessage(Stack[-1])
0x464: Pop(1)
0x465: @@ ClearReplies()
0x466: Pop(0)
0x467: Push((int) 512742)
0x468: Push((int) 13937)
0x469: Push((int) 13936)
0x46a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x46b: Pop(3)
0x46c: Push((int) 512751)
0x46d: Push((int) 13947)
0x46e: Push((int) 13945)
0x46f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x470: Pop(3)
0x471: Push((int) 512752)
0x472: Push((int) 13937)
0x473: Push((int) 13946)
0x474: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x475: Pop(3)
0x476: Return(); Pop(0)

0x477: Push((int) 13947)
0x478: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x479: IF (Stack[-1] == 0) GOTO 0x48e; Pop(1)

0x47a: PushEmpty(string)
0x47b: Stack[-1] = "Saveyouall"
0x47c: Call2 0x120

0x47d: Pop(1)
0x47e: Push((int) 512753)
0x47f: @@ SetMessage(Stack[-1])
0x480: Pop(1)
0x481: @@ ClearReplies()
0x482: Pop(0)
0x483: Push((int) 512754)
0x484: Push((int) 13949)
0x485: Push((int) 13948)
0x486: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x487: Pop(3)
0x488: Push((int) 538781)
0x489: Push((int) -1)
0x48a: Push((int) 40701)
0x48b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48c: Pop(3)
0x48d: Return(); Pop(0)

0x48e: Push((int) 13949)
0x48f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x490: IF (Stack[-1] == 0) GOTO 0x4a5; Pop(1)

0x491: PushEmpty(string)
0x492: Stack[-1] = "Fear"
0x493: Call2 0x120

0x494: Pop(1)
0x495: Push((int) 512755)
0x496: @@ SetMessage(Stack[-1])
0x497: Pop(1)
0x498: @@ ClearReplies()
0x499: Pop(0)
0x49a: Push((int) 512756)
0x49b: Push((int) -1)
0x49c: Push((int) 13950)
0x49d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49e: Pop(3)
0x49f: Push((int) 512757)
0x4a0: Push((int) -1)
0x4a1: Push((int) 13951)
0x4a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a3: Pop(3)
0x4a4: Return(); Pop(0)

0x4a5: Push((int) 13937)
0x4a6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4bc; Pop(1)

0x4a8: PushEmpty(string)
0x4a9: Stack[-1] = "Fear"
0x4aa: Call2 0x120

0x4ab: Pop(1)
0x4ac: Push((int) 512743)
0x4ad: @@ SetMessage(Stack[-1])
0x4ae: Pop(1)
0x4af: @@ ClearReplies()
0x4b0: Pop(0)
0x4b1: Push((int) 512758)
0x4b2: Push((int) 13954)
0x4b3: Push((int) 13952)
0x4b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b5: Pop(3)
0x4b6: Push((int) 512759)
0x4b7: Push((int) 13954)
0x4b8: Push((int) 13953)
0x4b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ba: Pop(3)
0x4bb: Return(); Pop(0)

0x4bc: Push((int) 13954)
0x4bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4be: IF (Stack[-1] == 0) GOTO 0x4ce; Pop(1)

0x4bf: PushEmpty(string)
0x4c0: Stack[-1] = "Fear"
0x4c1: Call2 0x120

0x4c2: Pop(1)
0x4c3: Push((int) 512760)
0x4c4: @@ SetMessage(Stack[-1])
0x4c5: Pop(1)
0x4c6: @@ ClearReplies()
0x4c7: Pop(0)
0x4c8: Push((int) 512761)
0x4c9: Push((int) 13957)
0x4ca: Push((int) 13956)
0x4cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cc: Pop(3)
0x4cd: Return(); Pop(0)

0x4ce: Push((int) 13957)
0x4cf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4d0: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4d1: PushEmpty(string)
0x4d2: Stack[-1] = "Fear"
0x4d3: Call2 0x120

0x4d4: Pop(1)
0x4d5: Push((int) 512762)
0x4d6: @@ SetMessage(Stack[-1])
0x4d7: Pop(1)
0x4d8: @@ ClearReplies()
0x4d9: Pop(0)
0x4da: Push((int) 512763)
0x4db: Push((int) 13959)
0x4dc: Push((int) 13958)
0x4dd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4de: Pop(3)
0x4df: Return(); Pop(0)

0x4e0: Push((int) 13959)
0x4e1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4e2: IF (Stack[-1] == 0) GOTO 0x4f7; Pop(1)

0x4e3: PushEmpty(string)
0x4e4: Stack[-1] = "Fear"
0x4e5: Call2 0x120

0x4e6: Pop(1)
0x4e7: Push((int) 512764)
0x4e8: @@ SetMessage(Stack[-1])
0x4e9: Pop(1)
0x4ea: @@ ClearReplies()
0x4eb: Pop(0)
0x4ec: Push((int) 512765)
0x4ed: Push((int) -1)
0x4ee: Push((int) 13960)
0x4ef: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f0: Pop(3)
0x4f1: Push((int) 512766)
0x4f2: Push((int) -1)
0x4f3: Push((int) 13961)
0x4f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4f5: Pop(3)
0x4f6: Return(); Pop(0)

0x4f7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x4f8: PushEmpty(bool)
0x4f9: Call2 0x8f3

0x4fa: Pop(0)
0x4fb: IF (Stack[-1] == 0) GOTO 0x4ff; Pop(1)

0x4fc: @ lshStopAnimation()
0x4fd: Pop(0)
0x4fe: GOTO 0x501

0x4ff: @ StopAnimation()
0x500: Pop(0)
0x501: Return(); Pop(0)

0x502: GOTO 0x137

0x503: Return(); Pop(0)

0x504: PushEmpty()
0x505: PushEmpty(int, object)
0x506: Stack[-1] = Stack[-3]
0x507: Push(-2, 1); TaskCall(0)
0x508: Call2 0x0

0x509: Pop(-2, 1); TaskReturn
0x50a: Pop(2)
0x50b: Return(); Pop(0)

0x50c: PushEmpty()
0x50d: Call2 0x535

0x50e: Pop(0)
0x50f: Return(); Pop(0)

0x510: PushEmpty(bool, bool)
0x511: Push("cleanup")
0x512: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x513: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x514: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x515: @ IsLoaded(Stack[-1])
0x516: Pop(0)
0x517: Pop(0); Push((bool) Stack[-1] == 0)
0x518: IF (Stack[-1] == 0) GOTO 0x51e; Pop(1)

0x519: PushEmpty(object)
0x51a: Call2 0x767

0x51b: Pop(0)
0x51c: @ RemoveActor(Stack[-1])
0x51d: Pop(1)
0x51e: GOTO 0x523

0x51f: Push("restore")
0x520: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x521: IF (Stack[-1] == 0) GOTO 0x523; Pop(1)

0x522: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x523: Return(); Pop(2)

0x524: Push( Stack[1 + Tasks[-1].StackPointer] )
0x525: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x526: PushEmpty(object)
0x527: Call2 0x767

0x528: Pop(0)
0x529: @ RemoveActor(Stack[-1])
0x52a: Pop(1)
0x52b: @ Hold()
0x52c: Pop(0)
0x52d: PushEmpty()
0x52e: Call2 0x5a0

0x52f: Pop(0)
0x530: Return(); Pop(0)

0x531: PushEmpty()
0x532: Call2 0x5af

0x533: Pop(0)
0x534: Return(); Pop(0)

0x535: PushEmpty(bool)
0x536: Call2 0x64c

0x537: Pop(0)
0x538: Pop(1); Push((bool) Stack[-1] == 0)
0x539: IF (Stack[-1] == 0) GOTO 0x53c; Pop(1)

0x53a: @ Hold()
0x53b: Pop(0)
0x53c: @ GetDirection(Stack[-0])
0x53d: Pop(0)
0x53e: PushEmpty()
0x53f: Call2 0x5e5

0x540: Pop(0)
0x541: GOTO 0x53e

0x542: Return(); Pop(0)

0x543: PushEmpty(object, object)
0x544: Push("player")
0x545: @ FindActor(Stack[-2], Stack[-1])
0x546: Pop(1)
0x547: Pop(0); Push((bool) Stack[-1] == 0)
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-3] = (bool) 0
0x54a: Return(); Pop(2)

0x54b: PushEmpty(bool, object)
0x54c: Stack[-1] = Stack[-3]
0x54d: Call2 0x643

0x54e: Stack[-5] = Stack[-2]
0x54f: Pop(2)
0x550: Return(); Pop(2)

0x551: Stack[-1] = 0
0x552: Push(CvectorIndex(Stack[-0], 0))
0x553: Push(CvectorIndex(Stack[-0], 2))
0x554: @ RotateAsync(Stack[-2], Stack[-1])
0x555: Pop(2)
0x556: Return(); Pop(0)

0x557: PushEmpty(object, bool, object, bool)
0x558: Push("player")
0x559: @ FindActor(Stack[-3], Stack[-1])
0x55a: Pop(1)
0x55b: Pop(0); Push((bool) Stack[-2] == 0)
0x55c: IF (Stack[-1] == 0) GOTO 0x55f; Pop(1)

0x55d: Stack[-5] = (bool) 0
0x55e: Return(); Pop(4)

0x55f: PushEmpty(float, object)
0x560: Stack[-1] = Stack[-4]
0x561: Call2 0x631

0x562: Pop(1)
0x563: Push((float)90000.0)
0x564: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x565: IF (Stack[-1] == 0) GOTO 0x568; Pop(1)

0x566: Stack[-5] = (bool) 0
0x567: Return(); Pop(4)

0x568: @ CanSee(Stack[-1], Stack[-2])
0x569: Pop(0)
0x56a: Stack[-5] = Stack[-1]
0x56b: Return(); Pop(4)

0x56c: Stack[-2] = 0
0x56d: PushEmpty(float, float)
0x56e: Push((int) 8)
0x56f: Push((int) 16)
0x570: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x571: Pop(2)
0x572: Push((int) 10)
0x573: @ SetTimer(Stack[-1], Stack[-2])
0x574: Pop(1)
0x575: Return(); Pop(2)

0x576: Push((int) 10)
0x577: @ KillTimer(Stack[-1])
0x578: Pop(1)
0x579: Return(); Pop(0)

0x57a: PushEmpty()
0x57b: Push((int) 10)
0x57c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x57d: IF (Stack[-1] == 0) GOTO 0x59f; Pop(1)

0x57e: PushEmpty()
0x57f: Call2 0x576

0x580: Pop(0)
0x581: PushEmpty(bool)
0x582: Stack[-1] = (bool) 0
0x583: PushEmpty(bool)
0x584: Call2 0x64c

0x585: Pop(0)
0x586: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x587: PushEmpty(bool)
0x588: Call2 0x557

0x589: Pop(0)
0x58a: IF (Stack[-1] == 0) GOTO 0x58c; Pop(1)

0x58b: Stack[-1] = (bool) 1
0x58c: IF (Stack[-1] == 0) GOTO 0x599; Pop(1)

0x58d: PushEmpty(bool)
0x58e: Call2 0x543

0x58f: Pop(0)
0x590: IF (Stack[-1] == 0) GOTO 0x598; Pop(1)

0x591: PushEmpty(bool, object)
0x592: PushEmpty(object)
0x593: Call2 0x767

0x594: Stack[-2] = Stack[-1]
0x595: Pop(1)
0x596: Call2 0x6e2

0x597: Pop(2)
0x598: GOTO 0x59f

0x599: PushEmpty()
0x59a: Call2 0x552

0x59b: Pop(0)
0x59c: PushEmpty()
0x59d: Call2 0x56d

0x59e: Pop(0)
0x59f: Return(); Pop(0)

0x5a0: PushEmpty()
0x5a1: Call2 0x62c

0x5a2: Pop(0)
0x5a3: PushEmpty()
0x5a4: Call2 0x576

0x5a5: Pop(0)
0x5a6: @ lshStopSpeech()
0x5a7: Pop(0)
0x5a8: @ lshStopAnimation()
0x5a9: Pop(0)
0x5aa: @ StopAsync()
0x5ab: Pop(0)
0x5ac: @ Hold()
0x5ad: Pop(0)
0x5ae: Return(); Pop(0)

0x5af: @ StopGroup0()
0x5b0: Pop(0)
0x5b1: PushEmpty()
0x5b2: Call2 0x576

0x5b3: Pop(0)
0x5b4: PushEmpty(string)
0x5b5: Stack[-1] = "Neutral"
0x5b6: Call2 0x732

0x5b7: Pop(1)
0x5b8: PushEmpty()
0x5b9: Call2 0x56d

0x5ba: Pop(0)
0x5bb: Return(); Pop(0)

0x5bc: PushEmpty()
0x5bd: Push(Stack[-1])
0x5be: IF (Stack[-1] == 0) GOTO 0x5c3; Pop(1)

0x5bf: PushEmpty()
0x5c0: Call2 0x56d

0x5c1: Pop(0)
0x5c2: GOTO 0x5c7

0x5c3: PushEmpty(string)
0x5c4: Stack[-1] = "Neutral"
0x5c5: Call2 0x732

0x5c6: Pop(1)
0x5c7: Return(); Pop(0)

0x5c8: PushEmpty(bool, bool)
0x5c9: @ IsOverrideActive(Stack[-1])
0x5ca: Pop(0)
0x5cb: Pop(0); Push((bool) Stack[-1] == 0)
0x5cc: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5cd: EventDisable(0)
0x5ce: PushEmpty()
0x5cf: Call2 0x62c

0x5d0: Pop(0)
0x5d1: PushEmpty(bool, object)
0x5d2: Stack[-1] = Stack[-5]
0x5d3: Call2 0x643

0x5d4: Pop(2)
0x5d5: EventEnable(0)
0x5d6: PushEmpty(object)
0x5d7: Stack[-1] = Stack[-4]
0x5d8: Call2 0x504

0x5d9: Pop(1)
0x5da: PushEmpty(string)
0x5db: Stack[-1] = "Neutral"
0x5dc: Call2 0x732

0x5dd: Pop(1)
0x5de: PushEmpty()
0x5df: Call2 0x576

0x5e0: Pop(0)
0x5e1: PushEmpty()
0x5e2: Call2 0x56d

0x5e3: Pop(0)
0x5e4: Return(); Pop(2)

0x5e5: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x5e6: @ WaitForAnimEnd()
0x5e7: Pop(0)
0x5e8: PushEmpty(bool)
0x5e9: Call2 0x64c

0x5ea: Pop(0)
0x5eb: Pop(1); Push((bool) Stack[-1] == 0)
0x5ec: IF (Stack[-1] == 0) GOTO 0x5ee; Pop(1)

0x5ed: Return(); Pop(12)

0x5ee: PushEmpty(int)
0x5ef: Call2 0x7c4

0x5f0: Stack[-7] = Stack[-1]
0x5f1: Pop(1)
0x5f2: Stack[-5] = (int) 0
0x5f3: PushEmpty(bool)
0x5f4: Stack[-1] = (bool) 0
0x5f5: Push((int) 5)
0x5f6: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x5f7: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f8: PushEmpty(bool)
0x5f9: Call2 0x64c

0x5fa: Pop(0)
0x5fb: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5fc: Stack[-1] = (bool) 1
0x5fd: IF (Stack[-1] == 0) GOTO 0x627; Pop(1)

0x5fe: Pop(0); Push((bool) Stack[-6] == 0)
0x5ff: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x600: Push((int) 3)
0x601: @ Sleep(Stack[-1], Stack[-5])
0x602: Pop(1)
0x603: Pop(0); Push((bool) Stack[-4] == 0)
0x604: IF (Stack[-1] == 0) GOTO 0x606; Pop(1)

0x605: GOTO 0x627

0x606: GOTO 0x61c

0x607: @ irand(Stack[-3], Stack[-6])
0x608: Pop(0)
0x609: Push((int) 5)
0x60a: @ irand(Stack[-3], Stack[-1])
0x60b: Pop(1)
0x60c: Push((int) 0)
0x60d: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x60e: IF (Stack[-1] == 0) GOTO 0x610; Pop(1)

0x60f: Stack[-3] = (int) 0
0x610: Push("all")
0x611: PushEmpty(string, int)
0x612: Stack[-1] = Stack[-6]
0x613: Call2 0x7bd

0x614: Pop(1)
0x615: @ PlayAnimation(Stack[-2], Stack[-1])
0x616: Pop(2)
0x617: @ WaitForAnimEnd(Stack[-1])
0x618: Pop(0)
0x619: Pop(0); Push((bool) Stack[-1] == 0)
0x61a: IF (Stack[-1] == 0) GOTO 0x61c; Pop(1)

0x61b: GOTO 0x627

0x61c: PushEmpty(bool)
0x61d: Call2 0x62a

0x61e: Pop(0)
0x61f: Pop(1); Push((bool) Stack[-1] == 0)
0x620: IF (Stack[-1] == 0) GOTO 0x622; Pop(1)

0x621: GOTO 0x627

0x622: @ ResetAAS()
0x623: Pop(0)
0x624: Push((int) 1)
0x625: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x626: GOTO 0x5f3

0x627: @ ResetAAS()
0x628: Pop(0)
0x629: Return(); Pop(12)

0x62a: Stack[-1] = (bool) 1
0x62b: Return(); Pop(0)

0x62c: @ StopAnimation()
0x62d: Pop(0)
0x62e: @ StopGroup0()
0x62f: Pop(0)
0x630: Return(); Pop(0)

0x631: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x632: @ GetPosition(Stack[-3])
0x633: Pop(0)
0x634: @@ GetPosition(Stack[-2])
0x635: Pop(0)
0x636: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x637: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x638: Return(); Pop(6)

0x639: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x63a: @ GetPosition(Stack[-3])
0x63b: Pop(0)
0x63c: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x63d: Push(CvectorIndex(Stack[-2], 0))
0x63e: Push(CvectorIndex(Stack[-3], 2))
0x63f: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x640: Pop(2)
0x641: Stack[-8] = Stack[-1]
0x642: Return(); Pop(6)

0x643: PushEmpty(cvector, cvector)
0x644: @@ GetPosition(Stack[-1])
0x645: Pop(0)
0x646: PushEmpty(bool, cvector)
0x647: Stack[-1] = Stack[-3]
0x648: Call2 0x639

0x649: Stack[-6] = Stack[-2]
0x64a: Pop(2)
0x64b: Return(); Pop(2)

0x64c: PushEmpty(bool, bool)
0x64d: @ IsLoaded(Stack[-1])
0x64e: Pop(0)
0x64f: Stack[-3] = Stack[-1]
0x650: Return(); Pop(2)

0x651: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x652: @@ GetPosition(Stack[-8])
0x653: Pop(0)
0x654: @@ GetEyesHeight(Stack[-9])
0x655: Pop(0)
0x656: Push(CvectorIndex(Stack[-8], 1))
0x657: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x658: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x659: @ GetPosition(Stack[-7])
0x65a: Pop(0)
0x65b: @ GetEyesHeight(Stack[-9])
0x65c: Pop(0)
0x65d: Push(CvectorIndex(Stack[-7], 1))
0x65e: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x65f: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x660: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x661: Push(CvectorIndex(Stack[-6], 1))
0x662: Stack[-1] = (int) 0
0x663: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x664: Pop(0); Push(Stack[-6] | Stack[-6]);
0x665: Pop(1); Push(Sqrt(Stack[-1]))
0x666: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x667: Stack[-5] = -Stack[-6]; Pop(0);
0x668: Pop(0); Push(Stack[-6] * Stack[-19]);
0x669: PushEmpty(cvector, cvector)
0x66a: Push(CVector(0.0, 1.0, 0.0))
0x66b: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x66c: Call2 0x76d

0x66d: Pop(1)
0x66e: Push((int) 25)
0x66f: Pop(2); Push(Stack[-2] * Stack[-1]);
0x670: Pop(2); Push(Stack[-2] + Stack[-1]);
0x671: Push(CVector(0.0, 10.0, 0.0))
0x672: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x673: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x674: @ IsOverrideActive(Stack[-2])
0x675: Pop(0)
0x676: Push(Stack[-2])
0x677: IF (Stack[-1] == 0) GOTO 0x67a; Pop(1)

0x678: Stack[-21] = (bool) 0
0x679: Return(); Pop(18)

0x67a: @ StopWorld()
0x67b: Pop(0)
0x67c: Push((bool) 1)
0x67d: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x67e: Pop(1)
0x67f: Push(CvectorIndex(Stack[-4], 0))
0x680: Push(CvectorIndex(Stack[-5], 2))
0x681: @ Rotate(Stack[-2], Stack[-1])
0x682: Pop(2)
0x683: PushEmpty(bool)
0x684: Call2 0x8f3

0x685: Pop(0)
0x686: IF (Stack[-1] == 0) GOTO 0x688; Pop(1)

0x687: GOTO 0x690

0x688: Push("head")
0x689: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x68a: Pop(1)
0x68b: Push(Stack[-1])
0x68c: IF (Stack[-1] == 0) GOTO 0x690; Pop(1)

0x68d: Push("head")
0x68e: @ LookAsyncCamera(Stack[-1])
0x68f: Pop(1)
0x690: @ CameraWaitForPlayFinish()
0x691: Pop(0)
0x692: @ ResumeWorld()
0x693: Pop(0)
0x694: Stack[-21] = (bool) 1
0x695: Return(); Pop(18)

0x696: PushEmpty(bool, bool)
0x697: Push((bool) 1)
0x698: @ CameraSwitchToNormal(Stack[-1])
0x699: Pop(1)
0x69a: PushEmpty(bool)
0x69b: Call2 0x8f3

0x69c: Pop(0)
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: GOTO 0x6a7

0x69f: Push("head")
0x6a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6a1: Pop(1)
0x6a2: Push(Stack[-1])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a4: Push("head")
0x6a5: @ UnlookAsync(Stack[-1])
0x6a6: Pop(1)
0x6a7: Return(); Pop(2)

0x6a8: PushEmpty(int, int, int, int)
0x6a9: Push("voice_common")
0x6aa: @ GetVariable(Stack[-1], Stack[-3])
0x6ab: Pop(1)
0x6ac: Push(Stack[-2])
0x6ad: IF (Stack[-1] == 0) GOTO 0x6ce; Pop(1)

0x6ae: PushEmpty(bool, object)
0x6af: Stack[-1] = Stack[-7]
0x6b0: Call2 0x6e2

0x6b1: Pop(1)
0x6b2: Pop(1); Push((bool) Stack[-1] == 0)
0x6b3: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6b4: PushEmpty(bool, object)
0x6b5: Stack[-1] = Stack[-7]
0x6b6: Call2 0x707

0x6b7: Pop(1)
0x6b8: Pop(1); Push((bool) Stack[-1] == 0)
0x6b9: IF (Stack[-1] == 0) GOTO 0x6bc; Pop(1)

0x6ba: Stack[-6] = (bool) 0
0x6bb: Return(); Pop(4)

0x6bc: Push((int) 2)
0x6bd: @ irand(Stack[-2], Stack[-1])
0x6be: Pop(1)
0x6bf: Push(Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c1: Push("voice_common")
0x6c2: Push((int) 1)
0x6c3: Pop(1); Push(Stack[-4] + Stack[-1]);
0x6c4: Push((int) 3)
0x6c5: Pop(2); Push(Stack[-2] % Stack[-1]);
0x6c6: @ SetVariable(Stack[-2], Stack[-1])
0x6c7: Pop(2)
0x6c8: GOTO 0x6cd

0x6c9: Push("voice_common")
0x6ca: Push((int) 0)
0x6cb: @ SetVariable(Stack[-2], Stack[-1])
0x6cc: Pop(2)
0x6cd: GOTO 0x6e0

0x6ce: PushEmpty(bool, object)
0x6cf: Stack[-1] = Stack[-7]
0x6d0: Call2 0x707

0x6d1: Pop(1)
0x6d2: Pop(1); Push((bool) Stack[-1] == 0)
0x6d3: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6d4: PushEmpty(bool, object)
0x6d5: Stack[-1] = Stack[-7]
0x6d6: Call2 0x6e2

0x6d7: Pop(1)
0x6d8: Pop(1); Push((bool) Stack[-1] == 0)
0x6d9: IF (Stack[-1] == 0) GOTO 0x6dc; Pop(1)

0x6da: Stack[-6] = (bool) 0
0x6db: Return(); Pop(4)

0x6dc: Push("voice_common")
0x6dd: Push((int) 1)
0x6de: @ SetVariable(Stack[-2], Stack[-1])
0x6df: Pop(2)
0x6e0: Stack[-6] = (bool) 1
0x6e1: Return(); Pop(4)

0x6e2: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x6e3: Stack[-5] = "c"
0x6e4: Stack[-4] = (int) 0
0x6e5: Push((int) 1)
0x6e6: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6e7: Push((int) 1)
0x6e8: Pop(1); Push(Stack[-5] + Stack[-1]);
0x6e9: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6ea: @@ HasProperty(Stack[-1], Stack[-4])
0x6eb: Pop(1)
0x6ec: Pop(0); Push((bool) Stack[-3] == 0)
0x6ed: IF (Stack[-1] == 0) GOTO 0x6ef; Pop(1)

0x6ee: GOTO 0x6f2

0x6ef: Push((int) 1)
0x6f0: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x6f1: GOTO 0x6e5

0x6f2: Pop(0); Push((bool) Stack[-4] == 0)
0x6f3: IF (Stack[-1] == 0) GOTO 0x6f6; Pop(1)

0x6f4: Stack[-12] = (bool) 0
0x6f5: Return(); Pop(10)

0x6f6: Stack[-2] = (int) 0
0x6f7: Push((int) 1)
0x6f8: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x6f9: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6fa: @ irand(Stack[-2], Stack[-4])
0x6fb: Pop(0)
0x6fc: Push((int) 1)
0x6fd: Pop(1); Push(Stack[-3] + Stack[-1]);
0x6fe: Pop(1); Push(Stack[-6] + Stack[-1]);
0x6ff: @@ GetProperty(Stack[-1], Stack[-2])
0x700: Pop(1)
0x701: PushEmpty(bool, string)
0x702: Stack[-1] = Stack[-3]
0x703: Call2 0x751

0x704: Stack[-14] = Stack[-2]
0x705: Pop(2)
0x706: Return(); Pop(10)

0x707: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x708: Push("d")
0x709: PushEmpty(int)
0x70a: Call2 0x7b4

0x70b: Pop(0)
0x70c: Pop(2); Push(Stack[-2] + Stack[-1]);
0x70d: Push("m")
0x70e: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x70f: Stack[-4] = (int) 0
0x710: Push((int) 1)
0x711: IF (Stack[-1] == 0) GOTO 0x71d; Pop(1)

0x712: Push((int) 1)
0x713: Pop(1); Push(Stack[-5] + Stack[-1]);
0x714: Pop(1); Push(Stack[-6] + Stack[-1]);
0x715: @@ HasProperty(Stack[-1], Stack[-4])
0x716: Pop(1)
0x717: Pop(0); Push((bool) Stack[-3] == 0)
0x718: IF (Stack[-1] == 0) GOTO 0x71a; Pop(1)

0x719: GOTO 0x71d

0x71a: Push((int) 1)
0x71b: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x71c: GOTO 0x710

0x71d: Pop(0); Push((bool) Stack[-4] == 0)
0x71e: IF (Stack[-1] == 0) GOTO 0x721; Pop(1)

0x71f: Stack[-12] = (bool) 0
0x720: Return(); Pop(10)

0x721: Stack[-2] = (int) 0
0x722: Push((int) 1)
0x723: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x724: IF (Stack[-1] == 0) GOTO 0x727; Pop(1)

0x725: @ irand(Stack[-2], Stack[-4])
0x726: Pop(0)
0x727: Push((int) 1)
0x728: Pop(1); Push(Stack[-3] + Stack[-1]);
0x729: Pop(1); Push(Stack[-6] + Stack[-1]);
0x72a: @@ GetProperty(Stack[-1], Stack[-2])
0x72b: Pop(1)
0x72c: PushEmpty(bool, string)
0x72d: Stack[-1] = Stack[-3]
0x72e: Call2 0x751

0x72f: Stack[-14] = Stack[-2]
0x730: Pop(2)
0x731: Return(); Pop(10)

0x732: PushEmpty(bool, float, float, bool, float, float)
0x733: @ lshHasAnimation(Stack[-3], Stack[-7])
0x734: Pop(0)
0x735: Push(Stack[-3])
0x736: IF (Stack[-1] == 0) GOTO 0x73d; Pop(1)

0x737: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x738: Pop(0)
0x739: Push((bool) 0)
0x73a: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x73b: Pop(1)
0x73c: GOTO 0x741

0x73d: Push("Can't find lsh animation : ")
0x73e: Pop(1); Push(Stack[-1] + Stack[-8]);
0x73f: @ Trace(Stack[-1])
0x740: Pop(1)
0x741: Return(); Pop(6)

0x742: PushEmpty(bool, float, float, bool, float, float)
0x743: @ lshHasAnimation(Stack[-3], Stack[-8])
0x744: Pop(0)
0x745: Push(Stack[-3])
0x746: IF (Stack[-1] == 0) GOTO 0x74c; Pop(1)

0x747: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x748: Pop(0)
0x749: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x74a: Pop(0)
0x74b: GOTO 0x750

0x74c: Push("Can't find lsh animation : ")
0x74d: Pop(1); Push(Stack[-1] + Stack[-9]);
0x74e: @ Trace(Stack[-1])
0x74f: Pop(1)
0x750: Return(); Pop(6)

0x751: PushEmpty(bool, bool)
0x752: PushEmpty(bool)
0x753: Call2 0x8f3

0x754: Pop(0)
0x755: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x756: @ lshHasSpeech(Stack[-1], Stack[-3])
0x757: Pop(0)
0x758: Push(Stack[-1])
0x759: IF (Stack[-1] == 0) GOTO 0x75e; Pop(1)

0x75a: @ lshPlaySpeech(Stack[-3])
0x75b: Pop(0)
0x75c: Stack[-4] = (bool) 1
0x75d: Return(); Pop(2)

0x75e: Stack[-4] = (bool) 0
0x75f: Return(); Pop(2)

0x760: PushEmpty(bool)
0x761: Call2 0x8f3

0x762: Pop(0)
0x763: IF (Stack[-1] == 0) GOTO 0x766; Pop(1)

0x764: @ lshStopSpeech()
0x765: Pop(0)
0x766: Return(); Pop(0)

0x767: PushEmpty(object, object)
0x768: @ self(Stack[-1])
0x769: Pop(0)
0x76a: Stack[-3] = Stack[-1]
0x76b: Return(); Pop(2)

0x76c: Stack[-1] = 0
0x76d: PushEmpty(float, float)
0x76e: Pop(0); Push(Stack[-3] | Stack[-3]);
0x76f: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x770: Push((float)0.0)
0x771: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x772: IF (Stack[-1] == 0) GOTO 0x775; Pop(1)

0x773: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x774: Return(); Pop(2)

0x775: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x776: Return(); Pop(2)

0x777: PushEmpty(int, int)
0x778: @ GetVariable(Stack[-3], Stack[-1])
0x779: Pop(0)
0x77a: Stack[-4] = Stack[-1]
0x77b: Return(); Pop(2)

0x77c: PushEmpty(object, object)
0x77d: @ CreateIntVector(Stack[-1])
0x77e: Pop(0)
0x77f: @@ add(Stack[-4])
0x780: Pop(0)
0x781: @@ add(Stack[-3])
0x782: Pop(0)
0x783: Push((int) 3)
0x784: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x785: Pop(1)
0x786: Return(); Pop(2)

0x787: Stack[-1] = 0
0x788: PushEmpty(int, int, bool, int, int, bool)
0x789: @@ GetItemID(Stack[-3])
0x78a: Pop(0)
0x78b: Push("Category")
0x78c: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x78d: Pop(1)
0x78e: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x78f: Pop(0)
0x790: Pop(0); Push((bool) Stack[-1] == 0)
0x791: IF (Stack[-1] == 0) GOTO 0x795; Pop(1)

0x792: @@ DropItems(Stack[-8], Stack[-7])
0x793: Pop(0)
0x794: GOTO 0x79a

0x795: PushEmpty(int, int)
0x796: Stack[-2] = Stack[-5]
0x797: Stack[-1] = Stack[-9]
0x798: Call2 0x77c

0x799: Pop(2)
0x79a: Return(); Pop(6)

0x79b: PushEmpty(object, object)
0x79c: @ CreateInvItem(Stack[-1])
0x79d: Pop(0)
0x79e: @@ SetItemName(Stack[-4])
0x79f: Pop(0)
0x7a0: PushEmpty(object, object, int)
0x7a1: Stack[-3] = Stack[-8]
0x7a2: Stack[-2] = Stack[-4]
0x7a3: Stack[-1] = Stack[-6]
0x7a4: Call2 0x788

0x7a5: Pop(3)
0x7a6: Return(); Pop(2)

0x7a7: Stack[-1] = 0
0x7a8: PushEmpty(object, object)
0x7a9: @ FindActor(Stack[-1], Stack[-4])
0x7aa: Pop(0)
0x7ab: Pop(0); Push((bool) Stack[-1] == 0)
0x7ac: IF (Stack[-1] == 0) GOTO 0x7af; Pop(1)

0x7ad: Stack[-5] = (bool) 0
0x7ae: Return(); Pop(2)

0x7af: @ Trigger(Stack[-1], Stack[-3])
0x7b0: Pop(0)
0x7b1: Stack[-5] = (bool) 1
0x7b2: Return(); Pop(2)

0x7b3: Stack[-1] = 0
0x7b4: PushEmpty(float, float)
0x7b5: @ GetGameTime(Stack[-1])
0x7b6: Pop(0)
0x7b7: Push((int) 1)
0x7b8: PushEmpty(int)
0x7b9: Push((int) 24)
0x7ba: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x7bb: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x7bc: Return(); Pop(2)

0x7bd: PushEmpty(string, string)
0x7be: Stack[-1] = "idle"
0x7bf: Push(Stack[-3])
0x7c0: IF (Stack[-1] == 0) GOTO 0x7c2; Pop(1)

0x7c1: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x7c2: Stack[-4] = Stack[-1]
0x7c3: Return(); Pop(2)

0x7c4: PushEmpty(int, bool, int, bool)
0x7c5: Stack[-2] = (int) 0
0x7c6: Push("all")
0x7c7: PushEmpty(string, int)
0x7c8: Stack[-1] = Stack[-5]
0x7c9: Call2 0x7bd

0x7ca: Pop(1)
0x7cb: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x7cc: Pop(2)
0x7cd: Pop(0); Push((bool) Stack[-1] == 0)
0x7ce: IF (Stack[-1] == 0) GOTO 0x7d0; Pop(1)

0x7cf: GOTO 0x7d3

0x7d0: Push((int) 1)
0x7d1: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x7d2: GOTO 0x7c6

0x7d3: Stack[-5] = Stack[-2]
0x7d4: Return(); Pop(4)

0x7d5: PushEmpty()
0x7d6: PushEmpty()
0x7d7: Call2 0x897

0x7d8: Pop(0)
0x7d9: PushEmpty(bool, string, string)
0x7da: Stack[-2] = "quest_d6_01"
0x7db: Stack[-1] = "completed"
0x7dc: Call2 0x7a8

0x7dd: Pop(3)
0x7de: Return(); Pop(0)

0x7df: PushEmpty()
0x7e0: PushEmpty()
0x7e1: Call2 0x87d

0x7e2: Pop(0)
0x7e3: Push("klara blood is given")
0x7e4: @ Trace(Stack[-1])
0x7e5: Pop(1)
0x7e6: PushEmpty(object, string, int)
0x7e7: Stack[-3] = Stack[-5]
0x7e8: Stack[-2] = "d6q01_klara_blood"
0x7e9: Stack[-1] = (int) 1
0x7ea: Call2 0x79b

0x7eb: Pop(3)
0x7ec: Return(); Pop(0)

0x7ed: PushEmpty()
0x7ee: Push("playsound")
0x7ef: Push("giveitem")
0x7f0: @ TriggerWorld(Stack[-2], Stack[-1])
0x7f1: Pop(2)
0x7f2: Return(); Pop(0)

0x7f3: PushEmpty()
0x7f4: Push("ood6Klara1")
0x7f5: Push((int) 1)
0x7f6: @ SetVariable(Stack[-2], Stack[-1])
0x7f7: Pop(2)
0x7f8: Return(); Pop(0)

0x7f9: PushEmpty()
0x7fa: Push("ood6Klara2")
0x7fb: Push((int) 1)
0x7fc: @ SetVariable(Stack[-2], Stack[-1])
0x7fd: Pop(2)
0x7fe: Return(); Pop(0)

0x7ff: PushEmpty()
0x800: Push("d6q01KlaraVolonteer")
0x801: Push((int) 1)
0x802: @ SetVariable(Stack[-2], Stack[-1])
0x803: Pop(2)
0x804: PushEmpty()
0x805: Call2 0x88a

0x806: Pop(0)
0x807: PushEmpty(bool, string, string)
0x808: Stack[-2] = "quest_d6_01"
0x809: Stack[-1] = "completed"
0x80a: Call2 0x7a8

0x80b: Pop(3)
0x80c: Return(); Pop(0)

0x80d: PushEmpty()
0x80e: Push("ood6Klara3")
0x80f: Push((int) 1)
0x810: @ SetVariable(Stack[-2], Stack[-1])
0x811: Pop(2)
0x812: Return(); Pop(0)

0x813: PushEmpty()
0x814: PushEmpty()
0x815: Call2 0x8a4

0x816: Pop(0)
0x817: PushEmpty(bool, string, string)
0x818: Stack[-2] = "quest_d6_01"
0x819: Stack[-1] = "failed"
0x81a: Call2 0x7a8

0x81b: Pop(3)
0x81c: Return(); Pop(0)

0x81d: PushEmpty()
0x81e: PushEmpty(int, string)
0x81f: Stack[-1] = "d6q01"
0x820: Call2 0x777

0x821: Pop(1)
0x822: Push((int) 4)
0x823: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x824: IF (Stack[-1] == 0) GOTO 0x827; Pop(1)

0x825: Stack[-2] = (bool) 1
0x826: Return(); Pop(0)

0x827: Stack[-2] = (bool) 0
0x828: Return(); Pop(0)

0x829: PushEmpty()
0x82a: PushEmpty(int, string)
0x82b: Stack[-1] = "ood6Klara1"
0x82c: Call2 0x777

0x82d: Pop(1)
0x82e: Push((int) 0)
0x82f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x830: IF (Stack[-1] == 0) GOTO 0x833; Pop(1)

0x831: Stack[-2] = (bool) 1
0x832: Return(); Pop(0)

0x833: Stack[-2] = (bool) 0
0x834: Return(); Pop(0)

0x835: PushEmpty()
0x836: PushEmpty(int, string)
0x837: Stack[-1] = "d6q01"
0x838: Call2 0x777

0x839: Pop(1)
0x83a: Push((int) 3)
0x83b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x83c: IF (Stack[-1] == 0) GOTO 0x83f; Pop(1)

0x83d: Stack[-2] = (bool) 1
0x83e: Return(); Pop(0)

0x83f: Stack[-2] = (bool) 0
0x840: Return(); Pop(0)

0x841: PushEmpty()
0x842: PushEmpty(int, string)
0x843: Stack[-1] = "ood6Klara2"
0x844: Call2 0x777

0x845: Pop(1)
0x846: Push((int) 0)
0x847: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x848: IF (Stack[-1] == 0) GOTO 0x84b; Pop(1)

0x849: Stack[-2] = (bool) 1
0x84a: Return(); Pop(0)

0x84b: Stack[-2] = (bool) 0
0x84c: Return(); Pop(0)

0x84d: PushEmpty()
0x84e: PushEmpty(int, string)
0x84f: Stack[-1] = "microscope_d6q01_klara_blood"
0x850: Call2 0x777

0x851: Pop(1)
0x852: Push((int) 0)
0x853: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x854: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x855: Stack[-2] = (bool) 1
0x856: Return(); Pop(0)

0x857: Stack[-2] = (bool) 0
0x858: Return(); Pop(0)

0x859: PushEmpty()
0x85a: PushEmpty(int, string)
0x85b: Stack[-1] = "d6q01"
0x85c: Call2 0x777

0x85d: Pop(1)
0x85e: Push((int) 1000)
0x85f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x860: IF (Stack[-1] == 0) GOTO 0x863; Pop(1)

0x861: Stack[-2] = (bool) 1
0x862: Return(); Pop(0)

0x863: Stack[-2] = (bool) 0
0x864: Return(); Pop(0)

0x865: PushEmpty()
0x866: PushEmpty(int, string)
0x867: Stack[-1] = "d6q01"
0x868: Call2 0x777

0x869: Pop(1)
0x86a: Push((int) -1)
0x86b: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x86c: IF (Stack[-1] == 0) GOTO 0x86f; Pop(1)

0x86d: Stack[-2] = (bool) 1
0x86e: Return(); Pop(0)

0x86f: Stack[-2] = (bool) 0
0x870: Return(); Pop(0)

0x871: PushEmpty()
0x872: PushEmpty(int, string)
0x873: Stack[-1] = "ood6Klara3"
0x874: Call2 0x777

0x875: Pop(1)
0x876: Push((int) 0)
0x877: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x878: IF (Stack[-1] == 0) GOTO 0x87b; Pop(1)

0x879: Stack[-2] = (bool) 1
0x87a: Return(); Pop(0)

0x87b: Stack[-2] = (bool) 0
0x87c: Return(); Pop(0)

0x87d: PushEmpty(object, object)
0x87e: Push((int) 163)
0x87f: Push((int) 1)
0x880: Push((int) 515405)
0x881: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x882: Pop(3)
0x883: PushEmpty(bool, object, int)
0x884: Stack[-2] = Stack[-4]
0x885: Stack[-1] = (int) 111
0x886: Call2 0x8be

0x887: Pop(3)
0x888: Return(); Pop(2)

0x889: Stack[-1] = 0
0x88a: PushEmpty(object, object)
0x88b: Push((int) 122)
0x88c: Push((int) 1)
0x88d: Push((int) 513745)
0x88e: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x88f: Pop(3)
0x890: PushEmpty(bool, object, int)
0x891: Stack[-2] = Stack[-4]
0x892: Stack[-1] = (int) 111
0x893: Call2 0x8be

0x894: Pop(3)
0x895: Return(); Pop(2)

0x896: Stack[-1] = 0
0x897: PushEmpty(object, object)
0x898: Push((int) 635)
0x899: Push((int) 1)
0x89a: Push((int) 533083)
0x89b: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x89c: Pop(3)
0x89d: PushEmpty(bool, object, int)
0x89e: Stack[-2] = Stack[-4]
0x89f: Stack[-1] = (int) 111
0x8a0: Call2 0x8be

0x8a1: Pop(3)
0x8a2: Return(); Pop(2)

0x8a3: Stack[-1] = 0
0x8a4: PushEmpty(object, object)
0x8a5: Push((int) 119)
0x8a6: Push((int) 1)
0x8a7: Push((int) 513742)
0x8a8: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x8a9: Pop(3)
0x8aa: PushEmpty(bool, object, int)
0x8ab: Stack[-2] = Stack[-4]
0x8ac: Stack[-1] = (int) 111
0x8ad: Call2 0x8be

0x8ae: Pop(3)
0x8af: Return(); Pop(2)

0x8b0: Stack[-1] = 0
0x8b1: PushEmpty(object, object)
0x8b2: @ GetDiaryRoot(Stack[-1])
0x8b3: Pop(0)
0x8b4: Pop(0); Push((bool) Stack[-1] == 0)
0x8b5: IF (Stack[-1] == 0) GOTO 0x8bb; Pop(1)

0x8b6: Push("Can't retrieve diary root")
0x8b7: @ Trace(Stack[-1])
0x8b8: Pop(1)
0x8b9: Stack[-3] = (bool) 0
0x8ba: Return(); Pop(2)

0x8bb: Stack[-3] = Stack[-1]
0x8bc: Return(); Pop(2)

0x8bd: Stack[-1] = 0
0x8be: PushEmpty(object, object, int, object, object, int)
0x8bf: PushEmpty(object)
0x8c0: Call2 0x8b1

0x8c1: Stack[-4] = Stack[-1]
0x8c2: Pop(1)
0x8c3: @@ Find(Stack[-7], Stack[-2])
0x8c4: Pop(0)
0x8c5: Pop(0); Push((bool) Stack[-2] == 0)
0x8c6: IF (Stack[-1] == 0) GOTO 0x8cd; Pop(1)

0x8c7: Push("Can't find diary parent with id: ")
0x8c8: Pop(1); Push(Stack[-1] + Stack[-8]);
0x8c9: @ Trace(Stack[-1])
0x8ca: Pop(1)
0x8cb: Stack[-9] = (bool) 0
0x8cc: Return(); Pop(6)

0x8cd: @@ AddChild(Stack[-8])
0x8ce: Pop(0)
0x8cf: Push((int) 7)
0x8d0: @ SendWorldWndMessage(Stack[-1])
0x8d1: Pop(1)
0x8d2: @@ GetCategory(Stack[-1])
0x8d3: Pop(0)
0x8d4: @ SetDiarySection(Stack[-1])
0x8d5: Pop(0)
0x8d6: Stack[-9] = (bool) 0
0x8d7: Return(); Pop(6)

0x8d8: Stack[-2] = 0
0x8d9: Stack[-3] = 0
0x8da: PushEmpty(int, int)
0x8db: Push("branch")
0x8dc: @ GetVariable(Stack[-1], Stack[-2])
0x8dd: Pop(1)
0x8de: Push((int) 0)
0x8df: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e0: IF (Stack[-1] == 0) GOTO 0x8e4; Pop(1)

0x8e1: Stack[-3] = (int) 1
0x8e2: Return(); Pop(2)

0x8e3: GOTO 0x8e9

0x8e4: Push((int) 1)
0x8e5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x8e6: IF (Stack[-1] == 0) GOTO 0x8e9; Pop(1)

0x8e7: Stack[-3] = (int) 2
0x8e8: Return(); Pop(2)

0x8e9: Stack[-3] = (int) 3
0x8ea: Return(); Pop(2)

0x8eb: Stack[-1] = (int) 515540
0x8ec: Return(); Pop(0)

0x8ed: Stack[-1] = (int) 502865
0x8ee: Return(); Pop(0)

0x8ef: Stack[-1] = "ui/NPC_Klara.png"
0x8f0: Return(); Pop(0)

0x8f1: Stack[-1] = "ui/NPC_Klara_b.png"
0x8f2: Return(); Pop(0)

0x8f3: Stack[-1] = (bool) 1
0x8f4: Return(); Pop(0)

