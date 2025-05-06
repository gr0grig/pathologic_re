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
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	add
	GetItemID
	Category
	AddItem
	DropItems
	SetItemName
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png
	oob2TravnikWife1
	quest_b2_02
	fail
	b2q02
	move_bride
	white plet 3 is given
	grass_white_plet
	savyur 3 is given
	grass_savyur
	playsound
	giveitem
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
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
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
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
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	GetVariable (2 args)
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemProperty (3 args)
	CreateInvItem (1 args)
	Trigger (2 args)
	HasAnimation (3 args)
	SetVariable (2 args)
	TriggerWorld (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x1e2
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xc6 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object) Params = 0
		EVENT_0 Op = 0x1eb Vars = (object)
		EVENT_7 Op = 0x220 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2a8

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x391

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x38f

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x393

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x395

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x452

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
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x2ed

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0xb0

0x53: Pop(1)
0x54: Push((int) 518265)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool)
0x5a: Stack[-1] = (bool) 0
0x5b: PushEmpty(bool)
0x5c: Stack[-1] = (bool) 0
0x5d: PushEmpty(bool)
0x5e: Stack[-1] = (bool) 0
0x5f: PushEmpty(bool, object)
0x60: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x61: Call2 0x403

0x62: Pop(1)
0x63: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x64: PushEmpty(bool, object)
0x65: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x66: Call2 0x3eb

0x67: Pop(1)
0x68: Pop(1); Push((bool) Stack[-1] == 0)
0x69: IF (Stack[-1] == 0) GOTO 0x6b; Pop(1)

0x6a: Stack[-1] = (bool) 1
0x6b: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x6c: PushEmpty(bool, object)
0x6d: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x6e: Call2 0x3df

0x6f: Pop(1)
0x70: Pop(1); Push((bool) Stack[-1] == 0)
0x71: IF (Stack[-1] == 0) GOTO 0x73; Pop(1)

0x72: Stack[-1] = (bool) 1
0x73: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x74: PushEmpty(bool, object)
0x75: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x76: Call2 0x3f7

0x77: Pop(1)
0x78: IF (Stack[-1] == 0) GOTO 0x7a; Pop(1)

0x79: Stack[-1] = (bool) 1
0x7a: IF (Stack[-1] == 0) GOTO 0x80; Pop(1)

0x7b: Push((int) 518266)
0x7c: Push((int) 20687)
0x7d: Push((int) 19375)
0x7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: PushEmpty(bool, object)
0x81: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x82: Call2 0x3d3

0x83: Pop(1)
0x84: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x85: Push((int) 527751)
0x86: Push((int) 29118)
0x87: Push((int) 29108)
0x88: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x89: Pop(3)
0x8a: Push((int) 518267)
0x8b: Push((int) -1)
0x8c: Push((int) 19376)
0x8d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x8e: Pop(3)
0x8f: GOTO 0x92

0x90: Return(); Pop(0)

0x91: GOTO 0x4e

0x92: PushEmpty(bool)
0x93: Call2 0x397

0x94: Pop(0)
0x95: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x96: @ lshWaitForAnimEnd()
0x97: Pop(0)
0x98: Push( Stack[3 + Tasks[-1].StackPointer] )
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: GOTO 0xa0

0x9b: PushEmpty(string)
0x9c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x9d: Call2 0x2ff

0x9e: Pop(1)
0x9f: GOTO 0x96

0xa0: GOTO 0xaf

0xa1: Push("all")
0xa2: Push("idle")
0xa3: @ PlayAnimation(Stack[-2], Stack[-1])
0xa4: Pop(2)
0xa5: @ WaitForAnimEnd()
0xa6: Pop(0)
0xa7: Push( Stack[3 + Tasks[-1].StackPointer] )
0xa8: IF (Stack[-1] == 0) GOTO 0xaa; Pop(1)

0xa9: GOTO 0xaf

0xaa: Push("all")
0xab: Push("idle")
0xac: @ PlayAnimation(Stack[-2], Stack[-1])
0xad: Pop(2)
0xae: GOTO 0xa5

0xaf: Return(); Pop(0)

0xb0: PushEmpty()
0xb1: PushEmpty(bool)
0xb2: Call2 0x397

0xb3: Pop(0)
0xb4: Pop(1); Push((bool) Stack[-1] == 0)
0xb5: IF (Stack[-1] == 0) GOTO 0xb7; Pop(1)

0xb6: Return(); Pop(0)

0xb7: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xb8: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb9: Return(); Pop(0)

0xba: PushEmpty(string, bool)
0xbb: Stack[-2] = Stack[-3]
0xbc: Push("")
0xbd: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xbe: IF (Stack[-1] == 0) GOTO 0xc1; Pop(1)

0xbf: Stack[-1] = (bool) 0
0xc0: GOTO 0xc2

0xc1: Stack[-1] = (bool) 1
0xc2: Call2 0x30f

