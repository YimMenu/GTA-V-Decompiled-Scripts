#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<617> Local_82 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_699 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_711[4] = { 0, 0, 0, 0 };
	struct<18> Local_716[32];
	int iLocal_1293 = 0;
	int iLocal_1294 = 0;
	int iLocal_1295[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1301 = 0;
	int iLocal_1302 = 0;
	int iLocal_1303 = 0;
	float fLocal_1304 = 0f;
	int iLocal_1305[4] = { 0, 0, 0, 0 };
	struct<8> Local_1310[24];
	int iLocal_1503 = 0;
	int iLocal_1504 = 0;
	int iLocal_1505 = 0;
	int iLocal_1506[4] = { 0, 0, 0, 0 };
	int iLocal_1511[4] = { 0, 0, 0, 0 };
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	int* iLocal_1518 = NULL;
	struct<42> Local_1519[32];
	struct<104> Local_2864 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = -1;
	var uLocal_2974 = -1;
	var uLocal_2975 = -1;
	var uLocal_2976 = -1;
	var uLocal_2977 = -1;
	var uLocal_2978 = -1;
	var uLocal_2979 = 0;
	var uLocal_2980 = 32;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	int iLocal_3404 = 0;
	int iLocal_3405 = 0;
	int iLocal_3406 = 0;
	int iLocal_3407[4] = { 0, 0, 0, 0 };
	int iLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	int iLocal_3415 = 0;
	int iLocal_3416 = 0;
	struct<2> Local_3417[10];
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	struct<2> Local_3448[5];
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	int iLocal_3463 = 0;
	struct<3> Local_3464 = { 0, 0, 0 } ;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470 = 0;
	int iLocal_3471 = 0;
	int iLocal_3472[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3497 = 0;
	int iLocal_3498[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_3504 = 0;
	var uLocal_3505[4] = { 0, 0, 0, 0 };
	var uLocal_3510[4] = { 0, 0, 0, 0 };
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	fLocal_1304 = -100f;
	iLocal_3405 = -1;
	iLocal_3406 = -1;
	iLocal_3469 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_850(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_839(ScriptParam_0);
	}
	else
	{
		func_793();
	}
	while (true)
	{
		func_792();
		if (func_785())
		{
			func_793();
		}
		else if (func_782(19))
		{
			func_793();
		}
		if (func_781())
		{
			func_793();
		}
		func_757();
		switch (func_756(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if ((func_755() == 1 && Local_82.f_1 != -1) && Local_82.f_2 != -1)
				{
					func_753();
					func_749(129, Local_82.f_1, Local_82.f_2, 0);
					if (Global_2540612.f_5112 == -1)
					{
						if (!func_748())
						{
							Global_2540612.f_5112 = 0;
						}
						else
						{
							Global_2540612.f_5112 = 1;
						}
					}
					func_747(Local_82.f_30[0 /*3*/]);
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 1;
				}
				else if (func_755() == 4)
				{
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_755() == 1)
				{
					func_742();
					func_741();
					func_723();
					func_423();
					func_164();
					func_163();
					func_162();
				}
				else if (func_755() == 4)
				{
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_161(&(Local_82.f_320));
				if (func_160(&(Local_82.f_320)))
				{
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
			
			case 4:
				func_793();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_755())
			{
				case 0:
					if (func_145())
					{
						if (func_140())
						{
							func_137(func_139(129, Local_82.f_1, Local_82.f_2, 0));
							Local_82 = 1;
						}
					}
					break;
				
				case 1:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_82 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	if ((MISC::IS_BIT_SET(Local_82.f_3, 0) && MISC::IS_BIT_SET(Local_82.f_3, 1)) && MISC::IS_BIT_SET(Local_82.f_3, 2))
	{
		if (!MISC::IS_BIT_SET(Local_82.f_3, 11))
		{
			return 0;
		}
	}
	else if (MISC::IS_BIT_SET(Local_82.f_3, 6))
	{
		if (!MISC::IS_BIT_SET(Local_82.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_82.f_241 > 0)
	{
		if (Local_82 != 4)
		{
			if (func_23())
			{
				if (Local_82.f_241 == 3)
				{
					if (func_21())
					{
						if (MISC::IS_BIT_SET(Local_82.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_19(&(Local_82.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_82.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_82.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_716[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((MISC::IS_BIT_SET(Local_82.f_3, 0) && MISC::IS_BIT_SET(Local_82.f_3, 1)) && MISC::IS_BIT_SET(Local_82.f_3, 2)) && !MISC::IS_BIT_SET(Local_82.f_3, 6)) && !MISC::IS_BIT_SET(Local_82.f_3, 14))
				{
					MISC::SET_BIT(&(Local_82.f_3), 15);
				}
				func_7();
			}
			else if (Local_82.f_241 < 3)
			{
				if (func_3())
				{
					MISC::SET_BIT(&(Local_82.f_3), 16);
					MISC::SET_BIT(&(Local_82.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
		{
			if (!func_4(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_6(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_5()) && func_850(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5()
{
	return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_7()
{
	if (Local_82.f_241 != 3)
	{
		func_9();
		func_8(&(Local_82.f_324), 0, 0);
		Local_82.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312603.f_9)
	{
		return;
	}
	func_10();
}

void func_10()
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312603.f_12));
		func_13();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_13()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

bool func_14()
{
	if (!func_15())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312603.f_12));
	func_13();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_15()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_17(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_18()
{
	return Global_1312763;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_21()
{
	int iVar0;
	
	if (!func_22(&(Local_82.f_328)))
	{
		func_20(&(Local_82.f_328), 0, 0);
	}
	else if (func_19(&(Local_82.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar0]))
		{
			if (Local_82.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_22(var uParam0)
{
	return uParam0->f_1;
}

int func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar1]))
		{
			if (!func_31(Local_82.f_48[iVar1]))
			{
				switch (Local_82.f_85[iVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iVar1]), false))
						{
							Local_82.f_85[iVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iVar1]), false) && func_30(iVar1))
						{
							Local_82.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_82.f_241 == 1)
						{
							if (!func_23())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iVar1]), false))
								{
									iVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_82.f_48[iVar1]), false);
									if (func_29(iVar4, 250f))
									{
										Local_82.f_85[iVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_82.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_5())
													{
														iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
														if (!PED::IS_PED_INJURED(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_82.f_110[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_82.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_82.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_82.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_82.f_241 == 1)
						{
							if (func_23())
							{
								Local_82.f_85[iVar1] = 3;
							}
							else if (MISC::IS_BIT_SET(Local_82.f_3, 6))
							{
								Local_82.f_85[iVar1] = 3;
							}
							else if (MISC::IS_BIT_SET(Local_82.f_464, iVar1))
							{
								Local_82.f_85[iVar1] = 1;
								MISC::CLEAR_BIT(&(Local_82.f_464), iVar1);
							}
						}
						else
						{
							Local_82.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_82.f_48[iVar1])))
						{
							func_25(&(Local_82.f_48[iVar1]));
							Local_82.f_85[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_25(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

float func_26(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_5();
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (iVar0 == func_5())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_716[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_716[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_82.f_110[iVar0] != -1)
			{
				iVar3 = Local_82.f_110[iVar0];
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_850(iVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							iVar3 = iVar2;
							if (Local_716[iVar3 /*18*/].f_17 != 1)
							{
								return 0;
							}
						}
						else
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_716[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_716[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (func_26(iParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iParam0]), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_82.f_48[iParam0]), false);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_82.f_463 > 0)
	{
		if (Local_82.f_28 != Local_82.f_463)
		{
			Local_82.f_28 = Local_82.f_463;
		}
	}
	switch (Local_82.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_82.f_28)
			{
				if (Local_82.f_17[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (MISC::IS_BIT_SET(Local_82.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (MISC::IS_BIT_SET(Local_82.f_3, 4))
			{
				Local_82.f_463 = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_82.f_241 = 1;
			}
			else if (MISC::IS_BIT_SET(Local_82.f_3, 4) && func_112() > 1)
			{
				func_111();
				func_115();
				Local_82.f_241 = 1;
			}
			if (!func_748())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[0]))
				{
					if (!func_109(Local_82.f_7[0]))
					{
						Var2.f_2 = 1938563328;
						func_107(Var2, func_108(NETWORK::NET_TO_VEH(Local_82.f_7[0]), 1, 0));
						Local_82.f_241 = 2;
					}
				}
			}
			if (Local_82.f_241 == 0)
			{
				if (!func_22(&(Local_82.f_330)))
				{
					if (!func_22(&(Local_82.f_326)))
					{
						func_20(&(Local_82.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_82.f_326)))
				{
					func_106(&(Local_82.f_330));
				}
				else if (func_19(&(Local_82.f_330), func_105(), 0))
				{
					Var2.f_2 = 1938563328;
					func_107(Var2, func_104(1));
					MISC::SET_BIT(&(Local_82.f_3), 12);
					func_7();
				}
				if (MISC::IS_BIT_SET(Local_82.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_111();
			if (MISC::IS_BIT_SET(Local_82.f_3, 6))
			{
				Local_82.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()
{
	if (!MISC::IS_BIT_SET(Local_82.f_3, 19))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_82.f_3, 6))
	{
		if (!func_22(&(Local_82.f_332)))
		{
			func_20(&(Local_82.f_332), 0, 0);
			MISC::SET_BIT(&(Local_82.f_3), 7);
		}
		else if (func_19(&(Local_82.f_332), func_34(), 0))
		{
			MISC::SET_BIT(&(Local_82.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_748())
	{
		return Global_262145.f_11117;
	}
	return Global_262145.f_11094;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_82.f_278 > 0)
	{
		if (Local_82.f_279 >= Local_82.f_278)
		{
			if (Local_82.f_254 >= Local_82.f_255)
			{
				MISC::SET_BIT(&(Local_82.f_3), 0);
				MISC::SET_BIT(&(Local_82.f_3), 1);
				MISC::SET_BIT(&(Local_82.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_82.f_278 > 0)
		{
			if (Local_82.f_279 >= Local_82.f_278)
			{
				if (Local_82.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_82.f_256[0]);
				}
				if (Local_82.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_82.f_256[1]);
				}
				if (Local_82.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_82.f_256[2]);
				}
				if (Local_82.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_82.f_256[3]);
				}
				if (iVar5 >= Local_82.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar4]))
						{
							if (!func_31(Local_82.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						MISC::SET_BIT(&(Local_82.f_3), 0);
						MISC::SET_BIT(&(Local_82.f_3), 1);
						MISC::SET_BIT(&(Local_82.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar4]))
					{
						if (!func_31(Local_82.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_82.f_347)))
					{
						func_20(&(Local_82.f_347), 0, 0);
					}
					else if (func_19(&(Local_82.f_347), 3000, 0))
					{
						MISC::SET_BIT(&(Local_82.f_3), 0);
						MISC::SET_BIT(&(Local_82.f_3), 1);
						MISC::SET_BIT(&(Local_82.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_82.f_3, 0) || !MISC::IS_BIT_SET(Local_82.f_3, 1))
	{
		if (Local_82.f_249 >= func_103())
		{
			MISC::SET_BIT(&(Local_82.f_3), 0);
			MISC::SET_BIT(&(Local_82.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_82.f_242)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_73[iVar0]))
			{
				if (func_102(iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_82.f_245, iVar0))
					{
						if ((Local_82.f_27 != joaat("hydra") && !func_4(NETWORK::NET_TO_VEH(Local_82.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_82.f_27 == joaat("hydra"))
						{
							MISC::CLEAR_BIT(&(Local_82.f_3), 0);
							if (func_22(&(Local_3448[iVar0 /*2*/])))
							{
								func_106(&(Local_3448[iVar0 /*2*/]));
							}
						}
						else if (func_4(NETWORK::NET_TO_VEH(Local_82.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iVar0])) == joaat("savage"))
						{
							if (MISC::IS_BIT_SET(Local_82.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_82.f_3), 0);
							}
							if (!MISC::IS_BIT_SET(Local_82.f_3, 18))
							{
								func_101(func_104(1), iVar0);
								MISC::SET_BIT(&(Local_82.f_3), 18);
							}
						}
						else if (func_100(iVar0) || !func_748())
						{
							if (MISC::IS_BIT_SET(Local_82.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_82.f_3), 0);
							}
							if (!MISC::IS_BIT_SET(Local_82.f_303, iVar0))
							{
								func_99(func_104(1), iVar0);
								MISC::SET_BIT(&(Local_82.f_303), iVar0);
							}
						}
						else
						{
							func_25(&(Local_82.f_73[iVar0]));
							if (!MISC::IS_BIT_SET(Local_82.f_253, iVar0))
							{
								Local_82.f_251 = (Local_82.f_251 - 1);
								if (func_98() > 1)
								{
									if (Local_82.f_252 > 0)
									{
										Local_82.f_302++;
										func_97(iVar0, func_104(1));
									}
								}
								MISC::SET_BIT(&(Local_82.f_253), iVar0);
							}
							func_106(&(Local_3448[iVar0 /*2*/]));
						}
					}
				}
				else if (func_96(iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_82.f_253, iVar0))
					{
						Local_82.f_251 = (Local_82.f_251 - 1);
						if (func_98() > 1)
						{
							if (Local_82.f_252 > 0)
							{
								Local_82.f_302++;
								func_97(iVar0, func_104(1));
							}
						}
						if (Local_82.f_27 == joaat("hydra"))
						{
							Local_82.f_254++;
						}
						MISC::SET_BIT(&(Local_82.f_253), iVar0);
					}
					if (func_22(&(Local_82.f_336[iVar0 /*2*/])))
					{
						func_106(&(Local_82.f_336[iVar0 /*2*/]));
					}
					func_25(&(Local_82.f_73[iVar0]));
				}
				else
				{
					if (MISC::IS_BIT_SET(Local_82.f_3, 0))
					{
						MISC::CLEAR_BIT(&(Local_82.f_3), 0);
					}
					if (!MISC::IS_BIT_SET(Local_82.f_271, iVar0))
					{
						if (!func_22(&(Local_82.f_336[iVar0 /*2*/])))
						{
							func_20(&(Local_82.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_82.f_336[iVar0 /*2*/]), 5000, 0))
						{
							MISC::SET_BIT(&(Local_82.f_271), iVar0);
						}
						else if (func_19(&(Local_82.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iVar0])) == joaat("savage"))
							{
								if (!MISC::IS_BIT_SET(Local_82.f_3, 18))
								{
									func_101(func_104(1), iVar0);
									MISC::SET_BIT(&(Local_82.f_3), 18);
								}
							}
							else if (func_100(iVar0) || !func_748())
							{
								if (!MISC::IS_BIT_SET(Local_82.f_303, iVar0))
								{
									func_99(func_104(1), iVar0);
									MISC::SET_BIT(&(Local_82.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_82.f_116)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_82.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[(iVar0 * 4 + iVar1)]), false))
						{
							if (!func_94((iVar0 * 4 + iVar1)))
							{
								MISC::CLEAR_BIT(&(Local_82.f_3), 0);
							}
							else if (func_93(iVar6))
							{
								if (!func_19(&(Local_82.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_82.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_92(&(Local_1310[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_82.f_48[(iVar0 * 4 + iVar1)]));
								if (MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar6)], func_90(iVar6)))
								{
									if (Local_82.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_89((iVar0 * 4 + iVar1), func_104(1));
										Local_82.f_254++;
									}
								}
								Local_82.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_82.f_364[iVar6 /*2*/])))
								{
									func_106(&(Local_82.f_364[iVar6 /*2*/]));
								}
								if (MISC::IS_BIT_SET(Local_82.f_275[func_91(iVar6)], func_90(iVar6)))
								{
									MISC::CLEAR_BIT(&(Local_82.f_275[func_91(iVar6)]), func_90(iVar6));
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar6)], func_90(iVar6)))
								{
									if (!func_22(&(Local_82.f_364[iVar6 /*2*/])))
									{
										func_20(&(Local_82.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_82.f_364[iVar6 /*2*/]), 7000, 0))
									{
										MISC::SET_BIT(&(Local_82.f_272[func_91(iVar6)]), func_90(iVar6));
										func_106(&(Local_82.f_364[iVar6 /*2*/]));
									}
								}
								if (!MISC::IS_BIT_SET(Local_82.f_275[func_91(iVar6)], func_90(iVar6)))
								{
									MISC::SET_BIT(&(Local_82.f_275[func_91(iVar6)]), func_90(iVar6));
								}
							}
						}
					}
					else if (MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar6)], func_90(iVar6)) || Local_82.f_27 == joaat("hydra"))
					{
						if (!func_19(&(Local_82.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_82.f_48[(iVar0 * 4 + iVar1)]));
						if (MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar6)], func_90(iVar6)))
						{
							if (Local_82.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_82.f_254++;
								func_89((iVar0 * 4 + iVar1), func_104(1));
							}
						}
						Local_82.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (MISC::IS_BIT_SET(Local_82.f_275[func_91(iVar6)], func_90(iVar6)))
						{
							MISC::CLEAR_BIT(&(Local_82.f_275[func_91(iVar6)]), func_90(iVar6));
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar6)], func_90(iVar6)))
						{
							if (!func_22(&(Local_82.f_364[iVar6 /*2*/])))
							{
								func_20(&(Local_82.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_82.f_364[iVar6 /*2*/]), 7000, 0))
							{
								MISC::SET_BIT(&(Local_82.f_272[func_91(iVar6)]), func_90(iVar6));
								func_106(&(Local_82.f_364[iVar6 /*2*/]));
							}
						}
						if (!MISC::IS_BIT_SET(Local_82.f_275[func_91(iVar6)], func_90(iVar6)))
						{
							MISC::SET_BIT(&(Local_82.f_275[func_91(iVar6)]), func_90(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_82.f_249 < func_103())
			{
				if (func_73(iVar0))
				{
				}
				MISC::CLEAR_BIT(&(Local_82.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_BIT_SET(Local_82.f_3, 2))
	{
		if (Local_82.f_247 >= Global_262145.f_10209)
		{
			MISC::SET_BIT(&(Local_82.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_82.f_243)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iVar1)]), false))
				{
					MISC::CLEAR_BIT(&(Local_82.f_3), 2);
				}
				else if (MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar7)], func_90(iVar7)))
				{
					if (!func_19(&(Local_82.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_82.f_364[iVar7 /*2*/])))
					{
						func_106(&(Local_82.f_364[iVar7 /*2*/]));
					}
					func_25(&(Local_82.f_48[(20 + iVar1)]));
					if (Local_82.f_85[(20 + iVar1)] > 0)
					{
						Local_82.f_254++;
						if (func_98() > 1)
						{
							if (Local_82.f_317 > 0)
							{
								Local_82.f_316++;
							}
						}
						func_89((20 + iVar1), func_104(1));
					}
					Local_82.f_85[(20 + iVar1)] = 0;
					if (MISC::IS_BIT_SET(Local_82.f_275[func_91(iVar7)], func_90(iVar7)))
					{
						MISC::CLEAR_BIT(&(Local_82.f_275[func_91(iVar7)]), func_90(iVar7));
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar7)], func_90(iVar7)))
					{
						if (!func_22(&(Local_82.f_364[iVar7 /*2*/])))
						{
							func_20(&(Local_82.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_82.f_364[iVar7 /*2*/]), 7000, 0))
						{
							MISC::SET_BIT(&(Local_82.f_272[func_91(iVar7)]), func_90(iVar7));
							func_106(&(Local_82.f_364[iVar7 /*2*/]));
						}
					}
					if (!MISC::IS_BIT_SET(Local_82.f_275[func_91(iVar7)], func_90(iVar7)))
					{
						MISC::SET_BIT(&(Local_82.f_275[func_91(iVar7)]), func_90(iVar7));
					}
				}
			}
			if (Local_82.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				MISC::CLEAR_BIT(&(Local_82.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_98() == 1)
	{
		return;
	}
	if (func_98() == 2)
	{
		if (Local_82.f_252 > 0)
		{
			if (Local_82.f_302 > 0)
			{
				if (Local_82.f_302 >= (Local_82.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_82.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_82.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_82.f_279++;
									func_40();
								}
								else if (Local_82.f_318 >= func_39())
								{
									func_47();
									Local_82.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 3)
	{
		if (Local_82.f_317 > 0)
		{
			if (Local_82.f_316 > 0)
			{
				if (Local_82.f_316 >= Local_82.f_317)
				{
					if (Local_82.f_317 >= func_38())
					{
						func_47();
						Local_82.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 4)
	{
		if (Local_82.f_316 > 0)
		{
			if (Local_82.f_302 > 0)
			{
				if (Local_82.f_317 > 0)
				{
					if (Local_82.f_316 >= (Local_82.f_317 - 2))
					{
						if (Local_82.f_252 > 0)
						{
							if (Local_82.f_302 >= (Local_82.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_82.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_82.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_82.f_279++;
												func_40();
											}
											else if (Local_82.f_318 >= func_39())
											{
												func_47();
												Local_82.f_279++;
												func_40();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 5)
	{
		if (Local_82.f_252 > 0)
		{
			if (Local_82.f_302 > 0)
			{
				if (Local_82.f_302 >= (Local_82.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_82.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_82.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_82.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_82.f_305[Local_82.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_82.f_278)
	{
		iVar0 = (iVar0 + Local_82.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_82.f_29 == -1)
	{
		iVar0 = func_46(Local_82.f_27);
		Local_82.f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (func_748())
		{
			if (Local_82.f_27 == joaat("hydra"))
			{
				if (Local_82.f_29 == 2)
				{
					Local_82.f_29 = 4;
				}
			}
			else if (Local_82.f_27 == joaat("savage"))
			{
				if (Local_82.f_29 == 0)
				{
					Local_82.f_29 = 1;
				}
				else if (Local_82.f_29 == 1)
				{
					Local_82.f_29 = 2;
				}
				else if (Local_82.f_29 == 2)
				{
					Local_82.f_29 = 3;
				}
			}
			else if (Local_82.f_27 == joaat("valkyrie"))
			{
				if (Local_82.f_29 == 2)
				{
					Local_82.f_29 = 3;
				}
				else if (Local_82.f_29 == 3)
				{
					Local_82.f_29 = 4;
				}
			}
			else if (Local_82.f_27 == joaat("buzzard"))
			{
				if (Local_82.f_29 == 0)
				{
					Local_82.f_29 = 1;
				}
				else if (Local_82.f_29 == 1)
				{
					Local_82.f_29 = 2;
				}
				else if (Local_82.f_29 == 2)
				{
					Local_82.f_29 = 3;
				}
				else if (Local_82.f_29 == 3)
				{
					Local_82.f_29 = 4;
				}
			}
		}
		else if (Local_82.f_27 == joaat("savage"))
		{
			if (Local_82.f_29 == 0)
			{
				Local_82.f_29 = 1;
			}
			else if (Local_82.f_29 == 1)
			{
				Local_82.f_29 = 2;
			}
			else if (Local_82.f_29 == 2)
			{
				Local_82.f_29 = 3;
			}
		}
	}
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
			Local_82.f_280[0] = 4;
			Local_82.f_291[0] = func_45(4);
			Local_82.f_305[0] = func_44(4);
			Local_82.f_280[1] = 4;
			Local_82.f_291[1] = func_45(4);
			Local_82.f_305[1] = func_44(4);
			Local_82.f_280[2] = 4;
			Local_82.f_291[2] = func_45(4);
			Local_82.f_305[2] = func_44(4);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_278 = 3;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_278 = 4;
			}
			else
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 4;
				Local_82.f_291[4] = func_45(4);
				Local_82.f_305[4] = func_44(4);
				Local_82.f_278 = 5;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 0;
			}
			else
			{
				Local_82.f_1 = 5;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					Local_82.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_82.f_43[0] = 269.414f;
					Local_82.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_82.f_43[1] = 3.5491f;
					Local_82.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_82.f_43[2] = 54.4509f;
					Local_82.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_82.f_43[3] = 178.1948f;
					Local_82.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_82.f_175[0] = 270.8322f;
					Local_82.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_82.f_175[1] = 177.3506f;
					Local_82.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_82.f_175[2] = 318.1089f;
					Local_82.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_82.f_175[3] = 272.0801f;
					Local_82.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_82.f_175[4] = 104.0591f;
					Local_82.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_82.f_148[0] = 296.4225f;
					Local_82.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_82.f_148[1] = 164.9695f;
					Local_82.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_82.f_148[2] = 136.0596f;
					Local_82.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_82.f_148[3] = 116.379f;
					Local_82.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_82.f_148[4] = 86.6586f;
					Local_82.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_82.f_148[5] = 74.6822f;
					Local_82.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_82.f_148[6] = 206.8863f;
					Local_82.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_82.f_148[7] = 267.8581f;
					Local_82.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_82.f_148[8] = 267.5856f;
					Local_82.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_82.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_82.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_82.f_43[0] = 194.8062f;
					Local_82.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_82.f_43[1] = 238.9372f;
					Local_82.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_82.f_43[2] = 16.3071f;
					Local_82.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_82.f_43[3] = 209.9883f;
					Local_82.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_82.f_148[0] = 221.3913f;
					Local_82.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_82.f_148[1] = 246.3415f;
					Local_82.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_82.f_148[2] = 213.4087f;
					Local_82.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_82.f_148[3] = 100.5405f;
					Local_82.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_82.f_148[4] = 289.6017f;
					Local_82.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_82.f_148[5] = 285.6456f;
					Local_82.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_82.f_148[6] = 310.9245f;
					Local_82.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_82.f_148[7] = 46.7117f;
					Local_82.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_82.f_148[8] = 35.9192f;
					Local_82.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_82.f_148[9] = 207.53f;
					Local_82.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_82.f_175[0] = 286.6127f;
					Local_82.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_82.f_175[1] = 124.1428f;
					Local_82.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_82.f_175[2] = 275.0147f;
					Local_82.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_82.f_175[3] = 287.91f;
					Local_82.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_82.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_82.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_82.f_43[0] = 172.439f;
					Local_82.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_82.f_43[1] = 53.9805f;
					Local_82.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_82.f_43[2] = 303.2142f;
					Local_82.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_82.f_43[3] = 218.5974f;
					Local_82.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_82.f_148[0] = 264.5842f;
					Local_82.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_82.f_148[1] = 133.7932f;
					Local_82.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_82.f_148[2] = 205.1215f;
					Local_82.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_82.f_148[3] = 66.1065f;
					Local_82.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_82.f_148[4] = 7.8064f;
					Local_82.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_82.f_148[5] = 358.7563f;
					Local_82.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_82.f_148[6] = 142.1748f;
					Local_82.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_82.f_148[7] = 247.816f;
					Local_82.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_82.f_148[8] = 124.4666f;
					Local_82.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_82.f_148[9] = 348.6588f;
					Local_82.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_82.f_175[0] = 89.8563f;
					Local_82.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_82.f_175[1] = 163.8004f;
					Local_82.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_82.f_175[2] = 270.0754f;
					Local_82.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_82.f_175[3] = 184.9752f;
					Local_82.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_82.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_82.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_82.f_43[0] = 0.5044f;
					Local_82.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_82.f_43[1] = 179.2507f;
					Local_82.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_82.f_43[2] = 0.3066f;
					Local_82.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_82.f_43[3] = 180.2973f;
					Local_82.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_82.f_148[0] = 336.7541f;
					Local_82.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_82.f_148[1] = 6.0929f;
					Local_82.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_82.f_148[2] = 4.2803f;
					Local_82.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_82.f_148[3] = 274.985f;
					Local_82.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_82.f_148[4] = 267.2555f;
					Local_82.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_82.f_148[5] = 6.5529f;
					Local_82.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_82.f_148[6] = 89.1724f;
					Local_82.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_82.f_148[7] = 348.279f;
					Local_82.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_82.f_148[8] = 267.8075f;
					Local_82.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_82.f_148[9] = 0.5237f;
					Local_82.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_82.f_175[0] = 357.9713f;
					Local_82.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_82.f_175[1] = 269.3234f;
					Local_82.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_82.f_175[2] = 269.3055f;
					Local_82.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_82.f_175[3] = 359.1497f;
					Local_82.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_82.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_82.f_240 = joaat("insurgent");
			Local_82.f_280[0] = 2;
			Local_82.f_291[0] = func_45(2);
			Local_82.f_280[1] = 4;
			Local_82.f_291[1] = func_45(4);
			Local_82.f_305[1] = func_44(4);
			Local_82.f_280[2] = 2;
			Local_82.f_291[2] = func_45(2);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_280[3] = 5;
				Local_82.f_291[3] = func_45(5);
				Local_82.f_278 = 4;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 5;
				Local_82.f_291[5] = func_45(5);
				Local_82.f_278 = 6;
			}
			else
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 4;
				Local_82.f_291[5] = func_45(4);
				Local_82.f_305[5] = func_44(4);
				Local_82.f_280[6] = 5;
				Local_82.f_291[6] = func_45(5);
				Local_82.f_278 = 7;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 2;
			}
			else
			{
				Local_82.f_1 = 7;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					Local_82.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_82.f_43[0] = 331.74f;
					Local_82.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_82.f_43[1] = 327.7335f;
					Local_82.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_82.f_43[2] = 149.1604f;
					Local_82.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_82.f_43[3] = 150.6753f;
					Local_82.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_82.f_148[0] = 147.2177f;
					Local_82.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_82.f_148[1] = 103.9461f;
					Local_82.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_82.f_148[2] = 160.822f;
					Local_82.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_82.f_148[3] = 205.8375f;
					Local_82.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_82.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_82.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_82.f_43[0] = 344.2504f;
					Local_82.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_82.f_43[1] = 340.3425f;
					Local_82.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_82.f_43[2] = 351.5693f;
					Local_82.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_82.f_43[3] = 354.2446f;
					Local_82.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_82.f_148[0] = 245.2865f;
					Local_82.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_82.f_148[1] = 74.1185f;
					Local_82.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_82.f_148[2] = 10.2312f;
					Local_82.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_82.f_148[3] = 222.4017f;
					Local_82.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_82.f_148[4] = 150.2763f;
					Local_82.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_82.f_148[5] = 105.4526f;
					Local_82.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_82.f_148[6] = 88.9429f;
					Local_82.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_82.f_148[7] = 51.1733f;
					Local_82.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_82.f_148[8] = 169.7083f;
					Local_82.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_82.f_148[9] = 29.5849f;
					Local_82.f_243 = 3;
					break;
				
				case 2:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_82.f_43[0] = 319.153f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_82.f_43[0] = 319.153f;
						Local_82.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_82.f_43[1] = 316.7079f;
						Local_82.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_82.f_43[2] = 316.9623f;
						Local_82.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_82.f_43[3] = 314.2003f;
					}
					Local_82.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_82.f_148[0] = 326.4292f;
					Local_82.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_82.f_148[1] = 6.8118f;
					Local_82.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_82.f_148[2] = 32.8776f;
					Local_82.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_82.f_148[3] = 8.387f;
					Local_82.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_82.f_148[4] = 291.5504f;
					Local_82.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_82.f_148[5] = 333.1838f;
					Local_82.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_82.f_148[6] = 203.8353f;
					Local_82.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_82.f_148[7] = 32.2329f;
					Local_82.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_82.f_148[8] = 195.4847f;
					Local_82.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_82.f_148[9] = 327.4941f;
					Local_82.f_243 = 4;
					break;
				
				case 3:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_82.f_43[0] = 156.0209f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_82.f_43[0] = 156.0209f;
						Local_82.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_82.f_43[1] = 41.8571f;
						Local_82.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_82.f_43[2] = 305.7411f;
						Local_82.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_82.f_43[3] = 223.2489f;
					}
					if (func_98() == 2 || func_98() == 5)
					{
						Local_82.f_242 = 3;
					}
					else
					{
						Local_82.f_242 = 4;
					}
					Local_82.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_82.f_148[0] = 197.3456f;
					Local_82.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_82.f_148[1] = 140.7211f;
					Local_82.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_82.f_148[2] = 98.9528f;
					Local_82.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_82.f_148[3] = 107.0238f;
					Local_82.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_82.f_148[4] = 202.129f;
					Local_82.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_82.f_148[5] = 230.1207f;
					Local_82.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_82.f_148[6] = 36.194f;
					Local_82.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_82.f_148[7] = 48.2522f;
					Local_82.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_82.f_148[8] = 296.114f;
					Local_82.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_82.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_82.f_240 = joaat("lazer");
			Local_82.f_280[0] = 2;
			Local_82.f_291[0] = func_45(2);
			Local_82.f_280[1] = 2;
			Local_82.f_291[1] = func_45(2);
			Local_82.f_280[2] = 2;
			Local_82.f_291[2] = func_45(2);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_278 = 3;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 2;
				Local_82.f_291[3] = func_45(2);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_278 = 5;
			}
			else
			{
				Local_82.f_280[3] = 2;
				Local_82.f_291[3] = func_45(2);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 2;
				Local_82.f_291[5] = func_45(2);
				Local_82.f_278 = 6;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 1;
			}
			else
			{
				Local_82.f_1 = 6;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_82.f_43[0] = 197.4435f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_82.f_43[0] = 197.4435f;
						Local_82.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_82.f_43[1] = 197.1133f;
						Local_82.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_82.f_43[2] = 272.2065f;
						Local_82.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_82.f_43[3] = 142.941f;
					}
					Local_82.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_82.f_175[0] = 34.149f;
					Local_82.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_82.f_175[1] = -26.0182f;
					Local_82.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_82.f_175[2] = 88.3998f;
					Local_82.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_82.f_175[3] = -141.7949f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_82.f_148[0] = 143.4012f;
					Local_82.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_82.f_148[1] = 212.1136f;
					Local_82.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_82.f_148[2] = 95.8248f;
					Local_82.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_82.f_148[3] = 113.3084f;
					Local_82.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_82.f_148[4] = 260.1329f;
					Local_82.f_242 = 4;
					break;
				
				case 1:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_82.f_43[0] = 131.0993f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_82.f_43[0] = 131.0993f;
						Local_82.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_82.f_43[1] = 127.8408f;
						Local_82.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_82.f_43[2] = 131.1571f;
						Local_82.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_82.f_43[3] = 132.943f;
					}
					Local_82.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_82.f_175[0] = 316.9068f;
					Local_82.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_82.f_175[1] = 142.3075f;
					Local_82.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_82.f_175[2] = 93.1231f;
					Local_82.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_82.f_175[3] = -9.0334f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_82.f_148[0] = 236.3566f;
					Local_82.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_82.f_148[1] = 212.7533f;
					Local_82.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_82.f_148[2] = 299.3619f;
					Local_82.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_82.f_148[3] = 115.7556f;
					Local_82.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_82.f_148[4] = 191.3862f;
					Local_82.f_242 = 4;
					break;
				
				case 2:
					Local_82.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_82.f_43[0] = 176.244f;
					Local_82.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_82.f_175[0] = 93.8354f;
					Local_82.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_82.f_175[1] = 250.5173f;
					Local_82.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_82.f_175[2] = 337.8961f;
					Local_82.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_82.f_175[3] = 142.1369f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_82.f_148[0] = 208.2624f;
					Local_82.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_82.f_148[1] = 349.048f;
					Local_82.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_82.f_148[2] = 69.8162f;
					Local_82.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_82.f_148[3] = 286.6181f;
					Local_82.f_242 = 4;
					Local_82.f_243 = 4;
					break;
				
				case 3:
					Local_82.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_82.f_43[0] = 292.0822f;
					Local_82.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_82.f_43[1] = 43.3907f;
					Local_82.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_82.f_43[2] = 124.2279f;
					Local_82.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_82.f_43[3] = 129.3366f;
					Local_82.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_82.f_175[0] = 137.5025f;
					Local_82.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_82.f_175[1] = 227.9336f;
					Local_82.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_82.f_175[2] = 6.0299f;
					Local_82.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_82.f_175[3] = -87.5596f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_242 = 4;
					Local_82.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_82.f_148[0] = 338.8487f;
					Local_82.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_82.f_148[1] = 272.5443f;
					Local_82.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_82.f_148[2] = 223.0158f;
					Local_82.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_82.f_148[3] = 355.6682f;
					Local_82.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_82.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_82.f_43[0] = 331.7771f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_82.f_43[0] = 331.7771f;
						Local_82.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_82.f_43[1] = 324.1843f;
						Local_82.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_82.f_43[2] = 330.0586f;
						Local_82.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_82.f_43[3] = 329.5413f;
					}
					Local_82.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_82.f_175[0] = 146.9594f;
					Local_82.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_82.f_175[1] = 137.6555f;
					Local_82.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_82.f_175[2] = 114.7478f;
					Local_82.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_82.f_175[3] = -84.6269f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_242 = 4;
					Local_82.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_82.f_148[0] = 153.0449f;
					Local_82.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_82.f_148[1] = 153.1271f;
					Local_82.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_82.f_148[2] = 331.3771f;
					Local_82.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_82.f_148[3] = 183.2579f;
					Local_82.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_82.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_82.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_82.f_43[0] = 184.7817f;
					Local_82.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_82.f_175[0] = 91.7761f;
					Local_82.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_82.f_175[1] = 269.7376f;
					Local_82.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_82.f_175[1] = 211.4614f;
					Local_82.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_82.f_175[3] = 148.9204f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_242 = 4;
					Local_82.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_82.f_148[0] = 113.298f;
					Local_82.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_82.f_148[1] = 353.0292f;
					Local_82.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_82.f_148[2] = 216.1793f;
					Local_82.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_82.f_148[3] = 347.4008f;
					Local_82.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_82.f_240 = joaat("buzzard");
			Local_82.f_280[0] = 2;
			Local_82.f_291[0] = func_45(2);
			Local_82.f_305[0] = func_44(4);
			Local_82.f_280[1] = 4;
			Local_82.f_291[1] = func_45(4);
			Local_82.f_305[1] = func_44(4);
			Local_82.f_280[2] = 2;
			Local_82.f_291[2] = func_45(2);
			Local_82.f_305[2] = func_44(4);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_280[3] = 5;
				Local_82.f_291[3] = func_45(5);
				Local_82.f_278 = 4;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 5;
				Local_82.f_291[5] = func_45(5);
				Local_82.f_278 = 6;
			}
			else
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 4;
				Local_82.f_291[5] = func_45(4);
				Local_82.f_305[5] = func_44(4);
				Local_82.f_280[6] = 5;
				Local_82.f_291[6] = func_45(5);
				Local_82.f_278 = 7;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 3;
			}
			else
			{
				Local_82.f_1 = 8;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_82.f_43[0] = 290.0732f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_82.f_43[0] = 290.0732f;
						Local_82.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_82.f_43[1] = 231.5867f;
						Local_82.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_82.f_43[2] = 49.6234f;
						Local_82.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_82.f_43[3] = 229.3317f;
					}
					Local_82.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_82.f_148[0] = 230.0049f;
					Local_82.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_82.f_148[1] = 147.9421f;
					Local_82.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_82.f_148[2] = 22.3204f;
					Local_82.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_82.f_148[3] = 80.7676f;
					Local_82.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_82.f_148[4] = 162.0507f;
					Local_82.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_82.f_148[5] = 225.9002f;
					Local_82.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_82.f_148[6] = 140.0515f;
					Local_82.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_82.f_148[7] = 90.6966f;
					Local_82.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_82.f_148[8] = 226.042f;
					Local_82.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_82.f_148[9] = 79.7294f;
					Local_82.f_243 = 4;
					break;
				
				case 1:
					Local_82.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_82.f_43[0] = 122.9714f;
					Local_82.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_82.f_43[1] = 118.6931f;
					Local_82.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_82.f_43[2] = 26.5272f;
					Local_82.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_82.f_43[3] = 211.0638f;
					Local_82.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_82.f_148[0] = 203.4084f;
					Local_82.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_82.f_148[1] = 123.7895f;
					Local_82.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_82.f_148[2] = 115.9053f;
					Local_82.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_82.f_148[3] = 330.5807f;
					Local_82.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_82.f_148[4] = 116.311f;
					Local_82.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_82.f_148[5] = 145.855f;
					Local_82.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_82.f_148[6] = 41.353f;
					Local_82.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_82.f_148[7] = 266.0158f;
					Local_82.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_82.f_148[8] = 290.3963f;
					Local_82.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_82.f_148[9] = 243.2495f;
					Local_82.f_243 = 4;
					break;
				
				case 2:
					Local_82.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_82.f_43[0] = 280.2862f;
					Local_82.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_82.f_43[1] = 32.9157f;
					Local_82.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_82.f_43[2] = 106.2954f;
					Local_82.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_82.f_43[3] = 272.3807f;
					Local_82.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_82.f_148[0] = 254.5411f;
					Local_82.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_82.f_148[1] = 183.227f;
					Local_82.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_82.f_148[2] = 338.6039f;
					Local_82.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_82.f_148[3] = 71.8258f;
					Local_82.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_82.f_148[4] = 179.6626f;
					Local_82.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_82.f_148[5] = 272.7491f;
					Local_82.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_82.f_148[6] = 270.8252f;
					Local_82.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_82.f_148[7] = 180.4937f;
					Local_82.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_82.f_148[8] = 107.4297f;
					Local_82.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_82.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_82.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_82.f_43[0] = 117.7311f;
					Local_82.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_82.f_43[1] = 46.3958f;
					Local_82.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_82.f_43[2] = 189.2091f;
					Local_82.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_82.f_43[3] = 50.0778f;
					Local_82.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_82.f_148[0] = 229.5714f;
					Local_82.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_82.f_148[1] = 136.4963f;
					Local_82.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_82.f_148[2] = 88.3908f;
					Local_82.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_82.f_148[3] = 271.8922f;
					Local_82.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_82.f_148[4] = 316.4374f;
					Local_82.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_82.f_148[5] = 246.1521f;
					Local_82.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_82.f_148[6] = 198.8985f;
					Local_82.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_82.f_148[7] = 257.2332f;
					Local_82.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_82.f_148[8] = 104.7808f;
					Local_82.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_82.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_82.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_82.f_43[0] = 306.7662f;
					Local_82.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_82.f_43[1] = 303.3918f;
					Local_82.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_82.f_43[2] = 302.365f;
					Local_82.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_82.f_43[3] = 304.9788f;
					Local_82.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_82.f_148[0] = 30.9787f;
					Local_82.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_82.f_148[1] = 97.3626f;
					Local_82.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_82.f_148[2] = 218.2636f;
					Local_82.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_82.f_148[3] = 257.6324f;
					Local_82.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_82.f_148[4] = 244.6777f;
					Local_82.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_82.f_148[5] = 12.745f;
					Local_82.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_82.f_148[6] = 196.3743f;
					Local_82.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_82.f_148[7] = 283.2556f;
					Local_82.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_82.f_148[8] = 243.4268f;
					Local_82.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_82.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_82.f_240 = joaat("buzzard");
			Local_82.f_280[0] = 2;
			Local_82.f_291[0] = func_45(2);
			Local_82.f_280[1] = 4;
			Local_82.f_291[1] = func_45(4);
			Local_82.f_305[1] = func_44(4);
			Local_82.f_280[2] = 2;
			Local_82.f_291[2] = func_45(2);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_280[3] = 5;
				Local_82.f_291[3] = func_45(5);
				Local_82.f_278 = 4;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 5;
				Local_82.f_291[5] = func_45(5);
				Local_82.f_278 = 6;
			}
			else
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 4;
				Local_82.f_291[5] = func_45(4);
				Local_82.f_305[5] = func_44(4);
				Local_82.f_280[6] = 5;
				Local_82.f_291[6] = func_45(5);
				Local_82.f_278 = 7;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 4;
			}
			else
			{
				Local_82.f_1 = 9;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					Local_82.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_82.f_43[0] = 180.7904f;
					Local_82.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_82.f_43[1] = 269.3001f;
					Local_82.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_82.f_43[2] = 180.39f;
					Local_82.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_82.f_43[3] = 276.7351f;
					Local_82.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_82.f_148[0] = 329.9165f;
					Local_82.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_82.f_148[1] = 264.7702f;
					Local_82.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_82.f_148[2] = 359.5203f;
					Local_82.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_82.f_148[3] = 111.3101f;
					Local_82.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_82.f_148[4] = 176.3058f;
					Local_82.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_82.f_148[5] = 213.1969f;
					Local_82.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_82.f_148[6] = 275.2275f;
					Local_82.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_82.f_148[7] = 220.0349f;
					Local_82.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_82.f_148[8] = 359.15f;
					Local_82.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_82.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_82.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_82.f_43[0] = 247.4892f;
					Local_82.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_82.f_43[1] = 66.129f;
					Local_82.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_82.f_43[2] = 340.0713f;
					Local_82.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_82.f_43[3] = 245.7466f;
					Local_82.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_82.f_148[0] = 252.6017f;
					Local_82.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_82.f_148[1] = 245.262f;
					Local_82.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_82.f_148[2] = 44.7945f;
					Local_82.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_82.f_148[3] = 255.6518f;
					Local_82.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_82.f_148[4] = 124.8391f;
					Local_82.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_82.f_148[5] = 188.9979f;
					Local_82.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_82.f_148[6] = 159.3613f;
					Local_82.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_82.f_148[7] = 5.7762f;
					Local_82.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_82.f_148[8] = 89.3388f;
					Local_82.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_82.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_82.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_82.f_43[0] = 310.6241f;
					Local_82.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_82.f_43[1] = 166.0191f;
					Local_82.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_82.f_43[2] = 343.1715f;
					Local_82.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_82.f_43[3] = 342.4984f;
					Local_82.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_82.f_148[0] = 248.8594f;
					Local_82.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_82.f_148[1] = 195.7758f;
					Local_82.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_82.f_148[2] = 28.6127f;
					Local_82.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_82.f_148[3] = 296.7476f;
					Local_82.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_82.f_148[4] = 240.9422f;
					Local_82.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_82.f_148[5] = 2.473f;
					Local_82.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_82.f_148[6] = 343.6776f;
					Local_82.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_82.f_148[7] = 0.2495f;
					Local_82.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_82.f_148[8] = 72.7889f;
					Local_82.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_82.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_82.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_82.f_43[0] = 351.0324f;
					Local_82.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_82.f_43[1] = 3.5452f;
					Local_82.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_82.f_43[2] = 7.3237f;
					Local_82.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_82.f_43[3] = 332.0844f;
					Local_82.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_82.f_148[0] = 2.6416f;
					Local_82.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_82.f_148[1] = 171.8638f;
					Local_82.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_82.f_148[2] = 257.0332f;
					Local_82.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_82.f_148[3] = 91.7869f;
					Local_82.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_82.f_148[4] = 4.2016f;
					Local_82.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_82.f_148[5] = 339.729f;
					Local_82.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_82.f_148[6] = 359.2033f;
					Local_82.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_82.f_148[7] = 333.6298f;
					Local_82.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_82.f_148[8] = 73.2788f;
					Local_82.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_82.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_82.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_82.f_43[0] = 42.1535f;
					Local_82.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_82.f_43[1] = 315.0261f;
					Local_82.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_82.f_43[2] = 1.2527f;
					Local_82.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_82.f_43[3] = 1.9403f;
					Local_82.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_82.f_148[0] = 352.9674f;
					Local_82.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_82.f_148[1] = 88.8285f;
					Local_82.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_82.f_148[2] = 177.2297f;
					Local_82.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_82.f_148[3] = 273.1487f;
					Local_82.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_82.f_148[4] = 225.394f;
					Local_82.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_82.f_148[5] = 175.5423f;
					Local_82.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_82.f_148[6] = 191.1842f;
					Local_82.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_82.f_148[7] = 269.6831f;
					Local_82.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_82.f_148[8] = 29.4203f;
					Local_82.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_82.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_82.f_255 != -1)
	{
		return Local_82.f_255;
	}
	if (Local_82.f_278 == 0)
	{
		return ((4 * Global_262145.f_10208) + Global_262145.f_10209);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_82.f_278)
			{
				iVar0 = (iVar0 + ((Local_82.f_291[iVar1] * iVar4) + Local_82.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_82.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_82.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_82.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_82.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_748())
			{
				iVar0 = Global_262145.f_11390;
			}
			else
			{
				iVar0 = Global_262145.f_11110;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_748())
			{
				iVar0 = Global_262145.f_11391;
			}
			else
			{
				iVar0 = Global_262145.f_11111;
			}
			break;
		
		case 5:
			if (func_748())
			{
				iVar0 = Global_262145.f_11392;
			}
			else
			{
				iVar0 = Global_262145.f_11112;
			}
			break;
		
		case 4:
			if (func_748())
			{
				iVar0 = Global_262145.f_11389;
			}
			else
			{
				iVar0 = Global_262145.f_11109;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_748())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()
{
	Local_82.f_252 = 0;
	Local_82.f_302 = 0;
	Local_82.f_317 = 0;
	Local_82.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_82.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_82.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_82.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_109(Local_82.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_82.f_318 == 0 || Local_82.f_318 == func_39())
	{
		if (func_98() == 2 || func_98() == 5)
		{
			return 0;
		}
	}
	if (func_98() == 3 || func_98() == 4)
	{
		if (Local_82.f_317 >= func_38())
		{
			iVar0 = Local_82.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_82.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_82.f_317 == 2)
	{
		iVar0 = Local_82.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_82.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_82.f_318 == func_39())
	{
		return 0;
	}
	if (Local_82.f_318 == func_71())
	{
		return 0;
	}
	if (func_98() == 1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_82.f_239) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_82.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_82.f_48[(20 + iParam0)]), 22, Local_82.f_239, Local_82.f_117[iVar3 /*3*/], Local_82.f_148[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), iLocal_1504);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), true, 0f);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, true, true);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, true);
						}
						fVar6 = (30f * func_53());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), true);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), 151, false);
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_82.f_48[(20 + iParam0)]), iVar4, 0);
						iVar7 = (20 + iParam0);
						if (MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar7)], func_90(iVar7)))
						{
							MISC::CLEAR_BIT(&(Local_82.f_272[func_91(iVar7)]), func_90(iVar7));
						}
						Local_82.f_247++;
						Local_82.f_317++;
						Local_82.f_250++;
						Local_82.f_318++;
						func_106(&(Local_82.f_414[iVar7 /*2*/]));
						func_20(&(Local_82.f_414[iVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_82.f_364[iVar7 /*2*/])))
						{
							func_106(&(Local_82.f_364[iVar7 /*2*/]));
						}
						func_20(&(Local_3417[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_82.f_48[iVar7]), true, iLocal_1503);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_748())
	{
		return Global_262145.f_11378;
	}
	return Global_262145.f_11098;
}

float func_53()
{
	if (func_748())
	{
		return Global_262145.f_11380;
	}
	return Global_262145.f_11100;
}

int func_54(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2405074.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_56(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_850(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_850(iVar1, 1, 1))
		{
			if (!func_16(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(iVar1) || !bParam10) && !Global_2426097[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_57(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2426097[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1590682[iVar0 /*883*/].f_854) && !func_60(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_60(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2452015.f_18;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_850(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_67(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2515401 = { func_66(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2515401))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_5();
}

struct<13> func_66(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2515401 = { func_66(iParam0) };
		Global_2515414 = { func_66(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2515401))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2515414))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515331, 35, &Global_2515401);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515366, 35, &Global_2515414);
				if (Global_2515331 == Global_2515366)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!func_69(Local_82.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_3417[iVar0 /*2*/])) || (func_22(&(Local_3417[iVar0 /*2*/])) && func_19(&(Local_3417[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Local_82.f_279 == 0)
	{
		iVar0 = Local_82.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_82.f_279)
		{
			iVar0 = (iVar0 + Local_82.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	switch (Local_82.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_82.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_98() == 3)
	{
		return 0;
	}
	if (Local_82.f_242 < iVar0)
	{
	}
	if (Local_82.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_98() > 1)
	{
		iVar1 = func_88();
		if (Local_82.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_82.f_240) && func_70(Local_82.f_239))
	{
		if (func_74(iParam0))
		{
			if (MISC::IS_BIT_SET(Local_82.f_245, iParam0))
			{
				Local_82.f_249++;
				Local_82.f_251++;
				Local_82.f_252++;
				MISC::CLEAR_BIT(&(Local_82.f_245), iParam0);
				if (!MISC::IS_BIT_SET(Local_82.f_3, 19))
				{
					MISC::SET_BIT(&(Local_82.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_80(iParam0))
		{
			if (func_75(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_109(Local_82.f_73[iParam0]) && MISC::IS_BIT_SET(Local_82.f_245, iParam0))
	{
		if (func_79(Local_82.f_73[iParam0]))
		{
			if (Local_82.f_116 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_82.f_116 = 2;
				}
				else
				{
					Local_82.f_116 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0])) + 1;
					if (Local_82.f_116 > 4)
					{
						Local_82.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_82.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_82.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_82.f_48[(iParam0 * 4 + iVar6)]), Local_82.f_73[iParam0], 22, Local_82.f_239, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), iLocal_1504);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true, 0f);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, false);
							if (func_77())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 3, false);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 0, true);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_262145.f_154)), 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 52, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 53, true);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 151, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 52, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 53, true);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								fVar0 = Global_262145.f_11362;
								fVar1 = Global_262145.f_11363;
								fVar2 = Global_262145.f_11364;
								fVar3 = Global_262145.f_11365;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 52, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 53, true);
								fVar0 = Global_262145.f_11362;
								fVar1 = Global_262145.f_11363;
								fVar2 = Global_262145.f_11364;
								fVar3 = Global_262145.f_11365;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar7)], func_90(iVar7)))
							{
								MISC::CLEAR_BIT(&(Local_82.f_272[func_91(iVar7)]), func_90(iVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), true, iLocal_1503);
							Local_82.f_250++;
							func_106(&(Local_82.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_82.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_82.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_106(&(Local_82.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_82.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_82.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[(iParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_82.f_73[iParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()
{
	if (func_748())
	{
		return Global_262145.f_11381;
	}
	return Global_262145.f_11101;
}

int func_77()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_79(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_80(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	int iVar11;
	struct<3> Var12;
	var uVar15;
	bool bVar16;
	
	iVar0 = func_98();
	Local_82.f_240 = func_43(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_82.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_82.f_240) && !MISC::IS_BIT_SET(Local_82.f_245, iParam0))
		{
			fVar10 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_82.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_240))
			{
				fVar9 = 300f;
			}
			else
			{
				fVar9 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_240))
			{
				fVar10 = 800f;
			}
			iVar11 = 0;
			while (iVar11 < Local_82.f_242)
			{
				if (func_87(iVar11))
				{
					func_86(Local_82.f_240, iVar11, &Var12, &uVar15);
					if (!func_69(Var12, 0f, 0f, 0f, 0))
					{
						if (func_55(Var12, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar10, 0, -1, 1, fVar9, 0, 0, 0, 0))
						{
							Var4 = { Var12 };
							fVar7 = uVar15;
							iVar8 = 1;
							func_8(&(Local_82.f_186[iVar11 /*2*/]), 0, 0);
							iVar11 = Local_82.f_242;
						}
					}
				}
				iVar11++;
			}
			if (iVar8 == 1)
			{
				bVar16 = true;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_82.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_240))
				{
					bVar16 = false;
				}
				if (func_85(iParam0))
				{
					if (func_82(&(Local_82.f_73[iParam0]), Local_82.f_240, Var4, fVar7, 1, 1, 1, 0, bVar16, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), 2);
						VEHICLE::_0x2311DD7159F00582(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), true);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), true, true, false);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), false);
						VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_82.f_240))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]));
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), false);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_240))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), 3);
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), true);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), 30f);
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), true);
							VEHICLE::_0xC361AA040D6637A8(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), true);
							fVar1 = 500f;
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), SYSTEM::ROUND(fVar1), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), true, 1);
						}
						if (func_98() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), SYSTEM::ROUND(fVar1), 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), SYSTEM::ROUND(fVar1));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), false);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), fVar1);
							VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), fVar1);
						}
						if (func_22(&(Local_82.f_336[iParam0 /*2*/])))
						{
							func_106(&(Local_82.f_336[iParam0 /*2*/]));
						}
						MISC::CLEAR_BIT(&(Local_82.f_253), iParam0);
						MISC::SET_BIT(&(Local_82.f_245), iParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), true, iLocal_1503);
						if (MISC::IS_BIT_SET(Local_82.f_271, iParam0))
						{
							MISC::CLEAR_BIT(&(Local_82.f_271), iParam0);
						}
						if (MISC::IS_BIT_SET(Local_82.f_303, iParam0))
						{
							MISC::CLEAR_BIT(&(Local_82.f_303), iParam0);
						}
						if (Local_82.f_240 == joaat("hydra") || Local_82.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()
{
	if (func_748())
	{
		return Global_262145.f_11379;
	}
	return Global_262145.f_11099;
}

int func_82(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2540612.f_6583 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_83(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_84(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam5 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { Param0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = fParam3;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam4;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam5;
	}
}

int func_84(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (MISC::IS_BIT_SET(Local_716[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
			if (!func_69(Local_82.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_82.f_159[iParam1 /*3*/] };
				*uParam3 = Local_82.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_82.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_82.f_159[iParam1 /*3*/] };
				*uParam3 = Local_82.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_82.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_82.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_82.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_87(int iParam0)
{
	if (Local_82.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_82.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_82.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_19(&(Local_82.f_207[iParam0 /*2*/]), Local_82.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_22(&(Local_82.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_82.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_88()
{
	return Local_82.f_291[Local_82.f_279];
}

void func_89(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 671199305;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

int func_90(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_91(iParam0) * 31);
}

int func_91(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

void func_92(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_93(int iParam0)
{
	if (Local_82.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_82.f_272[func_91(iParam0)], func_90(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_94(int iParam0)
{
	return func_95(iParam0);
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iParam0]), false))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_82.f_48[iParam0]), false);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (MISC::IS_BIT_SET(Local_82.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (MISC::IS_BIT_SET(Local_82.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_82.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_82.f_27 == joaat("hydra"))
		{
			if (MISC::IS_BIT_SET(Local_82.f_271, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 379276800;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

int func_98()
{
	return Local_82.f_280[Local_82.f_279];
}

void func_99(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -1200143999;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_100(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), false))
			{
				if (NETWORK::_NETWORK_GET_DESTROYER_OF_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (NETWORK::_0x83660B734994124D(iVar2, NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -576874683;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

bool func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), false);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_73[iParam0]), false);
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_82.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_82.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_104(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_850(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_105()
{
	if (func_748())
	{
		return Global_262145.f_11372;
	}
	return Global_262145.f_11095;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_107(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = -1949011582;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_850(iVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), iParam0, false))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
				{
					if (iVar2 != PLAYER::PLAYER_ID() || iParam1)
					{
						MISC::SET_BIT(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_109(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_110(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_110(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_111()
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(Local_82.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_3461))
	{
		func_20(&uLocal_3461, 0, 0);
		return;
	}
	if (!func_19(&uLocal_3461, 5000, 0))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_25(&(Local_82.f_7[iVar1]));
		}
		iVar1++;
	}
	MISC::SET_BIT(&(Local_82.f_3), 20);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_82.f_12 != 0)
	{
		return Local_82.f_12;
	}
	if (!func_748())
	{
		Local_82.f_12 = 1;
		return Local_82.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (!func_16(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_82.f_12 = 2;
	}
	else if (iVar1 < func_113())
	{
		Local_82.f_12 = 3;
	}
	else
	{
		Local_82.f_12 = 4;
	}
	return Local_82.f_12;
}

int func_113()
{
	return Global_262145.f_11120;
}

int func_114()
{
	return Global_262145.f_11119;
}

void func_115()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_82.f_256[iVar0], Local_82.f_22[iVar0]);
		}
		else if (Local_82.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_118(iVar0);
			if (Local_716[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_716[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_716[iVar0 /*18*/].f_9;
					func_117(uVar1, Local_716[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(-1, -1, iVar2);
			}
		}
		else if (Local_82.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_82.f_465[iVar1 /*4*/].f_1 > Local_82.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_82.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_82.f_465[iVar1 /*4*/];
					uVar4 = Local_82.f_465[iVar1 /*4*/].f_2;
					Local_82.f_465[iVar1 /*4*/].f_1 = Local_82.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_82.f_465[iVar1 /*4*/] = Local_82.f_465[(iVar1 - 1) /*4*/];
					Local_82.f_465[iVar1 /*4*/].f_2 = Local_82.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_82.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_82.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_82.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	Local_82.f_465[iParam2 /*4*/] = iParam0;
	Local_82.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_82.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)
{
	Local_82.f_465[iParam0 /*4*/] = -1;
	Local_82.f_465[iParam0 /*4*/].f_2 = -1;
	Local_82.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_119()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_82.f_594[iVar1 /*4*/].f_1 > Local_82.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_82.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_82.f_594[iVar1 /*4*/];
					uVar4 = Local_82.f_594[iVar1 /*4*/].f_2;
					Local_82.f_594[iVar1 /*4*/].f_1 = Local_82.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_82.f_594[iVar1 /*4*/] = Local_82.f_594[(iVar1 - 1) /*4*/];
					Local_82.f_594[iVar1 /*4*/].f_2 = Local_82.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_82.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_82.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_82.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	Local_82.f_594[iParam0 /*4*/] = iParam0;
	Local_82.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_82.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)
{
	Local_82.f_594[iParam0 /*4*/] = -1;
	Local_82.f_594[iParam0 /*4*/].f_1 = -1;
	Local_82.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_122()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_123(iVar1))
		{
			func_106(&(Local_82.f_5));
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_82.f_13, iVar1))
		{
			func_106(&(Local_82.f_5));
			return 0;
		}
		else if (func_4(NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_106(&(Local_82.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_22(&(Local_82.f_5)))
	{
		func_20(&(Local_82.f_5), 0, 0);
	}
	else if (func_19(&(Local_82.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0)
{
	if (func_109(Local_82.f_7[iParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), -1, false) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_748())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
		{
			if (func_109(Local_82.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_82.f_12)
	{
		Local_82.f_12 = iVar1;
	}
	if (Local_82.f_12 <= 1)
	{
		MISC::CLEAR_BIT(&(Local_82.f_3), 8);
		if (!func_109(Local_82.f_7[0]))
		{
			if (func_109(Local_82.f_7[iVar2]))
			{
				func_25(&(Local_82.f_7[0]));
				Local_82.f_7[0] = Local_82.f_7[iVar2];
			}
		}
	}
}

void func_125()
{
	bool bVar0;
	
	if (!func_748())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_82.f_15 != false;
			}
			else
			{
				bVar0 = Local_82.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = MISC::IS_BIT_SET(Local_82.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_82.f_413 == -1)
		{
			Local_82.f_413 = func_127();
		}
		if (!func_22(&(Local_82.f_326)))
		{
			func_20(&(Local_82.f_326), 0, 0);
		}
		else if (!MISC::IS_BIT_SET(Local_82.f_3, 4))
		{
			if ((Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0)) < 0)
			{
				MISC::SET_BIT(&(Local_82.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_82.f_326)))
	{
		func_106(&(Local_82.f_326));
		Local_82.f_413 = (Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0));
	}
}

int func_126(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_127()
{
	if (func_748())
	{
		return Global_262145.f_11382;
	}
	return Global_262145.f_11102;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_1506[iVar0] = 0;
		iLocal_711[iVar0] = -2;
		iLocal_1511[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_82 != 4)
	{
		iLocal_1301 = 0;
		while (iLocal_1301 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1301)))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1301));
				if (!func_16(iVar7, 0))
				{
					if (Local_716[iLocal_1301 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_135(iLocal_1301, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_134(iLocal_1301, iVar0);
						iVar0++;
					}
					if (!MISC::IS_BIT_SET(Local_82.f_3, 14))
					{
						if (!MISC::IS_BIT_SET(Local_716[iLocal_1301 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_133(iLocal_1301, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!MISC::IS_BIT_SET(Local_716[iLocal_1301 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_131(iLocal_1301, iVar7);
					if (func_850(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_82.f_17[iVar0] == func_5())
							{
								if (MISC::IS_BIT_SET(Local_716[iLocal_1301 /*18*/].f_2, (0 + iVar0)))
								{
									Local_82.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_82.f_17[iVar0] == iVar7 && Local_82.f_241 == 0)
							{
								if (!MISC::IS_BIT_SET(Local_716[iLocal_1301 /*18*/].f_2, (0 + iVar0)))
								{
									Local_82.f_17[iVar0] = func_5();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_1301++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_82.f_13, iVar0))
		{
			if (iLocal_1506[iVar0] == func_130() && func_123(iVar0))
			{
				MISC::SET_BIT(&(Local_82.f_13), iVar0);
			}
			if (!MISC::IS_BIT_SET(Local_82.f_14, iVar0))
			{
				if (iLocal_1506[iVar0] >= 1 && func_123(iVar0))
				{
					MISC::SET_BIT(&(Local_82.f_14), iVar0);
				}
			}
			else if (iLocal_1506[iVar0] == 0 || !func_123(iVar0))
			{
				if (MISC::IS_BIT_SET(Local_82.f_14, iVar0))
				{
					MISC::CLEAR_BIT(&(Local_82.f_14), iVar0);
					if (iLocal_1506[iVar0] == 0)
					{
						if (Local_82.f_241 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
							{
								func_25(&(Local_82.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_82.f_15, iVar0) && func_123(iVar0))
			{
				if (iLocal_1506[iVar0] >= 2)
				{
					MISC::SET_BIT(&(Local_82.f_15), iVar0);
				}
			}
			else if (iLocal_1506[iVar0] <= 1 || !func_123(iVar0))
			{
				if (MISC::IS_BIT_SET(Local_82.f_15, iVar0))
				{
					MISC::CLEAR_BIT(&(Local_82.f_15), iVar0);
				}
			}
		}
		else if (iLocal_1506[iVar0] < func_130() || !func_123(iVar0))
		{
			MISC::CLEAR_BIT(&(Local_82.f_13), iVar0);
		}
		if (Local_82.f_266[iVar0] != iLocal_1506[iVar0])
		{
			Local_82.f_266[iVar0] = iLocal_1506[iVar0];
			if (Local_82.f_241 == 1)
			{
				if (Local_82.f_266[iVar0] == 0)
				{
					if (!MISC::IS_BIT_SET(Local_82.f_616, iVar0))
					{
						MISC::SET_BIT(&(Local_82.f_616), iVar0);
					}
				}
			}
		}
		if (Local_82.f_241 == 0)
		{
			if (func_748())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]));
					if (iLocal_1506[iVar0] >= func_129(iVar3) && func_123(iVar0))
					{
						iLocal_1511[iVar0] = 1;
					}
				}
			}
		}
		if (Local_82.f_241 == 1)
		{
			if (Local_82.f_256[iVar0] != iLocal_711[iVar0])
			{
				if (iLocal_711[iVar0] >= 0)
				{
					if (iLocal_711[iVar0] > Local_82.f_256[iVar0])
					{
						Local_82.f_256[iVar0] = iLocal_711[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_82.f_256[iVar0] - iLocal_711[iVar0]);
						if (Local_82.f_261[iVar0] != iVar8)
						{
							Local_82.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!MISC::IS_BIT_SET(Local_82.f_3, 11))
	{
		if (!bVar5)
		{
			MISC::SET_BIT(&(Local_82.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_82.f_241 == 0)
	{
		if (func_748())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_1511[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!MISC::IS_BIT_SET(Local_82.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					MISC::SET_BIT(&(Local_82.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				MISC::CLEAR_BIT(&(Local_82.f_3), 9);
			}
		}
	}
	if (Local_82.f_241 == 0)
	{
		if (!func_22(&(Local_82.f_360)))
		{
			func_20(&(Local_82.f_360), 0, 0);
		}
		else if (func_19(&(Local_82.f_360), 5000, 0))
		{
			if (!MISC::IS_BIT_SET(Local_82.f_3, 14))
			{
				if (func_748())
				{
					if (Local_82.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							MISC::SET_BIT(&(Local_82.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_82.f_3), 14);
					}
				}
				else if (Local_82.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_82.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					MISC::SET_BIT(&(Local_82.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_82.f_614)
	{
		Local_82.f_614 = iVar1;
	}
	else
	{
		Local_82.f_613 = (Local_82.f_614 - iVar1);
	}
	if (iVar2 > Local_82.f_615)
	{
		Local_82.f_615 = iVar2;
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_130()
{
	return Local_82.f_28;
}

void func_131(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Local_82.f_16, iParam0))
	{
		if (MISC::IS_BIT_SET(Local_716[iParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 1);
			MISC::SET_BIT(&(Local_82.f_16), iParam0);
		}
		else if (Local_82.f_241 >= 1)
		{
			if (Local_716[iParam0 /*18*/].f_1 == 0)
			{
				func_132(iParam1, 1);
				MISC::SET_BIT(&(Local_82.f_16), iParam0);
			}
			else if (Local_716[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar1]))
					{
						if (func_109(Local_82.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam1), NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), false))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(iParam1, 1);
					MISC::SET_BIT(&(Local_82.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_82.f_241 < 1)
	{
		if (!MISC::IS_BIT_SET(Local_716[iParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 0);
			MISC::CLEAR_BIT(&(Local_82.f_16), iParam0);
		}
	}
}

void func_132(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), iParam0, bParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_82.f_272[func_91(iParam1)], func_90(iParam1)))
	{
		if (MISC::IS_BIT_SET(Local_716[iParam0 /*18*/].f_3[func_91(iParam1)], func_90(iParam1)))
		{
			MISC::SET_BIT(&(Local_82.f_272[func_91(iParam1)]), func_90(iParam1));
			if (Local_716[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iParam1]))
			{
				if (!func_31(Local_82.f_48[iParam1]))
				{
					if (!func_94(iParam1))
					{
						MISC::CLEAR_BIT(&(Local_82.f_272[func_91(iParam1)]), func_90(iParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iParam1]), false))
					{
						if (iParam1 >= 20)
						{
							MISC::CLEAR_BIT(&(Local_82.f_272[func_91(iParam1)]), func_90(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_82.f_271, iParam1))
	{
		if (MISC::IS_BIT_SET(Local_716[iParam0 /*18*/].f_6, iParam1))
		{
			MISC::SET_BIT(&(Local_82.f_271), iParam1);
			if (Local_716[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (MISC::IS_BIT_SET(Local_82.f_303, iParam1))
			{
				if (!MISC::IS_BIT_SET(Local_82.f_253, iParam1))
				{
					Local_82.f_251 = (Local_82.f_251 - 1);
					if (func_98() > 1)
					{
						if (Local_82.f_252 > 0)
						{
							Local_82.f_302++;
							func_97(iParam1, func_104(1));
						}
					}
					MISC::SET_BIT(&(Local_82.f_253), iParam1);
				}
				if (func_22(&(Local_82.f_336[iParam1 /*2*/])))
				{
					func_106(&(Local_82.f_336[iParam1 /*2*/]));
				}
				func_25(&(Local_82.f_73[iParam1]));
				MISC::CLEAR_BIT(&(Local_82.f_303), iParam1);
			}
		}
	}
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(Local_716[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_1506[iParam1]++;
		if (iLocal_711[iParam1] < 0)
		{
			if (Local_716[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_82.f_261[iParam1] > 0)
				{
					iLocal_711[iParam1] = Local_82.f_261[iParam1];
				}
				else
				{
					iLocal_711[iParam1] = 0;
				}
			}
		}
		iLocal_711[iParam1] = (iLocal_711[iParam1] + Local_716[iParam0 /*18*/].f_8);
		if (Local_82.f_241 >= 1)
		{
			if (Local_82.f_22[iParam1] == func_5())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iParam1]))
				{
					if (func_109(Local_82.f_7[iParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[iParam1]), -1, false);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == iParam2)
								{
									Local_82.f_22[iParam1] = iParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_82.f_319, iParam1))
		{
			if (Local_716[iParam0 /*18*/].f_10 > -1)
			{
				MISC::SET_BIT(&(Local_82.f_319), iParam1);
				func_20(&(Local_82.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_82.f_22[iParam1] != func_5())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_82.f_22[iParam1]))
		{
			iVar0 = func_136(iParam1, 1);
			if (iVar0 != func_5())
			{
				Local_82.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_82.f_22[iParam1] = func_5();
			}
		}
		else if (func_16(Local_82.f_22[iParam1], 0))
		{
			Local_82.f_22[iParam1] = func_5();
			func_115();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_82.f_22[iParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (func_109(Local_82.f_7[iParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_82.f_7[iParam1]), false))
					{
						iVar0 = func_136(iParam1, 1);
						if (iVar0 != func_5())
						{
							Local_82.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_82.f_22[iParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_5();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (iVar0 == func_5())
				{
					if (Local_716[iVar3 /*18*/].f_17 == 1)
					{
						if (MISC::IS_BIT_SET(Local_716[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
							}
							else
							{
								iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
								if (func_109(Local_82.f_7[iParam0]))
								{
									iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), false))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_137(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.x = -438498801;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar3 = func_138(1, 1);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iVar3);
	}
}

var func_138(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_850(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
		case 236:
		case 150:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_140()
{
	func_112();
	if (func_70(Local_82.f_27))
	{
		if (func_141())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_82.f_27);
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_82.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iVar0]))
		{
			if (func_70(Local_82.f_27))
			{
				if (!MISC::IS_BIT_SET(Local_82.f_244, iVar0))
				{
					MISC::CLEAR_AREA(Local_82.f_30[iVar0 /*3*/], 5f, true, false, false, true);
					MISC::SET_BIT(&(Local_82.f_244), iVar0);
				}
				if (func_82(&(Local_82.f_7[iVar0]), Local_82.f_27, Local_82.f_30[iVar0 /*3*/], Local_82.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_82.f_7[iVar0]), true, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), 1);
					VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true, true, false);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true);
					VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_82.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_27))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_82.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_27))
						{
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_82.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_SET_HELI_MAIN_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), fVar1);
							VEHICLE::_SET_HELI_TAIL_ROTOR_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_82.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_144());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_143());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true);
					if (Local_82.f_27 == joaat("savage"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), "MPBitset", iVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false, iLocal_1503);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false, Global_1574973[iVar3]);
						iVar3++;
					}
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false, false);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false);
					VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_82.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_142()
{
	if (func_748())
	{
		return Global_262145.f_11376;
	}
	return Global_262145.f_11115;
}

var func_143()
{
	if (func_748())
	{
		return Global_262145.f_11377;
	}
	return Global_262145.f_11116;
}

var func_144()
{
	if (func_748())
	{
		return Global_262145.f_11375;
	}
	return Global_262145.f_11114;
}

bool func_145()
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_82.f_362)))
	{
		func_20(&(Local_82.f_362), 0, 0);
		return 0;
	}
	else if (!func_19(&(Local_82.f_362), 3000, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Local_82.f_3, 10))
	{
		if (func_159(&iVar0))
		{
			if (iVar0 < func_158())
			{
				MISC::SET_BIT(&(Local_82.f_3), 10);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11370) && !Global_262145.f_11368) || Global_262145.f_11369)
				{
					MISC::SET_BIT(&(Local_82.f_3), 8);
					MISC::SET_BIT(&(Local_82.f_3), 10);
				}
				else
				{
					MISC::SET_BIT(&(Local_82.f_3), 10);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_82.f_3, 10))
	{
		if (Local_82.f_12 == 0)
		{
			func_112();
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_82.f_3, 13))
		{
			if (func_154())
			{
				if (!func_152(129, Local_82.f_1, Local_82.f_2, 0))
				{
					if (func_146())
					{
						MISC::SET_BIT(&(Local_82.f_3), 13);
					}
					else
					{
						Local_82.f_29 = -1;
					}
				}
				else
				{
					Local_82.f_29 = -1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Local_82.f_3, 13);
}

int func_146()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_147(Local_82.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_82.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_147(struct<3> Param0, float fParam3)
{
	int iVar0[32];
	int iVar33;
	int iVar34;
	bool bVar35;
	struct<3> Var36;
	struct<3> Var39;
	int iVar42;
	struct<10> Var43;
	int iVar53;
	
	if (Global_2424567.f_327.f_225 == 0)
	{
		return 0;
	}
	iVar33 = 0;
	iVar34 = 0;
	bVar35 = true;
	while (bVar35)
	{
		if (Global_2424567.f_327[iVar34 /*7*/] != -1)
		{
			iVar0[iVar33] = MISC::GET_HASH_KEY(&(Global_2424567.f_327[iVar34 /*7*/].f_1));
			iVar33++;
			if (iVar33 == Global_2424567.f_327.f_225)
			{
				bVar35 = false;
			}
		}
		iVar34++;
		if (iVar34 >= 32)
		{
			bVar35 = false;
		}
	}
	if (iVar33 == 0)
	{
		return 0;
	}
	Var36 = { 0f, 0f, 0f };
	Var39 = { Param0 };
	iVar42 = 0;
	Var43.f_1 = -1;
	Var43.f_2 = -1;
	Var43.f_9 = -1;
	iVar53 = 0;
	iVar34 = 0;
	while (iVar34 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar34 /*26*/].f_12, 11))
		{
			Var36 = { Global_2359721[iVar34 /*26*/].f_3 };
			Var39.f_2 = Var36.f_2;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var36, Var39, true) < fParam3)
			{
				Var43 = { Global_2359721[iVar34 /*26*/].f_15 };
				iVar53 = func_148(&Var43);
				iVar42 = 0;
				while (iVar42 < iVar33)
				{
					if (iVar53 == iVar0[iVar42])
					{
						return 1;
					}
					iVar42++;
				}
			}
		}
		iVar34++;
	}
	return 0;
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_149(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_149(var uParam0)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_151(uParam0->f_1))
	{
		if (func_150(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (MISC::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (MISC::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (MISC::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_150(var uParam0)
{
	if (Global_2398103)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_151(int iParam0)
{
	return iParam0 == 9999;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_153(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8113)
		{
			if (Global_2508417.f_136[iVar0 /*2*/] == iVar1 && Global_2508417.f_136[iVar0 /*2*/].f_1 == func_139(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_154()
{
	if (func_156(&(Local_82.f_27)))
	{
		if (Local_82.f_4)
		{
			func_155();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_155()
{
	Global_1673530 = 1;
	if (!MISC::IS_BIT_SET(Global_2549706, 0))
	{
		MISC::SET_BIT(&Global_2549706, 0);
		MISC::SET_BIT(&Global_1673531, 0);
	}
	if (!MISC::IS_BIT_SET(Global_2549706, 1))
	{
		MISC::SET_BIT(&Global_2549706, 1);
		MISC::SET_BIT(&Global_1673531, 1);
	}
	if (!MISC::IS_BIT_SET(Global_2549706, 5))
	{
		MISC::SET_BIT(&Global_2549706, 5);
		MISC::SET_BIT(&Global_1673531, 5);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 0, false, false);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
	{
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 0, false, false);
	}
}

int func_156(var uParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_157(joaat("rhino")))
			{
				Local_82.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_157(joaat("hydra")))
			{
				Local_82.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_82.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_157(joaat("savage")))
			{
				Local_82.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_82.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_157(joaat("valkyrie")))
			{
				Local_82.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_157(joaat("buzzard")))
			{
				Local_82.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_157(int iParam0)
{
	if (!func_748())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11104;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11106;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11105;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11108;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11107;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11384;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11386;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11385;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11388;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11387;
				break;
			}
	}
	return 0;
}

int func_158()
{
	return Global_262145.f_11118;
}

int func_159(var uParam0)
{
	int iVar0;
	
	if (!func_22(&(Local_82.f_334)))
	{
		func_20(&(Local_82.f_334), 0, 0);
	}
	else if (func_19(&(Local_82.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!func_16(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 0))
				{
					if (!MISC::IS_BIT_SET(Local_716[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_160(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_161(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_162()
{
	struct<3> Var0;
	
	if (iLocal_3470 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iLocal_3470]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_7[iLocal_3470]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iLocal_3470]), false) };
				if (Var0.f_2 < -25f)
				{
					func_25(&(Local_82.f_7[iLocal_3470]));
				}
			}
		}
	}
	iLocal_3470++;
	if (iLocal_3470 >= 4)
	{
		iLocal_3470 = 0;
	}
}

void func_163()
{
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_1294, 13))
		{
			MISC::SET_BIT(&iLocal_1294, 13);
			NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_1294, 13))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				MISC::CLEAR_BIT(&iLocal_1294, 13);
			}
		}
	}
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (func_421())
	{
		func_272(0);
	}
	iVar0 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_747;
	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_5())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
				iVar2 = iVar1;
				iVar3 = Local_716[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_199();
						func_196(iVar2);
						break;
					
					case 1:
						func_195();
						func_169();
						func_165(1);
						break;
					
					case 2:
						func_165(0);
						break;
					}
				}
			}
	}
}

void func_165(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_166(Local_82.f_48[iVar0], &(Local_1310[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_166(Local_82.f_48[iVar0], &(Local_1310[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1);
		}
		if (HUD::DOES_BLIP_EXIST(Local_1310[iVar0 /*8*/]))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1310[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_1310[iVar0 /*8*/], true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_1310[iVar0 /*8*/].f_1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_1310[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_1310[iVar0 /*8*/].f_1, true);
			}
		}
		if (Local_82.f_27 != joaat("hydra"))
		{
			if (MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar0)], func_90(iVar0)) || MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar0)], func_90(iVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar0]))
				{
					func_92(&(Local_1310[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (MISC::IS_BIT_SET(Local_82.f_271, iVar1) || MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar0]))
				{
					func_92(&(Local_1310[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_166(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_168())
		{
			Global_2440277 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_167(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2440277, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_167(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2440277, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_92(iParam1);
	}
}

int func_167(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, true, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_168()
{
	return Global_1312872;
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar9;
	int iVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	
	iVar2 = (func_34() - func_126(&(Local_82.f_332), 0, 0));
	if (iLocal_3416 == 0)
	{
		if (MISC::IS_BIT_SET(iLocal_1293, 26))
		{
			if ((MISC::IS_BIT_SET(Local_82.f_3, 0) && MISC::IS_BIT_SET(Local_82.f_3, 1)) && MISC::IS_BIT_SET(Local_82.f_3, 2))
			{
				iLocal_3416 = (func_34() - func_126(&(Local_82.f_332), 0, 0));
				iVar2 = iLocal_3416;
			}
		}
	}
	else
	{
		iVar2 = iLocal_3416;
	}
	if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_748())
	{
		iVar0 = (((Local_82.f_256[0] + Local_82.f_256[1]) + Local_82.f_256[2]) + Local_82.f_256[3]);
	}
	else
	{
		iVar0 = Local_82.f_256[0];
	}
	func_191(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_748())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar21 = PLAYER::INT_TO_PLAYERINDEX(Local_82.f_594[iVar1 /*4*/].f_2);
			if (iVar21 != func_5())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar21))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(iVar21);
					iVar10[iVar1] = Local_82.f_594[iVar1 /*4*/].f_1;
					uVar15[iVar1] = Local_82.f_594[iVar1 /*4*/];
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 == uVar15[iVar1])
					{
						iVar20 = uVar15[iVar1];
						iVar20++;
					}
					uVar15[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar10[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar10[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_126(&(Local_82.f_332), 0, 0)) >= 0)
		{
			if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
			{
				func_187(sVar4[0], uVar15[0], sVar4[1], uVar15[1], sVar4[2], uVar15[2], sVar4[3], uVar15[3], iVar10[0], iVar10[1], iVar10[2], iVar10[3], iVar2, iVar3, func_188(), iVar20);
			}
			else
			{
				func_185(iVar10[0], uVar15[0], iVar10[1], uVar15[1], iVar10[2], uVar15[2], iVar10[3], uVar15[3], iVar2, iVar3, func_188(), iVar20);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_82.f_255)
		{
			iVar0 = Local_82.f_255;
		}
		if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
		{
			func_184(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_82.f_255, iVar2, iVar3, 0, func_188());
		}
		else
		{
			func_170(iVar0, iVar0, Local_82.f_255, iVar2, iVar3, 0, func_188(), 1);
		}
		if (bVar9)
		{
			func_115();
		}
	}
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar16;
	
	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_176(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_175(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar16 = "HUD_COUNTDOWN";
	if (!func_174(sParam6))
	{
		sVar16 = sParam6;
	}
	func_171(iParam3, sVar16, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_171(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_173(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_172(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

void func_172(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_173(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378744.f_6304[iParam0], iParam1);
}

int func_174(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_175(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_173(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_172(4, iVar0);
		Global_1378744.f_3283[iVar0] = iParam0;
		Global_1378744.f_3283.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1378744.f_3283.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1378744.f_3283.f_183[iVar0] = iParam3;
		Global_1378744.f_3283.f_216[iVar0] = iParam5;
		Global_1378744.f_3283.f_194[iVar0] = iParam4;
		Global_1378744.f_3283.f_227[iVar0] = iParam6;
		Global_1378744.f_3283.f_270[iVar0] = iParam7;
		Global_1378744.f_3283.f_281[iVar0] = iParam8;
		Global_1378744.f_3283.f_292[iVar0] = iParam9;
		Global_1378744.f_3283.f_303[iVar0] = iParam10;
		Global_1378744.f_3283.f_314[iVar0] = iParam11;
		Global_1378744.f_3283.f_325[iVar0] = iParam13;
		Global_1378744.f_3283.f_336[iVar0] = iParam14;
		Global_1378744.f_3283.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1378744.f_1130 = 1;
		}
	}
}

void func_176(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_173(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_172(6, iVar0);
		Global_1378744.f_3955[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_3955.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_3955.f_183[iVar0] = iParam3;
		Global_1378744.f_3955.f_172[iVar0] = iParam2;
		Global_1378744.f_3955.f_260[iVar0] = iParam4;
		Global_1378744.f_3955.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_3955.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_3955.f_443[iVar0] = iParam7;
		Global_1378744.f_3955.f_454[iVar0] = iParam8;
		Global_1378744.f_3955.f_497[iVar0] = iParam9;
		Global_1378744.f_3955.f_508[iVar0] = iParam10;
		Global_1378744.f_3955.f_205[iVar0] = iParam11;
		Global_1378744.f_3955.f_216[iVar0] = iParam12;
		Global_1378744.f_3955.f_227[iVar0] = iParam13;
		Global_1378744.f_3955.f_238[iVar0] = iParam14;
		Global_1378744.f_3955.f_249[iVar0] = iParam15;
		Global_1378744.f_3955.f_519[iVar0] = iParam16;
		Global_1378744.f_3955.f_530[iVar0] = iParam17;
		Global_1378744.f_3955.f_541[iVar0] = iParam18;
		Global_1378744.f_3955.f_552[iVar0] = iParam19;
		Global_1378744.f_3955.f_563[iVar0] = iParam20;
		Global_1378744.f_3955.f_574[iVar0] = iParam21;
		Global_1378744.f_3955.f_585[iVar0] = iParam22;
		Global_1378744.f_3955.f_596[iVar0] = iParam23;
		Global_1378744.f_3955.f_607[iVar0] = iParam24;
		Global_1378744.f_3955.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_178())
		{
			Global_1378744.f_1130 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378744.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378744.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378744.f_1130 = 1;
			}
			if (func_177())
			{
				Global_1378744.f_1134 = 1;
			}
		}
	}
}

int func_177()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_178()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_179()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2464024 = 1;
}

void func_180()
{
	Global_1378744.f_1130 = 1;
}

int func_181(bool bParam0)
{
	if (func_183())
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_850(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_182()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

bool func_183()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_184(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_181(0) == 0)
	{
		return;
	}
	func_179();
	func_180();
	if (bParam6)
	{
		func_176(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_175(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_174(sParam7))
	{
		sVar0 = sParam7;
	}
	func_171(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	char* sVar20;
	
	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	if (iParam0 > -1)
	{
		Var0 = { func_186(iParam1) };
		iVar16 = 1;
		if (iParam11 == iParam1)
		{
			iVar16 = 9;
		}
		func_176(iParam0, &Var0, -1, iVar16, 7, 1, "", 0, 0, 0, 0, iVar16, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_186(iParam3) };
		iVar17 = 1;
		if (iParam11 == iParam3)
		{
			iVar17 = 9;
		}
		func_176(iParam2, &Var0, -1, iVar17, 6, 1, "", 0, 0, 0, 0, iVar17, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_186(iParam5) };
		iVar18 = 1;
		if (iParam11 == iParam5)
		{
			iVar18 = 9;
		}
		func_176(iParam4, &Var0, -1, iVar18, 5, 1, "", 0, 0, 0, 0, iVar18, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_186(iParam7) };
		iVar19 = 1;
		if (iParam11 == iParam7)
		{
			iVar19 = 9;
		}
		func_176(iParam6, &Var0, -1, iVar19, 4, 1, "", 0, 0, 0, 0, iVar19, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar20 = "HUD_COUNTDOWN";
	if (!func_174(sParam10))
	{
		sVar20 = sParam10;
	}
	func_171(iParam8, sVar20, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_186(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, HUD::_GET_LABEL_TEXT("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_187(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_176(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_176(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_176(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_176(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_174(sParam14))
	{
		sVar4 = sParam14;
	}
	func_171(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

char* func_188()
{
	return "HUD_COUNTDOWN";
	switch (func_190(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_189())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_189()
{
	if (func_190(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2540612.f_5109;
	}
	return -1;
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

void func_191(int iParam0)
{
	if (func_193(PLAYER::PLAYER_ID()) || func_192(PLAYER::PLAYER_ID()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (MISC::IS_BIT_SET(Global_2540612.f_5025, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2540612.f_5027)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2540612.f_5027));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
			if (Global_2540612.f_5035 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2540612.f_5035);
				Global_2540612.f_5035 = -1;
			}
			Global_2540612.f_5025 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (MISC::IS_BIT_SET(Global_2540612.f_5025, 0))
		{
			if (MISC::IS_BIT_SET(Global_2540612.f_5025, 4))
			{
				if (!MISC::IS_BIT_SET(Global_2540612.f_5025, 2))
				{
					if (AUDIO::DOES_PLAYER_VEH_HAVE_RADIO())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2540612.f_5027)))
						{
							StringCopy(&(Global_2540612.f_5027), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
							MISC::SET_BIT(&(Global_2540612.f_5025), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && MISC::IS_BIT_SET(Global_2540612.f_5025, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!MISC::IS_BIT_SET(Global_2540612.f_5025, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2540612.f_5025), 1);
			}
			else if (!MISC::IS_BIT_SET(Global_2540612.f_5025, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !AUDIO::IS_RADIO_FADED_OUT())
						{
							StringCopy(&(Global_2540612.f_5027), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						MISC::SET_BIT(&(Global_2540612.f_5025), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!MISC::IS_BIT_SET(Global_2540612.f_5025, 3))
				{
					Global_2540612.f_5035 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2540612.f_5035, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2540612.f_5025), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!MISC::IS_BIT_SET(Global_2540612.f_5025, 0))
			{
				Global_2540612.f_5025 = 0;
				Global_2540612.f_5035 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
				MISC::SET_BIT(&(Global_2540612.f_5025), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || MISC::IS_BIT_SET(Global_2540612.f_5025, 2))
				{
					MISC::SET_BIT(&(Global_2540612.f_5025), 2);
					MISC::SET_BIT(&(Global_2540612.f_5025), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2540612.f_5025), 5);
					MISC::CLEAR_BIT(&(Global_2540612.f_5025), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!MISC::IS_BIT_SET(Global_2540612.f_5025, 0))
		{
			Global_2540612.f_5025 = 0;
			Global_2540612.f_5035 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(false);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", true);
			MISC::SET_BIT(&(Global_2540612.f_5025), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				MISC::SET_BIT(&(Global_2540612.f_5025), 2);
				MISC::SET_BIT(&(Global_2540612.f_5025), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2540612.f_5025), 2);
				MISC::CLEAR_BIT(&(Global_2540612.f_5025), 5);
			}
		}
	}
}

int func_192(int iParam0)
{
	if (iParam0 != func_5() && func_850(iParam0, 1, 1))
	{
		return Global_2426097[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_193(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_850(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_194(Global_2426097[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

void func_195()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_1305[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_1305[iVar0]));
		}
		iVar0++;
	}
}

void func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_1305[iVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_82.f_13, iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_716[iParam0 /*18*/].f_1, iVar0))
					{
						iLocal_1305[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]));
						HUD::SET_BLIP_SPRITE(iLocal_1305[iVar0], 429);
						func_197(&(iLocal_1305[iVar0]), 29);
						if (func_748())
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1305[iVar0], "UW_BLIPC");
						}
						else
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1305[iVar0], "UW_BLIP");
						}
						HUD::SET_BLIP_PRIORITY(iLocal_1305[iVar0], 9);
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_1305[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_1305[iVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_1305[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_1305[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_197(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_198(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_199()
{
	bool bVar0;
	
	bVar0 = func_264();
	if (bVar0)
	{
		if (Local_82.f_413 > -1)
		{
			if ((Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0)) >= 0)
			{
				if (!func_203())
				{
					func_202((Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0)));
					func_200((Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0)), func_201(-1));
				}
			}
			else
			{
				if (!func_203())
				{
					func_200(0, func_201(-1));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(Local_82.f_3), 4);
				}
			}
		}
	}
}

void func_200(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_181(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_174(sParam1))
	{
		sVar0 = sParam1;
	}
	func_171(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_201(int iParam0)
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_202(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2540612.f_5025 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!MISC::IS_BIT_SET(Global_2540612.f_5025, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2540612.f_5025 = 0;
			MISC::SET_BIT(&(Global_2540612.f_5025), 1);
		}
	}
}

bool func_203()
{
	bool bVar0;
	int iVar1;
	
	if (func_262(8))
	{
		bVar0 = true;
	}
	if (func_262(0))
	{
		bVar0 = true;
	}
	if (!func_254(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_210(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					func_208(0, -1);
					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
	{
		MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
	}
	if (Global_1663772)
	{
		bVar0 = true;
	}
	if (func_207(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	if (func_206(PLAYER::PLAYER_ID(), 2))
	{
		bVar0 = true;
	}
	if (func_204(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_204(int iParam0)
{
	if (func_205(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 8);
}

bool func_205(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 2);
}

bool func_206(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_212, iParam1);
}

int func_207(int iParam0)
{
	if (!func_850(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

void func_208(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1590555)
		{
			if (!func_262(0) && !func_262(func_209(iParam1)))
			{
				Global_1590555 = 1;
			}
		}
	}
	else if (Global_1590555)
	{
		Global_1590555 = 0;
	}
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		case 236:
			return 12;
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23647;
}

int func_210(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_253(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_206(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_206(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (bParam1)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_251(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_250())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_249(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_248())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_247(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	else if (func_231(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_230(PLAYER::PLAYER_ID()) != func_5() && func_230(PLAYER::PLAYER_ID()) == func_65(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_228(func_229()) && !func_227(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_226())
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_224(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_222())
	{
		return 0;
	}
	if (func_206(PLAYER::PLAYER_ID(), 0) || func_206(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_206(PLAYER::PLAYER_ID(), 12) || func_206(PLAYER::PLAYER_ID(), 14)) || func_206(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_221(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!func_220() && !Global_2515670)
		{
			return 0;
		}
	}
	if (func_219(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_218())
	{
		return 0;
	}
	if (Global_1663772)
	{
		return 0;
	}
	if (func_207(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_217())
	{
		return 0;
	}
	if (func_215(PLAYER::PLAYER_ID()) && Global_1590329.f_171)
	{
		return 0;
	}
	if (func_214())
	{
		return 0;
	}
	if (func_213(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_2539671)
	{
		return 0;
	}
	if (Global_1695002)
	{
		return 0;
	}
	if (!func_212(PLAYER::PLAYER_ID()))
	{
		if (func_211(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2516074;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_214()
{
	return Global_1678289.f_482;
}

int func_215(int iParam0)
{
	if (func_216(Global_1590682[iParam0 /*883*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_217()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	return Global_99007.f_352 > 0;
}

bool func_219(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 11);
}

bool func_220()
{
	return MISC::IS_BIT_SET(Global_1689733, 5);
}

int func_221(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_222()
{
	if (func_223() == 0)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	return Global_1312485.f_18;
}

bool func_224(int iParam0)
{
	return func_225(iParam0);
}

bool func_225(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_226()
{
	return Global_1312896;
}

int func_227(int iParam0)
{
	if (func_190(iParam0) == 236 || func_190(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_229()
{
	return Global_2440277.f_2834[0 /*80*/].f_1;
}

int func_230(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_231(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_246(iParam0) && !func_205(iParam0)) && !MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 8));
	bVar2 = func_247(iParam0);
	bVar3 = func_245();
	uVar4 = func_236();
	if ((bVar1 && (func_212(iParam0) || func_235(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_234(iParam0)) && !func_232(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2540612.f_5188.f_217 != iVar0)
	{
		Global_2540612.f_5188.f_217 = iVar0;
	}
	return iVar0;
}

bool func_232(int iParam0)
{
	return func_233(iParam0, 19);
}

bool func_233(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_233(iParam0, 9);
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_236()
{
	if ((func_233(PLAYER::PLAYER_ID(), 21) || func_233(PLAYER::PLAYER_ID(), 22)) || func_242())
	{
		return 1;
	}
	if (func_238())
	{
		func_237(22);
		return 1;
	}
	return 0;
}

void func_237(int iParam0)
{
	MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_4), iParam0);
}

int func_238()
{
	if (func_241(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_245() && !func_240()) || func_206(PLAYER::PLAYER_ID(), 21)) || func_206(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_239(27);
		}
	}
	return 0;
}

void func_239(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_4), iParam0);
}

bool func_240()
{
	return Global_1312436.f_1;
}

int func_241(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_242()
{
	return func_243(377, -1);
}

int func_243(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2588062[iParam0 /*3*/][func_244(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
		if (iVar1 > -1)
		{
			Global_2551772 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551772 = 1;
		}
	}
	return iVar0;
}

bool func_245()
{
	return Global_1312436;
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

bool func_247(int iParam0)
{
	return func_233(iParam0, 20);
}

bool func_248()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 5;
}

int func_249(int iParam0)
{
	if (Global_2426097[iParam0 /*443*/].f_265.f_4 != 0 || Global_2426097[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_250()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 0);
}

int func_251(int iParam0)
{
	if (func_252(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_224(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_253(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

bool func_254(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7687 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_258(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4719 == 1)
		{
			return 1;
		}
	}
	if (func_257() || func_256())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_255())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1574643[iVar1], iVar0);
}

int func_255()
{
	int iVar0;
	
	if (Global_1312466)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_1791, 23))
	{
		return 1;
	}
	if (func_257())
	{
		return 1;
	}
	if (func_256())
	{
		return 1;
	}
	iVar0 = Global_1388185[func_244(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2540612.f_1791), 23);
		return 1;
	}
	return 0;
}

bool func_256()
{
	return Global_1312884;
}

bool func_257()
{
	return Global_1312886;
}

bool func_258(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_261())
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_259(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_737, iVar1);
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		default:
	}
	return 1;
}

bool func_260()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_146, 3);
}

int func_261()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_257())
	{
		return 1;
	}
	if (func_256())
	{
		return 1;
	}
	return func_243(120, -1);
}

bool func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = func_263(2481, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2552060[iParam0 /*3*/][func_244(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_264()
{
	bool bVar0;
	
	if (!func_748())
	{
		if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
	{
		if (func_112() == 2)
		{
			return 0;
		}
	}
	if (!func_748())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_82.f_15 != false;
			}
			else
			{
				bVar0 = Local_82.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = MISC::IS_BIT_SET(Local_82.f_3, 9);
	}
	if (!func_16(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 && !func_203())
		{
			if (func_748())
			{
				if (!func_271("UW_ABTSC"))
				{
					func_265("UW_ABTSC", 0);
				}
			}
			else if (!func_271("UW_ABTS"))
			{
				func_265("UW_ABTS", 0);
			}
		}
		else if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_265(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_269(sParam0))
	{
		return;
	}
	func_10();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_268();
	func_267(bParam1);
	func_266();
}

void func_266()
{
	MISC::SET_BIT(&(Global_1312603.f_59), 1);
}

void func_267(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312603.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312603.f_59), 0);
}

void func_268()
{
	Global_1312603.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_269(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_270(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12));
}

bool func_270(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

int func_271(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_269(sParam0);
}

void func_272(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;
	
	Var1 = { func_420() };
	bVar5 = false;
	if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1519[iVar0 /*42*/] = -1;
			Local_1519[iVar0 /*42*/].f_1 = func_5();
			Local_1519[iVar0 /*42*/].f_9 = 0;
			Local_1519[iVar0 /*42*/].f_31 = -1;
			if (Local_82.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1519[iVar0 /*42*/].f_1 = Local_82.f_465[iVar0 /*4*/].f_2;
				Local_1519[iVar0 /*42*/].f_9 = Local_82.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_419())
			{
				if (Local_2864.f_103 != 129)
				{
					Local_2864.f_103 = 129;
				}
				else
				{
					func_208(1, 129);
				}
			}
		}
		else if (Local_2864.f_103 != 129)
		{
			Local_2864.f_103 = 129;
		}
		func_277(&Local_1519, &iLocal_1518, 27, &Local_2864, &uLocal_2980, -1, 0, 0);
		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_1519[0 /*42*/].f_1 != PLAYER::PLAYER_ID())
			{
				if (Local_82.f_465[0 /*4*/].f_1 > 0)
				{
					func_276();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_1519[iVar0 /*42*/] = -1;
			Local_1519[iVar0 /*42*/].f_1 = func_5();
			Local_1519[iVar0 /*42*/].f_9 = 0;
			Local_1519[iVar0 /*42*/].f_31 = -1;
			Local_1519[iVar0 /*42*/].f_39 = -1;
			if (Local_82.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_1519[iVar0 /*42*/].f_39 = Local_82.f_465[iVar0 /*4*/] + 1;
				Local_1519[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_82.f_465[iVar0 /*4*/].f_2);
				Local_1519[iVar0 /*42*/].f_40 = Local_82.f_465[iVar0 /*4*/].f_1;
				Local_1519[iVar0 /*42*/].f_9 = Local_82.f_465[iVar0 /*4*/].f_1;
				Local_1519[iVar0 /*42*/].f_2 = Local_82.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_273();
		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_82.f_594[0 /*4*/] > 0)
			{
				if (Local_82.f_594[0 /*4*/] != Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9)
				{
					if (Local_82.f_256[Local_82.f_594[0 /*4*/]] > 0)
					{
						func_276();
					}
				}
			}
		}
		func_277(&Local_1519, &iLocal_1518, 27, &Local_2864, &uLocal_2980, -1, 1, 0);
		if (bParam0)
		{
			if (!func_419())
			{
				if (Local_2864.f_103 != 129)
				{
					Local_2864.f_103 = 129;
				}
				else
				{
					func_208(1, 129);
				}
			}
		}
		else if (Local_2864.f_103 != 129)
		{
			Local_2864.f_103 = 129;
		}
	}
}

void func_273()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_3505[0] = Local_82.f_594[0 /*4*/];
	uLocal_3505[1] = Local_82.f_594[1 /*4*/];
	uLocal_3505[2] = Local_82.f_594[2 /*4*/];
	uLocal_3505[3] = Local_82.f_594[3 /*4*/];
	iVar3 = Local_82.f_594[0 /*4*/];
	iVar4 = Local_82.f_594[1 /*4*/];
	iVar5 = Local_82.f_594[2 /*4*/];
	iVar6 = Local_82.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_82.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_82.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_82.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_82.f_266[iVar6];
	}
	uLocal_3510[0] = uVar7;
	uLocal_3510[1] = uVar8;
	uLocal_3510[2] = uVar9;
	uLocal_3510[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_275(uLocal_3505[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_1519[iVar2 /*42*/].f_9 = Local_82.f_594[iVar0 /*4*/].f_1;
		}
		func_274(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_3510[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_274(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_1519[iParam1 /*42*/] };
	Local_1519[iParam1 /*42*/] = { Local_1519[iParam0 /*42*/] };
	Local_1519[iParam0 /*42*/] = { Var0 };
}

int func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_1519[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_276()
{
	MISC::SET_BIT(&(Global_2540612.f_1794), 19);
}

void func_277(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_418(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_416() || iParam2 == 28)
	{
		if (func_367(iParam1, iParam2, uParam3, Global_1574191, 0, func_421(), sParam7))
		{
			func_366(1);
			if ((!func_364() && !func_362()) || MISC::IS_BIT_SET(Global_2540612.f_4652, 1))
			{
				if (func_361())
				{
					func_356();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_355(1);
						Global_1574191 = 0;
						iVar54 = -1;
						if (Global_1574412 != 1)
						{
							func_354(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_850(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_16(iVar35, 0))
									{
										if ((func_350(iVar35) || Global_2426097[iVar35 /*443*/].f_240 != -1) || func_349(iVar35))
										{
											iVar44 = iVar35;
											if (func_348(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_345(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_342(PLAYER::PLAYER_ID(), 0) && func_341(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_340())
							{
								if (func_850(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_5();
								}
							}
							else
							{
								iVar35 = (iParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_339(iVar35) && func_336(iVar35, iParam2)) && func_850(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590682[iVar44 /*883*/].f_211.f_6;
								Var38 = { func_331(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_66(iVar35) };
								iVar37 = func_325(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574191++;
								if ((iParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (iParam0[iVar52 /*42*/])->f_22;
								}
								if ((iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (iParam0[iVar52 /*42*/])->f_31;
								}
								if ((iParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (iParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (iParam0[iVar52 /*42*/])->f_9;
								if (((iParam0[iVar52 /*42*/])->f_9 != -1 || (iParam0[iVar52 /*42*/])->f_22 != -1f) || (iParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_340())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_320(&iVar43, &fVar45, (iParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_319(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (iParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_314(iVar35, 0);
								if (bVar34)
								{
									if (func_313(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((iParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (iParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_312(iParam5))
								{
									func_311(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_311(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (iParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_850(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_5();
							}
							if (func_339(iVar35))
							{
								if (func_850(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590682[iVar44 /*883*/].f_211.f_6;
									Var38 = { func_331(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_66(iVar35) };
									iVar37 = func_325(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574191++;
									iVar51 = func_314(iVar35, 1);
									if (bVar34)
									{
										if (func_313(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_290(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_287(uParam3, iParam1, iParam2);
						}
						func_106(&(uParam3->f_21));
						func_286();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_285(uParam3, iParam1);
							func_284(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_285(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_280(uParam3))
						{
							Global_1574412 = 1;
						}
						func_278(uParam3);
						if (Global_1574412 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574412 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_286();
			func_355(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_278(var uParam0)
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_106(&(uParam0->f_21));
		func_279(0);
	}
}

void func_279(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574412 != 2)
		{
			Global_1574412 = 2;
		}
	}
	else
	{
		switch (Global_1574412)
		{
			case 0:
				Global_1574412 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_5() && func_850(iVar15, 0, 1))
	{
		Var2 = { func_66(iVar15) };
		iVar1 = func_283(uParam0, uParam0->f_37);
		if (func_282(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_281(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_281(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_281(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_281(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_281(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_281(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_282(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_283(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_284(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_285(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_286()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_287(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_5())
		{
			if (func_850(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_289(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_288(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_288(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_289(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_290(int iParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_310() && iParam4 < func_309())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_308(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_308("");
			if (uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				func_308(&sParam5);
			}
			func_295(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_294(uParam3))
			{
				func_293("DPAD_FRIEND");
			}
			else if (func_292(uParam3))
			{
				func_293("DPAD_FRIEND");
			}
			else if (func_291(uParam3))
			{
				func_293("DPAD_CREW");
			}
			else
			{
				func_293("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_291(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_292(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_293(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_294(var uParam0)
{
	if (func_292(uParam0) && func_291(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_295(var uParam0, int iParam1)
{
	if (func_307(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_300(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2426097[iParam1 /*443*/].f_420, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_296())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_296()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_298() || func_297())
		{
			return 1;
		}
	}
	return 0;
}

var func_297()
{
	return Global_2452015.f_16;
}

int func_298()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_297();
	}
	return func_299(Global_4456448.f_82708);
}

int func_299(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4991[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_300(int iParam0)
{
	if ((func_850(iParam0, 0, 1) && func_304()) && func_301(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_301(int iParam0, bool bParam1)
{
	return func_302(iParam0, bParam1, 1);
}

int func_302(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_303(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_5() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304()
{
	if (func_246(PLAYER::PLAYER_ID()) || func_306())
	{
		if (!func_305(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_305(int iParam0)
{
	if (func_190(iParam0) == 236 || func_190(iParam0) == 150)
	{
		return func_212(iParam0);
	}
	return 0;
}

int func_306()
{
	switch (func_341(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_307(int iParam0)
{
	if (func_296())
	{
		if (func_850(iParam0, 0, 1))
		{
			return func_348(iParam0);
		}
	}
	if ((func_850(iParam0, 0, 1) && func_304()) && func_303(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_308(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_309()
{
	int iVar0;
	
	if (Global_1574193)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_310()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_311(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_310() && iParam3 < func_309())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_293(sParam16);
				}
				else
				{
					func_308(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_340())
				{
					func_308("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_293(&(uParam2->f_104));
					}
					else
					{
						func_308("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_308("");
				}
				if (uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					func_308(&sParam4);
				}
				func_295(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_308("");
					func_308("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_294(uParam2))
				{
					func_293("DPAD_FRIEND");
				}
				else if (func_292(uParam2))
				{
					func_293("DPAD_FRIEND");
				}
				else if (func_291(uParam2))
				{
					func_293("DPAD_CREW");
				}
				else
				{
					func_293("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_312(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_313(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_348(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_5();
}

int func_314(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_246(iParam0)) && !func_247(iParam0))
	{
		iVar0 = func_318();
	}
	iVar1 = func_317(iParam0);
	if (!iVar1 == -1)
	{
		return func_315(iVar1);
	}
	return iVar0;
}

int func_315(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_316(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_316(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_317(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_313(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_318()
{
	return 21;
}

char* func_319(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_320(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_324(iParam3))
	{
		*fParam1 = (func_321(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_312(iParam3))
	{
		*fParam1 = (func_321(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_321(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_323(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_322(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_322(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_323(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_325(int iParam0)
{
	int iVar0;
	
	iVar0 = func_328(iParam0);
	if (iVar0 == -1)
	{
		func_326(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_326(int iParam0, bool bParam1)
{
	if (!func_850(iParam0, 0, 1))
	{
		return;
	}
	if (func_328(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_327(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_327(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_328(int iParam0)
{
	int iVar0;
	
	if (!func_850(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_329(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_329(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389221[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389382)
	{
		Global_1389221[iVar32 /*5*/] = { Global_1389221[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_330(&(Global_1389221[iVar32 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_330(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_331(int iParam0)
{
	char cVar0[32];
	
	if (func_850(iParam0, 0, 1))
	{
		Global_2515401 = { func_66(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_282(Global_2515401))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2515401))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_335(&Global_2515401))
		{
			Global_2515331 = { func_333(iParam0) };
			func_332(&Global_2515331, &cVar0);
		}
	}
	return cVar0;
}

void func_332(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_333(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_334(iParam0))
	{
		return Global_1312928[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_334(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_335(int* iParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_205(iParam0) || func_338(iParam0)) || func_204(iParam0))
		{
			return 0;
		}
	}
	if (!func_337(iParam0))
	{
		return 0;
	}
	if ((!func_350(iParam0) && Global_2426097[iParam0 /*443*/].f_240 == -1) && !func_349(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_337(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_142, 22);
}

int func_338(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 10) || MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 9));
	}
	return 0;
}

int func_339(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_16(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590682[iVar0 /*883*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_340()
{
	switch (func_341(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_190(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_247(PLAYER::PLAYER_ID()))
	{
		switch (func_341(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_305(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0)
{
	if (func_241(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_342(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_343(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_343(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_344(iParam0, 0);
	return 0;
}

int func_344(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_850(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_16(iVar1, 0))
			{
				if ((func_350(iVar1) || Global_2426097[iVar1 /*443*/].f_240 != -1) || func_349(iVar1))
				{
					if (func_346(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_346(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_347(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_349(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_350(int iParam0)
{
	if (func_850(iParam0, 0, 1))
	{
		if (func_850(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || (func_341(iParam0) == 233 && func_351(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_352(PLAYER::PLAYER_ID());
	bVar1 = func_352(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_352(int iParam0)
{
	return func_353(&(Global_2426097[iParam0 /*443*/].f_429), 0);
}

bool func_353(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_354(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377233.f_2 == 0)
		{
			Global_1377233.f_2 = 1;
		}
	}
	else if (Global_1377233.f_2 == 1)
	{
		Global_1377233.f_2 = 0;
	}
}

void func_356()
{
	if (MISC::IS_BIT_SET(Global_2540612.f_4652, 1))
	{
		if (func_360())
		{
			func_357();
		}
	}
}

void func_357()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440277.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440277.f_2834[iVar0 /*80*/].f_2 = 5;
			func_358(&(Global_2440277.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_358(var uParam0, int iParam1)
{
	func_359(uParam0, iParam1);
}

void func_359(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_360()
{
	return Global_2440277.f_2834[0 /*80*/].f_1 != 0;
}

int func_361()
{
	if (MISC::IS_BIT_SET(Global_2540612.f_4652, 0) && func_360())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_4652, 1) && func_360())
	{
		return 1;
	}
	return 0;
}

int func_362()
{
	if (func_360())
	{
		if (func_363(Global_2440277.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_364()
{
	if (func_360())
	{
		if (func_365(Global_2440277.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_366(int iParam0)
{
	if (Global_1377233.f_1 != Global_1377233)
	{
		Global_1377233.f_1 = Global_1377233;
	}
	if (Global_1377233 != iParam0)
	{
		Global_1377233 = iParam0;
	}
}

int func_367(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_415(iParam1);
	fVar7 = func_414();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_413())
		{
			if (func_412() > 0 && Global_1574193)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_399())
		{
			func_398(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_4655, 26))
	{
		func_398(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_412() == 1)
		{
			func_397(bVar6, iParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_398(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2540612.f_4656), 5);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_412() == 0 && !bParam5))
		{
			func_398(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_396();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_396();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_397(bVar6, iParam0, 0))
				{
					func_354(iParam0, 0, 0);
					sVar4 = func_394(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_392(iParam1) };
					if (bParam4)
					{
						func_389(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_384(iParam0, func_386(uParam2), func_385(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_377(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_375(iParam0, sVar9, func_376(), -1);
					}
					else if (func_296())
					{
						uParam2->f_34 = Global_1574192;
						func_389(iParam0, sVar4, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_368(iParam1);
						uParam2->f_34 = Global_1574192;
						func_389(iParam0, sVar4, "", 0, iVar8, Global_1574192, 1);
					}
					else
					{
						iVar8 = func_368(iParam1);
						func_389(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574191 = uParam3;
				Global_1574190 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574192)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_374())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_373(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_372(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_371(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_369())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_369()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_370(Global_4456448.f_82708);
}

int func_370(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_371(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 4;
}

bool func_372(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 7;
}

bool func_373(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 2;
}

bool func_374()
{
	return Global_4456448.f_1 == 0;
}

void func_375(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_293(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_293("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_376()
{
	switch (func_341(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_377(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_341(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_380())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_379(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_379(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_378(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_379(bool bParam0)
{
	return func_301(PLAYER::PLAYER_ID(), bParam0);
}

bool func_380()
{
	return (func_383() && func_381(func_382()));
}

int func_381(int iParam0)
{
	return func_303(iParam0, 1);
}

int func_382()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_35;
}

bool func_383()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148;
}

void func_384(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_293(sParam1);
		}
		else if (func_190(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_293("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_385(var uParam0)
{
	int iVar0;
	
	iVar0 = func_190(PLAYER::PLAYER_ID());
	if (func_419())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_189())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

char* func_386(var uParam0)
{
	int iVar0;
	
	iVar0 = func_190(PLAYER::PLAYER_ID());
	if (func_419())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_388() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_388() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_189())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_387() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_387()
{
	return Global_2540612.f_5112;
}

int func_388()
{
	if (func_190(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2540612.f_5107;
	}
	return -1;
}

void func_389(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_308(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_293(sParam1);
		}
		if (func_413() && iParam6)
		{
			if (func_391())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_293(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_390(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_390(int iParam0)
{
	if (func_373(iParam0) || func_372(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_391()
{
	return Global_1574193;
}

struct<4> func_392(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_393(PLAYER::PLAYER_ID()) || func_371(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_525, 16);
			break;
	}
	if (func_296() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_393(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 5;
}

char* func_394(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_296() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_395();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574431 == 1)
		{
			Global_1574431 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_395()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_396()
{
	Global_42556 = 1;
}

bool func_397(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_398(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_286();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_106(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2540612.f_4656), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_399()
{
	if (func_411())
	{
		return 0;
	}
	if (func_248())
	{
		return 0;
	}
	if (!func_409())
	{
		return 0;
	}
	if (!func_222())
	{
		return 0;
	}
	if (func_408(8, -1))
	{
		return 0;
	}
	if (func_412() == 2)
	{
		return 0;
	}
	if (Global_2540612.f_4607)
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	else if (!func_252(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_407(1) || func_405(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_404() && Global_1696337 == 2)
	{
		return 0;
	}
	if (func_402(PLAYER::PLAYER_ID()) && !func_404())
	{
		return 0;
	}
	if (Global_1663772)
	{
		return 0;
	}
	if (Global_1663777)
	{
		return 0;
	}
	if (func_401(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370294)
	{
		return 0;
	}
	if ((Global_1690742.f_718.f_5 || Global_1693568.f_718.f_5) || Global_1689770.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1697306.f_724.f_5 || Global_1697306.f_744.f_724.f_5) || Global_1697306.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1704130.f_726.f_5)
	{
		return 0;
	}
	if (func_400(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_400(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314.f_4, 6);
}

bool func_401(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2540612.f_5188.f_45, iParam0);
}

int func_402(int iParam0)
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_403())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_403()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_404()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1696338, 0));
}

int func_405(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_406(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_407(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_408(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377236.f_1048, iParam0);
}

int func_409()
{
	if (func_410())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_410()
{
	return Global_1312458;
}

bool func_411()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

int func_412()
{
	return Global_1377236.f_68;
}

int func_413()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_414()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_416()
{
	if (func_421())
	{
		return 1;
	}
	if (func_204(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_419())
	{
		return 1;
	}
	if (func_246(PLAYER::PLAYER_ID()))
	{
		switch (func_190(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_417(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_417(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_417(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_417(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_418(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_246(PLAYER::PLAYER_ID()) && !func_247(PLAYER::PLAYER_ID())) && !func_305(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_241(PLAYER::PLAYER_ID(), 0) && func_247(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_231(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_419()
{
	return Global_1590555;
}

struct<4> func_420()
{
	struct<4> Var0;
	
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_421()
{
	if (func_422(PLAYER::PLAYER_ID()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_422(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_16(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_423()
{
	struct<2> Var0;
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17)
	{
		case 0:
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_82.f_241 == 0)
				{
					func_753();
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_1293, 22))
			{
				if (Local_82.f_27 == joaat("rhino") && Local_82.f_29 == 2)
				{
					func_722(Local_82.f_30[0 /*3*/]);
					MISC::SET_BIT(&iLocal_1293, 22);
				}
				else if (!func_69(Local_82.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_722(Local_82.f_30[0 /*3*/]);
					MISC::SET_BIT(&iLocal_1293, 22);
				}
			}
			func_721();
			func_715();
			if (Local_82.f_241 == 0)
			{
				func_712(1);
			}
			func_711(0);
			if (Local_82.f_241 == 0)
			{
				if (!Local_82.f_27 == joaat("hydra") && !Local_82.f_27 == joaat("rhino"))
				{
					func_199();
				}
				else if (func_748())
				{
					func_199();
				}
				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!MISC::IS_BIT_SET(iLocal_1294, 1))
					{
						func_710(129);
						func_689(1);
						MISC::SET_BIT(&iLocal_1294, 1);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					}
					if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6))
					{
						if (Local_82.f_28 > 1 || (Local_82.f_28 == 1 && func_112() > 1))
						{
							if (MISC::IS_BIT_SET(Local_82.f_3, 4))
							{
								Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
								MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_1294, 1))
				{
					MISC::CLEAR_BIT(&iLocal_1294, 1);
					func_688(1);
					func_687();
					func_689(0);
				}
			}
			if (Local_82.f_241 == 1)
			{
				func_686(&iVar4, &uVar5);
				iLocal_3406 = iVar4;
				func_685(0);
				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!func_684())
					{
						MISC::SET_BIT(&iLocal_1294, 19);
					}
					if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
					{
						func_9();
					}
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
					if ((func_683("UW_MINV") || func_683("UW_TIMELA")) || func_683("UW_TIMEL"))
					{
						HUD::CLEAR_HELP(true);
					}
					func_195();
					func_672(129, 0f, 0f, 1, 1, 1, 0);
					func_662(1);
					func_661();
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					iLocal_1303 = PLAYER::GET_MAX_WANTED_LEVEL();
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					func_660(1);
					func_659(1);
					if (Local_82.f_27 != joaat("rhino"))
					{
						func_638(1);
					}
					iLocal_1505 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1503);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, false);
					func_637(0);
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iLocal_3406;
					if (!func_748())
					{
						func_636(63, "UW_TITLE", "UW_DESC", func_318(), -1, func_318(), 1, 0);
					}
					else if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
					{
						func_636(63, "UW_TITLEC", "UW_DESCC", func_318(), -1, func_318(), 1, 0);
					}
					else
					{
						iVar4++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar4, 16);
						func_635(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_318(), func_318(), 0);
					}
					Local_699.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_637(0);
					func_633(3, 0, 1);
					func_20(&uLocal_3444, 0, 0);
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 1;
				}
				else
				{
					func_195();
					if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
					{
						func_9();
					}
					if (func_630("UW_HELP1", func_632(), func_631(1)) || func_630("UW_HELP1C", func_632(), func_631(1)))
					{
						HUD::CLEAR_HELP(true);
					}
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					func_637(0);
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
					{
					}
					else if (!func_629())
					{
					}
				}
			}
			else if (Local_82.f_241 == 3)
			{
				func_637(0);
				if (func_630("UW_HELP1", func_632(), func_631(1)) || func_630("UW_HELP1C", func_632(), func_631(1)))
				{
					HUD::CLEAR_HELP(true);
				}
				if (!func_628())
				{
				}
				if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
				{
					func_9();
				}
				func_195();
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_82.f_241 > 3)
			{
				if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
				{
					func_9();
				}
				func_637(0);
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					func_627();
					func_626();
					if (func_122())
					{
						func_661();
					}
				}
				if (func_748())
				{
					if (func_620(2, 0, 1, 0, 0))
					{
						if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
						{
							func_9();
						}
						func_637(0);
						Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
				else if (Local_82.f_27 == joaat("valkyrie"))
				{
					if (func_620(2, 0, 1, 0, 0))
					{
						if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
						{
							func_9();
						}
						func_637(0);
						Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_165(1);
			func_715();
			func_548();
			func_169();
			func_546();
			func_534();
			func_272(0);
			func_530();
			func_527();
			func_627();
			func_626();
			if (!MISC::IS_BIT_SET(iLocal_1293, 26))
			{
				if (!func_526(55))
				{
					if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
						{
							if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
							{
								if (!func_748())
								{
									if (!func_271("UW_ATTK"))
									{
										func_265("UW_ATTK", 0);
									}
								}
								else if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
								{
									if (!func_271("UW_ATTK"))
									{
										func_265("UW_ATTK", 0);
									}
								}
								else if (!func_271("UW_ATTK"))
								{
									func_686(&iVar4, &uVar5);
									iVar4++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar4, 16);
									func_265("UW_ATTK", 0);
								}
							}
							else if (func_271("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_525();
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
				{
					func_661();
				}
			}
			if (!func_850(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
				MISC::SET_BIT(&iLocal_1293, 21);
			}
			else if (func_182())
			{
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
			{
				if (!func_524())
				{
					MISC::SET_BIT(&iLocal_1293, 23);
					func_9();
					if (iLocal_3406 > -1)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iLocal_3406]))
						{
							func_25(&(Local_82.f_7[iLocal_3406]));
						}
					}
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				}
			}
			if (Local_82.f_241 == 3)
			{
				func_688(1);
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_82.f_241 > 3)
			{
				func_688(1);
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else if (func_748())
			{
				if (func_620(2, 0, 1, 0, 0))
				{
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_82.f_241 == 3)
			{
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_82.f_241 > 3)
			{
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			func_458();
			if (func_628())
			{
				if (func_190(PLAYER::PLAYER_ID()) == 129)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !HUD::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						if (MISC::IS_BIT_SET(iLocal_1293, 22))
						{
							func_457();
							MISC::CLEAR_BIT(&iLocal_1293, 22);
						}
						func_687();
						func_454();
						func_452(0);
						func_450(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
						func_689(0);
						func_688(1);
					}
					func_449();
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_1294, 8))
			{
				MISC::SET_BIT(&iLocal_1294, 8);
			}
			if (!func_203())
			{
				func_448();
				func_546();
				func_165(0);
				func_534();
				func_272(1);
				func_530();
				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_447();
			}
			func_440();
			func_439();
			func_548();
			if (!MISC::IS_BIT_SET(iLocal_1294, 7))
			{
				iVar6 = 0;
				while (iVar6 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar6]))
					{
						if (!func_31(Local_82.f_48[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_82.f_48[iVar6]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_80[iVar6]))
					{
						if (!func_31(Local_82.f_80[iVar6]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_82.f_80[iVar6]), PLAYER::PLAYER_ID(), false);
						}
					}
					iVar6++;
				}
				MISC::SET_BIT(&iLocal_1294, 7);
			}
			else if (Local_82.f_247 != iLocal_3404)
			{
				iLocal_3404 = Local_82.f_247;
				MISC::CLEAR_BIT(&iLocal_1294, 7);
			}
			if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
			}
			if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
			{
				MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1503)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1505);
			}
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(iLocal_1293, 31))
			{
				if (MISC::IS_BIT_SET(Local_82.f_3, 12))
				{
					func_195();
					MISC::SET_BIT(&iLocal_1293, 31);
				}
			}
			func_525();
			func_434();
			if (!func_203())
			{
				if (!MISC::IS_BIT_SET(Local_82.f_3, 14) && !MISC::IS_BIT_SET(Local_82.f_3, 12))
				{
					func_272(1);
				}
				func_534();
				func_546();
				func_530();
				func_425();
			}
			func_458();
			func_439();
			func_548();
			if (Local_82.f_241 > 3)
			{
				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_793();
			break;
	}
	func_424();
}

void func_424()
{
	int iVar0;
	
	if (iLocal_3467 != Local_82.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (MISC::IS_BIT_SET(Local_82.f_616, iVar0))
			{
				if (!MISC::IS_BIT_SET(iLocal_3467, iVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_7[iVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), 2);
							func_25(&(Local_82.f_7[iVar0]));
							MISC::SET_BIT(&iLocal_3467, iVar0);
						}
					}
					else
					{
						MISC::SET_BIT(&iLocal_3467, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_425()
{
	if (MISC::IS_BIT_SET(Local_82.f_3, 14))
	{
		if (!MISC::IS_BIT_SET(iLocal_1294, 5))
		{
			if (func_428(0, 1, 1, 1))
			{
				if (func_748())
				{
					func_427("UW_TFEWC", 30000);
				}
				else
				{
					func_427("UW_TFEW", 30000);
				}
				func_426(1);
				MISC::SET_BIT(&iLocal_1294, 5);
			}
		}
	}
}

void func_426(int iParam0)
{
	HUD::_SET_HELP_MESSAGE_TEXT_STYLE(3, 21, 200, 0, 0);
	if (iParam0 && !func_360())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_427(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_428(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_433())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_411())
	{
		return 0;
	}
	if (func_250())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_252(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_432(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_431())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_430())
	{
		return 0;
	}
	if (func_429())
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (Global_2550682)
	{
		return 0;
	}
	if (func_213(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_429()
{
	return Global_2452015.f_689;
}

bool func_430()
{
	return Global_2452015.f_842;
}

bool func_431()
{
	return Global_2440277.f_3158.f_578;
}

int func_432(int iParam0)
{
	if (Global_2426097[iParam0 /*443*/].f_212 == 0)
	{
		return 0;
	}
	return 1;
}

int func_433()
{
	if (Global_21005 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_434()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!MISC::IS_BIT_SET(iLocal_1293, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), false))
				{
					MISC::SET_BIT(&iLocal_1293, (27 + iVar2));
					iLocal_3407[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_3407[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), "GTAO_FM_Events_Soundset", false, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_3407[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_748())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[0]))
		{
			if (!MISC::IS_BIT_SET(Local_82.f_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_7[0]), false))
				{
					if ((func_438() - func_126(&(Local_82.f_324), 0, 0)) >= 0)
					{
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_82.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_203())
								{
									func_437();
									func_171((func_438() - func_126(&(Local_82.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_82.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[0]), 50f, 50f, 50f, false, true, 0))
							{
								if (!func_203())
								{
									func_437();
									func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							func_688(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_7[0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_82.f_7[0]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_82.f_7[0]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[0]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_82.f_7[0]), true, false, -1);
								func_25(&(Local_82.f_7[0]));
							}
							else
							{
								NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_82.f_7[0]), 1, 0, 0);
								func_25(&(Local_82.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_195();
		if (!func_203())
		{
			if (!MISC::IS_BIT_SET(iLocal_1293, 12))
			{
				if (func_109(Local_82.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[0])))
						{
							if (!func_748())
							{
								if (!func_271("UW_EXPL"))
								{
									func_265("UW_EXPL", 0);
								}
							}
							else if (!func_271("UW_EXPLC"))
							{
								func_265("UW_EXPLC", 0);
							}
							MISC::SET_BIT(&iLocal_1293, 12);
						}
					}
				}
			}
			else if (func_271("UW_EXPL") || func_271("UW_EXPLC"))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_82.f_319, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false))
					{
						if ((func_438() - func_126(&(Local_82.f_324), 0, 0)) >= 0)
						{
							if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_82.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_203())
									{
										if (!bVar1)
										{
											func_437();
											func_171((func_438() - func_126(&(Local_82.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_82.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), 50f, 50f, 50f, false, true, 0))
								{
									if (!func_203())
									{
										if (!bVar1)
										{
											func_437();
											func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
							{
								func_688(1);
							}
							if (func_435(Local_82.f_7[iVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_7[iVar0]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]))))
									{
										NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), true, false, -1);
										func_25(&(Local_82.f_7[iVar0]));
									}
									else
									{
										NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), 1, 0, 0);
										func_25(&(Local_82.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_1293, 12))
				{
					if (func_109(Local_82.f_7[iVar0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iVar0])))
							{
								if (!func_203())
								{
									if (!func_748())
									{
										if (!func_271("UW_EXPL"))
										{
											func_265("UW_EXPL", 0);
										}
									}
									else if (!func_271("UW_EXPLC"))
									{
										func_265("UW_EXPLC", 0);
									}
									MISC::SET_BIT(&iLocal_1293, 12);
								}
							}
						}
					}
				}
				else if (func_271("UW_EXPL") || func_271("UW_EXPLC"))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							func_9();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_435(int iParam0)
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_436(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_79(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_437()
{
	Global_1378744.f_1131 = 1;
}

int func_438()
{
	if (func_748())
	{
		return Global_262145.f_11383;
	}
	return Global_262145.f_11103;
}

void func_439()
{
	if (!MISC::IS_BIT_SET(iLocal_1294, 4))
	{
		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					func_688(1);
					MISC::SET_BIT(&iLocal_1294, 4);
				}
			}
		}
	}
}

void func_440()
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1302);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (iLocal_1302 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!MISC::IS_BIT_SET(iLocal_3468, iLocal_1302))
				{
					if (!func_203())
					{
						if (Local_716[iLocal_1302 /*18*/].f_17 == 1)
						{
							MISC::SET_BIT(&iLocal_3468, iLocal_1302);
							func_441(iVar1, 55, 1, 0);
						}
					}
				}
				else if (func_203())
				{
					func_441(iVar1, 55, 0, 0);
					MISC::CLEAR_BIT(&iLocal_3468, iLocal_1302);
				}
				else if (Local_716[iLocal_1302 /*18*/].f_17 > 1)
				{
					MISC::CLEAR_BIT(&iLocal_3468, iLocal_1302);
					func_441(iVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_1302++;
	if (iLocal_1302 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_1302 = 0;
	}
}

void func_441(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_443(iParam0))
	{
		return;
	}
	if (func_442(&(Global_2416085.f_624[iParam0]), &(Global_2416085.f_987[iParam0]), &(Global_2416085.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_459[iParam0] = iParam1;
		}
	}
}

int func_442(var uParam0, var uParam1, int* iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_443(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_444())
	{
		return 1;
	}
	return 0;
}

int func_444()
{
	switch (func_446())
	{
		case 0:
			return func_445();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_445()
{
	switch (Global_2464823)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_446()
{
	return Global_30968;
}

void func_447()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (HUD::DOES_BLIP_EXIST(Local_1310[iVar0 /*8*/]))
		{
			HUD::REMOVE_BLIP(&(Local_1310[iVar0 /*8*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_1310[iVar0 /*8*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_1310[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar0]))
		{
			if (!func_31(Local_82.f_48[iVar0]))
			{
				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_82.f_48[iVar0])))
				{
					func_92(&(Local_1310[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_448()
{
	if (!MISC::IS_BIT_SET(iLocal_1293, 11))
	{
		if (!MISC::IS_BIT_SET(Local_82.f_3, 6))
		{
			if (!MISC::IS_BIT_SET(iLocal_1293, 13))
			{
				if (func_190(PLAYER::PLAYER_ID()) != 129)
				{
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						if (!func_526(65) && !func_526(66))
						{
							if (MISC::IS_BIT_SET(iLocal_1294, 11))
							{
								if (!MISC::IS_BIT_SET(iLocal_1294, 12))
								{
									if (func_428(0, 1, 1, 1))
									{
										if (func_748())
										{
											func_427("UW_HELIMC", -1);
										}
										else
										{
											func_427("UW_HELIM", -1);
										}
										func_426(1);
										MISC::SET_BIT(&iLocal_1294, 12);
									}
								}
							}
							else if (!(Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra")))
							{
								if (func_428(0, 1, 1, 1))
								{
									if (!func_748())
									{
										func_427("UW_TAVAIL", 30000);
									}
									else
									{
										func_427("UW_TAVAILC", 30000);
									}
									func_426(1);
									MISC::SET_BIT(&iLocal_1293, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_449()
{
	float fVar0;
	
	if (iLocal_3463 != 0)
	{
		return;
	}
	if (func_22(&uLocal_3444))
	{
		iLocal_3463 = func_126(&uLocal_3444, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_3463);
	fVar0 = (fVar0 / 60000f);
	iLocal_3463 = SYSTEM::FLOOR(fVar0);
	if (iLocal_3463 >= 1)
	{
	}
	else
	{
		iLocal_3463 = 1;
	}
	if (iLocal_3463 > Global_262145.f_11443)
	{
		iLocal_3463 = Global_262145.f_11443;
	}
}

void func_450(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_99007.f_8 = 1;
	}
	else
	{
		Global_99007.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_451(iVar0);
		iVar0++;
	}
}

void func_451(int iParam0)
{
	Global_99007.f_184[iParam0] = 1;
	Global_99007.f_183 = 1;
}

void func_452(int iParam0)
{
	if (func_453() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_453()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

void func_454()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_456();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1574656.f_1), 8);
	func_455();
}

void func_455()
{
	if (Global_1673530)
	{
		if (MISC::IS_BIT_SET(Global_1673531, 0))
		{
			MISC::CLEAR_BIT(&Global_2549706, 0);
		}
		if (MISC::IS_BIT_SET(Global_1673531, 1))
		{
			MISC::CLEAR_BIT(&Global_2549706, 1);
		}
		if (MISC::IS_BIT_SET(Global_1673531, 5))
		{
			MISC::CLEAR_BIT(&Global_2549706, 5);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-355737150))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-355737150, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-580979506))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-580979506, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1426452475))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1426452475, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(745417724))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(745417724, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1305304906))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1305304906, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-1543175077))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1543175077, 1, false, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-811770997))
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-811770997, 1, false, false);
		}
		Global_1673531 = 0;
	}
	Global_1673530 = 0;
}

void func_456()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2540612.f_5184))
	{
		if (!Global_2540612.f_5184 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2540612.f_5183 < 1f)
		{
			return;
		}
	}
	Global_2540612.f_5184 = -1;
	Global_2540612.f_5183 = 1f;
}

void func_457()
{
	Global_2391049 = { 0f, 0f, 0f };
	Global_2391052 = 0;
}

void func_458()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar10;
	
	if (MISC::IS_BIT_SET(iLocal_1293, 13))
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(Local_82.f_3, 6);
	bVar1 = MISC::IS_BIT_SET(iLocal_1293, 21);
	bVar2 = MISC::IS_BIT_SET(iLocal_1293, 23);
	bVar3 = Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_628())
	{
		if (!MISC::IS_BIT_SET(iLocal_1294, 17))
		{
			if (func_850(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || bVar2)
				{
					if (!func_203())
					{
						if (!func_748())
						{
							if (bVar0)
							{
								func_636(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
								{
									func_636(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[0]) && func_109(Local_82.f_7[0]))
								{
									MISC::SET_BIT(&iLocal_1294, 11);
									MISC::SET_BIT(&iLocal_1294, 16);
									func_636(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_636(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								func_636(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || MISC::IS_BIT_SET(Local_82.f_3, 16))
							{
								func_636(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							func_636(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
							{
								if (func_523())
								{
									MISC::SET_BIT(&iLocal_1294, 11);
									MISC::SET_BIT(&iLocal_1294, 16);
									func_636(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_636(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (func_523())
							{
								MISC::SET_BIT(&iLocal_1294, 11);
								MISC::SET_BIT(&iLocal_1294, 16);
								func_636(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_636(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_523())
							{
								MISC::SET_BIT(&iLocal_1294, 11);
								MISC::SET_BIT(&iLocal_1294, 16);
								func_636(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_636(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || MISC::IS_BIT_SET(Local_82.f_3, 16))
						{
							func_636(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_522(1);
					Local_699.f_6 = (Local_699.f_6 + iVar4);
					if (!Global_262145.f_11510)
					{
						if (Local_699.f_6 > 0)
						{
							func_521(19, Local_699.f_6);
						}
					}
					Global_2464679 = iVar4;
					if (iVar4 > 0)
					{
						if (func_520())
						{
							func_508(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar10 = func_507(1);
					Local_699.f_7 = (Local_699.f_7 + iVar10);
					func_506();
					func_459(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar10, 1, -1, 0, 0, 0);
					Local_699.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					if (!MISC::IS_BIT_SET(iLocal_1294, 16))
					{
						MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					MISC::SET_BIT(&iLocal_1294, 17);
					MISC::SET_BIT(&iLocal_1294, 18);
				}
			}
		}
	}
}

int func_459(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_460(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_460(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_470(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_466(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_461(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_461(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_464(iParam0, 1) };
	if (iParam0 == func_463(PLAYER::PLAYER_PED_ID()))
	{
		func_462(1);
	}
	func_466(Var0, iParam1, 0, sParam2, iParam3);
}

void func_462(int iParam0)
{
	Global_2440277.f_2002 = iParam0;
}

int func_463(int iParam0)
{
	return iParam0;
}

Vector3 func_464(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_465(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_465(int iParam0)
{
	return iParam0;
}

void func_466(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440277.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440277.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440277.f_1401[iVar1 /*30*/] = { Param0 };
			Global_2440277.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440277.f_1401[iVar1 /*30*/].f_4 = func_469(Global_2440277.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440277.f_1401[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2440277.f_1401[iVar1 /*30*/].f_3 = iParam3;
			Global_2440277.f_1401[iVar1 /*30*/].f_8 = iParam4;
			Global_2440277.f_1401[iVar1 /*30*/].f_9 = func_468();
			Global_2440277.f_1401[iVar1 /*30*/].f_10 = func_467();
			StringCopy(&(Global_2440277.f_1401[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2440277.f_1401[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_467()
{
	if (Global_2440277.f_2002)
	{
		Global_2440277.f_2002 = 0;
		return 1;
	}
	Global_2440277.f_2002 = 0;
	return 0;
}

var func_468()
{
	var uVar0;
	
	uVar0 = Global_2440277.f_2004;
	Global_2440277.f_2004 = 1;
	return uVar0;
}

float func_469(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_470(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_471(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_471(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_505(PLAYER::PLAYER_ID()) || func_504(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_369() || func_502(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_174(sParam2))
	{
	}
	if (func_501())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_499(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_498(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_496(0, &iVar1);
					break;
				
				case 3:
					func_496(1, &iVar1);
					break;
				
				case 1:
					func_493(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688740)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_491(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_481((func_490(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_2 != -1)
				{
					func_491(1165, iVar1, -1);
				}
				func_476(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_472((func_474(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_472((func_474(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_472(int iParam0)
{
	if (func_501())
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_5 = iParam0;
		func_473(joaat("mpply_globalxp"), iParam0);
	}
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_474(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_850(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_475(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_475(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_475(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_476(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_66(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_479(func_480(&Var0));
			if (iVar13 == 0)
			{
				func_478(&Global_1388052, iParam0);
				func_477(joaat("mpply_crew_local_xp_0"), Global_1388052);
			}
			else if (iVar13 == 1)
			{
				func_478(&Global_1388053, iParam0);
				func_477(joaat("mpply_crew_local_xp_1"), Global_1388053);
			}
			else if (iVar13 == 2)
			{
				func_478(&Global_1388054, iParam0);
				func_477(joaat("mpply_crew_local_xp_2"), Global_1388054);
			}
			else if (iVar13 == 3)
			{
				func_478(&Global_1388055, iParam0);
				func_477(joaat("mpply_crew_local_xp_3"), Global_1388055);
			}
			else if (iVar13 == 4)
			{
				func_478(&Global_1388056, iParam0);
				func_477(joaat("mpply_crew_local_xp_4"), Global_1388056);
			}
		}
	}
}

void func_477(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1388047 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1388050 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1388051 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1388052 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1388053 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1388054 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1388055 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1388056 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1388057 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1388058 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1388059 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1388060 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1388061 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1388062 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1388063 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_478(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_479(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_480(int* iParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return Global_2462403;
		}
	}
	return Global_2462403;
}

void func_481(int iParam0, int iParam1, int iParam2)
{
	if (func_501())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_244(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_244(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_489(PLAYER::PLAYER_ID()))
		{
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_6 = func_487(iParam0, 1);
		}
		func_486(639, iParam0, -1, 1);
		func_485(640, func_487(iParam0, 1), -1, 1, 0);
		Global_1388197[func_244(-1)] = iParam0;
		func_482(-1109644434, 7, 0);
	}
}

void func_482(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_484(iParam1, iParam2))
	{
		iVar0 = func_483();
		Global_2462355[iVar0] = iParam1;
		Global_2462366[iVar0] = iParam0;
	}
}

int func_483()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462355[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_484(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_485(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2552060[iParam0 /*3*/][func_244(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_486(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2552060[iParam0 /*3*/][func_244(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_244(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_244(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_244(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_244(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_244(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_244(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_244(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_244(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_244(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_244(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_244(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_244(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_244(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_244(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_244(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_244(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_244(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_244(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_244(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_244(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_244(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_244(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_244(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_244(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590645[0 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590645[1 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590645[2 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590645[3 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590794[func_244(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_244(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_244(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_244(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_244(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_244(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_244(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590718[0 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590718[1 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590718[2 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590718[3 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590718[4 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590797[0 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590797[1 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590797[2 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590797[3 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590797[4 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590813[0 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590813[1 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590813[2 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590813[3 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590813[4 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590718[5 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590645[4 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590829[func_244(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590838[func_244(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590832[func_244(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590841[func_244(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590835[func_244(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590844[func_244(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590847[func_244(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590718[6 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590645[5 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590718[7 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590645[6 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590718[8 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590645[7 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590718[9 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590645[8 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590718[10 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590645[9 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590718[11 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590645[10 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590718[12 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590645[11 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590718[13 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590645[12 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590718[14 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590645[13 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590718[15 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590645[14 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590718[16 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590645[15 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590718[17 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590645[16 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590645[17 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590645[18 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590645[19 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590645[20 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590850[func_244(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590853[func_244(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590856[func_244(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590859[func_244(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590862[func_244(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590865[func_244(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590868[func_244(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590871[func_244(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590874[func_244(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590877[func_244(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590880[func_244(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590883[func_244(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590886[func_244(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590889[func_244(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590645[21 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590718[23 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590645[22 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590718[24 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590645[23 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_487(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_488(iParam0, 0);
}

int func_488(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292403[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292403[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_489(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2440277.f_1, iParam0);
	}
	return 1;
}

int func_490(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388197[func_244(-1)];
			}
			else if (func_489(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_244(-1)];
	}
	return 0;
}

void func_491(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_263(iParam0, func_244(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_492(iParam0))
	{
		func_485(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_486(iParam0, iVar0, iParam2, 1);
	}
}

int func_492(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

void func_493(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_495(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_67(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_494(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_494(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_494(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_495(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_496(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_850(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_850(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_497(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_494(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_494(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_497(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_498(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_494(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_499(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_490(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_490(PLAYER::PLAYER_ID());
		}
	}
	if (func_500(8000, 0, 0) > 0)
	{
		if (func_500(8000, 0, 0) < (iParam0 + func_490(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_500(8000, 0, 0) - func_490(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_500(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292403[iParam0];
}

int func_501()
{
	return 1;
}

int func_502(int iParam0)
{
	return func_503(func_341(iParam0));
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_504(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 2;
}

bool func_505(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 7;
}

void func_506()
{
	Global_2464020 = 1;
}

int func_507(bool bParam0)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iLocal_1294, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_748())
		{
			return Global_262145.f_11324;
		}
		else
		{
			return Global_262145.f_11263;
		}
	}
	func_449();
	if (func_748())
	{
		iVar0 = (Global_262145.f_11324 * iLocal_3463);
	}
	else
	{
		iVar0 = (Global_262145.f_11263 * iLocal_3463);
	}
	return iVar0;
}

void func_508(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_520())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27658)
			{
				func_509(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_509(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27658)
			{
				func_509(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_509(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_509(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_520())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463638)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_516(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_515(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_510(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_510(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_511(iParam0);
	}
}

void func_511(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_520())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_514(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_512(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_512(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_513(&(uParam0->f_14));
	func_513(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_513(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_514(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_515(int iParam0, int iParam1)
{
	Global_2464818 = iParam1;
	Global_2464817 = iParam0;
}

int func_516(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_520())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_517(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_517(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_519(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_518();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_518()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_519(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_520()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_521(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23502 == 1)
			{
				Global_2540612.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540612.f_284 = iParam1;
				Global_2540612.f_285 = 0;
			}
		}
	}
}

int func_522(bool bParam0)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iLocal_1294, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_748())
		{
			return Global_262145.f_11323;
		}
		else
		{
			return Global_262145.f_11262;
		}
	}
	func_449();
	if (func_748())
	{
		iVar0 = (Global_262145.f_11323 * iLocal_3463);
	}
	else
	{
		iVar0 = (Global_262145.f_11262 * iLocal_3463);
	}
	return iVar0;
}

int func_523()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iLocal_3406]))
	{
		if (func_109(Local_82.f_7[iLocal_3406]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_82.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_82.f_256[iLocal_3406];
	if (!bVar0)
	{
		if (Local_82.f_594[0 /*4*/] != iLocal_3406)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_82.f_594[0 /*4*/] == iLocal_3406)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_82.f_256[Local_82.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_82.f_255 - iVar2);
		if (iVar5 > iVar6)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_524()
{
	int iVar0;
	var uVar1;
	
	func_686(&iVar0, &uVar1);
	if (iLocal_3406 > -1)
	{
		if (func_109(Local_82.f_7[iLocal_3406]))
		{
			return 1;
		}
	}
	return 0;
}

void func_525()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_82.f_241 == 1)
	{
		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_3442) || (func_22(&uLocal_3442) && func_19(&uLocal_3442, 5000, 0)))
				{
					if (Local_82.f_27 == joaat("savage") || Local_82.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_3406;
						if (iVar1 > -1)
						{
							if (func_109(Local_82.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_82.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_3406;
						if (iVar1 > -1)
						{
							if (func_109(Local_82.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), -1, false);
								if (iVar0 == 0)
								{
									Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), iVar2, false);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_106(&uLocal_3442);
					func_20(&uLocal_3442, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (MISC::IS_BIT_SET(Local_82.f_319, iVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), false))
				{
					if ((func_438() - func_126(&(Local_82.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), false))
							{
								if (!func_203())
								{
									func_437();
									func_171((func_438() - func_126(&(Local_82.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), false))
							{
								if (!func_203())
								{
									func_437();
									func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_7[iVar2]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), true, false, -1);
								func_25(&(Local_82.f_7[iVar2]));
							}
							else
							{
								NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_82.f_7[iVar2]), 1, 0, 0);
								func_25(&(Local_82.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == iVar2)
			{
				if (!MISC::IS_BIT_SET(iLocal_1294, 6))
				{
					if (func_428(0, 1, 1, 1))
					{
						if (func_748())
						{
							if (!MISC::IS_BIT_SET(iLocal_1294, 19))
							{
								func_427("UW_NOPILC", 30000);
							}
							else
							{
								func_427("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_427("UW_NOPIL", 30000);
						}
						func_426(1);
						MISC::SET_BIT(&iLocal_1294, 6);
					}
					else if (MISC::IS_BIT_SET(iLocal_1294, 19))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(true);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar5 = Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iVar5])))
						{
							if (!func_748())
							{
								if (!func_271("UW_EXPL"))
								{
									func_265("UW_EXPL", 0);
								}
							}
							else if (!func_271("UW_EXPLC"))
							{
								func_265("UW_EXPLC", 0);
							}
						}
						else if (func_271("UW_EXPL") || func_271("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_271("UW_EXPL") || func_271("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_526(int iParam0)
{
	return Global_2440277.f_2834[0 /*80*/].f_1 == iParam0;
}

void func_527()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (Local_82.f_27 == joaat("rhino"))
		{
			if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_3438) || (func_22(&uLocal_3438) && func_19(&uLocal_3438, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_69(Local_3464, 0f, 0f, 0f, 0))
							{
								Local_3464 = { Local_82.f_30[0 /*3*/] };
							}
							fVar0 = func_529(PLAYER::PLAYER_PED_ID(), Local_3464, 1);
							if (fVar0 > 750f)
							{
								MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							}
						}
						func_106(&uLocal_3438);
						func_20(&uLocal_3438, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_271("UW_OOB"))
					{
						func_265("UW_OOB", 0);
					}
					if (!func_22(&uLocal_3440))
					{
						iVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_82.f_7[func_528()]), "GTAO_FM_Events_Soundset", false, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar2, "Time", 30f);
						func_20(&uLocal_3440, 0, 0);
					}
					if (func_22(&uLocal_3440))
					{
						if ((func_438() - func_126(&uLocal_3440, 0, 0)) >= 0)
						{
							func_437();
							func_171((func_438() - func_126(&uLocal_3440, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							func_437();
							func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							func_9();
							MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
						}
					}
					if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						fVar0 = func_529(PLAYER::PLAYER_PED_ID(), Local_82.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							func_106(&uLocal_3440);
							AUDIO::STOP_SOUND(iVar2);
						}
					}
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		func_688(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_528();
			if (iVar1 > -1)
			{
				if (func_109(Local_82.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_7[iVar1]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), false);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), true);
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar1]), true, false, -1);
						func_25(&(Local_82.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_528()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar1]))
			{
				if (func_109(Local_82.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_529(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_530()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_1293, 24))
	{
		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			func_686(&iVar1, &uVar0);
			if (func_533(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_82.f_22[iVar1] != func_5())
					{
						fLocal_1304 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_532(1, iVar1);
						MISC::SET_BIT(&iLocal_1293, 24);
						func_531(1);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_1293, 24);
				MISC::SET_BIT(&iLocal_1293, 25);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_1293, 25))
	{
		if (MISC::IS_BIT_SET(iLocal_1293, 24))
		{
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1304);
				func_686(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_532(0, iVar1);
					MISC::SET_BIT(&iLocal_1293, 25);
					func_531(0);
				}
			}
		}
	}
}

void func_531(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 4);
	}
}

void func_532(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_850(iVar1, 0, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (MISC::IS_BIT_SET(Local_716[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, true);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, false);
				}
			}
		}
		iVar0++;
	}
}

bool func_533(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (iVar1 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (MISC::IS_BIT_SET(Local_716[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_534()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_1293, 15))
	{
		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
		{
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_82.f_22[0] != func_5())
				{
					if (func_428(0, 0, 1, 1))
					{
						if (!func_748())
						{
							if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
							{
								if (!func_748())
								{
									func_545("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_82.f_22[0]), 1, 30000);
								}
								else
								{
									func_545("UW_START1PC", PLAYER::GET_PLAYER_NAME(Local_82.f_22[0]), 1, 30000);
								}
								func_426(1);
							}
							else if (MISC::IS_BIT_SET(Local_82.f_15, 0))
							{
								if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 14))
								{
									if (!func_748())
									{
										func_427("UW_STARTM", 30000);
									}
									else
									{
										func_427("UW_STARTMC", 30000);
									}
									func_426(1);
								}
							}
							else
							{
								func_545("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_82.f_22[0]), 1, 30000);
								func_426(1);
							}
						}
						else if (!MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 14))
						{
							if (!func_748())
							{
								func_427("UW_STARTM", 30000);
							}
							else
							{
								func_427("UW_STARTMC", 30000);
							}
							func_426(1);
						}
						MISC::SET_BIT(&iLocal_1293, 15);
					}
				}
			}
		}
	}
	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
	{
		if (Local_82.f_241 == 1)
		{
			if (Local_82.f_27 != joaat("hydra") && Local_82.f_27 != joaat("rhino"))
			{
				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (iLocal_3406 >= 0)
					{
						if (!MISC::IS_BIT_SET(iLocal_1294, 10))
						{
							if (!MISC::IS_BIT_SET(iLocal_1294, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iLocal_3406]))
								{
									if (func_109(Local_82.f_7[iLocal_3406]))
									{
										MISC::SET_BIT(&iLocal_1294, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iLocal_3406]))
							{
								if (!func_109(Local_82.f_7[iLocal_3406]))
								{
									func_544("UW_TEAMV");
									MISC::SET_BIT(&iLocal_1294, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_748())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!MISC::IS_BIT_SET(Local_82.f_3, 6))
			{
				if (!MISC::IS_BIT_SET(iLocal_1293, (16 + iVar1)))
				{
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >= 2)
					{
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
						{
							if ((MISC::IS_BIT_SET(Local_82.f_3, 0) && MISC::IS_BIT_SET(Local_82.f_3, 1)) && MISC::IS_BIT_SET(Local_82.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[0]))
								{
									if (func_109(Local_82.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[0]), -1, false) != 0)
										{
											iVar0 = func_543(iVar1, 0);
											if (iVar0 != func_5())
											{
												func_535("UW_COMP", iVar0, 1, 0, 0, 0, 1, 0);
											}
											MISC::SET_BIT(&iLocal_1293, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_535(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	bool bVar17;
	bool bVar18;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_541(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2515401 = { func_66(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515331, 35, &Global_2515401))
			{
				bVar17 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2515331.f_22), "Leader") && Global_2515331.f_30 == 0)
				{
					bVar17 = true;
				}
				if (Global_2515331.f_21 > 0)
				{
					bVar18 = false;
				}
				else
				{
					bVar18 = true;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_540(&Var1) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515331, 35), &(Global_2515331.f_17), Global_2515331.f_30, bVar17, false, Global_2515331, &Var1, Global_1314053, Global_1314054, Global_1314055);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar18, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515331, 35), &(Global_2515331.f_17), Global_2515331.f_30, bVar17, false, Global_2515331, Global_1314053, Global_1314054, Global_1314055);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_536(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_536(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_539() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_537(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672612.f_5[iVar0 /*53*/] = iParam0;
		Global_1672612.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672612.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672612.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672612.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672612.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672612.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_537(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672612 - 1))
	{
		if (iParam0 > Global_1672612.f_5[iVar0 /*53*/].f_1)
		{
			func_538(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672612++;
	if (Global_1672612 > 5)
	{
		Global_1672612 = 5;
		return Global_1672612;
	}
	return (Global_1672612 - 1);
}

void func_538(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672612.f_5[iVar0 /*53*/] = { Global_1672612.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_539()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_540(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_541(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_542(&cVar0);
}

var func_542(char[4] cParam0)
{
	return cParam0;
}

int func_543(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iParam1]))
	{
		if (func_109(Local_82.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[iParam1]), iVar2, false);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_544(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_536(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_545(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

void func_546()
{
	if (!MISC::IS_BIT_SET(iLocal_1293, 9))
	{
		if (Local_82.f_241 == 1)
		{
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					MISC::SET_BIT(&iLocal_1293, 9);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_1293, 10))
	{
		if (MISC::IS_BIT_SET(iLocal_1293, 9))
		{
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							MISC::SET_BIT(&iLocal_1293, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						MISC::SET_BIT(&iLocal_1293, 10);
						func_547();
					}
				}
			}
		}
	}
}

void func_547()
{
	if (MISC::IS_BIT_SET(Global_2540612.f_5025, 1))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_5025), 1);
	}
	if (Global_2540612.f_5025 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
		Global_2540612.f_5025 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2540612.f_5035 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2540612.f_5035);
				Global_2540612.f_5035 = -1;
			}
		}
	}
}

void func_548()
{
	struct<2> Var0;
	struct<2> Var4;
	int iVar8;
	int iVar9[2];
	int iVar12;
	int iVar13;
	int iVar14[4];
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar27;
	var uVar28;
	var uVar32;
	var uVar33;
	var uVar37;
	var uVar38;
	var uVar42;
	var uVar43;
	var uVar47;
	var uVar48;
	bool bVar52;
	int iVar53;
	char* sVar54;
	var uVar55;
	var uVar56;
	var uVar57;
	var uVar61;
	var uVar62;
	
	iVar20 = 1;
	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
		{
			if (!MISC::IS_BIT_SET(iLocal_1293, 26))
			{
				if ((((MISC::IS_BIT_SET(Local_82.f_3, 0) && MISC::IS_BIT_SET(Local_82.f_3, 1)) && MISC::IS_BIT_SET(Local_82.f_3, 2)) || (func_748() && MISC::IS_BIT_SET(Local_82.f_3, 6))) || (func_748() && MISC::IS_BIT_SET(Local_82.f_3, 15)))
				{
					if (!func_22(&uLocal_3459))
					{
						func_20(&uLocal_3459, 0, 0);
					}
					if (func_19(&uLocal_3459, 1000, 0))
					{
						if (func_271("UW_ATTK"))
						{
							func_9();
						}
						func_619();
						if (func_618())
						{
							iVar25 = func_522(1);
							if (iVar25 > 0)
							{
								Local_699.f_6 = (Local_699.f_6 + iVar25);
								if ((!Global_262145.f_11510 && !MISC::IS_BIT_SET(Local_82.f_3, 8)) || (!Global_262145.f_11511 && MISC::IS_BIT_SET(Local_82.f_3, 8)))
								{
									if (Local_699.f_6 > 0)
									{
										func_521(19, Local_699.f_6);
									}
								}
								Global_2464679 = iVar25;
								if (func_520())
								{
									func_508(210955503, iVar25, &uVar27, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar28);
								}
							}
							iVar23 = func_507(1);
							func_506();
							Local_699.f_7 = (Local_699.f_7 + iVar23);
							func_459(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_699.f_5 = 2;
							func_636(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1, 0);
						}
						else if (!func_748())
						{
							iVar25 = func_631(0);
							func_606(&iVar25, 1);
							iVar25 = (iVar25 + func_522(1));
							if (iVar25 > 0)
							{
								Local_699.f_6 = (Local_699.f_6 + iVar25);
								if (!Global_262145.f_11510)
								{
									if (Local_699.f_6 > 0)
									{
										func_521(19, Local_699.f_6);
									}
								}
								Global_2464679 = iVar25;
								if (func_520())
								{
									func_508(210955503, iVar25, &uVar32, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar33);
								}
							}
							iVar23 = func_507(1);
							iVar23 = (iVar23 + func_605());
							Local_699.f_7 = (Local_699.f_7 + iVar23);
							func_506();
							func_459(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
							Local_699.f_5 = 1;
							func_635(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
						}
						else if (func_604())
						{
							if (!func_603(1))
							{
								if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
								{
									func_9();
								}
								iVar25 = func_631(0);
								func_606(&iVar25, 1);
								iVar25 = (iVar25 + func_522(1));
								Local_699.f_6 = (Local_699.f_6 + iVar25);
								if (!Global_262145.f_11511)
								{
									if (Local_699.f_6 > 0)
									{
										func_521(19, Local_699.f_6);
									}
								}
								Global_2464679 = iVar25;
								if (iVar25 > 0)
								{
									if (func_520())
									{
										func_508(210955503, iVar25, &uVar37, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar38);
									}
								}
								if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
								{
									func_635(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								else
								{
									func_635(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								Local_699.f_5 = 1;
								iVar23 = func_605();
								iVar23 = (iVar23 + func_507(1));
								Local_699.f_7 = (Local_699.f_7 + iVar23);
								func_506();
								func_459(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar25 = func_522(1);
								iVar23 = func_507(1);
								iVar20 = 0;
								iVar22 = 0;
								while (iVar22 <= 3)
								{
									if (Local_82.f_465[iVar22 /*4*/].f_1 == Local_82.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										iVar14[iVar22] = -1;
										if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
										{
											if (Local_82.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (Local_82.f_465[iVar22 /*4*/].f_2 != PLAYER::PLAYER_ID())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_82.f_465[iVar22 /*4*/].f_2)))
													{
														iVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_82.f_465[iVar22 /*4*/].f_2);
														iVar12++;
													}
												}
											}
										}
										else if (iLocal_3406 > -1)
										{
											if (iLocal_3406 != Local_82.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_82.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
								{
									if (iVar20 > 2)
									{
										bVar21 = true;
									}
									else if (iVar9[0] == func_5())
									{
										bVar21 = true;
									}
									else
									{
										func_602(68, "UW_DRAWP", PLAYER::GET_PLAYER_NAME(iVar9[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar20 > 2)
								{
									bVar21 = true;
								}
								else if (iVar14[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									func_635(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								if (bVar21)
								{
									if (!func_748())
									{
										func_636(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
									}
									else
									{
										func_636(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1, 0);
									}
								}
								iVar26 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_631(0)) / SYSTEM::TO_FLOAT(iVar20)));
								iVar24 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_605()) / SYSTEM::TO_FLOAT(iVar20)));
								func_606(&iVar26, 1);
								iVar25 = (iVar25 + iVar26);
								iVar23 = (iVar23 + iVar24);
								Local_699.f_6 = (Local_699.f_6 + iVar25);
								if (!Global_262145.f_11511)
								{
									if (Local_699.f_6 > 0)
									{
										func_521(19, Local_699.f_6);
									}
								}
								Global_2464679 = iVar25;
								if (iVar25 > 0)
								{
									if (func_520())
									{
										func_508(210955503, iVar25, &uVar42, 0, 1, 0);
									}
									else
									{
										MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar43);
									}
								}
								Local_699.f_7 = (Local_699.f_7 + iVar23);
								func_506();
								func_459(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_600(1);
							iVar25 = func_522(1);
							iVar23 = func_507(1);
							Local_699.f_6 = (Local_699.f_6 + iVar25);
							if (!Global_262145.f_11511)
							{
								if (Local_699.f_6 > 0)
								{
									func_521(19, Local_699.f_6);
								}
							}
							Global_2464679 = iVar25;
							if (iVar25 > 0)
							{
								if (func_520())
								{
									func_508(210955503, iVar25, &uVar47, 0, 1, 0);
								}
								else
								{
									MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar48);
								}
							}
							Local_699.f_7 = (Local_699.f_7 + iVar23);
							func_506();
							func_459(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar23, 1, -1, 0, 0, 0);
							if (!func_603(0))
							{
								iVar13 = Local_82.f_465[0 /*4*/];
								if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
								{
									iVar8 = PLAYER::INT_TO_PLAYERINDEX(Local_82.f_465[0 /*4*/].f_2);
									if (func_313(iVar8, 1))
									{
										iVar53 = func_317(iVar8);
										if (iVar53 > -1)
										{
											uVar55 = func_315(iVar53);
											sVar54 = func_594(iVar8);
											bVar52 = true;
										}
									}
									if (iVar8 != func_5())
									{
										if (!bVar52)
										{
											if (!func_748())
											{
												func_602(65, "UW_FWONP", PLAYER::GET_PLAYER_NAME(iVar8), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_602(65, "UW_FWONPC", PLAYER::GET_PLAYER_NAME(iVar8), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_748())
										{
											func_592(66, "PEN_OVR", "UW_FWONG", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_592(66, "PEN_OVR", "UW_FWONGC", sVar54, uVar55, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar13 + 1, 16);
									if (!func_748())
									{
										func_635(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
									else
									{
										func_635(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
								{
									func_9();
								}
								iVar22 = 1;
								while (iVar22 <= 3)
								{
									if (Local_82.f_465[iVar22 /*4*/].f_1 == Local_82.f_465[0 /*4*/].f_1)
									{
										iVar20++;
										if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
										{
											if (Local_82.f_465[iVar22 /*4*/].f_2 > -1)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_82.f_465[iVar22 /*4*/].f_2)))
												{
													iVar9[iVar12] = PLAYER::INT_TO_PLAYERINDEX(Local_82.f_465[iVar22 /*4*/].f_2);
													iVar12++;
												}
											}
										}
										else if (iLocal_3406 > -1)
										{
											if (iLocal_3406 != Local_82.f_465[iVar22 /*4*/])
											{
												iVar14[iVar19] = Local_82.f_465[iVar22 /*4*/];
												iVar19++;
											}
										}
									}
									iVar22++;
								}
								if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
								{
									if (iVar20 == 2)
									{
										if (iVar9[0] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9[0]))
										{
											if (iVar9[1] != func_5() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9[1]))
											{
												func_554(68, func_5(), func_5(), -1, "UW_DRAW2P", "UW_BIGF", func_318(), 15000, func_318(), PLAYER::GET_PLAYER_NAME(iVar9[0]), PLAYER::GET_PLAYER_NAME(iVar9[1]), 0);
											}
											else
											{
												bVar21 = true;
											}
										}
										else
										{
											bVar21 = true;
										}
									}
									else
									{
										bVar21 = true;
									}
								}
								else if (iVar20 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar14[0] + 1, 16);
									StringCopy(&Var4, "UW_TM", 16);
									StringIntConCat(&Var4, iVar14[1] + 1, 16);
									func_635(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var4, 1, 2, 0);
									bVar21 = true;
								}
								else
								{
									bVar21 = true;
								}
								if (bVar21)
								{
									func_636(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
								}
							}
						}
						func_659(0);
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
						{
							Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
						}
						MISC::SET_BIT(&iLocal_1293, 13);
						MISC::SET_BIT(&iLocal_1293, 26);
					}
				}
				else if (MISC::IS_BIT_SET(Local_82.f_3, 6) || (!func_748() && MISC::IS_BIT_SET(Local_82.f_3, 15)))
				{
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1)
					{
						func_636(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
					}
					else
					{
						func_635(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					}
					func_659(0);
					MISC::SET_BIT(&iLocal_1293, 26);
					iVar25 = func_522(1);
					Local_699.f_6 = (Local_699.f_6 + iVar25);
					if (!Global_262145.f_11510)
					{
						if (Local_699.f_6 > 0)
						{
							func_521(19, Local_699.f_6);
						}
					}
					Global_2464679 = iVar25;
					if (iVar25 > 0)
					{
						if (func_520())
						{
							func_508(210955503, iVar25, &uVar56, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar57);
						}
					}
					iVar23 = func_507(1);
					Local_699.f_7 = (Local_699.f_7 + iVar23);
					func_506();
					func_459(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_699.f_5 = 2;
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (MISC::IS_BIT_SET(Local_82.f_3, 14))
				{
					func_659(0);
					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3)
					{
						Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
					}
				}
				else if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
				{
					func_635(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					func_659(0);
					MISC::SET_BIT(&iLocal_1293, 26);
					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					iVar25 = func_522(1);
					Local_699.f_6 = (Local_699.f_6 + iVar25);
					if (!Global_262145.f_11510)
					{
						if (Local_699.f_6 > 0)
						{
							func_521(19, Local_699.f_6);
						}
					}
					Global_2464679 = iVar25;
					if (iVar25 > 0)
					{
						if (func_520())
						{
							func_508(210955503, iVar25, &uVar61, 0, 1, 0);
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iVar25, "AM_KILL_LIST", &uVar62);
						}
					}
					iVar23 = func_507(1);
					Local_699.f_7 = (Local_699.f_7 + iVar23);
					func_506();
					func_459(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar23, 1, -1, 0, 0, 0);
					Local_699.f_5 = 2;
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (MISC::IS_BIT_SET(Local_82.f_3, 12))
				{
					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
				}
			}
			if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
			{
				if (MISC::IS_BIT_SET(iLocal_1293, 26))
				{
					if (func_271("UW_ATTK"))
					{
						func_9();
					}
					if (func_549(&uLocal_3397, 1))
					{
						MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
					{
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (func_109(Local_82.f_7[Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
	{
		MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
	}
}

int func_549(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_360()) && !(func_241(PLAYER::PLAYER_ID(), 0) && (func_234(PLAYER::PLAYER_ID()) || func_232(PLAYER::PLAYER_ID())))) && !func_553(PLAYER::PLAYER_ID()))
	{
		func_552();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1574656.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2540612.f_4652), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_551(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_550();
				func_551(uParam0, 2);
			}
			break;
		
		case 2:
			func_550();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_683("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_551(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2540612.f_4652), 1);
				func_551(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2540612.f_4652), 1);
			return 1;
	}
	return 0;
}

void func_550()
{
	if (MISC::IS_BIT_SET(Global_2540612.f_4652, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2540612.f_833, 2)) && func_850(PLAYER::PLAYER_ID(), 1, 1)) && !Global_74030) && !Global_58898) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2540612.f_4652), 1);
			func_427("AMEV_LBD_HELP", -1);
			func_426(1);
			MISC::CLEAR_BIT(&(Global_2540612.f_4652), 0);
		}
	}
}

void func_551(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_552()
{
	Global_2464021 = 1;
}

int func_553(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_850(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_194(Global_2426097[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_554(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_555(&Var0);
}

int func_555(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440277.f_3156)
		{
			return 0;
		}
	}
	func_566(uParam0, uParam0->f_17);
	func_565(uParam0);
	if (func_61())
	{
		func_565(uParam0);
	}
	if (func_564(uParam0->f_1))
	{
		func_557();
		if (Global_2440277.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440277.f_2834[0 /*80*/] = { *uParam0 };
			if (func_556(uParam0->f_69, 8192))
			{
				Global_1663778 = 1;
			}
			return 1;
		}
		if (((Global_2440277.f_2834[0 /*80*/].f_1 == 13 || Global_2440277.f_2834[0 /*80*/].f_1 == 53) || Global_2440277.f_2834[0 /*80*/].f_1 == 54) || Global_2440277.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440277.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440277.f_2834[iVar0 + 1 /*80*/] = { Global_2440277.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440277.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440277.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440277.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_557();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_358(&(Global_2440277.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440277.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_556(uParam0->f_69, 128))
			{
				if (func_363(Global_2440277.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440277.f_2834[iVar0 /*80*/].f_2 = 5;
					func_358(&(Global_2440277.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_556(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_557()
{
	bool bVar0;
	
	if (Global_2440277.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_558();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_558()
{
	Global_2440277.f_3158 = 0;
	Global_2440277.f_3158.f_578 = 0;
	func_562(&(Global_2440277.f_3158.f_1));
	Global_2440277.f_3158.f_1.f_1 = 0;
	func_559(&(Global_2440277.f_3158.f_1), 1);
}

void func_559(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_77102)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_561(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_560(0);
}

void func_560(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_561(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77081, 0);
}

void func_562(var uParam0)
{
	func_563(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_563(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_564(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_565(var uParam0)
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_72 = func_318();
	}
}

void func_566(var uParam0, int iParam1)
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_5() || !func_850(iParam1, 0, 1))
	{
		return;
	}
	if (func_363(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_567(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_567(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_402(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_402(PLAYER::PLAYER_ID()) || (func_590() && func_589())) && !MISC::IS_BIT_SET(Global_2540612.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_588();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_850(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_586(iParam1, iParam0, 0);
							}
							else
							{
								return func_579(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_579(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_586(iParam1, iParam0, 0);
				}
				else
				{
					return func_568(0, -1, 0);
				}
			}
			else
			{
				return func_568(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_586(iParam1, iParam0, 0);
		}
		else
		{
			return func_579(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_579(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_568(bool bParam0, int iParam1, bool bParam2)
{
	return func_569(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_569(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_578() || (func_577() && func_575())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_574(iParam2, iVar0);
		}
		else
		{
			return func_574(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_495(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_573(1);
				}
				else
				{
					return func_573(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_570(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_570(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_573(1);
	}
	return func_573(0);
}

int func_570(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_572(iParam0, iParam1, iParam3);
	if (func_571(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_571(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_572(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_495(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_573(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_574(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_572(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_575()
{
	if (func_576())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_133494, 4);
}

bool func_576()
{
	return MISC::IS_BIT_SET(Global_4456448.f_123318, 12);
}

bool func_577()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_133494, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_133494, 0) || Global_1655244) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_578()
{
	if (func_576() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_579(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_582())
			{
				iVar3 = func_317(iParam0);
				if (!iVar3 == -1)
				{
					return func_315(iVar3);
				}
			}
			if ((func_581(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_495(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_573(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_580(1);
			}
			else
			{
				return func_569(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_573(1);
			}
			else
			{
				return func_569(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_317(iParam0);
	if (!iVar4 == -1)
	{
		return func_315(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_580(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_581(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_582()
{
	if ((((func_297() || func_585()) || func_61()) || func_584()) || func_583())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_583()
{
	return Global_2452015.f_23;
}

bool func_584()
{
	return Global_2452015.f_20;
}

var func_585()
{
	return Global_2452015.f_17;
}

int func_586(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_582())
	{
		iVar2 = func_317(iParam1);
		if (!iVar2 == -1)
		{
			return func_315(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_569(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_587(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_495(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_580(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_587(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_588()
{
	return Global_2359302.f_2;
}

bool func_589()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_590()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

void func_591(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_5();
	uParam1->f_18 = func_5();
	uParam1->f_19 = func_5();
	uParam1->f_20 = func_5();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_592(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar1 = func_5();
	iVar2 = func_5();
	return func_593(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_593(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_358(&(Var0.f_69), 4);
	return func_555(&Var0);
}

char* func_594(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_599(&(Global_1630317[iParam0 /*595*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1630317[iParam0 /*595*/].f_11.f_120 != Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_120)
	{
		sVar0 = func_597(iParam0, 0);
		return sVar0;
	}
	if (((func_233(iParam0, 28) || func_233(PLAYER::PLAYER_ID(), 28)) || func_596(iParam0)) && !func_595(iParam0))
	{
		return func_597(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_597(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_5())
	{
		sVar0 = func_599(&(Global_1630317[iVar1 /*595*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_597(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_595(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_596(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_5())
	{
		Var0 = { func_66(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_597(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_301(iParam0, 1))
		{
			return func_598();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_598()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_599(var uParam0)
{
	return uParam0;
}

void func_600(bool bParam0)
{
	if (bParam0)
	{
		if (func_601(1))
		{
			MISC::SET_BIT(&Global_1574681, 1);
		}
	}
	else if (func_601(2))
	{
		MISC::SET_BIT(&Global_1574681, 2);
	}
}

int func_601(int iParam0)
{
	int iVar0;
	
	iVar0 = func_263(2535, -1, 0);
	if (iParam0 == 0)
	{
		if ((MISC::IS_BIT_SET(iVar0, 0) && MISC::IS_BIT_SET(iVar0, 1)) && MISC::IS_BIT_SET(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((MISC::IS_BIT_SET(iVar0, 3) && MISC::IS_BIT_SET(iVar0, 4)) && MISC::IS_BIT_SET(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((MISC::IS_BIT_SET(iVar0, 6) && MISC::IS_BIT_SET(iVar0, 7)) && MISC::IS_BIT_SET(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((MISC::IS_BIT_SET(iVar0, 9) && MISC::IS_BIT_SET(iVar0, 10)) && MISC::IS_BIT_SET(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_602(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_555(&Var0);
}

int func_603(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_686(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_82.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
	{
		return Local_82.f_465[0 /*4*/].f_1 == Local_82.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_82.f_594[0 /*4*/].f_1 == Local_82.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_604()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_686(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_82.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_605()
{
	if (!func_748())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11259) * Global_262145.f_11449));
	}
	if ((MISC::IS_BIT_SET(Local_82.f_3, 0) && MISC::IS_BIT_SET(Local_82.f_3, 1)) && MISC::IS_BIT_SET(Local_82.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11320) * Global_262145.f_11451));
	}
	if (MISC::IS_BIT_SET(Local_82.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11320) * Global_262145.f_11451));
	}
	return 0;
}

void func_606(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_617())
		{
			if (func_616(0))
			{
				if (!func_379(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_615()))
					{
						if (func_614() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_614());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_612(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_611("GB_BCUT_TICK1", func_615(), iVar0, 0, 0, 1);
						}
						func_610(20);
						func_607(func_615(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_607(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_850(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_609(iParam0);
		func_608(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_519(iParam0));
	}
}

void func_608(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_609(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

void func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2540612.f_5188.f_7[iVar0]), iVar1);
}

int func_611(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_567(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_541(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_536(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_612(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_613(1);
	}
	else
	{
		iVar1 = func_613(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_613(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_614()
{
	return Global_262145.f_12397;
}

int func_615()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

bool func_616(bool bParam0)
{
	return func_313(PLAYER::PLAYER_ID(), bParam0);
}

bool func_617()
{
	return func_348(PLAYER::PLAYER_ID());
}

int func_618()
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_82.f_3, 6) && !MISC::IS_BIT_SET(Local_82.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_82.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_619()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_73[iVar0]))
		{
			if (!func_109(Local_82.f_73[iVar0]))
			{
				func_25(&(Local_82.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar0]))
		{
			if (func_31(Local_82.f_48[iVar0]))
			{
				func_25(&(Local_82.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_620(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_241(PLAYER::PLAYER_ID(), 0) || func_342(PLAYER::PLAYER_ID(), 0))
	{
		if (func_234(PLAYER::PLAYER_ID()) || func_247(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS() < iParam0)
	{
		if (bParam2)
		{
			func_625(sParam3, sParam4, 1);
		}
		if (func_624(26, -1))
		{
			func_622(26, -1);
		}
		return 1;
	}
	if (func_22(&(Global_1574656.f_18)))
	{
		if (!func_19(&(Global_1574656.f_18), 7500, 0))
		{
			return 0;
		}
		func_106(&(Global_1574656.f_18));
	}
	if (func_621())
	{
		if (bParam2)
		{
			func_625(sParam3, sParam4, 0);
		}
		if (func_624(26, -1))
		{
			func_622(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_625(sParam3, sParam4, 1);
		}
		if (func_624(26, -1))
		{
			func_622(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_621()
{
	return MISC::IS_BIT_SET(Global_1574656.f_1, 0);
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_623(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_623(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_624(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = func_623(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

void func_625(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!MISC::IS_BIT_SET(Global_1574656.f_1, 2) && !func_205(PLAYER::PLAYER_ID())) && !func_204(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_636(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		MISC::SET_BIT(&(Global_1574656.f_1), 2);
	}
}

void func_626()
{
	Global_2540612.f_1852.f_56 = 1;
}

void func_627()
{
	Global_2540612.f_1852.f_54 = 1;
}

bool func_628()
{
	return MISC::IS_BIT_SET(Global_2540612.f_1794, 11);
}

int func_629()
{
	if (iLocal_3406 > -1)
	{
		if (func_109(Local_82.f_7[iLocal_3406]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iLocal_3406])))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_630(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_631(bool bParam0)
{
	if (!func_748())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11258) * Global_262145.f_11448));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11319) * Global_262145.f_11450));
	}
	if ((MISC::IS_BIT_SET(Local_82.f_3, 0) && MISC::IS_BIT_SET(Local_82.f_3, 1)) && MISC::IS_BIT_SET(Local_82.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11319) * Global_262145.f_11450));
	}
	if (MISC::IS_BIT_SET(Local_82.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_11319) * Global_262145.f_11450));
	}
	return 0;
}

char* func_632()
{
	if (Local_82.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_82.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_633(int iParam0, int iParam1, bool bParam2)
{
	if (func_245())
	{
		if (iParam1 == 1)
		{
			if (Global_2540612.f_4458 == -1)
			{
				Global_2540612.f_4458 = Global_262145.f_26467;
			}
			func_8(&(Global_2540612.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540612.f_4461 == -1)
				{
					Global_2540612.f_4461 = Global_262145.f_26468;
				}
				func_8(&(Global_2540612.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
				func_688(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
			func_688(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_634()) && !func_251(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

bool func_634()
{
	return Global_2452015.f_838;
}

int func_635(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_358(&(Var0.f_69), iParam10);
	}
	return func_555(&Var0);
}

int func_636(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_358(&(Var0.f_69), iParam7);
	}
	return func_555(&Var0);
}

void func_637(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 4);
	}
}

void func_638(bool bParam0)
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_263(585, -1, 0));
		if (func_658())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_657())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_654(3610, -1, -1))
		{
		}
		iVar0 = func_263(2041, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_653(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_616(0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_263(585, -1, 0));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_652(Global_2550007));
		}
		func_651(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_644(PLAYER::PLAYER_PED_ID(), iVar0), func_643(PLAYER::PLAYER_PED_ID(), iVar0), false);
		func_642(func_263(2041, -1, 0), 1);
		Global_2540612.f_287 = 1;
		func_639(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_639(int iParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_641();
		if (iParam2 == -1)
		{
			iParam2 = func_263(2041, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_644(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_643(PLAYER::GET_PLAYER_PED(iParam0), iParam2), false);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_653(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_644(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_643(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_653(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_263(585, -1, 0);
		}
		if (func_616(1) && func_640(iParam0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, func_652(Global_2550007));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iParam1);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_28, 4))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, Global_1574444);
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_651(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

bool func_640(int iParam0)
{
	return func_233(iParam0, 10);
}

void func_641()
{
	Global_76808 = 0;
	Global_76809 = -1;
	Global_76810 = -1;
	Global_76811 = -1;
	Global_76812 = -1;
	Global_76813 = -1;
}

void func_642(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_641();
		func_485(2041, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_644(PLAYER::PLAYER_PED_ID(), iParam0), func_643(PLAYER::PLAYER_PED_ID(), iParam0), false);
		func_651(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_653(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_639(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_643(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_644(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_76808 || !iParam1 == Global_76809) || !iVar1 == Global_76810) || !iVar2 == Global_76811) || !iVar3 == Global_76812)
	{
		Global_76808 = bVar0;
		Global_76809 = iParam1;
		Global_76810 = iVar1;
		Global_76811 = iVar2;
		Global_76812 = iVar3;
		Global_76813 = func_645(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 76)
				{
					Global_76813 = 80;
				}
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 78;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 78;
				}
			}
		}
	}
	return Global_76813;
}

int func_645(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1293534210, 8))
			{
				return (2 + iVar3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1072212384, 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_3"), 8) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1072212384, 8)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, 1293534210, 8))
			{
				return (8 + iVar3);
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		return func_650(iParam0, iParam1);
	}
	if (func_649(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_COAT"), 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_648(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_647(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_647(iVar5);
						break;
					}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_646(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_647(iVar5);
					break;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_7"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_8"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_650(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -1086258388, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_SWEAT"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_650(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_0"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_650(iParam0, iParam1) + 15;
				}
				else
				{
					return func_650(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SILK_PYJAMAS"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("SILK_ROBE"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_647(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_646(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_647(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_648(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_649(int iParam0)
{
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_650(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_651(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_652(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_653(int iParam0, int iParam1)
{
	return 0;
}

bool func_654(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_656(iParam0, iParam1);
	iVar2 = func_655(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_655(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_656(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

bool func_657()
{
	return DLC::IS_DLC_PRESENT(1428761799);
}

bool func_658()
{
	return DLC::IS_DLC_PRESENT(-1005876368);
}

void func_659(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2540612.f_1794, 11))
		{
			MISC::SET_BIT(&(Global_2540612.f_1794), 11);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2540612.f_1794, 11))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_1794), 11);
	}
}

void func_660(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2540612.f_1794, 9))
		{
			MISC::SET_BIT(&(Global_2540612.f_1794), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2540612.f_1794, 9))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_1794), 9);
	}
}

void func_661()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
}

void func_662(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 7))
		{
			if (((!func_247(PLAYER::PLAYER_ID()) && !func_204(PLAYER::PLAYER_ID())) && !func_671(PLAYER::PLAYER_ID())) && !func_213(PLAYER::PLAYER_ID()))
			{
				if (func_245())
				{
					func_633(2, 0, 1);
					func_670();
				}
				if (func_262(0))
				{
					iVar0 = func_263(2481, -1, 0);
					MISC::CLEAR_BIT(&iVar0, 0);
					func_670();
				}
				if (func_262(func_209(func_190(PLAYER::PLAYER_ID()))))
				{
					iVar0 = func_263(2481, -1, 0);
					MISC::CLEAR_BIT(&iVar0, func_209(func_190(PLAYER::PLAYER_ID())));
					func_670();
				}
				if (func_669())
				{
					func_670();
				}
				if (func_190(PLAYER::PLAYER_ID()) > -1)
				{
					MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 7);
					if (func_227(PLAYER::PLAYER_ID()))
					{
						func_668();
					}
					func_665(func_667(func_190(PLAYER::PLAYER_ID())));
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 7);
		func_663();
	}
}

void func_663()
{
	if (func_664())
	{
		MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 17);
	}
}

bool func_664()
{
	return MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 17);
}

void func_665(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_666() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_666()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_668()
{
	if (!func_664())
	{
		Global_2540612.f_6648 = NETWORK::GET_NETWORK_TIME();
		MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 17);
	}
}

int func_669()
{
	if (Global_2440277.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_670()
{
	if (func_669())
	{
		Global_2440277.f_1267.f_16 = 1;
	}
}

bool func_671(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (((func_245() && !func_240()) || func_206(PLAYER::PLAYER_ID(), 21)) || func_206(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		if (func_22(&(Global_1574656.f_13)))
		{
			if (!func_19(&(Global_1574656.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_106(&(Global_1574656.f_13));
		}
	}
	else if (MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 10))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 9);
}

void func_672(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
	}
	Global_2540612.f_5035 = -1;
	bVar0 = (func_241(PLAYER::PLAYER_ID(), 0) && func_234(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_681(func_682(iParam0), 1);
	}
	else
	{
		func_680(iParam0, -1);
		if (func_205(PLAYER::PLAYER_ID()))
		{
			Global_1574656.f_3 = iParam0;
		}
		else
		{
			func_710(iParam0);
		}
		Global_1574656.f_4 = -1;
		if (func_205(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1574656.f_1), 5);
		}
		if (((func_245() && !func_240()) || func_206(PLAYER::PLAYER_ID(), 21)) || func_206(PLAYER::PLAYER_ID(), 25))
		{
			MISC::SET_BIT(&(Global_1574656.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1574656.f_1), 17);
		MISC::SET_BIT(&(Global_1574656.f_1), 20);
		if (func_679(iParam0))
		{
			func_678();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_677(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
		if (func_676(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			MISC::SET_BIT(&(Global_1574656.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_452(1);
				if (func_601(0))
				{
					MISC::SET_BIT(&(Global_1574656.f_1), 9);
				}
				if (!bParam6)
				{
					MISC::SET_BIT(&(Global_1574656.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_450(1);
			MISC::SET_BIT(&(Global_1574656.f_1), 12);
		}
		if (bParam5)
		{
			func_675();
			MISC::SET_BIT(&(Global_1574656.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_673(iParam0))
			{
				MISC::SET_BIT(&(Global_1574656.f_1), 21);
			}
		}
	}
	Global_2515292 = 1;
}

int func_673(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
		case 236:
		case 150:
			return 1;
		
		default:
	}
	if (func_674())
	{
		return 1;
	}
	return 0;
}

int func_674()
{
	switch (func_189())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_675()
{
	MISC::SET_BIT(&(Global_2540612.f_5026), 0);
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_235(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_677(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_444())
	{
		return;
	}
	fVar0 = (Global_2540612.f_5183 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2540612.f_5184))
	{
		if (!Global_2540612.f_5184 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2540612.f_5183 = fParam0;
	Global_2540612.f_5184 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_678()
{
	Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_204 = 0;
	MISC::CLEAR_BIT(&(Global_2540612.f_4625), 1);
}

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_680(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_262(0) || func_262(func_209(iVar0)))
		{
			MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 2);
		}
	}
}

void func_681(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_212, iParam0))
		{
			MISC::SET_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_212), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_212, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_212), iParam0);
	}
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case 134:
			return 21;
		
		case 254:
			return 25;
		
		default:
	}
	return 0;
}

bool func_683(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_684()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_82.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, false);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_685(bool bParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
		}
	}
}

void func_686(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_82.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_687()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1630317[iVar0 /*595*/] = -1;
	}
}

void func_688(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_245())
		{
			if (func_850(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_850(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_689(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 0))
		{
			Global_2464653 = func_190(PLAYER::PLAYER_ID());
			if (Global_2464653 == -1)
			{
				Global_2464653 = Global_1574656.f_4;
			}
			if (func_709(Global_2464653) == 0)
			{
				if (func_708(1) > 0)
				{
					func_707(26, -1);
				}
			}
			if (func_245())
			{
				func_633(2, 0, 1);
				func_670();
			}
			if (func_262(0))
			{
				iVar1 = func_263(2481, -1, 0);
				MISC::CLEAR_BIT(&iVar1, 0);
				func_670();
			}
			if (func_262(func_209(func_190(PLAYER::PLAYER_ID()))))
			{
				iVar1 = func_263(2481, -1, 0);
				MISC::CLEAR_BIT(&iVar1, func_209(func_190(PLAYER::PLAYER_ID())));
				func_670();
			}
			if (func_669())
			{
				func_670();
			}
			MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 0))
	{
		if ((!func_226() && !func_706()) && !func_705())
		{
			Global_2464653 = -1;
			func_622(26, -1);
		}
		else if (func_709(Global_2464653) == 0)
		{
			iVar0 = func_692(1);
			if (iVar0 > 0)
			{
				func_690(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_491(1933, 1, -1);
				func_690(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_624(26, -1))
		{
			Global_2464653 = -1;
			func_622(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 0);
	}
}

void func_690(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_475(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_691(iParam0))
	{
		func_473(iParam0, iVar0);
	}
	else
	{
		func_477(iParam0, iVar0);
	}
}

int func_691(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2463536 == 0)
	{
		return 0;
	}
	if (func_705())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_704() || func_702()))
		{
			Global_2462482 = 1;
		}
	}
	Global_2463536 = 0;
	if (Global_1315723)
	{
		iVar0 = 1;
	}
	if (Global_2462482)
	{
		iVar0 = 1;
	}
	if (Global_2462481)
	{
		iVar0 = 1;
	}
	if (func_556(Global_110886.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2462404)
	{
		iVar0 = 1;
	}
	if (func_701(512))
	{
		iVar0 = 1;
	}
	if (func_700(128))
	{
		iVar0 = 1;
	}
	if (Global_1315747 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_168())
	{
		iVar0 = 0;
	}
	if (Global_2462975)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_698())
		{
			if (Global_4456448.f_83167 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_697())
	{
		iVar0 = 0;
	}
	if ((Global_2462482 || Global_2462481) || Global_1315723)
	{
		if (func_702())
		{
			iVar0 = 0;
		}
	}
	Global_2462975 = 0;
	Global_2462481 = 0;
	Global_2462482 = 0;
	Global_1315723 = 0;
	Global_2462404 = 0;
	func_695(&(Global_110886.f_1), 32);
	func_694(512);
	func_693(128);
	return iVar0;
}

void func_693(int iParam0)
{
	Global_110943 = (Global_110943 - (Global_110943 && iParam0));
}

void func_694(int iParam0)
{
	Global_110944 = (Global_110944 - (Global_110944 && iParam0));
}

void func_695(var uParam0, int iParam1)
{
	func_696(uParam0, iParam1);
}

void func_696(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_697()
{
	if (((Global_1574434 || Global_1574404) || func_16(PLAYER::PLAYER_ID(), 0)) || func_590())
	{
		return 1;
	}
	return 0;
}

int func_698()
{
	switch (func_699())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_699()
{
	return Global_2452907.f_1.f_2822;
}

bool func_700(int iParam0)
{
	return (Global_110943 && iParam0) != 0;
}

bool func_701(int iParam0)
{
	return (Global_110944 && iParam0) != 0;
}

int func_702()
{
	if (func_709(Global_2464653))
	{
		return 0;
	}
	if (func_703(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_703(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/] == iParam1)
	{
		return func_235(iParam0);
	}
	return 0;
}

int func_704()
{
	if (func_709(Global_2464653))
	{
		return 0;
	}
	if (func_235(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_705()
{
	return MISC::IS_BIT_SET(Global_1312443, 0);
}

bool func_706()
{
	return Global_1312864;
}

void func_707(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_623(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_708(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315747 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_168())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_698())
		{
			if (Global_4456448.f_83167 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_697())
	{
		iVar0 = 0;
	}
	Global_2463536 = 1;
	return iVar0;
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11397)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11399)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11396)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11400)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11401)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11402)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11398)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11403)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11404)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11405)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11406)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_710(int iParam0)
{
	Global_1630317[PLAYER::PLAYER_ID() /*595*/] = iParam0;
}

void func_711(int iParam0)
{
	Global_2463773 = iParam0;
}

void func_712(int iParam0)
{
	if (func_203())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_1293, 0))
			{
				if ((((func_714(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_411()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_428(0, 1, 1, 1))
				{
					if (!func_748())
					{
						func_713("UW_HELP1", func_632(), func_631(1), 30000);
					}
					else
					{
						func_713("UW_HELP1C", func_632(), func_631(1), 30000);
					}
					func_426(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
					MISC::SET_BIT(&iLocal_1293, 0);
				}
			}
			break;
	}
}

void func_713(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam3);
}

bool func_714(int iParam0)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2413901, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_715()
{
	int iVar0;
	
	MISC::CLEAR_BIT(&iLocal_1294, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_716(iVar0);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_1294, 15))
	{
		if (!MISC::IS_BIT_SET(Global_1574656.f_1, 15))
		{
			MISC::SET_BIT(&(Global_1574656.f_1), 15);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1574656.f_1, 15))
	{
		MISC::CLEAR_BIT(&(Global_1574656.f_1), 15);
	}
}

void func_716(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iParam0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), false))
		{
			if (Local_82.f_241 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), false))
		{
			if (!func_203())
			{
				if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!MISC::IS_BIT_SET(iLocal_1294, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]))
							{
								MISC::SET_BIT(&iLocal_1294, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), false))
						{
							if (func_720("UW_HELP2", func_632()) || func_720("UW_HELP2C", func_632()))
							{
								HUD::CLEAR_HELP(true);
							}
							if (!func_417(PLAYER::PLAYER_ID()))
							{
								func_637(1);
							}
							iVar0 = func_719(PLAYER::PLAYER_PED_ID(), 0);
							if (func_630("UW_HELP1", func_632(), func_631(1)) || func_630("UW_HELP1C", func_632(), func_631(1)))
							{
								HUD::CLEAR_HELP(true);
							}
							if (Local_82.f_463 != -1)
							{
								if (iVar0 > (Local_82.f_463 - 2))
								{
									iVar0 = (Local_82.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
							MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
							Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iParam0;
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
							func_195();
							iLocal_3469 = iVar0;
						}
						else if (Local_82.f_241 == 0)
						{
							if (!MISC::IS_BIT_SET(iLocal_1293, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), true)) < 2500f)
									{
										if (func_428(0, 1, 1, 1))
										{
											if (!func_748())
											{
												func_718("UW_HELP2", func_632(), 30000);
											}
											else
											{
												func_718("UW_HELP2C", func_632(), 30000);
											}
											func_426(1);
											MISC::SET_BIT(&iLocal_1293, 1);
										}
									}
								}
							}
							if (!func_245())
							{
								if (MISC::IS_BIT_SET(iLocal_1294, 2))
								{
									MISC::CLEAR_BIT(&iLocal_1294, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									if (!MISC::IS_BIT_SET(iLocal_1293, 4))
									{
										if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
										{
											MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), true)) < 2500f)
											{
												if (func_428(0, 1, 1, 1))
												{
													if (!func_748())
													{
														func_427("UW_COPS", 30000);
													}
													else
													{
														func_427("UW_COPSC", 30000);
													}
													func_426(1);
													MISC::SET_BIT(&iLocal_1293, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), true)) > 10000f)
									{
										MISC::CLEAR_BIT(&iLocal_1293, 4);
									}
								}
								else
								{
									if (MISC::IS_BIT_SET(iLocal_1293, 4))
									{
										MISC::CLEAR_BIT(&iLocal_1293, 4);
									}
									if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
									{
										MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
								{
									MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
								}
								if (!MISC::IS_BIT_SET(iLocal_1294, 2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), true)) < 2500f)
									{
										if (func_428(0, 1, 1, 1))
										{
											if (!func_748())
											{
												func_427("UW_PASSMD", 30000);
											}
											else
											{
												func_427("UW_PASSMD", 30000);
											}
											func_426(1);
											MISC::SET_BIT(&iLocal_1294, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), false))
							{
								iVar2 = 0;
								while (iVar2 < Local_82.f_28)
								{
									if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
								{
									MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
								}
								if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 != -1)
								{
									Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
								}
								if (func_683("UW_TIMEL"))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_683("UW_TIMELA"))
								{
									HUD::CLEAR_HELP(true);
								}
								if (func_417(PLAYER::PLAYER_ID()))
								{
									func_637(0);
								}
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							}
							else
							{
								if (Local_82.f_241 == 0 && !MISC::IS_BIT_SET(Local_82.f_3, 4))
								{
									iVar0 = func_719(PLAYER::PLAYER_PED_ID(), 0);
									if (Local_82.f_463 != -1)
									{
										if (iVar0 > (Local_82.f_463 - 2))
										{
											iVar0 = (Local_82.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_3469)
									{
										MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
										MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_3469 + 1));
									}
								}
								bVar1 = false;
								if (func_264())
								{
									if (Local_82.f_413 > -1)
									{
										iVar3 = (Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_717(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0])) == joaat("rhino"))
								{
									VEHICLE::_DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]));
								}
								if (!func_22(&uLocal_1516))
								{
									func_20(&uLocal_1516, 0, 0);
								}
								else if (func_19(&uLocal_1516, 2000, 0))
								{
									if (MISC::IS_BIT_SET(Local_82.f_3, 9) || !func_748())
									{
										if (func_683("UW_MINV"))
										{
										}
										if (!MISC::IS_BIT_SET(iLocal_1293, 5))
										{
											if (Local_82.f_28 > 1 || (Local_82.f_28 == 1 && func_112() > 1))
											{
												if (func_22(&(Local_82.f_326)))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_112() > 1)
														{
															func_427("UW_TIMELA", 30000);
														}
														else
														{
															func_427("UW_TIMEL", 30000);
														}
														func_426(1);
														MISC::SET_BIT(&iLocal_1293, 5);
													}
												}
											}
										}
									}
									else if (func_748())
									{
										if (!MISC::IS_BIT_SET(Local_82.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!MISC::IS_BIT_SET(iLocal_1293, 14))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														func_427("UW_MINV", 30000);
														func_426(1);
														MISC::SET_BIT(&iLocal_1293, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_82.f_241 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_683("UW_VALK") && !func_683("UW_VALKC"))
							{
								HUD::CLEAR_ALL_HELP_MESSAGES();
								if (MISC::IS_BIT_SET(iLocal_1293, 8))
								{
									MISC::CLEAR_BIT(&iLocal_1293, 8);
								}
							}
							if (!MISC::IS_BIT_SET(iLocal_1293, 8))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), (iVar5 - 1), false))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_748())
										{
											func_427("UW_VALK", 30000);
										}
										else
										{
											func_427("UW_VALKC", 30000);
										}
										func_426(1);
										MISC::SET_BIT(&iLocal_1293, 8);
									}
									if (!MISC::IS_BIT_SET(iLocal_1293, 8))
									{
										if (func_748())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar7]))
														{
															if (func_109(Local_82.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar7]), (iVar5 - 1), false))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_427("UW_VALKC", 30000);
												func_426(1);
												MISC::SET_BIT(&iLocal_1293, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_82.f_241 == 1)
					{
						if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
						{
							if (!MISC::IS_BIT_SET(iLocal_1293, 6))
							{
								if (func_109(Local_82.f_7[iParam0]))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iParam0])))
										{
											if (!MISC::IS_BIT_SET(iLocal_1293, 7))
											{
												if ((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
												{
													MISC::SET_BIT(&iLocal_1293, 7);
												}
											}
											if (MISC::IS_BIT_SET(iLocal_1293, 7))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_748())
													{
														func_427("UW_EXITVC", 30000);
													}
													else
													{
														func_427("UW_EXITV", 30000);
													}
													func_426(1);
													MISC::SET_BIT(&iLocal_1293, 6);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iVar10]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_82.f_7[iVar10]), false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_82.f_7[iVar10]), false))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_262(0))
					{
						iVar9 = func_263(2481, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 0);
						func_485(2481, iVar9, -1, 1, 0);
						func_670();
						if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
					if (func_262(8))
					{
						iVar9 = func_263(2481, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 8);
						func_485(2481, iVar9, -1, 1, 0);
						func_670();
						if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
					}
					if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
					{
						MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_1294, 14))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_109(Local_82.f_7[iParam0]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iParam0]), true)) < 2500f)
							{
								if (func_428(0, 1, 1, 1))
								{
									if (!func_254(129, 0, 0))
									{
										if (!func_748())
										{
											func_427("UW_TUT", -1);
										}
										else
										{
											func_427("UW_TUTC", -1);
										}
										func_426(1);
										MISC::SET_BIT(&iLocal_1294, 14);
									}
									else
									{
										if (!func_748())
										{
											func_427("UW_HIDE", -1);
										}
										else
										{
											func_427("UW_HIDEC", -1);
										}
										func_426(1);
										MISC::SET_BIT(&iLocal_1294, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_850(PLAYER::PLAYER_ID(), 1, 1) && Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (!MISC::IS_BIT_SET(Global_2540612.f_4656, 1))
				{
					MISC::SET_BIT(&(Global_2540612.f_4656), 1);
				}
			}
			else if (MISC::IS_BIT_SET(Global_2540612.f_4656, 1))
			{
				MISC::CLEAR_BIT(&(Global_2540612.f_4656), 1);
			}
		}
	}
}

void func_717(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	PAD::DISABLE_CONTROL_ACTION(0, 69, true);
	PAD::DISABLE_CONTROL_ACTION(0, 70, true);
	PAD::DISABLE_CONTROL_ACTION(0, 92, true);
	PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	PAD::DISABLE_CONTROL_ACTION(0, 91, true);
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 99, true);
	PAD::DISABLE_CONTROL_ACTION(0, 100, true);
	PAD::DISABLE_CONTROL_ACTION(0, 65, true);
	PAD::DISABLE_CONTROL_ACTION(0, 105, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 51, true);
	PAD::DISABLE_CONTROL_ACTION(0, 47, true);
	PAD::DISABLE_CONTROL_ACTION(0, 24, true);
	PAD::DISABLE_CONTROL_ACTION(0, 257, true);
}

void func_718(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

int func_719(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

bool func_720(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_721()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_82.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_7[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
			{
				PHYSICS::_SET_ENTITY_PROOF_UNK(iVar1, true);
			}
		}
		iVar0++;
	}
}

void func_722(struct<3> Param0)
{
	Global_2391049 = { Param0 };
	Global_2391052 = 1;
}

void func_723()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_739(iVar0);
				break;
			
			case 174:
				func_724(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_724(int iParam0)
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 379276800:
			func_738(iParam0);
			break;
		
		case 671199305:
			func_737(iParam0);
			break;
		
		case 1670013720:
			func_736(iParam0);
			break;
		
		case -1235116728:
			func_735(iParam0);
			break;
		
		case 273055911:
			func_734(iParam0);
			break;
		
		case -576874683:
			func_731(iParam0);
			break;
		
		case -1200143999:
			func_725(iParam0);
			break;
	}
}

void func_725(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_73[iVar6]))
		{
			return;
		}
		if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar6))
		{
			if (!MISC::IS_BIT_SET(Local_82.f_271, iVar6))
			{
				if (func_100(iVar6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_73[iVar6]), false))
					{
						if (NETWORK::_NETWORK_GET_DESTROYER_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_82.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (NETWORK::_0x83660B734994124D(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_82.f_73[iVar6]), &uVar5))
					{
						bVar8 = true;
					}
				}
				else if (!func_748())
				{
					if (Local_82.f_465[0 /*4*/].f_1 > 0)
					{
						iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_82.f_465[0 /*4*/].f_2);
						if (iVar9 != func_5())
						{
							if (iVar9 == PLAYER::PLAYER_ID())
							{
								bVar8 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[0]))
					{
						if (func_109(Local_82.f_7[0]))
						{
							iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[0]), -1, false);
							if (iVar11 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar11))
								{
									iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
									if (iVar10 == PLAYER::PLAYER_ID())
									{
										bVar8 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar8)
		{
			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
			{
				iVar4 = func_730();
				iVar12 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iVar6]));
				iVar7 = iVar6 * 4;
				if (func_729(iVar12))
				{
					iVar3 = func_42(iVar12);
					iVar14 = iVar7;
					while (iVar14 <= (iVar7 + (iVar3 - 1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar14]) && !MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar14)], func_90(iVar14)))
						{
							iVar13++;
							MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar14)]), func_90(iVar14));
						}
						iVar14++;
					}
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar13);
					iVar4 = (iVar4 * iVar13);
				}
				else
				{
					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
				}
				if (Local_699.f_11 == 0)
				{
					Local_699.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
				}
				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
				{
					Local_699.f_7 = (Local_699.f_7 + iVar4);
					func_727(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
					func_726();
				}
			}
			MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar6);
		}
	}
}

void func_726()
{
	if (!func_22(&uLocal_3446) || (func_22(&uLocal_3446) && func_19(&uLocal_3446, 2000, 0)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", false);
		func_106(&uLocal_3446);
		func_20(&uLocal_3446, 0, 0);
	}
}

var func_727(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_470(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_728()
{
	if (func_748())
	{
		return Global_262145.f_11322;
	}
	return Global_262145.f_11261;
}

bool func_729(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_730()
{
	if (func_748())
	{
		return Global_262145.f_11321;
	}
	return Global_262145.f_11260;
}

void func_731(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		iVar6 = Var0.f_2;
		if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar6))
		{
			if (!MISC::IS_BIT_SET(Local_82.f_271, iVar6))
			{
				if (func_733(iVar6))
				{
					bVar8 = true;
				}
				else if (!func_732(iVar6))
				{
					if (func_100(iVar6))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_82.f_73[iVar6]), false))
						{
							if (NETWORK::_NETWORK_GET_DESTROYER_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_82.f_73[iVar6]), &uVar5))
							{
								bVar8 = true;
							}
						}
						else if (NETWORK::_0x83660B734994124D(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_82.f_73[iVar6]), &uVar5))
						{
							bVar8 = true;
						}
					}
					else if (!func_748())
					{
						if (Local_82.f_465[0 /*4*/].f_1 > 0)
						{
							iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_82.f_465[0 /*4*/].f_2);
							if (iVar9 != func_5())
							{
								if (iVar9 == PLAYER::PLAYER_ID())
								{
									bVar8 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[0]))
						{
							if (func_109(Local_82.f_7[0]))
							{
								iVar11 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[0]), -1, false);
								if (iVar11 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar11))
									{
										iVar10 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar11);
										if (iVar10 == PLAYER::PLAYER_ID())
										{
											bVar8 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar8)
				{
					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						iVar3 = func_42(joaat("savage"));
						iVar7 = iVar6 * 4;
						iVar13 = 0;
						iVar12 = iVar7;
						while (iVar12 <= (iVar7 + (iVar3 - 1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar12]) && !MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar12)], func_90(iVar12)))
							{
								iVar13++;
								MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar12)]), func_90(iVar12));
							}
							iVar12++;
						}
						Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar13);
						iVar4 = (iVar4 * iVar13);
						if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
						{
							iVar4 = func_730();
							iVar4 = (iVar4 * iVar3);
							Local_699.f_7 = (Local_699.f_7 + iVar4);
							func_727(0, "", -875716015, 153786435, iVar4, 1, -1, 0);
							func_726();
							if (Local_699.f_11 == 0)
							{
								Local_699.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
							}
						}
						MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar6);
					}
				}
			}
		}
	}
}

int func_732(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_716[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_733(int iParam0)
{
	int iVar0;
	
	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_716[iVar0 /*18*/].f_11[iParam0] > Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_734(int iParam0)
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) != func_5())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Local_82.f_464), Var0.f_2);
		}
	}
}

void func_735(int iParam0)
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		MISC::SET_BIT(&uLocal_3413, Var0.f_2);
	}
}

void func_736(int iParam0)
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		MISC::SET_BIT(&uLocal_3414, Var0.f_2);
	}
}

void func_737(int iParam0)
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(Var0.f_2)], func_90(Var0.f_2)))
		{
			MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(Var0.f_2)]), func_90(Var0.f_2));
		}
	}
}

void func_738(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		iVar3 = Var0.f_2;
		if (MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar3))
		{
			MISC::CLEAR_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar3);
		}
	}
}

void func_739(int iParam0)
{
	struct<6> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	var uVar24;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		iVar13 = 0;
		while (iVar13 < 5)
		{
			if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar13))
			{
				if (!MISC::IS_BIT_SET(Local_82.f_271, iVar13))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_73[iVar13]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_82.f_73[iVar13])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_82.f_73[iVar13]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
												{
													if (Var0.f_5)
													{
														iVar16 = ENTITY::GET_ENTITY_MODEL(Var0);
														if (Local_82.f_27 == joaat("hydra"))
														{
															if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
															{
																iVar19 = func_730();
																if (func_729(iVar16))
																{
																	iVar14 = func_42(iVar16);
																	Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																	iVar19 = (iVar19 * iVar14);
																}
																else
																{
																	Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																}
																if (Local_699.f_11 == 0)
																{
																	Local_699.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																}
																if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
																{
																	Local_699.f_7 = (Local_699.f_7 + iVar19);
																	func_727(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																	func_726();
																}
															}
															MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
														}
														else if (iVar16 == joaat("buzzard"))
														{
															iVar21 = -1;
															iVar21 = -1;
															while (iVar21 <= 3)
															{
																iVar18 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_73[iVar13]), iVar21, false);
																if (iVar18 != 0)
																{
																	iVar20 = func_740(iVar18);
																	if (iVar20 > -1)
																	{
																		if (!MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar20)], func_90(iVar20)))
																		{
																			if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar20)], func_90(iVar20)))
																			{
																				MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar20)]), func_90(iVar20));
																				iVar19 = func_730();
																				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
																				{
																					Local_699.f_7 = (Local_699.f_7 + iVar19);
																					func_727(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																					func_726();
																				}
																				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_82.f_48[iVar20])))
																				{
																					func_92(&(Local_1310[iVar20 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar21++;
															}
															MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
														}
													}
													else if (!func_109(Local_82.f_73[iVar13]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar13++;
		}
		if (Local_82.f_27 != joaat("hydra"))
		{
			iVar13 = 0;
			while (iVar13 <= 19)
			{
				if (!MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar13)], func_90(iVar13)))
				{
					if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)], func_90(iVar13)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar13]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_82.f_48[iVar13])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_82.f_48[iVar13]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar17))
														{
															if (iVar17 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	iVar19 = func_730();
																	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
																		{
																			func_727(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																			Local_699.f_7 = (Local_699.f_7 + iVar19);
																			func_726();
																		}
																	}
																	if (Local_699.f_11 == 0)
																	{
																		Local_699.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																	}
																	MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)]), func_90(iVar13));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iVar13 < 5)
				{
					if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar13))
					{
						if (!MISC::IS_BIT_SET(Local_82.f_271, iVar13))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_73[iVar13]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_82.f_73[iVar13])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_82.f_73[iVar13]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0) == joaat("savage"))
												{
													if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)], func_90(iVar13)))
													{
														if (Var0.f_5)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar17))
																	{
																		if (iVar17 == PLAYER::PLAYER_PED_ID())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																				{
																					iVar14 = func_42(joaat("savage"));
																					Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																					iVar19 = func_730();
																					iVar19 = (iVar19 * iVar14);
																					if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
																					{
																						func_727(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																						Local_699.f_7 = (Local_699.f_7 + iVar19);
																						func_726();
																						if (Local_699.f_11 == 0)
																						{
																							Local_699.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																						}
																					}
																					iVar22 = iVar13 * 4;
																					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22)]), func_90(iVar22));
																					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 1)]), func_90(iVar22 + 1));
																					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 2)]), func_90(iVar22 + 2));
																					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 3)]), func_90(iVar22 + 3));
																					MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
																				}
																			}
																		}
																	}
																	else if (func_733(iVar13))
																	{
																		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																		{
																			iVar14 = func_42(joaat("savage"));
																			Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
																			{
																				iVar19 = func_730();
																				iVar19 = (iVar19 * iVar14);
																				Local_699.f_7 = (Local_699.f_7 + iVar19);
																				func_727(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																				func_726();
																				if (Local_699.f_11 == 0)
																				{
																					Local_699.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																				}
																			}
																			iVar22 = iVar13 * 4;
																			MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22)]), func_90(iVar22));
																			MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 1)]), func_90(iVar22 + 1));
																			MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 2)]), func_90(iVar22 + 2));
																			MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 3)]), func_90(iVar22 + 3));
																			MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
																		}
																	}
																	else if (func_732(iVar13))
																	{
																	}
																	else if (NETWORK::_0x83660B734994124D(iVar23, Var0, &uVar24))
																	{
																		if (iVar23 == PLAYER::PLAYER_ID())
																		{
																			if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																			{
																				iVar14 = func_42(joaat("savage"));
																				Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar14);
																				if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
																				{
																					iVar19 = func_730();
																					iVar19 = (iVar19 * iVar14);
																					Local_699.f_7 = (Local_699.f_7 + iVar19);
																					func_727(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																					func_726();
																					if (Local_699.f_11 == 0)
																					{
																						Local_699.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																					}
																				}
																				iVar22 = iVar13 * 4;
																				MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22)]), func_90(iVar22));
																				MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 1)]), func_90(iVar22 + 1));
																				MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 2)]), func_90(iVar22 + 2));
																				MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar22 + 3)]), func_90(iVar22 + 3));
																				MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar13);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar17))
																	{
																		if (iVar17 == PLAYER::PLAYER_PED_ID())
																		{
																			iVar15 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iVar13] = iVar15;
																		}
																	}
																}
															}
															if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0), false))
															{
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar13++;
			}
			iVar13 = 20;
			while (iVar13 <= 23)
			{
				if (!MISC::IS_BIT_SET(Local_82.f_272[func_91(iVar13)], func_90(iVar13)))
				{
					if (!MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)], func_90(iVar13)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar13]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_82.f_48[iVar13])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_82.f_48[iVar13]))
										{
											if (Var0.f_5)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar17 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar17))
														{
															if (iVar17 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_5)
																{
																	if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_728())
																		{
																			iVar19 = func_730();
																			Local_699.f_7 = (Local_699.f_7 + iVar19);
																			if (Local_699.f_11 == 0)
																			{
																				Local_699.f_11 = NETWORK::GET_CLOUD_TIME_AS_INT();
																			}
																			func_727(0, "", -875716015, 153786435, iVar19, 1, -1, 0);
																			func_726();
																		}
																	}
																	MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)]), func_90(iVar13));
																}
															}
														}
													}
												}
												else
												{
													MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_91(iVar13)]), func_90(iVar13));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar13]))
				{
				}
				iVar13++;
			}
		}
	}
}

int func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_82.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_741()
{
	int iVar0;
	int iVar1;
	
	if (Local_82.f_27 != joaat("hydra"))
	{
		if (iLocal_3471 == 0)
		{
			iLocal_3471 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iLocal_3471]))
		{
			if (!func_31(Local_82.f_48[iLocal_3471]))
			{
				iVar0 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(NETWORK::NET_TO_PED(Local_82.f_48[iLocal_3471]));
				if (iLocal_3472[iLocal_3471] != iVar0)
				{
					iLocal_3472[iLocal_3471] = iVar0;
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_82.f_48[iLocal_3471], true);
				}
			}
		}
		iLocal_3471++;
		if (iLocal_3471 == 23)
		{
			iLocal_3471 = 20;
		}
	}
	if (Local_82.f_27 != joaat("hydra") && Local_82.f_27 != joaat("rhino"))
	{
		if (!bLocal_3504)
		{
			if (func_98() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_73[iVar1]))
					{
						if (func_109(Local_82.f_73[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_82.f_73[iVar1])) == joaat("savage"))
							{
								NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_82.f_73[iVar1], true);
								bLocal_3504 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_73[iLocal_3497]))
	{
		if (func_109(Local_82.f_73[iLocal_3497]))
		{
			iVar0 = NETWORK::_NETWORK_GET_ENTITY_NET_SCRIPT_ID(NETWORK::NET_TO_PED(Local_82.f_73[iLocal_3497]));
			if (iLocal_3498[iLocal_3497] != iVar0)
			{
				iLocal_3498[iLocal_3497] = iVar0;
				if (!bLocal_3504)
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_82.f_73[iLocal_3497], true);
				}
			}
		}
	}
	iLocal_3497++;
	if (iLocal_3497 == 5)
	{
		iLocal_3497 = 0;
	}
}

void func_742()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (MISC::IS_BIT_SET(iLocal_3415, iVar0))
		{
			if (Local_82.f_85[iVar0] != 2)
			{
				MISC::CLEAR_BIT(&iLocal_3415, iVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_48[iVar0]))
		{
			func_746(iVar0);
			if (!func_31(Local_82.f_48[iVar0]))
			{
				switch (Local_82.f_85[iVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_48[iVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), false))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), false);
								iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -1273030092) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_82.f_48[iVar0]))
										{
											iVar9 = func_27();
											if (iVar9 != func_5())
											{
												iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
												if (!PED::IS_PED_INJURED(iVar10))
												{
													if (func_26(iVar2, iVar10, 1) > 250f)
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
														TASK::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_82.f_48[iVar0]))
									{
										iVar15 = 1;
										iVar14 = (iVar0 / 4);
									}
									if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -1273030092) != 0) || ((iVar15 && iVar14 < 5) && iLocal_1295[iVar14] != Local_82.f_110[iVar14]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_82.f_48[iVar0]))
										{
											iVar13 = Local_82.f_110[iVar14];
											if (iVar13 > -1)
											{
												iVar9 = PLAYER::INT_TO_PLAYERINDEX(iVar13);
												if (iVar9 != func_5())
												{
													iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
													if (!PED::IS_PED_INJURED(iVar10))
													{
														Var3 = { ENTITY::GET_ENTITY_COORDS(iVar10, true) };
														TASK::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), iVar2, 0, iVar10, Var3, 4, 50f, 5f, -1f, 1.401298E-43f, 7.006492E-44f, 1);
														if (iLocal_1295[iVar14] != Local_82.f_110[iVar14])
														{
															iLocal_1295[iVar14] = Local_82.f_110[iVar14];
														}
													}
												}
											}
										}
									}
								}
								else if (((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -1273030092) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), 1306903184) != 0) && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), 1306903184) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == NETWORK::NET_TO_PED(Local_82.f_48[iVar0]))
									{
										iVar9 = func_27();
										if (iVar9 != func_5())
										{
											iVar10 = PLAYER::GET_PLAYER_PED(iVar9);
											if (!PED::IS_PED_INJURED(iVar10))
											{
												fVar11 = func_26(iVar2, iVar10, 1);
												if (fVar11 > 500f)
												{
													TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), ENTITY::GET_ENTITY_COORDS(iVar10, true), 2f, iVar2, true, 786469, -1f, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar11 > 250f)
												{
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), iVar2, iVar10, 4, 30f, 786469, 5f, 5f, true);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_48[iVar0]))
						{
							if (!func_23())
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -1442466670) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -1442466670) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), false))
									{
										if (!MISC::IS_BIT_SET(iLocal_3415, iVar0))
										{
											iVar12 = func_745(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), 1133084672);
											if (iVar12 > -1)
											{
												TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), 299f, 0);
											}
											else if (!MISC::IS_BIT_SET(iLocal_3415, iVar0))
											{
												func_744(iVar0, func_104(1));
												MISC::SET_BIT(&iLocal_3415, iVar0);
											}
										}
									}
									else
									{
										TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -251125078) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), -251125078) != 0)
						{
							Var6 = { func_743() };
							TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), true);
							TASK::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_82.f_48[iVar0]), Var6, 10000f, 999999, false, false);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_743()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false);
		}
		iVar0++;
	}
	return Local_82.f_30[0 /*3*/];
}

void func_744(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 273055911;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam1);
	}
}

int func_745(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar3]))
		{
			if (func_109(Local_82.f_7[iVar3]))
			{
				iVar7 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_82.f_7[iVar3]), -1, false);
				if (!PED::IS_PED_INJURED(iVar7))
				{
					if (PED::IS_PED_A_PLAYER(iVar7))
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iVar3]), true) };
						fVar2 = func_529(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_746(int iParam0)
{
	int iVar0;
	
	return;
	if (!func_31(Local_82.f_48[iParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_82.f_48[iParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_82.f_48[iParam0])))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_82.f_48[iParam0]), false);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
					{
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_82.f_48[iParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_747(struct<3> Param0)
{
	Global_1574656.f_6 = { Param0 };
}

bool func_748()
{
	return MISC::IS_BIT_SET(Local_82.f_3, 8);
}

void func_749(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_750("kwUfKUus6EuQyNSL8KpY-w");
					func_750("yMTOFLfO2UKwzKrmgPP7kg");
					func_750("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_750("tP5HSeCA0UiHnkRzakdO2Q");
					func_750("uEkrqoerQEmQ0uZRtp4rkw");
					func_750("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_750("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_750("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_750("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_750("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_750("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_750("uEkrqoerQEmQ0uZRtp4rkw");
					func_750("92t91kL3Wkqvl2Kc82cNSA");
					func_750("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_750("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_750("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_750("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_750("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_750("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_750("fOfm7nzMLkav0ldcSCNAzA");
					func_750("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_750("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_750("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_750("Ma78E44OMkGfYPmCPZXUNA");
					func_750("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_750("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_750("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_750("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_750("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_750("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_750("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_750("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_750("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_750("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_750("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_750("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_750("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_750("fOfm7nzMLkav0ldcSCNAzA");
							func_750("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_750("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_750("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_750("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_750("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_750("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_750("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_750("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_750("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_750("fOfm7nzMLkav0ldcSCNAzA");
							func_750("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_750("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_750("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_750("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_750("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_750("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_750("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_750("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_750("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_750("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_750("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_750("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_750("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_750("aGBjo2rKi0yMDLl3a2ATGA");
									func_750("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_750("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_750("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_750("f2lnL6wZPkGWUowu0yLm1Q");
									func_750("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_750("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_750("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_750("W-OJzHlM-0ym9PsIASYZtw");
									func_750("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_750("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_750("TjGz31AMYE6bGCjAIitu6w");
									func_750("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_750("QmlvLMLCwkOvoZlkAstYxw");
									func_750("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_750("BktATxH9R0Wp2x0kWSbqjw");
									func_750("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_750("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_750("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_750("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_750("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_750("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_750("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_750("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_750("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_750("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_750("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_750(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_751(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_751(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_149(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_752(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_752(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_149(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

void func_753()
{
	int iVar0;
	struct<3> Var1;
	
	if (MISC::IS_BIT_SET(Local_82.f_3, 12))
	{
		func_195();
	}
	if (func_748())
	{
		if (iLocal_3405 != Local_82.f_12)
		{
			iLocal_3405 = Local_82.f_12;
			func_195();
		}
	}
	if (!func_203())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_1305[iVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
				{
					if (func_109(Local_82.f_7[iVar0]))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false) };
						if (!func_754(iVar0, Var1))
						{
							if (!MISC::IS_BIT_SET(Local_82.f_13, iVar0))
							{
								iLocal_1305[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]));
								HUD::SET_BLIP_SPRITE(iLocal_1305[iVar0], 429);
								func_197(&(iLocal_1305[iVar0]), 29);
								if (!MISC::IS_BIT_SET(iLocal_1293, 20))
								{
									HUD::SET_BLIP_FLASHES(iLocal_1305[iVar0], true);
									HUD::SET_BLIP_FLASH_TIMER(iLocal_1305[iVar0], 7000);
									MISC::SET_BIT(&iLocal_1293, 20);
								}
								HUD::SET_BLIP_PRIORITY(iLocal_1305[iVar0], 9);
								if (func_748())
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1305[iVar0], "UW_BLIPC");
								}
								else
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_1305[iVar0], "UW_BLIP");
								}
								if (!MISC::IS_BIT_SET(iLocal_1294, 3))
								{
									HUD::FLASH_MINIMAP_DISPLAY();
									MISC::SET_BIT(&iLocal_1294, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
			{
				if (!func_109(Local_82.f_7[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_1305[iVar0]));
				}
				else if (MISC::IS_BIT_SET(Local_82.f_13, iVar0))
				{
					HUD::REMOVE_BLIP(&(iLocal_1305[iVar0]));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(iLocal_1305[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_195();
	}
}

int func_754(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_82.f_7[iVar0]))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_82.f_7[iVar0]), false) };
				if (func_69(Param1, Var1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_1305[iVar0]))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_755()
{
	return Local_82;
}

int func_756(int iParam0)
{
	return Local_716[iParam0 /*18*/];
}

void func_757()
{
	if (MISC::IS_BIT_SET(Global_1574656.f_1, 6))
	{
		func_454();
		MISC::CLEAR_BIT(&(Global_1574656.f_1), 6);
	}
	if (!MISC::IS_BIT_SET(Global_1574656.f_1, 7))
	{
		if (MISC::IS_BIT_SET(Global_1574656.f_1, 4) || MISC::IS_BIT_SET(Global_1574656.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_850(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1574656.f_1), 7);
				func_427("FME_PASINT", 30000);
				func_426(1);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574656.f_1, 17))
		{
			if (func_245() && !func_240())
			{
				MISC::CLEAR_BIT(&(Global_1574656.f_1), 17);
				MISC::SET_BIT(&(Global_1574656.f_1), 16);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_1574656.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2540612.f_833, 2)) && func_850(PLAYER::PLAYER_ID(), 1, 1)) && !Global_74030) && !Global_58898) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_779())
			{
				func_427("AMEV_GA_RP", -1);
				if (func_341(PLAYER::PLAYER_ID()) != 200)
				{
					func_426(1);
				}
				MISC::SET_BIT(&(Global_1574656.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_235(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574656.f_1, 9))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_850(PLAYER::PLAYER_ID(), 1, 1)) && !func_206(PLAYER::PLAYER_ID(), 21)) && !func_206(PLAYER::PLAYER_ID(), 25))
		{
			MISC::CLEAR_BIT(&(Global_1574656.f_1), 9);
			func_778(0);
			func_427("FME_TBL00", -1);
			func_426(1);
		}
	}
	if (func_246(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_1574656.f_1, 18))
		{
			if ((func_206(PLAYER::PLAYER_ID(), 21) && MISC::IS_BIT_SET(Global_1574656.f_1, 20)) && !MISC::IS_BIT_SET(Global_1574656.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1574656.f_1), 18);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574656.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_360()) && func_850(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2540612.f_5121)
			{
				MISC::CLEAR_BIT(&(Global_1574656.f_1), 18);
				MISC::SET_BIT(&(Global_1574656.f_1), 19);
				func_427("AMTT_RPAS", -1);
				func_426(1);
			}
		}
	}
	if (((((func_246(PLAYER::PLAYER_ID()) && !func_205(PLAYER::PLAYER_ID())) && func_190(PLAYER::PLAYER_ID()) != 146) && !func_204(PLAYER::PLAYER_ID())) && !func_671(PLAYER::PLAYER_ID())) && !func_768())
	{
		if (func_676(func_190(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!MISC::IS_BIT_SET(Global_1574656.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1574656.f_1), 22);
		}
		if (func_212(PLAYER::PLAYER_ID()) || func_674())
		{
			if (!MISC::IS_BIT_SET(Global_1574656.f_1, 10))
			{
				if (func_766(func_190(PLAYER::PLAYER_ID())))
				{
					if (func_601(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574656.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_452(1);
						MISC::SET_BIT(&(Global_1574656.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1574656.f_1), 10);
			}
		}
		if (func_235(PLAYER::PLAYER_ID()))
		{
			if (!MISC::IS_BIT_SET(Global_1574656.f_1, 11))
			{
				if (!Global_99007.f_8)
				{
					MISC::SET_BIT(&(Global_1574656.f_1), 12);
					func_450(1);
				}
				if (!func_765())
				{
					MISC::SET_BIT(&(Global_1574656.f_1), 13);
					func_675();
				}
				if (!Global_2391045)
				{
					MISC::SET_BIT(&(Global_1574656.f_1), 14);
					if (func_601(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574656.f_1), 9);
					}
					func_452(1);
				}
				MISC::SET_BIT(&(Global_1574656.f_1), 11);
			}
		}
		else
		{
			func_763(0);
		}
	}
	else
	{
		func_763(1);
	}
	func_758();
	if (func_673(func_190(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1574656.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1574656.f_1), 21);
	}
	if (((func_245() && !func_240()) || func_206(PLAYER::PLAYER_ID(), 21)) || func_206(PLAYER::PLAYER_ID(), 25))
	{
		if (!MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 10);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 10);
	}
}

void func_758()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_360())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_526(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (MISC::IS_BIT_SET(Global_1574656.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1574656.f_1), 26);
				}
				func_759(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1574656.f_1, 26))
	{
		func_106(&(Global_1574656.f_22));
		MISC::SET_BIT(&(Global_1574656.f_1), 26);
	}
}

void func_759(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1574656.f_22)))
	{
		func_20(&(Global_1574656.f_22), 0, 0);
	}
	else if (func_19(&(Global_1574656.f_22), iParam1, 0))
	{
		if (func_412() > 0)
		{
			func_762(iParam0);
			if (func_683("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(true);
			}
			func_106(&(Global_1574656.f_22));
		}
	}
	else
	{
		func_761(0);
		func_760();
	}
}

void func_760()
{
	Global_2540612.f_4595 = 0;
}

void func_761(int iParam0)
{
	Global_1377236.f_68 = iParam0;
}

void func_762(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440277.f_2834[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2440277.f_2834[iVar0 /*80*/].f_2 = 5;
			func_358(&(Global_2440277.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_763(int iParam0)
{
	if ((MISC::IS_BIT_SET(Global_1574656.f_1, 11) || (MISC::IS_BIT_SET(Global_1574656.f_1, 10) && iParam0)) || (MISC::IS_BIT_SET(Global_1574656.f_1, 22) && iParam0))
	{
		if (MISC::IS_BIT_SET(Global_1574656.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1574656.f_1), 12);
			func_450(0);
		}
		if (MISC::IS_BIT_SET(Global_1574656.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1574656.f_1), 13);
			func_764();
		}
		if (MISC::IS_BIT_SET(Global_1574656.f_1, 14) && !func_241(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1574656.f_1), 14);
			func_452(0);
		}
		MISC::CLEAR_BIT(&(Global_1574656.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1574656.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1574656.f_1), 22);
	}
}

void func_764()
{
	MISC::CLEAR_BIT(&(Global_2540612.f_5026), 0);
}

bool func_765()
{
	return MISC::IS_BIT_SET(Global_2540612.f_5026, 0);
}

int func_766(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_235(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_674() || func_767(func_189()));
		
		default:
	}
	return 0;
}

int func_767(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_768()
{
	if (((((((((func_777() || func_776()) || func_775()) || func_182()) || (func_774() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_771() && !func_770())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_769() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_769()
{
	return Global_968397;
}

bool func_770()
{
	return MISC::IS_BIT_SET(Global_2452015.f_2, 27);
}

int func_771()
{
	if (func_773() || func_772())
	{
		return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_98 == 8;
	}
	return 0;
}

var func_772()
{
	return Global_2452015.f_733;
}

bool func_773()
{
	return MISC::IS_BIT_SET(Global_2452015.f_2, 11);
}

bool func_774()
{
	return MISC::IS_BIT_SET(Global_2452015, 5);
}

bool func_775()
{
	return MISC::IS_BIT_SET(Global_2452015, 2);
}

bool func_776()
{
	return MISC::IS_BIT_SET(Global_2452015, 20);
}

bool func_777()
{
	return Global_2452015.f_696;
}

void func_778(int iParam0)
{
	int iVar0;
	
	iVar0 = func_263(2535, -1, 0);
	if (iParam0 == 0)
	{
		if (!MISC::IS_BIT_SET(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!MISC::IS_BIT_SET(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!MISC::IS_BIT_SET(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_485(2535, iVar0, -1, 1, 0);
}

int func_779()
{
	int iVar0;
	
	if (!func_22(&(Global_1574656.f_15)))
	{
		func_20(&(Global_1574656.f_15), 0, 0);
		Global_1574656.f_17 = 0;
	}
	else if (func_19(&(Global_1574656.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574656.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574656.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_850(iVar0, 1, 1) && func_780(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_59(PLAYER::PLAYER_ID()), func_59(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574656.f_17++;
		if (Global_1574656.f_17 >= 32)
		{
			Global_1574656.f_17 = 0;
			func_106(&(Global_1574656.f_15));
		}
	}
	return 0;
}

int func_780(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_446() != 0)
	{
		return 0;
	}
	if (!func_489(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590682[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_781()
{
	return Global_1574656.f_24;
}

bool func_782(int iParam0)
{
	return !func_783(iParam0);
}

int func_783(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6664)
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_784(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_850(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2426097[iVar0 /*443*/].f_212, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_785()
{
	var uVar0;
	
	func_789(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_788())
	{
		return 1;
	}
	if (Global_2464721)
	{
		return 1;
	}
	if (func_787())
	{
		return 1;
	}
	if (func_786(159))
	{
		if (!func_777())
		{
			return 1;
		}
	}
	if (func_786(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_444() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_444()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_786(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_787()
{
	return Global_2462478;
}

bool func_788()
{
	return Global_2452015.f_691;
}

void func_789(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_790(iVar0);
					break;
				
				case 1120313136:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_790(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_850(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_791(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_791(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_792()
{
	SYSTEM::WAIT(0);
}

void func_793()
{
	int iVar0;
	
	func_195();
	if (func_755() == 4 && Local_82.f_27 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_82.f_27, false);
	}
	MISC::CLEAR_BIT(&(Global_2540612.f_4656), 1);
	func_681(19, 0);
	func_660(0);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_799(129, 0, MISC::IS_BIT_SET(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
	}
	func_798(129);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_1303 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_1303);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 129)
		{
			Global_1590682[PLAYER::PLAYER_ID() /*883*/] = -1;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1503)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1505);
	}
	func_797();
	func_208(0, 129);
	if (MISC::IS_BIT_SET(iLocal_1293, 22))
	{
		func_457();
		MISC::CLEAR_BIT(&iLocal_1293, 22);
	}
	if (MISC::IS_BIT_SET(iLocal_1293, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		if (!MISC::IS_BIT_SET(iLocal_1293, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_1304 != -100f)
	{
		func_532(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_1304);
	}
	func_531(0);
	if (func_785())
	{
		Local_699.f_5 = 5;
	}
	else if (func_620(2, 0, 0, 0, 0))
	{
		Local_699.f_5 = 6;
	}
	else if (Local_699.f_5 != 1)
	{
		Local_699.f_5 = 2;
	}
	AUDIO::STOP_SOUND(iLocal_3412);
	Local_699 = Local_82.f_611;
	Local_699.f_1 = Local_82.f_612;
	Local_699.f_4 = Local_82.f_613;
	Local_699.f_3 = Local_82.f_615;
	if (Local_699.f_9 > 0)
	{
		Local_699.f_10 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Local_699.f_9);
	}
	if ((!Global_262145.f_11510 && !MISC::IS_BIT_SET(Local_82.f_3, 8)) || (!Global_262145.f_11511 && MISC::IS_BIT_SET(Local_82.f_3, 8)))
	{
		if (Local_699.f_6 > 0)
		{
		}
	}
	if (MISC::IS_BIT_SET(Local_82.f_3, 8))
	{
		iVar0 = 1;
	}
	if (MISC::IS_BIT_SET(iLocal_1294, 1))
	{
		func_688(1);
		NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
	}
	if (iVar0 == 0)
	{
		func_795(Local_699, Local_82.f_27, Local_82.f_279, iVar0, -1, -1, -1);
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_795(Local_699, Local_82.f_279, Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_417(PLAYER::PLAYER_ID()))
	{
		func_637(0);
	}
	func_659(0);
	func_711(1);
	func_794();
}

void func_794()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_795(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76833)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			STATS::_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, func_796()))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			STATS::_0xBAA2F0490E146BE8(&Var14);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			STATS::_0x3DE3AA516FB126A4(&Var28);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = SYSTEM::TO_FLOAT(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			STATS::_0x6A60E43998228229(&Var52);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::_0x1A7CE7CD3E653485(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			STATS::_0x419615486BBF1956(&Var66);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			STATS::_0x84DFC579C2FC214C(&Var79);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			STATS::_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			STATS::_0x164C5FF663790845(&Var107);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			STATS::_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				STATS::_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				STATS::_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			STATS::_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

char* func_796()
{
	switch (Global_2464823)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_797()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1504);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1503);
}

void func_798(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_799(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 13);
		}
		if (MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 14);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574656.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1574656.f_1), 21);
	}
	func_835();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
	if (bParam1)
	{
		uVar0 = func_834(func_190(PLAYER::PLAYER_ID()));
		func_681(func_682(iParam0), 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_833(PLAYER::PLAYER_ID()) >= 12)
		{
			func_832(2547, -1);
			iVar1 = func_263(2547, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1574682, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1574682, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1574682, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1574682, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1574682, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1574682, 5);
			}
		}
		func_687();
		func_831();
		func_830();
		if ((!func_234(PLAYER::PLAYER_ID()) && !func_232(PLAYER::PLAYER_ID())) && !func_829())
		{
			func_808();
		}
		func_807();
		if (!MISC::IS_BIT_SET(Global_1676120.f_3, 0) && !MISC::IS_BIT_SET(Global_1676120.f_3, 1))
		{
			func_454();
		}
		func_806();
		MISC::CLEAR_BIT(&(Global_2540612.f_1807), 2);
		func_547();
		func_805();
	}
	if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
	{
		HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((PLAYER::PLAYER_ID() != -1 && !func_206(PLAYER::PLAYER_ID(), 21)) && !func_206(PLAYER::PLAYER_ID(), 25)) && !func_241(PLAYER::PLAYER_ID(), 0))
		{
			func_452(0);
			func_450(0);
			if (!bParam1)
			{
				func_804();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_624(26, -1))
		{
			Global_2464653 = -1;
			func_622(26, -1);
		}
	}
	if (!func_800())
	{
		Global_2515292 = 1;
	}
}

int func_800()
{
	if ((((((!func_390(PLAYER::PLAYER_ID()) && !func_371(PLAYER::PLAYER_ID())) && func_190(PLAYER::PLAYER_ID()) != 146) && !func_803()) && !func_802()) && !func_801(Global_4456448.f_129348)) && !func_584())
	{
		return 0;
	}
	return 1;
}

bool func_801(int iParam0)
{
	return iParam0 == 57;
}

int func_802()
{
	if (Global_4456448.f_82708 == Global_262145.f_9598)
	{
		return 1;
	}
	return 0;
}

int func_803()
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_129348 > 0) || MISC::IS_BIT_SET(Global_4456448.f_4, 15)) || MISC::IS_BIT_SET(Global_4456448.f_4, 18)) || MISC::IS_BIT_SET(Global_4456448.f_4, 19)) || MISC::IS_BIT_SET(Global_4456448.f_4, 29)) || MISC::IS_BIT_SET(Global_4456448.f_4, 28)) || MISC::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_804()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_805()
{
	Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_7 = 0;
}

void func_806()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574656 = { Var0 };
}

void func_807()
{
	var uVar0;
	
	Global_1319161 = uVar0;
}

void func_808()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_24), &Global_2409333, 2);
	MISC::_COPY_MEMORY(&(Global_2405074.f_26), &Global_2409335, 19);
	func_827();
	func_811(1, 1, 0);
	func_809();
}

void func_809()
{
	func_810(0, 0);
}

void func_810(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_811(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405074.f_45), &Global_2409354, 320);
	}
	else
	{
		Global_2405074.f_45 = { Global_2409354 };
		Global_2405074.f_45.f_49 = { Global_2409354.f_49 };
		Global_2405074.f_45.f_52 = Global_2409354.f_52;
		Global_2405074.f_45.f_53 = Global_2409354.f_53;
	}
	if (bParam0)
	{
		func_826();
	}
	if (!bParam2)
	{
		func_814(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_813(0);
	func_812();
}

void func_812()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_813(bool bParam0)
{
	if (bParam0)
	{
		Global_2405074.f_707 = 0;
	}
	else
	{
		Global_2405074.f_707 = 1;
	}
}

void func_814(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_825())
		{
			func_824();
		}
		Global_2405074.f_708.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_822();
		func_818(8, 0, 0, 0, 0);
		Global_2405074.f_708.f_507 = iParam11;
		Global_2405074.f_708.f_512 = iParam3;
		Global_2405074.f_708.f_513 = iParam4;
		Global_2405074.f_708.f_510 = iParam5;
		Global_2405074.f_708.f_511 = iParam6;
		Global_2405074.f_708.f_514 = iParam7;
		Global_2405074.f_708.f_515 = iParam8;
		Global_2405074.f_708.f_516 = iParam9;
		Global_2405074.f_708.f_517 = iParam14;
		Global_2405074.f_708.f_508 = iParam12;
		Global_2405074.f_708.f_509 = iParam13;
		Global_2405074.f_1747 = 1;
	}
	else
	{
		func_815();
	}
}

void func_815()
{
	if (func_825() && !func_817())
	{
		func_824();
	}
	if (func_817())
	{
		func_816();
	}
	else
	{
		func_822();
		func_818(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_816()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_817()
{
	if ((Global_2405074.f_1746 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_1227.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_818(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440277.f_2005.f_703.f_16 != func_5())
	{
		if (MISC::IS_BIT_SET(Global_2426097[Global_2440277.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_819())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412648 = 0;
	}
	Global_2405074.f_487 = iParam0;
	Global_2405074.f_487.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405074.f_487.f_2 = iParam1;
	Global_2405074.f_487.f_3 = iParam2;
	Global_2405074.f_487.f_4 = iParam3;
	Global_2405074.f_487.f_5 = iParam4;
}

int func_819()
{
	if ((((((func_341(PLAYER::PLAYER_ID()) == 229 || func_341(PLAYER::PLAYER_ID()) == 191) || func_821()) || func_829()) || func_213(PLAYER::PLAYER_ID())) || Global_2516075.f_227 == 1) || (Global_2405074.f_1747 && func_820(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_820(int iParam0)
{
	if (func_212(iParam0))
	{
		return 1;
	}
	if (func_247(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_821()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_822()
{
	if (func_825() && !func_817())
	{
		func_824();
	}
	func_823();
	Global_2405074.f_708 = 0;
}

void func_823()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405074.f_708.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_824()
{
	if (func_817())
	{
		if (Global_2405074.f_708.f_518 == Global_2405074.f_1227.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405074.f_1227), &(Global_2405074.f_708), 519);
		Global_2405074.f_493 = { Global_2405074.f_487 };
		Global_2405074.f_1746 = 1;
	}
}

int func_825()
{
	if ((Global_2405074.f_1747 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_826()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_827()
{
	func_828();
}

void func_828()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405074.f_2257[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_2256 = 0;
}

bool func_829()
{
	return Global_1574411;
}

void func_830()
{
	Global_2540612.f_5026 = 0;
}

void func_831()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1 = 0;
	}
}

void func_832(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_263(iParam0, func_244(iParam1), 0);
	iVar0++;
	if (!func_492(iParam0))
	{
		func_485(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_486(iParam0, iVar0, iParam1, 1);
	}
}

int func_833(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

int func_834(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_235(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_835()
{
	if (MISC::IS_BIT_SET(Global_2540612.f_1795, 3) || MISC::IS_BIT_SET(Global_2540612.f_1795, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_1795, 5))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_1795), 5);
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_1795, 3))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_1795), 3);
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_1795, 4))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_1795), 4);
	}
	func_838(0);
	func_837(0);
	func_836(0);
}

void func_836(int iParam0)
{
	if (Global_2540612.f_4583 != iParam0)
	{
		Global_2540612.f_4583 = iParam0;
	}
}

void func_837(bool bParam0)
{
	if (Global_2540612.f_4582 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2540612.f_4582 = bParam0;
	}
}

void func_838(int iParam0)
{
	if (Global_2540612.f_4580 != iParam0)
	{
		Global_2540612.f_4580 = iParam0;
	}
}

void func_839(struct<21> Param0)
{
	int iVar0;
	
	func_848(func_849(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
	func_847(0, -1, 0);
	func_845(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_82, 617);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_716, 577);
	func_844(1);
	if (!func_843())
	{
		func_793();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_82.f_17[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_82.f_22[iVar0] = func_5();
				Local_82.f_256[iVar0] = -1;
				Local_82.f_110[iVar0] = -1;
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_82.f_611), &(Local_82.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_1295[iVar0] = -1;
			iVar0++;
		}
		Local_699.f_2 = NETWORK::NETWORK_GET_TOTAL_NUM_PLAYERS();
		Local_699.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_681(19, 1);
		func_840();
		if (func_203())
		{
			MISC::SET_BIT(&(Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
		}
		Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
		Global_2540612.f_5112 = -1;
		Local_716[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 0;
	}
	else
	{
		func_793();
	}
}

void func_840()
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_1503);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_1504);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574973[iVar0], iLocal_1503);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1503, Global_1574973[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574973[iVar0], iLocal_1504);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1504, Global_1574973[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1503, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1503);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1503, Global_1575021[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575021[5], iLocal_1503);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1503, Global_1575006);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1575006, iLocal_1503);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1503, iLocal_1504);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1504, iLocal_1503);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, iLocal_1504);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_1503);
	func_842(1, &iLocal_1504);
	func_841(&iLocal_1504);
	func_841(&iLocal_1503);
}

void func_841(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_842(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, joaat("COP"), *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -183807561);
}

int func_843()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_788())
		{
			return 0;
		}
		if (func_786(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_844(bool bParam0)
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_444())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2416085.f_1317) || Global_2416085.f_1317 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2416085.f_1317 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_2416085.f_1317 = -1;
		}
	}
}

void func_845(int iParam0)
{
	func_806();
	func_846();
	func_830();
	Global_1574656.f_4 = iParam0;
	Global_1574656.f_5 = iParam0;
	func_680(iParam0, -1);
	func_8(&(Global_1574656.f_18), 0, 0);
	Global_2540612.f_4652 = 0;
	Global_2463546[0] = func_5();
	Global_2463546[1] = func_5();
	Global_2463546[2] = func_5();
	Global_2463546[3] = func_5();
	Global_2463546[4] = func_5();
	func_805();
	if (!func_228(func_229()))
	{
		func_357();
	}
	if (func_245() && !func_240())
	{
		MISC::SET_BIT(&(Global_1574656.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1574656.f_1), 17);
	}
}

void func_846()
{
	var uVar0;
	
	Global_1574681 = uVar0;
}

int func_847(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_794();
			}
			else
			{
				return 0;
			}
		}
		if (!func_168())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_794();
					}
					else
					{
						return 0;
					}
				}
				if (func_788())
				{
					if (!bParam2)
					{
						func_794();
					}
					else
					{
						return 0;
					}
				}
				if (func_786(157))
				{
					if (!bParam2)
					{
						func_794();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_794();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_794();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_794();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_848(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_794();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

int func_850(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440277.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

