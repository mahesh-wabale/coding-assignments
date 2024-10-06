//Program to demonstrate fork().
#include<stdio.h>
#include<string.h>
#include<sys/types.h>

void Child_Process();
void Parent_Process();

void main()
{
printf("Educating for better Tommorow....\n");

pid_t pid;

pid = fork();

if(pid == 0)
	Child_Process();//Code for child process
else
	Parent_Process();//Code for parent process
}

void Child_Process()
{
int i;
char buff[256];

printf("Child Process started\n");

for(i = 1;i<200; i++)
{
	sprintf(buff,"This line from Child PID %d and value is %d\n",getpid(),i);
	write(1,buff,strlen(buff));
}

printf("Child Process is over\n");
}

void Parent_Process()
{
int i;
char buff[256];

printf("Parent Process started\n");

for(i = 1;i<200; i++)
{
	sprintf(buff,"This line from Parent PID %d and value is %d\n",getpid(),i);
	write(1,buff,strlen(buff));
}

printf("Parent Process is over\n");
}
/*Output:
Educating for better Tommorow....
Parent Process started
This line from Parent PID 4513 and value is 1
This line from Parent PID 4513 and value is 2
This line from Parent PID 4513 and value is 3
This line from Parent PID 4513 and value is 4
This line from Parent PID 4513 and value is 5
Child Process started
This line from Parent PID 4513 and value is 6
This line from Parent PID 4513 and value is 7
This line from Parent PID 4513 and value is 8
This line from Parent PID 4513 and value is 9
This line from Parent PID 4513 and value is 10
This line from Parent PID 4513 and value is 11
This line from Parent PID 4513 and value is 12
This line from Parent PID 4513 and value is 13
This line from Parent PID 4513 and value is 14
This line from Parent PID 4513 and value is 15
This line from Parent PID 4513 and value is 16
This line from Parent PID 4513 and value is 17
This line from Parent PID 4513 and value is 18
This line from Parent PID 4513 and value is 19
This line from Parent PID 4513 and value is 20
This line from Parent PID 4513 and value is 21
This line from Parent PID 4513 and value is 22
This line from Parent PID 4513 and value is 23
This line from Parent PID 4513 and value is 24
This line from Parent PID 4513 and value is 25
This line from Parent PID 4513 and value is 26
This line from Parent PID 4513 and value is 27
This line from Parent PID 4513 and value is 28
This line from Parent PID 4513 and value is 29
This line from Child PID 4514 and value is 1
This line from Parent PID 4513 and value is 30
This line from Child PID 4514 and value is 2
This line from Parent PID 4513 and value is 31
This line from Child PID 4514 and value is 3
This line from Parent PID 4513 and value is 32
This line from Child PID 4514 and value is 4
This line from Parent PID 4513 and value is 33
This line from Child PID 4514 and value is 5
This line from Parent PID 4513 and value is 34
This line from Child PID 4514 and value is 6
This line from Parent PID 4513 and value is 35
This line from Child PID 4514 and value is 7
This line from Parent PID 4513 and value is 36
This line from Child PID 4514 and value is 8
This line from Parent PID 4513 and value is 37
This line from Child PID 4514 and value is 9
This line from Parent PID 4513 and value is 38
This line from Child PID 4514 and value is 10
This line from Parent PID 4513 and value is 39
This line from Child PID 4514 and value is 11
This line from Parent PID 4513 and value is 40
This line from Child PID 4514 and value is 12
This line from Parent PID 4513 and value is 41
This line from Child PID 4514 and value is 13
This line from Parent PID 4513 and value is 42
This line from Child PID 4514 and value is 14
This line from Parent PID 4513 and value is 43
This line from Child PID 4514 and value is 15
This line from Parent PID 4513 and value is 44
This line from Child PID 4514 and value is 16
This line from Parent PID 4513 and value is 45
This line from Child PID 4514 and value is 17
This line from Parent PID 4513 and value is 46
This line from Child PID 4514 and value is 18
This line from Parent PID 4513 and value is 47
This line from Child PID 4514 and value is 19
This line from Parent PID 4513 and value is 48
This line from Child PID 4514 and value is 20
This line from Parent PID 4513 and value is 49
This line from Child PID 4514 and value is 21
This line from Parent PID 4513 and value is 50
This line from Child PID 4514 and value is 22
This line from Parent PID 4513 and value is 51
This line from Child PID 4514 and value is 23
This line from Parent PID 4513 and value is 52
This line from Child PID 4514 and value is 24
This line from Parent PID 4513 and value is 53
This line from Child PID 4514 and value is 25
This line from Parent PID 4513 and value is 54
This line from Child PID 4514 and value is 26
This line from Parent PID 4513 and value is 55
This line from Child PID 4514 and value is 27
This line from Parent PID 4513 and value is 56
This line from Child PID 4514 and value is 28
This line from Parent PID 4513 and value is 57
This line from Child PID 4514 and value is 29
This line from Parent PID 4513 and value is 58
This line from Child PID 4514 and value is 30
This line from Parent PID 4513 and value is 59
This line from Child PID 4514 and value is 31
This line from Parent PID 4513 and value is 60
This line from Child PID 4514 and value is 32
This line from Parent PID 4513 and value is 61
This line from Child PID 4514 and value is 33
This line from Parent PID 4513 and value is 62
This line from Child PID 4514 and value is 34
This line from Parent PID 4513 and value is 63
This line from Child PID 4514 and value is 35
This line from Parent PID 4513 and value is 64
This line from Child PID 4514 and value is 36
This line from Parent PID 4513 and value is 65
This line from Child PID 4514 and value is 37
This line from Parent PID 4513 and value is 66
This line from Child PID 4514 and value is 38
This line from Parent PID 4513 and value is 67
This line from Child PID 4514 and value is 39
This line from Parent PID 4513 and value is 68
This line from Child PID 4514 and value is 40
This line from Parent PID 4513 and value is 69
This line from Child PID 4514 and value is 41
This line from Parent PID 4513 and value is 70
This line from Child PID 4514 and value is 42
This line from Parent PID 4513 and value is 71
This line from Child PID 4514 and value is 43
This line from Parent PID 4513 and value is 72
This line from Child PID 4514 and value is 44
This line from Parent PID 4513 and value is 73
This line from Child PID 4514 and value is 45
This line from Parent PID 4513 and value is 74
This line from Child PID 4514 and value is 46
This line from Parent PID 4513 and value is 75
This line from Child PID 4514 and value is 47
This line from Parent PID 4513 and value is 76
This line from Child PID 4514 and value is 48
This line from Parent PID 4513 and value is 77
This line from Child PID 4514 and value is 49
This line from Parent PID 4513 and value is 78
This line from Child PID 4514 and value is 50
This line from Parent PID 4513 and value is 79
This line from Child PID 4514 and value is 51
This line from Parent PID 4513 and value is 80
This line from Child PID 4514 and value is 52
This line from Parent PID 4513 and value is 81
This line from Child PID 4514 and value is 53
This line from Parent PID 4513 and value is 82
This line from Child PID 4514 and value is 54
This line from Parent PID 4513 and value is 83
This line from Child PID 4514 and value is 55
This line from Parent PID 4513 and value is 84
This line from Child PID 4514 and value is 56
This line from Parent PID 4513 and value is 85
This line from Child PID 4514 and value is 57
This line from Parent PID 4513 and value is 86
This line from Child PID 4514 and value is 58
This line from Parent PID 4513 and value is 87
This line from Child PID 4514 and value is 59
This line from Parent PID 4513 and value is 88
This line from Child PID 4514 and value is 60
This line from Parent PID 4513 and value is 89
This line from Child PID 4514 and value is 61
This line from Parent PID 4513 and value is 90
This line from Parent PID 4513 and value is 91
This line from Parent PID 4513 and value is 92
This line from Parent PID 4513 and value is 93
This line from Parent PID 4513 and value is 94
This line from Parent PID 4513 and value is 95
This line from Child PID 4514 and value is 62
This line from Parent PID 4513 and value is 96
This line from Parent PID 4513 and value is 97
This line from Child PID 4514 and value is 63
This line from Parent PID 4513 and value is 98
This line from Child PID 4514 and value is 64
This line from Parent PID 4513 and value is 99
This line from Child PID 4514 and value is 65
This line from Parent PID 4513 and value is 100
This line from Child PID 4514 and value is 66
This line from Parent PID 4513 and value is 101
This line from Child PID 4514 and value is 67
This line from Parent PID 4513 and value is 102
This line from Child PID 4514 and value is 68
This line from Parent PID 4513 and value is 103
This line from Child PID 4514 and value is 69
This line from Parent PID 4513 and value is 104
This line from Child PID 4514 and value is 70
This line from Parent PID 4513 and value is 105
This line from Child PID 4514 and value is 71
This line from Parent PID 4513 and value is 106
This line from Child PID 4514 and value is 72
This line from Parent PID 4513 and value is 107
This line from Child PID 4514 and value is 73
This line from Parent PID 4513 and value is 108
This line from Child PID 4514 and value is 74
This line from Parent PID 4513 and value is 109
This line from Child PID 4514 and value is 75
This line from Parent PID 4513 and value is 110
This line from Child PID 4514 and value is 76
This line from Parent PID 4513 and value is 111
This line from Child PID 4514 and value is 77
This line from Parent PID 4513 and value is 112
This line from Child PID 4514 and value is 78
This line from Parent PID 4513 and value is 113
This line from Child PID 4514 and value is 79
This line from Parent PID 4513 and value is 114
This line from Child PID 4514 and value is 80
This line from Parent PID 4513 and value is 115
This line from Child PID 4514 and value is 81
This line from Parent PID 4513 and value is 116
This line from Child PID 4514 and value is 82
This line from Parent PID 4513 and value is 117
This line from Child PID 4514 and value is 83
This line from Parent PID 4513 and value is 118
This line from Child PID 4514 and value is 84
This line from Parent PID 4513 and value is 119
This line from Child PID 4514 and value is 85
This line from Parent PID 4513 and value is 120
This line from Child PID 4514 and value is 86
This line from Parent PID 4513 and value is 121
This line from Child PID 4514 and value is 87
This line from Parent PID 4513 and value is 122
This line from Child PID 4514 and value is 88
This line from Parent PID 4513 and value is 123
This line from Child PID 4514 and value is 89
This line from Parent PID 4513 and value is 124
This line from Child PID 4514 and value is 90
This line from Parent PID 4513 and value is 125
This line from Child PID 4514 and value is 91
This line from Parent PID 4513 and value is 126
This line from Child PID 4514 and value is 92
This line from Parent PID 4513 and value is 127
This line from Child PID 4514 and value is 93
This line from Parent PID 4513 and value is 128
This line from Child PID 4514 and value is 94
This line from Parent PID 4513 and value is 129
This line from Child PID 4514 and value is 95
This line from Parent PID 4513 and value is 130
This line from Child PID 4514 and value is 96
This line from Parent PID 4513 and value is 131
This line from Child PID 4514 and value is 97
This line from Parent PID 4513 and value is 132
This line from Child PID 4514 and value is 98
This line from Parent PID 4513 and value is 133
This line from Child PID 4514 and value is 99
This line from Parent PID 4513 and value is 134
This line from Child PID 4514 and value is 100
This line from Parent PID 4513 and value is 135
This line from Child PID 4514 and value is 101
This line from Parent PID 4513 and value is 136
This line from Child PID 4514 and value is 102
This line from Parent PID 4513 and value is 137
This line from Child PID 4514 and value is 103
This line from Parent PID 4513 and value is 138
This line from Child PID 4514 and value is 104
This line from Parent PID 4513 and value is 139
This line from Child PID 4514 and value is 105
This line from Parent PID 4513 and value is 140
This line from Child PID 4514 and value is 106
This line from Parent PID 4513 and value is 141
This line from Child PID 4514 and value is 107
This line from Parent PID 4513 and value is 142
This line from Child PID 4514 and value is 108
This line from Parent PID 4513 and value is 143
This line from Child PID 4514 and value is 109
This line from Parent PID 4513 and value is 144
This line from Child PID 4514 and value is 110
This line from Parent PID 4513 and value is 145
This line from Child PID 4514 and value is 111
This line from Parent PID 4513 and value is 146
This line from Child PID 4514 and value is 112
This line from Parent PID 4513 and value is 147
This line from Child PID 4514 and value is 113
This line from Parent PID 4513 and value is 148
This line from Child PID 4514 and value is 114
This line from Parent PID 4513 and value is 149
This line from Child PID 4514 and value is 115
This line from Parent PID 4513 and value is 150
This line from Child PID 4514 and value is 116
This line from Parent PID 4513 and value is 151
This line from Child PID 4514 and value is 117
This line from Parent PID 4513 and value is 152
This line from Child PID 4514 and value is 118
This line from Parent PID 4513 and value is 153
This line from Child PID 4514 and value is 119
This line from Parent PID 4513 and value is 154
This line from Child PID 4514 and value is 120
This line from Parent PID 4513 and value is 155
This line from Child PID 4514 and value is 121
This line from Parent PID 4513 and value is 156
This line from Child PID 4514 and value is 122
This line from Parent PID 4513 and value is 157
This line from Child PID 4514 and value is 123
This line from Parent PID 4513 and value is 158
This line from Child PID 4514 and value is 124
This line from Parent PID 4513 and value is 159
This line from Child PID 4514 and value is 125
This line from Parent PID 4513 and value is 160
This line from Child PID 4514 and value is 126
This line from Parent PID 4513 and value is 161
This line from Child PID 4514 and value is 127
This line from Parent PID 4513 and value is 162
This line from Child PID 4514 and value is 128
This line from Parent PID 4513 and value is 163
This line from Child PID 4514 and value is 129
This line from Parent PID 4513 and value is 164
This line from Child PID 4514 and value is 130
This line from Parent PID 4513 and value is 165
This line from Child PID 4514 and value is 131
This line from Parent PID 4513 and value is 166
This line from Child PID 4514 and value is 132
This line from Parent PID 4513 and value is 167
This line from Child PID 4514 and value is 133
This line from Parent PID 4513 and value is 168
This line from Child PID 4514 and value is 134
This line from Parent PID 4513 and value is 169
This line from Child PID 4514 and value is 135
This line from Parent PID 4513 and value is 170
This line from Child PID 4514 and value is 136
This line from Parent PID 4513 and value is 171
This line from Child PID 4514 and value is 137
This line from Parent PID 4513 and value is 172
This line from Child PID 4514 and value is 138
This line from Parent PID 4513 and value is 173
This line from Child PID 4514 and value is 139
This line from Parent PID 4513 and value is 174
This line from Child PID 4514 and value is 140
This line from Parent PID 4513 and value is 175
This line from Child PID 4514 and value is 141
This line from Parent PID 4513 and value is 176
This line from Child PID 4514 and value is 142
This line from Parent PID 4513 and value is 177
This line from Child PID 4514 and value is 143
This line from Parent PID 4513 and value is 178
This line from Child PID 4514 and value is 144
This line from Parent PID 4513 and value is 179
This line from Child PID 4514 and value is 145
This line from Parent PID 4513 and value is 180
This line from Child PID 4514 and value is 146
This line from Child PID 4514 and value is 147
This line from Child PID 4514 and value is 148
This line from Child PID 4514 and value is 149
This line from Child PID 4514 and value is 150
This line from Child PID 4514 and value is 151
This line from Child PID 4514 and value is 152
This line from Child PID 4514 and value is 153
This line from Child PID 4514 and value is 154
This line from Child PID 4514 and value is 155
This line from Child PID 4514 and value is 156
This line from Child PID 4514 and value is 157
This line from Child PID 4514 and value is 158
This line from Child PID 4514 and value is 159
This line from Child PID 4514 and value is 160
This line from Child PID 4514 and value is 161
This line from Child PID 4514 and value is 162
This line from Child PID 4514 and value is 163
This line from Child PID 4514 and value is 164
This line from Child PID 4514 and value is 165
This line from Child PID 4514 and value is 166
This line from Child PID 4514 and value is 167
This line from Child PID 4514 and value is 168
This line from Child PID 4514 and value is 169
This line from Child PID 4514 and value is 170
This line from Child PID 4514 and value is 171
This line from Child PID 4514 and value is 172
This line from Child PID 4514 and value is 173
This line from Child PID 4514 and value is 174
This line from Child PID 4514 and value is 175
This line from Child PID 4514 and value is 176
This line from Child PID 4514 and value is 177
This line from Child PID 4514 and value is 178
This line from Child PID 4514 and value is 179
This line from Child PID 4514 and value is 180
This line from Child PID 4514 and value is 181
This line from Child PID 4514 and value is 182
This line from Child PID 4514 and value is 183
This line from Child PID 4514 and value is 184
This line from Child PID 4514 and value is 185
This line from Child PID 4514 and value is 186
This line from Child PID 4514 and value is 187
This line from Child PID 4514 and value is 188
This line from Child PID 4514 and value is 189
This line from Child PID 4514 and value is 190
This line from Child PID 4514 and value is 191
This line from Child PID 4514 and value is 192
This line from Child PID 4514 and value is 193
This line from Child PID 4514 and value is 194
This line from Child PID 4514 and value is 195
This line from Parent PID 4513 and value is 181
This line from Child PID 4514 and value is 196
This line from Parent PID 4513 and value is 182
This line from Child PID 4514 and value is 197
This line from Parent PID 4513 and value is 183
This line from Child PID 4514 and value is 198
This line from Parent PID 4513 and value is 184
This line from Child PID 4514 and value is 199
This line from Parent PID 4513 and value is 185
Child Process is over
This line from Parent PID 4513 and value is 186
This line from Parent PID 4513 and value is 187
This line from Parent PID 4513 and value is 188
This line from Parent PID 4513 and value is 189
This line from Parent PID 4513 and value is 190
This line from Parent PID 4513 and value is 191
This line from Parent PID 4513 and value is 192
This line from Parent PID 4513 and value is 193
This line from Parent PID 4513 and value is 194
This line from Parent PID 4513 and value is 195
This line from Parent PID 4513 and value is 196
This line from Parent PID 4513 and value is 197
This line from Parent PID 4513 and value is 198
This line from Parent PID 4513 and value is 199
Parent Process is over
*/