0xc3: Pop(2)
0xc4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xc5: Return(); Pop(0)

0xc6: PushEmpty()
0xc7: Push((int) 1)
0xc8: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0xc9: PushEmpty()
0xca: Call2 0x329

0xcb: Pop(0)
0xcc: Push((int) 19375)
0xcd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xce: IF (Stack[-1] == 0) GOTO 0xd4; Pop(1)

0xcf: PushEmpty(object, object)
0xd0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd2: Call2 0x399

0xd3: Pop(2)
0xd4: Push((int) 29121)
0xd5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xd6: IF (Stack[-1] == 0) GOTO 0xeb; Pop(1)

0xd7: PushEmpty(object, object)
0xd8: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd9: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xda: Call2 0x3c2

0xdb: Pop(2)
0xdc: PushEmpty(object, object)
0xdd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xde: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xdf: Call2 0x3b7

0xe0: Pop(2)
0xe1: PushEmpty(object, object)
0xe2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe4: Call2 0x3cd

0xe5: Pop(2)
0xe6: PushEmpty(object, object)
0xe7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe9: Call2 0x39f

0xea: Pop(2)
0xeb: Push((int) 29122)
0xec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: PushEmpty(object, object)
0xef: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xf0: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xf1: Call2 0x3a9

0xf2: Pop(2)
0xf3: Push((int) 19374)
0xf4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xf5: IF (Stack[-1] == 0) GOTO 0x136; Pop(1)

0xf6: PushEmpty(string)
0xf7: Stack[-1] = "Neutral"
0xf8: Call2 0xb0

0xf9: Pop(1)
0xfa: Push((int) 518265)
0xfb: @@ SetMessage(Stack[-1])
0xfc: Pop(1)
0xfd: @@ ClearReplies()
0xfe: Pop(0)
0xff: PushEmpty(bool)
0x100: Stack[-1] = (bool) 0
0x101: PushEmpty(bool)
0x102: Stack[-1] = (bool) 0
0x103: PushEmpty(bool)
0x104: Stack[-1] = (bool) 0
0x105: PushEmpty(bool, object)
0x106: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x107: Call2 0x403

0x108: Pop(1)
0x109: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call2 0x3eb

0x10d: Pop(1)
0x10e: Pop(1); Push((bool) Stack[-1] == 0)
0x10f: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x110: Stack[-1] = (bool) 1
0x111: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x112: PushEmpty(bool, object)
0x113: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x114: Call2 0x3df

0x115: Pop(1)
0x116: Pop(1); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x119; Pop(1)

0x118: Stack[-1] = (bool) 1
0x119: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11a: PushEmpty(bool, object)
0x11b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x11c: Call2 0x3f7

0x11d: Pop(1)
0x11e: IF (Stack[-1] == 0) GOTO 0x120; Pop(1)

0x11f: Stack[-1] = (bool) 1
0x120: IF (Stack[-1] == 0) GOTO 0x126; Pop(1)

0x121: Push((int) 518266)
0x122: Push((int) 20687)
0x123: Push((int) 19375)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: PushEmpty(bool, object)
0x127: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x128: Call2 0x3d3

0x129: Pop(1)
0x12a: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x12b: Push((int) 527751)
0x12c: Push((int) 29118)
0x12d: Push((int) 29108)
0x12e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12f: Pop(3)
0x130: Push((int) 518267)
0x131: Push((int) -1)
0x132: Push((int) 19376)
0x133: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x134: Pop(3)
0x135: Return(); Pop(0)

0x136: Push((int) 29118)
0x137: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x138: IF (Stack[-1] == 0) GOTO 0x148; Pop(1)

0x139: PushEmpty(string)
0x13a: Stack[-1] = "Neutral"
0x13b: Call2 0xb0

0x13c: Pop(1)
0x13d: Push((int) 527761)
0x13e: @@ SetMessage(Stack[-1])
0x13f: Pop(1)
0x140: @@ ClearReplies()
0x141: Pop(0)
0x142: Push((int) 527762)
0x143: Push((int) 29120)
0x144: Push((int) 29119)
0x145: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x146: Pop(3)
0x147: Return(); Pop(0)

0x148: Push((int) 29120)
0x149: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14a: IF (Stack[-1] == 0) GOTO 0x15f; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0xb0

0x14e: Pop(1)
0x14f: Push((int) 527763)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 527764)
0x155: Push((int) -1)
0x156: Push((int) 29121)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Push((int) 527861)
0x15a: Push((int) 29203)
0x15b: Push((int) 29205)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Return(); Pop(0)

0x15f: Push((int) 29203)
0x160: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x161: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x162: PushEmpty(string)
0x163: Stack[-1] = "Neutral"
0x164: Call2 0xb0

0x165: Pop(1)
0x166: Push((int) 527859)
0x167: @@ SetMessage(Stack[-1])
0x168: Pop(1)
0x169: @@ ClearReplies()
0x16a: Pop(0)
0x16b: Push((int) 527765)
0x16c: Push((int) -1)
0x16d: Push((int) 29122)
0x16e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16f: Pop(3)
0x170: Return(); Pop(0)

