目录下的 `00000000: 4865 6c6c 6f20 576f 726c 640a` 和 `SGVsbG8gV29ybGQK` 均为 bash 脚本，前者需要系统安装支持 `-r` 参数的 xxd，后者仅需 base64 支持。

运行方式：

```bash
bash '00000000: 4865 6c6c 6f20 576f 726c 640a'
bash 'SGVsbG8gV29ybGQK'
```
