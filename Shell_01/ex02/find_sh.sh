find -type f -name "*.sh" | xargs -I{} basename {}| awk -F. '{print $1}'