0x171: Push((int) 20687)
0x172: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x173: IF (Stack[-1] == 0) GOTO 0x183; Pop(1)

0x174: PushEmpty(string)
0x175: Stack[-1] = "Neutral"
0x176: Call2 0xb0

0x177: Pop(1)
0x178: Push((int) 519514)
0x179: @@ SetMessage(Stack[-1])
0x17a: Pop(1)
0x17b: @@ ClearReplies()
0x17c: Pop(0)
0x17d: Push((int) 519515)
0x17e: Push((int) 20689)
0x17f: Push((int) 20688)
0x180: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x181: Pop(3)
0x182: Return(); Pop(0)

0x183: Push((int) 20689)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral"
0x188: Call2 0xb0

0x189: Pop(1)
0x18a: Push((int) 519516)
0x18b: @@ SetMessage(Stack[-1])
0x18c: Pop(1)
0x18d: @@ ClearReplies()
0x18e: Pop(0)
0x18f: Push((int) 519517)
0x190: Push((int) 20691)
0x191: Push((int) 20690)
0x192: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x193: Pop(3)
0x194: Return(); Pop(0)

0x195: Push((int) 20691)
0x196: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x197: IF (Stack[-1] == 0) GOTO 0x1ac; Pop(1)

0x198: PushEmpty(string)
0x199: Stack[-1] = "Neutral"
0x19a: Call2 0xb0

0x19b: Pop(1)
0x19c: Push((int) 519518)
0x19d: @@ SetMessage(Stack[-1])
0x19e: Pop(1)
0x19f: @@ ClearReplies()
0x1a0: Pop(0)
0x1a1: Push((int) 519519)
0x1a2: Push((int) 20693)
0x1a3: Push((int) 20692)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Push((int) 527857)
0x1a7: Push((int) 20693)
0x1a8: Push((int) 29200)
0x1a9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1aa: Pop(3)
0x1ab: Return(); Pop(0)

0x1ac: Push((int) 20693)
0x1ad: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1ae: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1af: PushEmpty(string)
0x1b0: Stack[-1] = "Neutral"
0x1b1: Call2 0xb0

0x1b2: Pop(1)
0x1b3: Push((int) 519520)
0x1b4: @@ SetMessage(Stack[-1])
0x1b5: Pop(1)
0x1b6: @@ ClearReplies()
0x1b7: Pop(0)
0x1b8: Push((int) 519521)
0x1b9: Push((int) 20695)
0x1ba: Push((int) 20694)
0x1bb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1bc: Pop(3)
0x1bd: Return(); Pop(0)

0x1be: Push((int) 20695)
0x1bf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1d5; Pop(1)

0x1c1: PushEmpty(string)
0x1c2: Stack[-1] = "Neutral"
0x1c3: Call2 0xb0

0x1c4: Pop(1)
0x1c5: Push((int) 519522)
0x1c6: @@ SetMessage(Stack[-1])
0x1c7: Pop(1)
0x1c8: @@ ClearReplies()
0x1c9: Pop(0)
0x1ca: Push((int) 519523)
0x1cb: Push((int) -1)
0x1cc: Push((int) 20696)
0x1cd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ce: Pop(3)
0x1cf: Push((int) 527858)
0x1d0: Push((int) -1)
0x1d1: Push((int) 29202)
0x1d2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d3: Pop(3)
0x1d4: Return(); Pop(0)

0x1d5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1d6: PushEmpty(bool)
0x1d7: Call2 0x397

0x1d8: Pop(0)
0x1d9: IF (Stack[-1] == 0) GOTO 0x1dd; Pop(1)

0x1da: @ lshStopAnimation()
0x1db: Pop(0)
0x1dc: GOTO 0x1df

0x1dd: @ StopAnimation()
0x1de: Pop(0)
0x1df: Return(); Pop(0)

0x1e0: GOTO 0xc7

0x1e1: Return(); Pop(0)

0x1e2: Push((bool) 1)
0x1e3: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e4: PushEmpty(float, float)
0x1e5: Stack[-2] = (int) 300
0x1e6: Stack[-1] = (int) 100
0x1e7: Call2 0x1f6

0x1e8: Pop(2)
0x1e9: GOTO 0x1e2

0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: PushEmpty()
0x1ed: Call2 0x237

0x1ee: Pop(0)
0x1ef: PushEmpty(int, object)
0x1f0: Stack[-1] = Stack[-3]
0x1f1: Push(-2, 1); TaskCall(0)
0x1f2: Call2 0x0

0x1f3: Pop(-2, 1); TaskReturn
0x1f4: Pop(2)
0x1f5: Return(); Pop(0)

0x1f6: PushEmpty()
0x1f7: PushEmpty(bool)
0x1f8: Call2 0x2a3

0x1f9: Pop(0)
0x1fa: Pop(1); Push((bool) Stack[-1] == 0)
0x1fb: IF (Stack[-1] == 0) GOTO 0x1fd; Pop(1)

0x1fc: Return(); Pop(0)

0x1fd: Push("player")
0x1fe: @ FindActor(Stack[-4], Stack[-1])
0x1ff: Pop(1)
0x200: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x201: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x202: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x203: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x204: Push((int) 10)
0x205: Push((float)1.0)
0x206: @ SetTimer(Stack[-2], Stack[-1])
0x207: Pop(2)
0x208: PushEmpty()
0x209: Call2 0x245

0x20a: Pop(0)
0x20b: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x20c: IF (Stack[-1] == 0) GOTO 0x210; Pop(1)

0x20d: Push((int) 10)
0x20e: @ KillTimer(Stack[-1])
0x20f: Pop(1)
0x210: Return(); Pop(0)

0x211: PushEmpty(float, float)
0x212: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x213: IF (Stack[-1] == 0) GOTO 0x216; Pop(1)

0x214: Stack[-3] = (bool) 0
0x215: Return(); Pop(2)

0x216: PushEmpty(float, object)
0x217: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x218: Call2 0x29b

0x219: Pop(1)
0x21a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x21b: Push( Stack[2 + Tasks[-1].StackPointer] )
0x21c: IF (Stack[-1] == 0) GOTO 0x21e; Pop(1)

0x21d: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x21e: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x21f: Return(); Pop(2)

0x220: PushEmpty()
0x221: Push((int) 10)
0x222: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x223: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x224: PushEmpty(bool)
0x225: Call2 0x211

0x226: Pop(0)
0x227: IF (Stack[-1] == 0) GOTO 0x230; Pop(1)

0x228: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x229: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x22a: PushEmpty(object)
0x22b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x22c: Call2 0x31e

0x22d: Pop(1)
0x22e: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x22f: GOTO 0x236

0x230: Push( Stack[2 + Tasks[-1].StackPointer] )
0x231: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x232: Push("head")
0x233: @ UnlookAsync(Stack[-1])
0x234: Pop(1)
0x235: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x236: Return(); Pop(0)

0x237: PushEmpty()
0x238: Call2 0x296

0x239: Pop(0)
0x23a: Push((int) 10)
0x23b: @ KillTimer(Stack[-1])
0x23c: Pop(1)
0x23d: Push( Stack[2 + Tasks[-1].StackPointer] )
0x23e: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23f: Push("head")
0x240: @ UnlookAsync(Stack[-1])
0x241: Pop(1)
0x242: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x243: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x244: Return(); Pop(0)

0x245: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x246: @ WaitForAnimEnd()
0x247: Pop(0)
0x248: PushEmpty(bool)
0x249: Call2 0x2a3

0x24a: Pop(0)
0x24b: Pop(1); Push((bool) Stack[-1] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: Return(); Pop(14)

0x24e: PushEmpty(int)
0x24f: Call2 0x37e

0x250: Stack[-8] = Stack[-1]
0x251: Pop(1)
0x252: Stack[-6] = (int) 0
0x253: PushEmpty(bool)
0x254: Stack[-1] = (bool) 0
0x255: Push((int) 5)
0x256: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x257: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x258: PushEmpty(bool)
0x259: Call2 0x2a3

0x25a: Pop(0)
0x25b: IF (Stack[-1] == 0) GOTO 0x25d; Pop(1)

0x25c: Stack[-1] = (bool) 1
0x25d: IF (Stack[-1] == 0) GOTO 0x291; Pop(1)

0x25e: Push((int) 3)
0x25f: @ irand(Stack[-6], Stack[-1])
0x260: Pop(1)
0x261: Push((int) 0)
0x262: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x263: IF (Stack[-1] == 0) GOTO 0x275; Pop(1)

0x264: Push(Stack[-7])
0x265: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x266: @ irand(Stack[-4], Stack[-7])
0x267: Pop(0)
0x268: Push("all")
0x269: PushEmpty(string, int)
0x26a: Stack[-1] = Stack[-7]
0x26b: Call2 0x377

0x26c: Pop(1)
0x26d: @ PlayAnimation(Stack[-2], Stack[-1])
0x26e: Pop(2)
0x26f: @ WaitForAnimEnd(Stack[-3])
0x270: Pop(0)
0x271: Pop(0); Push((bool) Stack[-3] == 0)
0x272: IF (Stack[-1] == 0) GOTO 0x274; Pop(1)

0x273: GOTO 0x291

0x274: GOTO 0x286

0x275: Push((int) 1)
0x276: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x283; Pop(1)

0x278: Push((int) 4)
0x279: @ rand(Stack[-3], Stack[-1])
0x27a: Pop(1)
0x27b: Push((int) 1)
0x27c: Pop(1); Push(Stack[-3] + Stack[-1]);
0x27d: @ Sleep(Stack[-1], Stack[-2])
0x27e: Pop(1)
0x27f: Pop(0); Push((bool) Stack[-1] == 0)
0x280: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x281: GOTO 0x291

0x282: GOTO 0x286

0x283: Push(Stack[-6])
0x284: IF (Stack[-1] == 0) GOTO 0x286; Pop(1)

0x285: GOTO 0x291

0x286: PushEmpty(bool)
0x287: Call2 0x294

0x288: Pop(0)
0x289: Pop(1); Push((bool) Stack[-1] == 0)
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: GOTO 0x291

0x28c: @ ResetAAS()
0x28d: Pop(0)
0x28e: Push((int) 1)
0x28f: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x290: GOTO 0x253

0x291: @ ResetAAS()
0x292: Pop(0)
0x293: Return(); Pop(14)

0x294: Stack[-1] = (bool) 1
0x295: Return(); Pop(0)

0x296: @ StopAnimation()
0x297: Pop(0)
0x298: @ StopGroup0()
0x299: Pop(0)
0x29a: Return(); Pop(0)

0x29b: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x29c: @ GetPosition(Stack[-3])
0x29d: Pop(0)
0x29e: @@ GetPosition(Stack[-2])
0x29f: Pop(0)
0x2a0: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2a1: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2a2: Return(); Pop(6)

0x2a3: PushEmpty(bool, bool)
0x2a4: @ IsLoaded(Stack[-1])
0x2a5: Pop(0)
0x2a6: Stack[-3] = Stack[-1]
0x2a7: Return(); Pop(2)

0x2a8: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2a9: @@ GetPosition(Stack[-8])
0x2aa: Pop(0)
0x2ab: @@ GetEyesHeight(Stack[-9])
0x2ac: Pop(0)
0x2ad: Push(CvectorIndex(Stack[-8], 1))
0x2ae: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2af: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2b0: @ GetPosition(Stack[-7])
0x2b1: Pop(0)
0x2b2: @ GetEyesHeight(Stack[-9])
0x2b3: Pop(0)
0x2b4: Push(CvectorIndex(Stack[-7], 1))
0x2b5: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2b6: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2b7: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2b8: Push(CvectorIndex(Stack[-6], 1))
0x2b9: Stack[-1] = (int) 0
0x2ba: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2bb: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2bc: Pop(1); Push(Sqrt(Stack[-1]))
0x2bd: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2be: Stack[-5] = -Stack[-6]; Pop(0);
0x2bf: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2c0: PushEmpty(cvector, cvector)
0x2c1: Push(CVector(0.0, 1.0, 0.0))
0x2c2: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2c3: Call2 0x330

0x2c4: Pop(1)
0x2c5: Push((int) 25)
0x2c6: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2c7: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2c8: Push(CVector(0.0, 10.0, 0.0))
0x2c9: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2ca: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2cb: @ IsOverrideActive(Stack[-2])
0x2cc: Pop(0)
0x2cd: Push(Stack[-2])
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2cf: Stack[-21] = (bool) 0
0x2d0: Return(); Pop(18)

0x2d1: @ StopWorld()
0x2d2: Pop(0)
0x2d3: Push((bool) 1)
0x2d4: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2d5: Pop(1)
0x2d6: Push(CvectorIndex(Stack[-4], 0))
0x2d7: Push(CvectorIndex(Stack[-5], 2))
0x2d8: @ Rotate(Stack[-2], Stack[-1])
0x2d9: Pop(2)
0x2da: PushEmpty(bool)
0x2db: Call2 0x397

0x2dc: Pop(0)
0x2dd: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2de: GOTO 0x2e7

0x2df: Push("head")
0x2e0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e1: Pop(1)
0x2e2: Push(Stack[-1])
0x2e3: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e4: Push("head")
0x2e5: @ LookAsyncCamera(Stack[-1])
0x2e6: Pop(1)
0x2e7: @ CameraWaitForPlayFinish()
0x2e8: Pop(0)
0x2e9: @ ResumeWorld()
0x2ea: Pop(0)
0x2eb: Stack[-21] = (bool) 1
0x2ec: Return(); Pop(18)

0x2ed: PushEmpty(bool, bool)
0x2ee: Push((bool) 1)
0x2ef: @ CameraSwitchToNormal(Stack[-1])
0x2f0: Pop(1)
0x2f1: PushEmpty(bool)
0x2f2: Call2 0x397

0x2f3: Pop(0)
0x2f4: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f5: GOTO 0x2fe

0x2f6: Push("head")
0x2f7: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f8: Pop(1)
0x2f9: Push(Stack[-1])
0x2fa: IF (Stack[-1] == 0) GOTO 0x2fe; Pop(1)

0x2fb: Push("head")
0x2fc: @ UnlookAsync(Stack[-1])
0x2fd: Pop(1)
0x2fe: Return(); Pop(2)

0x2ff: PushEmpty(bool, float, float, bool, float, float)
0x300: @ lshHasAnimation(Stack[-3], Stack[-7])
0x301: Pop(0)
0x302: Push(Stack[-3])
0x303: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x304: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x305: Pop(0)
0x306: Push((bool) 0)
0x307: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x308: Pop(1)
0x309: GOTO 0x30e

0x30a: Push("Can't find lsh animation : ")
0x30b: Pop(1); Push(Stack[-1] + Stack[-8]);
0x30c: @ Trace(Stack[-1])
0x30d: Pop(1)
0x30e: Return(); Pop(6)

0x30f: PushEmpty(bool, float, float, bool, float, float)
0x310: @ lshHasAnimation(Stack[-3], Stack[-8])
0x311: Pop(0)
0x312: Push(Stack[-3])
0x313: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x314: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x315: Pop(0)
0x316: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x317: Pop(0)
0x318: GOTO 0x31d

0x319: Push("Can't find lsh animation : ")
0x31a: Pop(1); Push(Stack[-1] + Stack[-9]);
0x31b: @ Trace(Stack[-1])
0x31c: Pop(1)
0x31d: Return(); Pop(6)

0x31e: PushEmpty(float, cvector, float, cvector)
0x31f: @@ GetEyesHeight(Stack[-2])
0x320: Pop(0)
0x321: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x322: Push(CvectorIndex(Stack[-1], 1))
0x323: Stack[-1] = Stack[-3]
0x324: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x325: Push("head")
0x326: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x327: Pop(1)
0x328: Return(); Pop(4)

0x329: PushEmpty(bool)
0x32a: Call2 0x397

0x32b: Pop(0)
0x32c: IF (Stack[-1] == 0) GOTO 0x32f; Pop(1)

0x32d: @ lshStopSpeech()
0x32e: Pop(0)
0x32f: Return(); Pop(0)

0x330: PushEmpty(float, float)
0x331: Pop(0); Push(Stack[-3] | Stack[-3]);
0x332: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x333: Push((float)0.0)
0x334: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x335: IF (Stack[-1] == 0) GOTO 0x338; Pop(1)

0x336: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x337: Return(); Pop(2)

0x338: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x339: Return(); Pop(2)

0x33a: PushEmpty(int, int)
0x33b: @ GetVariable(Stack[-3], Stack[-1])
0x33c: Pop(0)
0x33d: Stack[-4] = Stack[-1]
0x33e: Return(); Pop(2)

0x33f: PushEmpty(object, object)
0x340: @ CreateIntVector(Stack[-1])
0x341: Pop(0)
0x342: @@ add(Stack[-4])
0x343: Pop(0)
0x344: @@ add(Stack[-3])
0x345: Pop(0)
0x346: Push((int) 3)
0x347: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x348: Pop(1)
0x349: Return(); Pop(2)

0x34a: Stack[-1] = 0
0x34b: PushEmpty(int, int, bool, int, int, bool)
0x34c: @@ GetItemID(Stack[-3])
0x34d: Pop(0)
0x34e: Push("Category")
0x34f: @ GetInvItemProperty(Stack[-3], Stack[-4], Stack[-1])
0x350: Pop(1)
0x351: @@ AddItem(Stack[-1], Stack[-8], Stack[-2], Stack[-7])
0x352: Pop(0)
0x353: Pop(0); Push((bool) Stack[-1] == 0)
0x354: IF (Stack[-1] == 0) GOTO 0x358; Pop(1)

0x355: @@ DropItems(Stack[-8], Stack[-7])
0x356: Pop(0)
0x357: GOTO 0x35d

0x358: PushEmpty(int, int)
0x359: Stack[-2] = Stack[-5]
0x35a: Stack[-1] = Stack[-9]
0x35b: Call2 0x33f

0x35c: Pop(2)
0x35d: Return(); Pop(6)

0x35e: PushEmpty(object, object)
0x35f: @ CreateInvItem(Stack[-1])
0x360: Pop(0)
0x361: @@ SetItemName(Stack[-4])
0x362: Pop(0)
0x363: PushEmpty(object, object, int)
0x364: Stack[-3] = Stack[-8]
0x365: Stack[-2] = Stack[-4]
0x366: Stack[-1] = Stack[-6]
0x367: Call2 0x34b

0x368: Pop(3)
0x369: Return(); Pop(2)

0x36a: Stack[-1] = 0
0x36b: PushEmpty(object, object)
0x36c: @ FindActor(Stack[-1], Stack[-4])
0x36d: Pop(0)
0x36e: Pop(0); Push((bool) Stack[-1] == 0)
0x36f: IF (Stack[-1] == 0) GOTO 0x372; Pop(1)

0x370: Stack[-5] = (bool) 0
0x371: Return(); Pop(2)

0x372: @ Trigger(Stack[-1], Stack[-3])
0x373: Pop(0)
0x374: Stack[-5] = (bool) 1
0x375: Return(); Pop(2)

0x376: Stack[-1] = 0
0x377: PushEmpty(string, string)
0x378: Stack[-1] = "idle"
0x379: Push(Stack[-3])
0x37a: IF (Stack[-1] == 0) GOTO 0x37c; Pop(1)

0x37b: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x37c: Stack[-4] = Stack[-1]
0x37d: Return(); Pop(2)

0x37e: PushEmpty(int, bool, int, bool)
0x37f: Stack[-2] = (int) 0
0x380: Push("all")
0x381: PushEmpty(string, int)
0x382: Stack[-1] = Stack[-5]
0x383: Call2 0x377

0x384: Pop(1)
0x385: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x386: Pop(2)
0x387: Pop(0); Push((bool) Stack[-1] == 0)
0x388: IF (Stack[-1] == 0) GOTO 0x38a; Pop(1)

0x389: GOTO 0x38d

0x38a: Push((int) 1)
0x38b: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x38c: GOTO 0x380

0x38d: Stack[-5] = Stack[-2]
0x38e: Return(); Pop(4)

0x38f: Stack[-1] = (int) 515596
0x390: Return(); Pop(0)

0x391: Stack[-1] = (int) 514839
0x392: Return(); Pop(0)

0x393: Stack[-1] = "ui/NPC_Citizen3.png"
0x394: Return(); Pop(0)

0x395: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x396: Return(); Pop(0)

0x397: Stack[-1] = (bool) 0
0x398: Return(); Pop(0)

0x399: PushEmpty()
0x39a: Push("oob2TravnikWife1")
0x39b: Push((int) 1)
0x39c: @ SetVariable(Stack[-2], Stack[-1])
0x39d: Pop(2)
0x39e: Return(); Pop(0)

0x39f: PushEmpty()
0x3a0: PushEmpty()
0x3a1: Call2 0x41c

0x3a2: Pop(0)
0x3a3: PushEmpty(bool, string, string)
0x3a4: Stack[-2] = "quest_b2_02"
0x3a5: Stack[-1] = "fail"
0x3a6: Call2 0x36b

0x3a7: Pop(3)
0x3a8: Return(); Pop(0)

0x3a9: PushEmpty()
0x3aa: Push("b2q02")
0x3ab: Push((int) 2)
0x3ac: @ SetVariable(Stack[-2], Stack[-1])
0x3ad: Pop(2)
0x3ae: PushEmpty()
0x3af: Call2 0x40f

0x3b0: Pop(0)
0x3b1: PushEmpty(bool, string, string)
0x3b2: Stack[-2] = "quest_b2_02"
0x3b3: Stack[-1] = "move_bride"
0x3b4: Call2 0x36b

0x3b5: Pop(3)
0x3b6: Return(); Pop(0)

0x3b7: PushEmpty()
0x3b8: Push("white plet 3 is given")
0x3b9: @ Trace(Stack[-1])
0x3ba: Pop(1)
0x3bb: PushEmpty(object, string, int)
0x3bc: Stack[-3] = Stack[-5]
0x3bd: Stack[-2] = "grass_white_plet"
0x3be: Stack[-1] = (int) 3
0x3bf: Call2 0x35e

0x3c0: Pop(3)
0x3c1: Return(); Pop(0)

0x3c2: PushEmpty()
0x3c3: Push("savyur 3 is given")
0x3c4: @ Trace(Stack[-1])
0x3c5: Pop(1)
0x3c6: PushEmpty(object, string, int)
0x3c7: Stack[-3] = Stack[-5]
0x3c8: Stack[-2] = "grass_savyur"
0x3c9: Stack[-1] = (int) 3
0x3ca: Call2 0x35e

0x3cb: Pop(3)
0x3cc: Return(); Pop(0)

0x3cd: PushEmpty()
0x3ce: Push("playsound")
0x3cf: Push("giveitem")
0x3d0: @ TriggerWorld(Stack[-2], Stack[-1])
0x3d1: Pop(2)
0x3d2: Return(); Pop(0)

0x3d3: PushEmpty()
0x3d4: PushEmpty(int, string)
0x3d5: Stack[-1] = "b2q02"
0x3d6: Call2 0x33a

0x3d7: Pop(1)
0x3d8: Push((int) 1)
0x3d9: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3da: IF (Stack[-1] == 0) GOTO 0x3dd; Pop(1)

0x3db: Stack[-2] = (bool) 1
0x3dc: Return(); Pop(0)

0x3dd: Stack[-2] = (bool) 0
0x3de: Return(); Pop(0)

0x3df: PushEmpty()
0x3e0: PushEmpty(int, string)
0x3e1: Stack[-1] = "b2q02"
0x3e2: Call2 0x33a

0x3e3: Pop(1)
0x3e4: Push((int) 2)
0x3e5: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3e6: IF (Stack[-1] == 0) GOTO 0x3e9; Pop(1)

0x3e7: Stack[-2] = (bool) 1
0x3e8: Return(); Pop(0)

0x3e9: Stack[-2] = (bool) 0
0x3ea: Return(); Pop(0)

0x3eb: PushEmpty()
0x3ec: PushEmpty(int, string)
0x3ed: Stack[-1] = "b2q02"
0x3ee: Call2 0x33a

0x3ef: Pop(1)
0x3f0: Push((int) -1)
0x3f1: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-2] = (bool) 1
0x3f4: Return(); Pop(0)

0x3f5: Stack[-2] = (bool) 0
0x3f6: Return(); Pop(0)

0x3f7: PushEmpty()
0x3f8: PushEmpty(int, string)
0x3f9: Stack[-1] = "b2q02"
0x3fa: Call2 0x33a

0x3fb: Pop(1)
0x3fc: Push((int) 1000)
0x3fd: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x3fe: IF (Stack[-1] == 0) GOTO 0x401; Pop(1)

0x3ff: Stack[-2] = (bool) 1
0x400: Return(); Pop(0)

0x401: Stack[-2] = (bool) 0
0x402: Return(); Pop(0)

0x403: PushEmpty()
0x404: PushEmpty(int, string)
0x405: Stack[-1] = "oob2TravnikWife1"
0x406: Call2 0x33a

0x407: Pop(1)
0x408: Push((int) 0)
0x409: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x40a: IF (Stack[-1] == 0) GOTO 0x40d; Pop(1)

0x40b: Stack[-2] = (bool) 1
0x40c: Return(); Pop(0)

0x40d: Stack[-2] = (bool) 0
0x40e: Return(); Pop(0)

0x40f: PushEmpty(object, object)
0x410: Push((int) 458)
0x411: Push((int) 2)
0x412: Push((int) 527774)
0x413: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x414: Pop(3)
0x415: PushEmpty(bool, object, int)
0x416: Stack[-2] = Stack[-4]
0x417: Stack[-1] = (int) 456
0x418: Call2 0x436

0x419: Pop(3)
0x41a: Return(); Pop(2)

0x41b: Stack[-1] = 0
0x41c: PushEmpty(object, object)
0x41d: Push((int) 460)
0x41e: Push((int) 2)
0x41f: Push((int) 527776)
0x420: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x421: Pop(3)
0x422: PushEmpty(bool, object, int)
0x423: Stack[-2] = Stack[-4]
0x424: Stack[-1] = (int) 456
0x425: Call2 0x436

0x426: Pop(3)
0x427: Return(); Pop(2)

0x428: Stack[-1] = 0
0x429: PushEmpty(object, object)
0x42a: @ GetDiaryRoot(Stack[-1])
0x42b: Pop(0)
0x42c: Pop(0); Push((bool) Stack[-1] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x42e: Push("Can't retrieve diary root")
0x42f: @ Trace(Stack[-1])
0x430: Pop(1)
0x431: Stack[-3] = (bool) 0
0x432: Return(); Pop(2)

0x433: Stack[-3] = Stack[-1]
0x434: Return(); Pop(2)

0x435: Stack[-1] = 0
0x436: PushEmpty(object, object, int, object, object, int)
0x437: PushEmpty(object)
0x438: Call2 0x429

0x439: Stack[-4] = Stack[-1]
0x43a: Pop(1)
0x43b: @@ Find(Stack[-7], Stack[-2])
0x43c: Pop(0)
0x43d: Pop(0); Push((bool) Stack[-2] == 0)
0x43e: IF (Stack[-1] == 0) GOTO 0x445; Pop(1)

0x43f: Push("Can't find diary parent with id: ")
0x440: Pop(1); Push(Stack[-1] + Stack[-8]);
0x441: @ Trace(Stack[-1])
0x442: Pop(1)
0x443: Stack[-9] = (bool) 0
0x444: Return(); Pop(6)

0x445: @@ AddChild(Stack[-8])
0x446: Pop(0)
0x447: Push((int) 7)
0x448: @ SendWorldWndMessage(Stack[-1])
0x449: Pop(1)
0x44a: @@ GetCategory(Stack[-1])
0x44b: Pop(0)
0x44c: @ SetDiarySection(Stack[-1])
0x44d: Pop(0)
0x44e: Stack[-9] = (bool) 0
0x44f: Return(); Pop(6)

0x450: Stack[-2] = 0
0x451: Stack[-3] = 0
0x452: PushEmpty(int, int)
0x453: Push("branch")
0x454: @ GetVariable(Stack[-1], Stack[-2])
0x455: Pop(1)
0x456: Push((int) 0)
0x457: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x458: IF (Stack[-1] == 0) GOTO 0x45c; Pop(1)

0x459: Stack[-3] = (int) 1
0x45a: Return(); Pop(2)

0x45b: GOTO 0x461

0x45c: Push((int) 1)
0x45d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x45e: IF (Stack[-1] == 0) GOTO 0x461; Pop(1)

0x45f: Stack[-3] = (int) 2
0x460: Return(); Pop(2)

0x461: Stack[-3] = (int) 3
0x462: Return(); Pop(2)

